/**
 * @file gchudcomponent.meta.h
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
 * @enum eAlign
 */
enum eAlign : uint32_t
{
    EAlign_Center = 0,
    EAlign_TopLeft = 1,
    EAlign_TopRight = 2,
    EAlign_BottomLeft = 3,
    EAlign_BottomRight = 4,
};

/**
 * @class cGcHUDComponent
 */
class cGcHUDComponent
{
  public:
    enum
    {
        ClassNameHash = 0x9658E308A74D3E3C,
    };

    union
    {
        struct
        {
            TkID<128> mID;
            int miPosX;
            int miPosY;
            int miWidth;
            int miHeight;
            eAlign Align;
        };
    };
};

SKYSCRAPER_END
