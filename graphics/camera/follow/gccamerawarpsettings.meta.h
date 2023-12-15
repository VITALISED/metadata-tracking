/**
 * @file gccamerawarpsettings.meta.h
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
#include <toolkit/animation/tkcurvetype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcCameraWarpSettings
 */
class cGcCameraWarpSettings
{
  public:
    enum
    {
        ClassNameHash = 0x72EE2F7B202E1811,
    };

    union
    {
        struct
        {
            float mfFocusPointDist;
            float mfOffsetZFrequency_1;
            float mfOffsetZFrequency_2;
            float mfOffsetZPhase_1;
            float mfOffsetZPhase_2;
            float mfOffsetZStartBias;
            float mfOffsetZBias;
            float mfOffsetZRange;
            float mfOffsetYFrequency_1;
            float mfOffsetYFrequency_2;
            float mfOffsetYPhase_1;
            float mfOffsetYPhase_2;
            float mfOffsetYStartBias;
            float mfOffsetYBias;
            float mfOffsetYRange;
            float mfOffsetXFrequency;
            float mfOffsetXPhase;
            float mfOffsetXRange;
            cTkCurveType OffsetXCurve;
            float mfRollRange;
            float mfYawnRange;
        };
    };
};

SKYSCRAPER_END
