/**
 * @file gcnodeactivationaction.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-06
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
 * @enum eNodeActiveState
 */
enum eNodeActiveState : uint32_t
{
    ENodeActiveState_Activate = 0,
    ENodeActiveState_Deactivate = 1,
    ENodeActiveState_Toggle = 2,
    ENodeActiveState_Add = 3,
    ENodeActiveState_Remove = 4,
    ENodeActiveState_RemoveChildren = 5,
};

/**
 * @class cGcNodeActivationAction
 */
class cGcNodeActivationAction : cTkMetaData::Registrar<cGcNodeActivationAction>, cTkMetaDataXML::Registrar<cGcNodeActivationAction>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xB2C5F1A083F1473A,
    };
    enum
    {
        mu64TemplateHash = 0x901A4F810577784F,
    };

    eNodeActiveState NodeActiveState;
    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macSceneToAdd;
    bool mbIncludePhysics;
    bool mbIncludeChildPhysics;
    bool mbNotifyNPC;
    bool mbUseMasterModel;
    bool mbUseLocalNode;
    bool mbRestartEmitters;
    bool mbAffectModels;
};

SKYSCRAPER_END