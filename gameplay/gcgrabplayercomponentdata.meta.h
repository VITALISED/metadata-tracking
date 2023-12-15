/**
 * @file gcgrabplayercomponentdata.meta.h
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
#include <audio/gcaudiowwiseevents.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcGrabPlayerComponentData
 */
class cGcGrabPlayerComponentData
{
  public:
    enum
    {
        ClassNameHash = 0xDE6FCE33E294F619,
    };

    union
    {
        struct
        {
            cTkFixedString<256,char> macLookJoint;
            cTkFixedString<256,char> macGrabJoint;
            TkID<128> mDefendAnim;
            TkID<128> mIdleAnim;
            TkID<128> mGrabAnim;
            TkID<128> mHoldAnim;
            TkID<128> mHitReactAnim;
            TkID<128> mPlayerGrabbedAnim;
            TkID<128> mDamageType;
            float mfDamageTime;
            float mfTriggerRange;
            cGcAudioWwiseEvents GrabBeginAudioEvent;
            cGcAudioWwiseEvents GrabEndAudioEvent;
            float mfLungeRadius;
            float mfGrabRadius;
            float mfGrabAttachStrength;
            float mfGrabBlendTime;
            float mfEjectImpulse;
            cTkVector3 mGrabOffset;
            float mfHoldTime;
            float mfCooldownTime;
            float mfRestTime;
            float mfMaxLookAngle;
            float mfBodgeInputAngle;
            float mfBodgeOutputAngle;
            float mfHitReactAnimChance;
            cTkVector2 mHitReactAngles;
            float mfActivateRange;
            float mfFocusRange;
            float mfTrackTime;
            cTkVector2 mLookAroundTrackTime;
            float mfLookAroundFineModifier;
            cTkVector2 mLookAtPlayerTime;
            float mfLookAtPlayerChance;
            cTkVector2 mLookAroundTime;
            cTkVector2 mLookAroundAngles;
            cTkVector2 mLookAroundAnglesFine;
            float mfSleepChance;
            cTkVector2 mSleepTime;
        };
    };
};

SKYSCRAPER_END
