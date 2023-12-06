/**
 * @file gcphotomodesettings.meta.h
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
 * @enum eDepthOfFieldSetting
 */
enum eDepthOfFieldSetting : uint32_t
{
    EDepthOfFieldSetting_Off = 0,
    EDepthOfFieldSetting_Mid = 1,
    EDepthOfFieldSetting_On = 2,
    EDepthOfFieldSetting_Macro = 3,
};

/**
 * @class cGcPhotoModeSettings
 */
class cGcPhotoModeSettings : cTkMetaData::Registrar<cGcPhotoModeSettings>, cTkMetaDataXML::Registrar<cGcPhotoModeSettings>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xE5075EC0403F94CA,
    };
    enum
    {
        mu64TemplateHash = 0xA6116160B4E36AE2,
    };

    float mfFog;
    float mfCloudAmount;
    cTkVector4 mSunDir;
    float mfFoV;
    eDepthOfFieldSetting DepthOfFieldSetting;
    float mfDepthOfFieldDistance;
    float mfDepthOfFieldDistanceSpace;
    float mfHalfFocalPlaneDepth;
    float mfHalfFocalPlaneDepthSpace;
    float mfDepthOfFieldPhysConvergence;
    float mfDepthOfFieldPhysAperture;
    float mfVignette;
    int miFilter;
    float mfBloom;
};

SKYSCRAPER_END