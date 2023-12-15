/**
 * @file gcconstraintstocreatespec.meta.h
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
 * @class cGcConstraintsToCreateSpec
 */
class cGcConstraintsToCreateSpec
{
  public:
    enum
    {
        ClassNameHash = 0x6C0B3270B9591BB1,
    };

    union
    {
        struct
        {
            bool mbHorizontal_1x0;
            float mfPushingStrength_Horizontal_1x0;
            bool mbVertical_1x0;
            float mfPushingStrength_Vertical_1x0;
            bool mbDiagonal_1x1_0011;
            float mfPushingStrength_Diagonal_1x1_0011;
            bool mbDiagonal_1x1_0110;
            float mfPushingStrength_Diagonal_1x1_0110;
            bool mbHorizontal_2x0;
            float mfPushingStrength_Horizontal_2x0;
            bool mbVertical_2x0;
            float mfPushingStrength_Vertical_2x0;
            bool mbSkewedDiagonal_2x1_0021;
            float mfPushingStrength_SkewedDiagonal_2x1_0021;
            bool mbSkewedDiagonal_2x1_2001;
            float mfPushingStrength_SkewedDiagonal_2x1_2001;
            bool mbSkewedDiagonal_2x1_1002;
            float mfPushingStrength_SkewedDiagonal_2x1_1002;
            bool mbSkewedDiagonal_2x1_0012;
            float mfPushingStrength_SkewedDiagonal_2x1_0012;
        };
    };
};

SKYSCRAPER_END
