#pragma once

// Name: S, Version: b


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	MAX                            = 4,

};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	bool                                               bX;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bY;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bZ;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	bool                                               bTranslation;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotation;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScale;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParent;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        TranslationAxes;                                           // 0x0004(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        RotationAxes;                                              // 0x0007(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        ScaleAxes;                                                 // 0x000A(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                  // 0x0000(0x000D) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IM4P[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SourceNode;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetNode;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3VF[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
struct FConstraintDescriptor
{
	EConstraintType                                    Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ZCW[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};
// ScriptStruct AnimationCore.ConstraintData
// 0x0080
struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                                // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U492[0xB];                                     // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  CurrentTransform;                                          // 0x0050(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.NodeObject
// 0x0010
struct FNodeObject
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Transforms;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                    // 0x0020(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData_JW0M[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNodeHierarchyData                          Hierarchy;                                                 // 0x0008(0x0070) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
struct FConstraintOffset
{
	struct FVector                                     Translation;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2SZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SDDI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Parent;                                                    // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.EulerTransform
// 0x0024
struct FEulerTransform
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.TransformFilter
// 0x0009
struct FTransformFilter
{
	struct FFilterOptionPerAxis                        TranslationFilter;                                         // 0x0000(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        RotationFilter;                                            // 0x0003(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        ScaleFilter;                                               // 0x0006(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData_1NRT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilterOptionPerAxis                        AxesFilterOption;                                          // 0x0008(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8EV[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};
// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	ETransformConstraintType                           TransformType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFCP[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct AnimationCore.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLocalSpace;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JC9C[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis                                       LookAt_Axis;                                               // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       LookUp_Axis;                                               // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseLookUp;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AC1O[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LookUpTarget;                                              // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
