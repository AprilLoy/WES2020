/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/AlignToPlayerStationPID.h"

// NOTE:  Consider using this command inline, rather than writing a subclass.
// For more information, see:
// https://docs.wpilib.org/en/latest/docs/software/commandbased/convenience-features.html
AlignToPlayerStationPID::AlignToPlayerStationPID(Vision *vision, Drivetrain *drive)
    : CommandHelper(frc2::PIDController(ConVision::P, ConVision::I, ConVision::D),
                    // This should return the measurement
                    [vision] { return vision->Align(); },
                    // This should return the setpoint (can also be a constant)
                    [] {return 0.0; },
                    // This uses the output
                    [drive](double output) {
                      // Use the output here
                      drive->TankDrive(-output, output);
                    },
                    {drive,vision}
                    ) {}
                    

// Returns true when the command should end.
bool AlignToPlayerStationPID::IsFinished() { return GetController().AtSetpoint(); }
