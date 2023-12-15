/**
 * @file gcragdollbone.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-13
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
#include <cloth/axisspecification.meta.h>
#include <unmapped/gcchildnode.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eCollisionShape
 */
enum eCollisionShape : uint32_t
{
    ECollisionShape_Box = 0,
    ECollisionShape_Capsule = 1,
    ECollisionShape_Sphere = 2,
};

/**
 * @enum eLimbType
 */
enum eLimbType : uint32_t
{
    ELimbType_LeftUpperArm = 0,
    ELimbType_RightUpperArm = 1,
    ELimbType_LeftUpperLeg = 2,
    ELimbType_RightUpperLeg = 3,
    ELimbType_LeftFoot = 4,
    ELimbType_RightFoot = 5,
    ELimbType_Other = 6,
};

/**
 * @class cGcRagdollBone
 */
class cGcRagdollBone
{
  public:
    enum
    {
        ClassNameHash = 0xC016E2C8C89F4CF4,
    };

    union
    {
        struct
        {
            bool mbEnabled;
            cTkFixedString<64,char> macName;
            cTkDynamicArray<cTkFixedString<64,char>> maNodeNames;
            cTkDynamicArray<cTkVector3> maNodeTransformInBone_Position;
            cTkDynamicArray<cTkVector3> maNodeTransformInBone_AxisX;
            cTkDynamicArray<cTkVector3> maNodeTransformInBone_AxisY;
            cTkDynamicArray<cTkVector3> maNodeTransformInBone_AxisZ;
            cTkFixedString<64,char> macParentNodeName;
            cTkVector3 mParentNodeTransformInBone_Position;
            cTkVector3 mParentNodeTransformInBone_AxisX;
            cTkVector3 mParentNodeTransformInBone_AxisY;
            cTkVector3 mParentNodeTransformInBone_AxisZ;
            cTkVector3 mJointPosition;
            cAxisSpecification LimitingTwistAxis;
            cAxisSpecification LimitingPlaneAxis;
            cAxisSpecification LimitedTwistAxis;
            cAxisSpecification LimitedPlaneAxis;
            float mfTwistLimitDeg;
            float mfConeLimitDeg;
            float mfPlaneMaxAngleDeg;
            float mfPlaneMinAngleDeg;
            cTkVector3 mAabbMin;
            cTkVector3 mAabbMax;
            cTkVector3 mCollisionRotationDeg;
            cTkVector3 mCollisionTranslation;
            cTkVector3 mCollisionScale;
            eCollisionShape CollisionShape;
            int miCapsuleLongAxisIndex;
            eLimbType LimbType;
            cTkVector3 mCentreOfMass;
            cTkDynamicArray<cGcChildNode> maChildNodes;
        };
    };
};

SKYSCRAPER_END