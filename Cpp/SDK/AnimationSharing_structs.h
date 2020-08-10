#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018
struct FAnimationSetup
{
	class UAnimSequence*                               AnimSequence;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AnimBlueprint;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             NumRandomizedInstances;                                    // 0x0010(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                            Enabled;                                                   // 0x0014(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
struct FAnimationStateEntry
{
	unsigned char                                      State;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationSetup>                     AnimationSetups;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bOnDemand;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdditive;                                                 // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnToPreviousState;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetNextState;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NextState;                                                 // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             MaximumNumberOfConcurrentInstances;                        // 0x0024(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WiggleTimePercentage;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresCurves;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038
struct FPerSkeletonAnimationSharingSetup
{
	class USkeleton*                                   Skeleton;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BlendAnimBlueprint;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AdditiveAnimBlueprint;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StateProcessorClass;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationStateEntry>                AnimationStates;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
struct FAnimationSharingScalability
{
	struct FPerPlatformBool                            UseBlendTransitions;                                       // 0x0000(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                           BlendSignificanceValue;                                    // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             MaximumNumberConcurrentBlends;                             // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                           TickSignificanceValue;                                     // 0x000C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0058 - 0x0050)
struct FTickAnimationSharingFunction : public FTickFunction
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
