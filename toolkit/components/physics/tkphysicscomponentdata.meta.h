/**
 * @file tkphysicscomponentdata.meta.h
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
#include <toolkit/physics/tkphysicsdata.meta.h>
#include <toolkit/components/physics/tkvolumetriggertype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eSurfaceProperties
 */
enum eSurfaceProperties : uint32_t
{
    ESurfaceProperties_None = 0,
    ESurfaceProperties_Glass = 1,
};

/**
 * @class cTkPhysicsComponentData
 */
class cTkPhysicsComponentData
{
  public:
    enum
    {
        ClassNameHash = 0xC58660803669C46F,
    };

    union
    {
        struct
        {
            cTkPhysicsData Data;
            cTkClassPointer mRagdollData;
            cTkVolumeTriggerType TriggerVolumeType;
            eSurfaceProperties SurfaceProperties;
            bool mbTriggerVolume;
            bool mbClimbable;
            bool mbFloor;
            bool mbIgnoreModelOwner;
            bool mbNoVehicleCollide;
            bool mbNoPlayerCollide;
            bool mbCameraInvisible;
            bool mbInvisibleForInteraction;
            bool mbAllowTeleporter;
            bool mbBlockTeleporter;
            bool mbDisableGravity;
            float mfSpinOnCreate;
            bool mbUseBasePartOptimisation;
            bool mbIsTransporter;
        };
    };
};

SKYSCRAPER_END
