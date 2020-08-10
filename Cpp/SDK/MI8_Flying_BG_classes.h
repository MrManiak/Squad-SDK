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

// BlueprintGeneratedClass MI8_Flying_BG.MI8_Flying_BG_C
// 0x0064 (FullSize[0x029C] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_035F - 0x0000 // Minimum to subtract -> (0010)
class AMI8_Flying_BG_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_035F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_035F, class UAudioComponent*,                                                EngineAudio);                                              // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_035F, class USkeletalMeshComponent*,                                         SkeletalMesh);                                             // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_035F, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_035F, float,                                                                 HeliMovement_Alpha_726A31094A2C8D2EA0F4629F3037A24F);      // 0x0268(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_035F, TEnumAsByte<ETimelineDirection>,                                       HeliMovement__Direction_726A31094A2C8D2EA0F4629F3037A24F); // 0x026C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_035F, class UTimelineComponent*,                                             HeliMovement);                                             // 0x0270(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_035F, float,                                                                 Duration);                                                 // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_035F, struct FVector2D,                                                      RestartDelay);                                             // 0x027C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_035F, class ATargetPoint*,                                                   Target1);                                                  // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_035F, class ATargetPoint*,                                                   Target2);                                                  // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_035F, float,                                                                 StartDelay);                                               // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MI8_Flying_BG.MI8_Flying_BG_C");
		return ptr;
	}


	void HeliMovement__FinishedFunc();
	void HeliMovement__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayHelicopter();
	void ExecuteUbergraph_MI8_Flying_BG(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
