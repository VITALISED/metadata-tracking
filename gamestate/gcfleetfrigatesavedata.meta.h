/**
 * @file gcfleetfrigatesavedata.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-06
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
#include <reality/gcfrigateclass.meta.h>
#include <reality/gcalienrace.meta.h>
#include <reality/gcinventoryclass.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcFleetFrigateSaveData
 */
class cGcFleetFrigateSaveData : cTkMetaData::Registrar<cGcFleetFrigateSaveData>, cTkMetaDataXML::Registrar<cGcFleetFrigateSaveData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xE6F863FE26F77270,
    };
    enum
    {
        mu64TemplateHash = 0x1C0EB21E6164191A,
    };

    cTkSeed mResourceSeed;
    cTkSeed mHomeSystemSeed;
    cTkSeed mForcedTraitsSeed;
    unsigned long long mui64TimeOfLastIncomeCollection;
    cTkFixedString<256,char> macCustomName;
    cGcFrigateClass FrigateClass;
    cGcAlienRace Race;
    cGcInventoryClass InventoryClass;
    int miTotalNumberOfExpeditions;
    int miTotalNumberOfSuccessfulEvents;
    int miTotalNumberOfFailedEvents;
    int miNumberOfTimesDamaged;
    cTkDynamicArray<TkID<128>> maTraitIDs;
    cTkDynamicArray<int> maStats;
    int miRepairsMade;
    int miDamageTaken;
};

SKYSCRAPER_END