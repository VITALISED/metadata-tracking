/**
 * @file tklsystemlocatorentry.meta.h
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
#include <toolkit/utilities/data/tklsystemrestrictiondata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cTkLSystemLocatorEntry
 */
class cTkLSystemLocatorEntry
{
  public:
    enum
    {
        ClassNameHash = 0x5FB32B8921A7FE69,
    };

    union
    {
        struct
        {
            cTkFixedString<128,char> macModel;
            float mfProbability;
            cTkDynamicArray<cTkLSystemRestrictionData> maRestrictions;
        };
    };
};

SKYSCRAPER_END
