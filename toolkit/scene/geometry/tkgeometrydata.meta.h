/**
 * @file tkgeometrydata.meta.h
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
#include <toolkit/scene/geometry/tkjointbindingdata.meta.h>
#include <toolkit/scene/geometry/tkjointextentdata.meta.h>
#include <toolkit/scene/geometry/tkjointmirroraxis.meta.h>
#include <toolkit/scene/geometry/tkvertexlayout.meta.h>
#include <toolkit/scene/geometry/tkmeshmetadata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cTkGeometryData
 */
class cTkGeometryData
{
  public:
    enum
    {
        ClassNameHash = 0xA74EA06001E7577E,
    };

    union
    {
        struct
        {
            int miVertexCount;
            int miIndexCount;
            int miIndices16Bit;
            int miCollisionIndexCount;
            cTkDynamicArray<cTkJointBindingData> maJointBindings;
            cTkDynamicArray<cTkJointExtentData> maJointExtents;
            cTkDynamicArray<int> maJointMirrorPairs;
            cTkDynamicArray<cTkJointMirrorAxis> maJointMirrorAxes;
            cTkDynamicArray<int> maSkinMatrixLayout;
            cTkDynamicArray<int> maMeshVertRStart;
            cTkDynamicArray<int> maMeshVertREnd;
            cTkDynamicArray<int> maBoundHullVertSt;
            cTkDynamicArray<int> maBoundHullVertEd;
            cTkDynamicArray<int> maMeshBaseSkinMat;
            cTkDynamicArray<cTkVector4> maMeshAABBMin;
            cTkDynamicArray<cTkVector4> maMeshAABBMax;
            cTkDynamicArray<cTkVector4> maBoundHullVerts;
            cTkVertexLayout VertexLayout;
            cTkVertexLayout SmallVertexLayout;
            cTkDynamicArray<int> maIndexBuffer;
            cTkDynamicArray<cTkMeshMetaData> maStreamMetaDataArray;
        };
    };
};

SKYSCRAPER_END
