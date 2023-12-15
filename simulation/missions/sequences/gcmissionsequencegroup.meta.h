/**
 * @file gcmissionsequencegroup.meta.h
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
#include <toolkit/tktextureresource.meta.h>
#include <simulation/missions/types/gcmissionpagehint.meta.h>
#include <simulation/missions/types/gcmissioncategory.meta.h>
#include <simulation/missions/types/gcmissionconditiontest.meta.h>
#include <toolkit/utilities/data/tkinputenum.meta.h>
#include <simulation/missions/gcobjectivetextformatoptions.meta.h>
#include <simulation/missions/gctargetmissionsurveyoptions.meta.h>
#include <simulation/missions/gccustomnotifytimeroptions.meta.h>
#include <simulation/missions/gcgenericmissionstage.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eRepeatLogic
 */
enum eRepeatLogic : uint32_t
{
    ERepeatLogic_None = 0,
    ERepeatLogic_Loop = 1,
    ERepeatLogic_RestartOnConditionFail = 2,
};

/**
 * @enum eIconStyle
 */
enum eIconStyle : uint32_t
{
    EIconStyle_Default = 0,
    EIconStyle_Large = 1,
    EIconStyle_Square = 2,
    EIconStyle_NoFrame = 3,
};

/**
 * @class cGcMissionSequenceGroup
 */
class cGcMissionSequenceGroup
{
  public:
    enum
    {
        ClassNameHash = 0x51B3554FFBEBED66,
    };

    union
    {
        struct
        {
            bool mbSilent;
            cTkTextureResource Icon;
            cGcMissionPageHint PageHint;
            TkID<256> mPageDataLocID;
            TkID<128> mBuildMenuHint;
            TkID<128> mInventoryHint;
            cTkFixedString<128,char> macDebugText;
            TkID<256> mObjectiveID;
            TkID<256> mObjectiveTipID;
            bool mbHasCategoryOverride;
            cGcMissionCategory OverrideCategory;
            bool mbHasColourOverride;
            cTkColour mColourOverride;
            bool mbPrefixTitle;
            TkID<256> mPrefixTitleText;
            bool mbBlockPinning;
            cGcMissionConditionTest ConditionTest;
            bool mbHideFromLogIfConditionsMet;
            eRepeatLogic RepeatLogic;
            eIconStyle IconStyle;
            cTkInputEnum SpecialButtonIcon;
            cGcObjectiveTextFormatOptions ObjectiveFormatting;
            cGcTargetMissionSurveyOptions SurveyTarget;
            cGcCustomNotifyTimerOptions CustomNotifyTimers;
            cTkDynamicArray<cTkClassPointer> maConditions;
            cTkDynamicArray<cTkClassPointer> maConsequences;
            cTkDynamicArray<cGcGenericMissionStage> maStages;
        };
    };
};

SKYSCRAPER_END
