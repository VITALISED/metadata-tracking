/**
 * @file tknguigraphicstyle.meta.h
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
#include <toolkit/ngui/tknguigraphicstyledata.meta.h>
#include <toolkit/animation/tkcurvetype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eAnimate
 */
enum eAnimate : uint8_t
{
    EAnimate_None = 0,
    EAnimate_WipeRightToLeft = 1,
    EAnimate_SimpleWipe = 2,
    EAnimate_SimpleWipeDown = 3,
    EAnimate_CustomWipe = 4,
    EAnimate_CustomWipeAlpha = 5,
};

/**
 * @class cTkNGuiGraphicStyle
 */
class cTkNGuiGraphicStyle
{
  public:
    enum
    {
        ClassNameHash = 0xB70875CDF93EECEC,
    };

    union
    {
        struct
        {
            cTkNGuiGraphicStyleData Default;
            cTkNGuiGraphicStyleData Highlight;
            cTkNGuiGraphicStyleData Active;
            cTkVector2 mCustomMinStart;
            cTkVector2 mCustomMaxStart;
            float mfHighlightTime;
            float mfHighlightScale;
            float mfGlobalFade;
            float mfAnimTime;
            float mfAnimSplit;
            cTkCurveType AnimCurve1;
            cTkCurveType AnimCurve2;
            eAnimate Animate;
            bool mbInheritStyleFromParentLayer;
        };
    };
};

SKYSCRAPER_END
