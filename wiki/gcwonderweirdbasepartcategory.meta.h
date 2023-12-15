/**
 * @file gcwonderweirdbasepartcategory.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eWonderWeirdBasePartCategory
 */
enum eWonderWeirdBasePartCategory : uint32_t
{
    EWonderWeirdBasePartCategory_EngineOrb = 0,
    EWonderWeirdBasePartCategory_BeamStone = 1,
    EWonderWeirdBasePartCategory_BubbleCluster = 2,
    EWonderWeirdBasePartCategory_MedGeometric = 3,
    EWonderWeirdBasePartCategory_Shard = 4,
    EWonderWeirdBasePartCategory_StarJoint = 5,
    EWonderWeirdBasePartCategory_BoneGarden = 6,
    EWonderWeirdBasePartCategory_ContourPod = 7,
    EWonderWeirdBasePartCategory_HydroPod = 8,
    EWonderWeirdBasePartCategory_ShellWhite = 9,
    EWonderWeirdBasePartCategory_WeirdCube = 10,
};

/**
 * @class cGcWonderWeirdBasePartCategory
 */
class cGcWonderWeirdBasePartCategory
{
  public:
    enum
    {
        ClassNameHash = 0xBF7B60D4CA07A9C0,
    };

    union
    {
        struct
        {
            eWonderWeirdBasePartCategory WonderWeirdBasePartCategory;
        };
    };
};

SKYSCRAPER_END
