/**
 * @file gcuniqueiddata.meta.h
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
 * @enum eUniqueIdType
 */
enum eUniqueIdType : uint32_t
{
    EUniqueIdType_Invalid = 0,
    EUniqueIdType_Deterministic = 1,
    EUniqueIdType_UserSpawned = 2,
};

/**
 * @class cGcUniqueIdData
 */
class cGcUniqueIdData
{
  public:
    enum
    {
        ClassNameHash = 0xCA58D35FFFB37091,
    };

    union
    {
        struct
        {
            eUniqueIdType UniqueIdType;
            unsigned long long mui64DeterministicSeed;
            unsigned int muiIteration;
            cTkFixedString<64,char> macOnlineID;
            cTkFixedString<32,char> macPlatformID;
        };
    };
};

SKYSCRAPER_END
