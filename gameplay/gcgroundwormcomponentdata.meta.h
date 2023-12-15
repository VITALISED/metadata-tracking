/**
 * @file gcgroundwormcomponentdata.meta.h
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
 * @class cGcGroundWormComponentData
 */
class cGcGroundWormComponentData
{
  public:
    enum
    {
        ClassNameHash = 0x93C5F18EADCD6C3C,
    };

    union
    {
        struct
        {
            cTkFixedString<256,char> macLookJoint;
            cTkFixedString<256,char> macGrabJoint;
            TkID<128> mEmergeEffect;
            TkID<128> mSubmergeEffect;
            TkID<128> mEmergeShake;
            TkID<128> mRoarShake;
            float mfCollisionBodySize;
            float mfRumbleTime;
            float mfEmergeEffectTime;
            float mfEmergeDist;
            float mfSubmergeDist;
            float mfSubmergeDepth;
            float mfFlinchTime;
            float mfFlinchAngleMin;
            float mfFlinchAngleMax;
            float mfFlinchSmooth;
            TkID<128> mAttackDamageType;
            float mfAttackDamageRadius;
            float mfAttackAngle;
            float mfAttackDistMin;
            float mfAttackDistMax;
            float mfAttackCooldown;
            float mfRoarCooldown;
            float mfLungeStrength;
            float mfLungeAngleHead;
            float mfLungeAngleBase;
            float mfLungeBeginTime;
            float mfLungeEndTime;
            float mfLungeBlendInSpeed;
            float mfLungeBlendOutSpeed;
            float mfWindUpStrength;
            float mfWindUpAngleHead;
            float mfWindUpAngleBase;
            float mfRestTime;
            float mfTrackTime;
            float mfTurnSpeed;
            float mfEmergeLookBlendStart;
            float mfEmergeLookBlendEnd;
            float mfEmergeTime;
            float mfRearUpBeginDist;
            float mfRearUpEndDist;
        };
    };
};

SKYSCRAPER_END
