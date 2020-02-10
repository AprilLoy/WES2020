/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ExtendClimber.h"
#include "subsystems/Climber.h"

ExtendClimber::ExtendClimber(Climber* subsystem) : climb{subsystem} {
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements({subsystem});
}

// Called repeatedly when this Command is scheduled to run
void ExtendClimber::Initialize() {climb->ExtendClimber();}

void ExtendClimber::End(bool interrupted) {climb->StopClimber();}