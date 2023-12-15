/**
 * @file tklanguages.meta.h
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
 * @enum eLanguage
 */
enum eLanguage : uint32_t
{
    ELanguage_Default = 0,
    ELanguage_English = 1,
    ELanguage_USEnglish = 2,
    ELanguage_French = 3,
    ELanguage_Italian = 4,
    ELanguage_German = 5,
    ELanguage_Spanish = 6,
    ELanguage_Russian = 7,
    ELanguage_Polish = 8,
    ELanguage_Dutch = 9,
    ELanguage_Portuguese = 10,
    ELanguage_LatinAmericanSpanish = 11,
    ELanguage_BrazilianPortuguese = 12,
    ELanguage_Japanese = 13,
    ELanguage_TraditionalChinese = 14,
    ELanguage_SimplifiedChinese = 15,
    ELanguage_TencentChinese = 16,
    ELanguage_Korean = 17,
};

/**
 * @class cTkLanguages
 */
class cTkLanguages
{
  public:
    enum
    {
        ClassNameHash = 0xEA37791FF01A5AF4,
    };

    union
    {
        struct
        {
            eLanguage Language;
        };
    };
};

SKYSCRAPER_END
