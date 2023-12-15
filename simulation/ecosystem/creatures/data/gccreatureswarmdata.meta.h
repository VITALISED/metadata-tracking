/**
 * @file gccreatureswarmdata.meta.h
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
#include <simulation/ecosystem/creatures/data/gccreatureswarmdataparams.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eSwarmMovementType
 */
enum eSwarmMovementType : uint32_t
{
    ESwarmMovementType_None = 0,
    ESwarmMovementType_Circle = 1,
    ESwarmMovementType_Random = 2,
    ESwarmMovementType_Search = 3,
    ESwarmMovementType_FollowPlayer = 4,
    ESwarmMovementType_FollowPlayerLimited = 5,
};

/**
 * @class cGcCreatureSwarmData
 */
class cGcCreatureSwarmData
{
  public:
    enum
    {
        ClassNameHash = 0x87C83AD7D0C1D117,
    };

    union
    {
        struct
        {
            int miMinCount;
            int miMaxCount;
            float mfSwarmMovementSpeed;
            float mfSwarmMovementRadius;
            eSwarmMovementType SwarmMovementType;
            cTkDynamicArray<cGcCreatureSwarmDataParams> maParams;
        };
    };
};

SKYSCRAPER_END
