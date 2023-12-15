/**
 * @file gcmissionconditionshipenginestatus.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-15
 * @version v101236
 * @brief This file is autogenerated metadata created by Heridium for ReNMS. You shouldn't need to modify this, see https://github.com/VITALISED/renms.
 *
 * Copyright (C) 2023  VITALISED & Contributors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <toolkit/data/TkMetaDataClasses.h>

SKYSCRAPER_BEGIN

/**
 * @enum eEngineStatus
 */
enum eEngineStatus : uint32_t
{
    EEngineStatus_Thrusting = 0,
    EEngineStatus_Braking = 1,
    EEngineStatus_Landing = 2,
    EEngineStatus_Landed = 3,
    EEngineStatus_Boosting = 4,
    EEngineStatus_Pulsing = 5,
    EEngineStatus_LowFlight = 6,
    EEngineStatus_Inverted = 7,
};

/**
 * @class cGcMissionConditionShipEngineStatus
 */
class cGcMissionConditionShipEngineStatus
{
  public:
    enum
    {
        ClassNameHash = 0x9A43A9B870251F8C,
    };

    union
    {
        struct
        {
            eEngineStatus EngineStatus;
        };
    };
};

SKYSCRAPER_END
