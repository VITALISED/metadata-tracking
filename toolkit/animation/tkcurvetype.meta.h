/**
 * @file tkcurvetype.meta.h
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
 * @enum eCurve
 */
enum eCurve : uint8_t
{
    ECurve_Linear = 0,
    ECurve_SmoothInOut = 1,
    ECurve_FastInSlowOut = 2,
    ECurve_BellSquared = 3,
    ECurve_Squared = 4,
    ECurve_Cubed = 5,
    ECurve_Logarithmic = 6,
    ECurve_SlowIn = 7,
    ECurve_SlowOut = 8,
    ECurve_ReallySlowOut = 9,
    ECurve_SmootherStep = 10,
    ECurve_SmoothFastInSlowOut = 11,
    ECurve_SmoothSlowInFastOut = 12,
    ECurve_EaseInSine = 13,
    ECurve_EaseOutSine = 14,
    ECurve_EaseInOutSine = 15,
    ECurve_EaseInQuad = 16,
    ECurve_EaseOutQuad = 17,
    ECurve_EaseInOutQuad = 18,
    ECurve_EaseInQuart = 19,
    ECurve_EaseOutQuart = 20,
    ECurve_EaseInOutQuart = 21,
    ECurve_EaseInQuint = 22,
    ECurve_EaseOutQuint = 23,
    ECurve_EaseInOutQuint = 24,
    ECurve_EaseInExpo = 25,
    ECurve_EaseOutExpo = 26,
    ECurve_EaseInOutExpo = 27,
    ECurve_EaseInCirc = 28,
    ECurve_EaseOutCirc = 29,
    ECurve_EaseInOutCirc = 30,
    ECurve_EaseInBack = 31,
    ECurve_EaseOutBack = 32,
    ECurve_EaseInOutBack = 33,
    ECurve_EaseInElastic = 34,
    ECurve_EaseOutElastic = 35,
    ECurve_EaseInOutElastic = 36,
    ECurve_EaseInBounce = 37,
    ECurve_EaseOutBounce = 38,
    ECurve_EaseInOutBounce = 39,
};

/**
 * @class cTkCurveType
 */
class cTkCurveType : cTkMetaData::Registrar<cTkCurveType>, cTkMetaDataXML::Registrar<cTkCurveType>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x48849654049904EA,
    };
    enum
    {
        mu64TemplateHash = 0xA0AA35E82CAB5940,
    };

    eCurve Curve;
};

SKYSCRAPER_END