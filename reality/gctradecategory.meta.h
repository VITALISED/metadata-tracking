/**
 * @file gctradecategory.meta.h
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
 * @enum eTradeCategory
 */
enum eTradeCategory : uint32_t
{
    ETradeCategory_Mineral = 0,
    ETradeCategory_Tech = 1,
    ETradeCategory_Commodity = 2,
    ETradeCategory_Component = 3,
    ETradeCategory_Alloy = 4,
    ETradeCategory_Exotic = 5,
    ETradeCategory_Energy = 6,
    ETradeCategory_None = 7,
    ETradeCategory_SpecialShop = 8,
};

/**
 * @class cGcTradeCategory
 */
class cGcTradeCategory
{
  public:
    enum
    {
        ClassNameHash = 0xABEDBCE191703616,
    };

    union
    {
        struct
        {
            eTradeCategory TradeCategory;
        };
    };
};

SKYSCRAPER_END
