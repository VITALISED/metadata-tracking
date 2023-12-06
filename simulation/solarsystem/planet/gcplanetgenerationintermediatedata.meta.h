/**
 * @file gcplanetgenerationintermediatedata.meta.h
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
#include <simulation/galaxy/gcgalaxystartypes.meta.h>
#include <simulation/solarsystem/planet/gcplanetclass.meta.h>
#include <simulation/solarsystem/planet/gcplanetsize.meta.h>
#include <simulation/ecosystem/gccreatureroledatatable.meta.h>
#include <simulation/solarsystem/planet/gcterraincontrols.meta.h>
#include <simulation/solarsystem/planet/gcbiometype.meta.h>
#include <simulation/solarsystem/planet/gcbiomesubtype.meta.h>
#include <simulation/environment/gcexternalobjectlistoptions.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcPlanetGenerationIntermediateData
 */
class cGcPlanetGenerationIntermediateData : cTkMetaData::Registrar<cGcPlanetGenerationIntermediateData>, cTkMetaDataXML::Registrar<cGcPlanetGenerationIntermediateData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x166980043AF05C9E,
    };
    enum
    {
        mu64TemplateHash = 0x115882CCFDCC17BA,
    };

    cTkSeed mSeed;
    int miTerrainSettingIndex;
    cGcGalaxyStarTypes StarType;
    cGcPlanetClass Class;
    cGcPlanetSize Size;
    cGcCreatureRoleDataTable CreatureRoles;
    cGcTerrainControls Terrain;
    cGcBiomeType Biome;
    cGcBiomeSubType BiomeSubType;
    cTkFixedString<128,char> macTerrainFile;
    cTkFixedString<128,char> macCreatureLandFile;
    cTkFixedString<128,char> macCreatureCaveFile;
    cTkFixedString<128,char> macCreatureWaterFile;
    cTkFixedString<128,char> macCreatureExtraWaterFile;
    cTkFixedString<128,char> macCreatureAirFile;
    cTkFixedString<128,char> macCreatureRobotFile;
    cTkDynamicArray<cGcExternalObjectListOptions> maExternalObjectLists;
    cTkDynamicArray<int> maExternalObjectListIndices;
    bool mbPrime;
};

SKYSCRAPER_END