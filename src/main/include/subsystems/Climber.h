/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Climber : public frc2::SubsystemBase {
 public:
  Climber(); //

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

  void ExtendClimber();

  void RetractClimber();

  void StopClimber();

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonSRX climb_motor{ConClimber::CLIMB_MOTOR};
};
