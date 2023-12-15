/**
 * @file gcbehaviourlegacydata.meta.h
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
 * @enum eLegacyBehaviour
 */
enum eLegacyBehaviour : uint32_t
{
    ELegacyBehaviour_Riding = 0,
    ELegacyBehaviour_Interaction = 1,
    ELegacyBehaviour_Attracted = 2,
    ELegacyBehaviour_Flee = 3,
    ELegacyBehaviour_Defend = 4,
    ELegacyBehaviour_FollowPlayer = 5,
    ELegacyBehaviour_AvoidPlayer = 6,
    ELegacyBehaviour_NoticePlayer = 7,
    ELegacyBehaviour_FollowRoutine = 8,
};

/**
 * @class cGcBehaviourLegacyData
 */
class cGcBehaviourLegacyData
{
  public:
    enum
    {
        ClassNameHash = 0xE727C698F36AF1CA,
    };

    union
    {
        struct
        {
            eLegacyBehaviour LegacyBehaviour;
        };
    };
};

SKYSCRAPER_END
