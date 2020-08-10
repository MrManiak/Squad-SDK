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

// BlueprintGeneratedClass BP_VehicleSpawner.BP_VehicleSpawner_C
// 0x0030 (FullSize[0x02A0] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
#define PADDING_000C - 0x0000 // Minimum to subtract -> (0000)
class ABP_VehicleSpawner_C : public ASQVehicleSpawner
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_000C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0270(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_000C, class USkeletalMeshComponent*,                                         PreviewMesh);                                              // 0x0278(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_000C, class UArrowComponent*,                                                Arrow);                                                    // 0x0280(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_000C, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0288(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_000C, bool,                                                                  UseAutoAlign);                                             // 0x0290(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0024 PADDING_000C, float,                                                                 Ground_Vic_Height);                                        // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_000C, float,                                                                 trace_distance);                                           // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_000C, float,                                                                 Helo_Height);                                              // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSpawner.BP_VehicleSpawner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VehicleSpawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
