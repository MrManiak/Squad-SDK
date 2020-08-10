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
// Classes
//---------------------------------------------------------------------------

// Class ArchVisCharacter.ArchVisCharacter
// 0x0068 (FullSize[0x06C0] - InheritedSize[0x0658])
// LastOffsetWithSize(0x0658)
#define PADDING_025E - 0x0000 // Minimum to subtract -> (0000)
class AArchVisCharacter : public ACharacter
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_025E, struct FString,                                                        LookUpAxisName);                                           // 0x0658(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_025E, struct FString,                                                        LookUpAtRateAxisName);                                     // 0x0668(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_025E, struct FString,                                                        TurnAxisName);                                             // 0x0678(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_025E, struct FString,                                                        TurnAtRateAxisName);                                       // 0x0688(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_025E, struct FString,                                                        MoveForwardAxisName);                                      // 0x0698(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_025E, struct FString,                                                        MoveRightAxisName);                                        // 0x06A8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_025E, float,                                                                 MouseSensitivityScale_Pitch);                              // 0x06B8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_025E, float,                                                                 MouseSensitivityScale_Yaw);                                // 0x06BC(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}


};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x005C (FullSize[0x0768] - InheritedSize[0x070C])
// LastOffsetWithSize(0x070C)
#define PADDING_0260 - 0x0000 // Minimum to subtract -> (0024)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0024 PADDING_0260, struct FRotator,                                                       RotationalAcceleration);                                   // 0x0730(0x000C)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0260, struct FRotator,                                                       RotationalDeceleration);                                   // 0x073C(0x000C)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0260, struct FRotator,                                                       MaxRotationalVelocity);                                    // 0x0748(0x000C)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0260, float,                                                                 MinPitch);                                                 // 0x0754(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0260, float,                                                                 MaxPitch);                                                 // 0x0758(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0260, float,                                                                 WalkingFriction);                                          // 0x075C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0260, float,                                                                 WalkingSpeed);                                             // 0x0760(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0260, float,                                                                 WalkingAcceleration);                                      // 0x0764(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
