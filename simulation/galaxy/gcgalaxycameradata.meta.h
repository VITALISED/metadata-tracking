/**
 * @file gcgalaxycameradata.meta.h
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
 * @class cGcGalaxyCameraData
 */
class cGcGalaxyCameraData
{
  public:
    enum
    {
        ClassNameHash = 0x76DA44862CDF100D,
    };

    union
    {
        struct
        {
            float mfCameraFOV;
            float mfMovementBlendRateFree;
            float mfMovementBlendRateLocked;
            float mfMovementBlendRateLookLocked;
            float mfLockTransitionRate;
            float mfLockedSpinSpeed;
            float mfLockedScaledPushSpeed;
            float mfLockedScaledElevationSpeed;
            float mfFreePanSpeed;
            float mfFreePanSpeedTurbo;
            float mfFreeUpDownSpeed;
            float mfFreeUpDownSpeedTurbo;
            float mfFreeRotateSpeed;
            float mfFreeElevationBlendRate;
            float mfZoomOutSpin;
            float mfZoomOutElevation;
            float mfZoomOutPushDist;
            float mfZoomOutRate;
            float mfZoomInRate;
            float mfMinZoomDistance;
            float mfMaxZoomDistance;
            float mfMinPushingZoomDistance;
            float mfMinPushingZoomDistanceScaler;
            float mfCameraShakeDriftClip;
            float mfCameraShakeDriftShift;
            float mfCameraShakeSmoothingRate;
            float mfCameraShakeMaximum;
        };
    };
};

SKYSCRAPER_END
