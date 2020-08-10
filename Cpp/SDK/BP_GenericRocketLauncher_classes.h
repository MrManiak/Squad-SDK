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

// BlueprintGeneratedClass BP_GenericRocketLauncher.BP_GenericRocketLauncher_C
// 0x0048 (FullSize[0x0740] - InheritedSize[0x06F8])
// LastOffsetWithSize(0x06F8)
#define PADDING_02FC - 0x0000 // Minimum to subtract -> (0000)
class ABP_GenericRocketLauncher_C : public ABP_Weapon2_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02FC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x06F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02FC, class UParticleSystemComponent*,                                       MuzzleFlashRearComponent3P);                               // 0x0700(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02FC, class UChildActorComponent*,                                           BackBlastComponent3P);                                     // 0x0708(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02FC, class UParticleSystemComponent*,                                       MuzzleFlashRearComponent1P);                               // 0x0710(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02FC, class USQBlastComponent*,                                              SquadBlast);                                               // 0x0718(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02FC, class UChildActorComponent*,                                           BackBlastComponent1P);                                     // 0x0720(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02FC, struct FName,                                                          BackblastSocket);                                          // 0x0728(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02FC, class UParticleSystem*,                                                BackblastEffect1P);                                        // 0x0730(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02FC, class UParticleSystem*,                                                BackblastEffect3P);                                        // 0x0738(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericRocketLauncher.BP_GenericRocketLauncher_C");
		return ptr;
	}


	void BlueprintOnFire(const struct FVector& Origin);
	void ExecuteUbergraph_BP_GenericRocketLauncher(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
