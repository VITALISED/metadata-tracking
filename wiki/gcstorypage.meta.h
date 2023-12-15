/**
 * @file gcstorypage.meta.h
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
#include <simulation/components/gameplay/gcinteractiontype.meta.h>
#include <toolkit/tktextureresource.meta.h>
#include <wiki/gcstoryentry.meta.h>
#include <wiki/gcwikitopictype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcStoryPage
 */
class cGcStoryPage
{
  public:
    enum
    {
        ClassNameHash = 0xDA4CC10DF6E92F8C,
    };

    union
    {
        struct
        {
            cGcInteractionType InteractionType;
            TkID<128> mStat;
            bool mbStatIsBitmask;
            cTkTextureResource Icon;
            TkID<256> mID;
            cTkDynamicArray<cGcStoryEntry> maEntries;
            bool mbUseGridType;
            cGcWikiTopicType WikiGridType;
        };
    };
};

SKYSCRAPER_END
