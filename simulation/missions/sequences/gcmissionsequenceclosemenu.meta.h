/**
 * @file gcmissionsequenceclosemenu.meta.h
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
 * @enum eMenuToClose
 */
enum eMenuToClose : uint32_t
{
    EMenuToClose_QuickMenu = 0,
    EMenuToClose_BuildMenu = 1,
    EMenuToClose_Inventory = 2,
    EMenuToClose_AllDetailMessages = 3,
};

/**
 * @class cGcMissionSequenceCloseMenu
 */
class cGcMissionSequenceCloseMenu
{
  public:
    enum
    {
        ClassNameHash = 0xE62B86A237CB0756,
    };

    union
    {
        struct
        {
            float mfDelay;
            eMenuToClose MenuToClose;
            cTkFixedString<128,char> macDebugText;
        };
    };
};

SKYSCRAPER_END
