/**
 * @file gcsolarsystemdata.meta.h
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
#include <simulation/solarsystem/planet/gcsolarsystemclass.meta.h>
#include <simulation/galaxy/gcgalaxystartypes.meta.h>
#include <simulation/solarsystem/planet/gcplanetgenerationinputdata.meta.h>
#include <simulation/solarsystem/gcspacestationspawndata.meta.h>
#include <simulation/solarsystem/gcsolarsystemtraderspawndata.meta.h>
#include <simulation/solarsystem/gcsolarsystemlocator.meta.h>
#include <simulation/solarsystem/planet/gcplanetcolourdata.meta.h>
#include <simulation/environment/gclightproperties.meta.h>
#include <simulation/environment/gcspaceskyproperties.meta.h>
#include <graphics/gcscreenfilters.meta.h>
#include <simulation/spaceship/ai/gcaispaceshippreloadcachedata.meta.h>
#include <reality/gcalienrace.meta.h>
#include <simulation/solarsystem/planet/gcplanettradingdata.meta.h>
#include <simulation/solarsystem/planet/gcplayerconflictdata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eAsteroidLevel
 */
enum eAsteroidLevel : uint32_t
{
    EAsteroidLevel_NoRares = 0,
    EAsteroidLevel_SomeRares = 1,
    EAsteroidLevel_LotsOfRares = 2,
};

/**
 * @class cGcSolarSystemData
 */
class cGcSolarSystemData : cTkMetaData::Registrar<cGcSolarSystemData>, cTkMetaDataXML::Registrar<cGcSolarSystemData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x9B09276BB2795541,
    };
    enum
    {
        mu64TemplateHash = 0xA2E4A21CCF757F1A,
    };

    cTkSeed mSeed;
    cTkFixedString<128,char> macName;
    cGcSolarSystemClass Class;
    cGcGalaxyStarTypes StarType;
    int miPlanets;
    cTkFixedArray<cTkVector3, 8> maPlanetPositions;
    cTkFixedArray<cGcPlanetGenerationInputData, 8> maPlanetGenerationInputs;
    cTkFixedArray<int, 8> maPlanetOrbits;
    int miPrimePlanets;
    cTkVector3 mSunPosition;
    TkID<128> mAsteroidSubstanceID;
    int miNumTradeRoutes;
    int miNumVisibleTradeRoutes;
    int miMaxNumFreighters;
    bool mbStartWithFreighters;
    cTkVector2 mFreighterTimer;
    cTkVector2 mSpacePirateTimer;
    cTkVector2 mPlanetPirateTimer;
    cTkVector2 mFlybyTimer;
    cTkVector2 mPoliceTimer;
    cGcSpaceStationSpawnData SpaceStationSpawn;
    cGcSolarSystemTraderSpawnData TraderSpawnOnOutposts;
    cGcSolarSystemTraderSpawnData TraderSpawnInStations;
    cTkDynamicArray<cGcSolarSystemLocator> maLocators;
    cTkDynamicArray<cTkClassPointer> maAsteroidGenerators;
    eAsteroidLevel AsteroidLevel;
    cGcPlanetColourData Colours;
    cGcLightProperties Light;
    cGcSpaceSkyProperties Sky;
    cGcScreenFilters ScreenFilter;
    cTkFixedString<128,char> macHeavyAir;
    cTkDynamicArray<cGcAISpaceshipPreloadCacheData> maSystemShips;
    cGcAlienRace InhabitingRace;
    cGcPlanetTradingData TradingData;
    cGcPlayerConflictData ConflictData;
};

SKYSCRAPER_END