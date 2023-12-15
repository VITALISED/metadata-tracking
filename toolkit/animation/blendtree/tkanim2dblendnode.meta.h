/**
 * @file tkanim2dblendnode.meta.h
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
#include <toolkit/animation/tkcurvetype.meta.h>
#include <toolkit/animation/blendtree/tkanim2dblendnodedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eCoordinates
 */
enum eCoordinates : uint32_t
{
    ECoordinates_Polar = 0,
    ECoordinates_Cartesian = 1,
};

/**
 * @enum eBlendOp
 */
enum eBlendOp : uint32_t
{
    EBlendOp_Blend = 0,
    EBlendOp_Add = 1,
};

/**
 * @class cTkAnim2dBlendNode
 */
class cTkAnim2dBlendNode
{
  public:
    enum
    {
        ClassNameHash = 0xB08E12209E446AC4,
    };

    union
    {
        struct
        {
            TkID<128> mNodeId;
            cTkFixedString<64,char> macPositionIn;
            float mfPositionRangeBegin;
            float mfPositionRangeEnd;
            float mfPositionSpringTime;
            cTkCurveType PositionCurve;
            eCoordinates Coordinates;
            eBlendOp BlendOp;
            cTkDynamicArray<cTkAnim2dBlendNodeData> maBlendChildren;
        };
    };
};

SKYSCRAPER_END
