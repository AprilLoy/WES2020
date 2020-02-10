/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/PIDCommand.h>
#include "subsystems/Vision.h"
#include "subsystems/Drivetrain.h"

class AlignToPlayerStationPID
    : public frc2::CommandHelper<frc2::PIDCommand, AlignToPlayerStationPID> {
 public:
  explicit AlignToPlayerStationPID(Vision *vision, Drivetrain *drive);

  bool IsFinished() override;

  private:
    Vision *m_vision;
    Drivetrain *m_drive;
};
