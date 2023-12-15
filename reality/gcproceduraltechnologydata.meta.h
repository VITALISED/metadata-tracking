/**
 * @file gcproceduraltechnologydata.meta.h
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
#include <reality/gcproceduraltechnologycategory.meta.h>
#include <reality/gcweightingcurve.meta.h>
#include <reality/gcproceduraltechnologystatlevel.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eQuality
 */
enum eQuality : uint32_t
{
    EQuality_Normal = 0,
    EQuality_Rare = 1,
    EQuality_Epic = 2,
    EQuality_Legendary = 3,
    EQuality_Illegal = 4,
    EQuality_Sentinel = 5,
};

/**
 * @class cGcProceduralTechnologyData
 */
class cGcProceduralTechnologyData
{
  public:
    enum
    {
        ClassNameHash = 0x6B8472FADE3C492C,
    };

    union
    {
        struct
        {
            TkID<128> mID;
            TkID<128> mTemplate;
            TkID<256> mGroup;
            cTkFixedString<128,char> macName;
            cTkFixedString<128,char> macNameLower;
            cTkFixedString<128,char> macSubtitle;
            cTkFixedString<128,char> macDescription;
            cTkColour mColour;
            eQuality Quality;
            cGcProceduralTechnologyCategory Category;
            int miNumStatsMin;
            int miNumStatsMax;
            cGcWeightingCurve WeightingCurve;
            cTkColour mUpgradeColour;
            cTkDynamicArray<cGcProceduralTechnologyStatLevel> maStatLevels;
        };
    };
};

SKYSCRAPER_END
