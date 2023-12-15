/**
 * @file gcmissionsequencewaitforwondervalue.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-13
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
#include <wiki/gcwondertype.meta.h>
#include <wiki/gcwonderplanetcategory.meta.h>
#include <wiki/gcwondercreaturecategory.meta.h>
#include <wiki/gcwonderfloracategory.meta.h>
#include <wiki/gcwondermineralcategory.meta.h>
#include <toolkit/tkequalityenum.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcMissionSequenceWaitForWonderValue
 */
class cGcMissionSequenceWaitForWonderValue
{
  public:
    enum
    {
        ClassNameHash = 0xCD3C7F9BB940D9EF,
    };

    union
    {
        struct
        {
            cTkFixedString<128,char> macMessage;
            cGcWonderType WonderTypeToUse;
            cGcWonderPlanetCategory PlanetWonderType;
            cGcWonderCreatureCategory CreatureWonderType;
            cGcWonderFloraCategory FloraWonderType;
            cGcWonderMineralCategory MineralWonderType;
            float mfValue;
            int miDecimals;
            bool mbTakeAmountFromSeasonalData;
            cTkEqualityEnum Test;
            cTkFixedString<128,char> macDebugText;
        };
    };
};

SKYSCRAPER_END