/**
 * @file gctechnology.meta.h
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
#include <toolkit/tktextureresource.meta.h>
#include <reality/gcrealitysubstancecategory.meta.h>
#include <reality/gctechnologycategory.meta.h>
#include <reality/gctechnologyrarity.meta.h>
#include <reality/gctechnologyrequirement.meta.h>
#include <reality/stats/gcstatstypes.meta.h>
#include <reality/stats/gcstatsbonus.meta.h>
#include <reality/gcitempricemodifiers.meta.h>
#include <reality/gcalienrace.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcTechnology
 */
class cGcTechnology
{
  public:
    enum
    {
        ClassNameHash = 0x9F1CE8466638E767,
    };

    union
    {
        struct
        {
            TkID<128> mID;
            TkID<256> mGroup;
            cTkFixedString<128,char> macName;
            cTkFixedString<128,char> macNameLower;
            cTkDynamicString macSubtitle;
            cTkDynamicString macDescription;
            bool mbTeach;
            TkID<256> mHintStart;
            TkID<256> mHintEnd;
            cTkTextureResource Icon;
            cTkColour mColour;
            int miLevel;
            bool mbChargeable;
            int miChargeAmount;
            cGcRealitySubstanceCategory ChargeType;
            cTkDynamicArray<TkID<128>> maChargeBy;
            float mfChargeMultiplier;
            bool mbBuildFullyCharged;
            bool mbUsesAmmo;
            TkID<128> mAmmoId;
            bool mbPrimaryItem;
            bool mbUpgrade;
            bool mbCore;
            bool mbRepairTech;
            bool mbProcedural;
            cGcTechnologyCategory Category;
            cGcTechnologyRarity Rarity;
            float mfValue;
            cTkDynamicArray<cGcTechnologyRequirement> maRequirements;
            cGcStatsTypes BaseStat;
            cTkDynamicArray<cGcStatsBonus> maStatBonuses;
            TkID<128> mRequiredTech;
            int miRequiredLevel;
            TkID<256> mFocusLocator;
            cTkColour mUpgradeColour;
            cTkColour mLinkColour;
            TkID<128> mRewardGroup;
            int miBaseValue;
            cGcItemPriceModifiers Cost;
            int miRequiredRank;
            cGcAlienRace DispensingRace;
            int miFragmentCost;
            cGcTechnologyRarity TechShopRarity;
            bool mbWikiEnabled;
            cTkDynamicString macDamagedDescription;
            TkID<128> mParentTechId;
            bool mbIsTemplate;
        };
    };
};

SKYSCRAPER_END
