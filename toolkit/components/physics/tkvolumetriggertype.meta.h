/**
 * @file tkvolumetriggertype.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eVolumeTriggerType
 */
enum eVolumeTriggerType : uint32_t
{
    EVolumeTriggerType_Open = 0,
    EVolumeTriggerType_GenericInterior = 1,
    EVolumeTriggerType_GenericGlassInterior = 2,
    EVolumeTriggerType_Corridor = 3,
    EVolumeTriggerType_SmallRoom = 4,
    EVolumeTriggerType_LargeRoom = 5,
    EVolumeTriggerType_OpenCovered = 6,
    EVolumeTriggerType_HazardProtection = 7,
    EVolumeTriggerType_FieldBoundary = 8,
    EVolumeTriggerType_Custom_Biodome = 9,
    EVolumeTriggerType_Portal = 10,
    EVolumeTriggerType_VehicleBoost = 11,
    EVolumeTriggerType_NexusPlaza = 12,
    EVolumeTriggerType_NexusCommunityHub = 13,
    EVolumeTriggerType_NexusHangar = 14,
    EVolumeTriggerType_RaceObstacle = 15,
    EVolumeTriggerType_HazardProtectionCold = 16,
    EVolumeTriggerType_SpaceStorm = 17,
};

/**
 * @class cTkVolumeTriggerType
 */
class cTkVolumeTriggerType : cTkMetaData::Registrar<cTkVolumeTriggerType>, cTkMetaDataXML::Registrar<cTkVolumeTriggerType>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xA4F2D5595864317D,
    };
    enum
    {
        mu64TemplateHash = 0x8AEBEF11092A0AA6,
    };

    eVolumeTriggerType VolumeTriggerType;
};

SKYSCRAPER_END