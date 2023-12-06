/**
 * @file gcplayercommunicatormessage.meta.h
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
#include <reality/gcalienrace.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eCommunicatorType
 */
enum eCommunicatorType : uint32_t
{
    ECommunicatorType_HoloExplorer = 0,
    ECommunicatorType_HoloSceptic = 1,
    ECommunicatorType_HoloNoone = 2,
    ECommunicatorType_Generic = 3,
    ECommunicatorType_PlayerFreighterCaptain = 4,
    ECommunicatorType_Polo = 5,
    ECommunicatorType_Nada = 6,
    ECommunicatorType_QuicksilverBot = 7,
    ECommunicatorType_PlayerSettlementResident = 8,
    ECommunicatorType_CargoScanDrone = 9,
    ECommunicatorType_Tethys = 10,
};

/**
 * @class cGcPlayerCommunicatorMessage
 */
class cGcPlayerCommunicatorMessage : cTkMetaData::Registrar<cGcPlayerCommunicatorMessage>, cTkMetaDataXML::Registrar<cGcPlayerCommunicatorMessage>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xF839343C27983F1A,
    };
    enum
    {
        mu64TemplateHash = 0x1974CA6D4B99B386,
    };

    TkID<256> mDialog;
    bool mbShowHologram;
    eCommunicatorType CommunicatorType;
    cGcAlienRace RaceOverride;
    TkID<256> mShipHUDOverride;
};

SKYSCRAPER_END