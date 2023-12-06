/**
 * @file gcikconstraint.meta.h
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
#include <simulation/ecosystem/creatures/behaviours/data/gccreatureiktype.meta.h>
#include <simulation/player/gcplayercharacterikoverridedata.meta.h>
#include <simulation/player/gcplayercharacterikstatedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcIKConstraint
 */
class cGcIKConstraint : cTkMetaData::Registrar<cGcIKConstraint>, cTkMetaDataXML::Registrar<cGcIKConstraint>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x9A9B4993026AA411,
    };
    enum
    {
        mu64TemplateHash = 0x6D52BE7161729552,
    };

    TkID<128> mId;
    cTkFixedString<256,char> macJointName;
    cGcCreatureIkType Type;
    cGcPlayerCharacterIKOverrideData DefaultState;
    cTkDynamicArray<cGcPlayerCharacterIKStateData> maStates;
};

SKYSCRAPER_END