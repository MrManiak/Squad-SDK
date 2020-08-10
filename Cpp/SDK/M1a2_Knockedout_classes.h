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

// BlueprintGeneratedClass M1a2_Knockedout.M1a2_Knockedout_C
// 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
// LastOffsetWithSize(0x0320)
#define PADDING_011E - 0x0000 // Minimum to subtract -> (0000)
class AM1a2_Knockedout_C : public ABP_GenericDestroyedVehicleWreck_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_011E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0320(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_011E, class UParticleSystemComponent*,                                       Exploshiom);                                               // 0x0328(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_011E, class UAudioComponent*,                                                FlamesAudio);                                              // 0x0330(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_011E, class UStaticMeshComponent*,                                           CollisionMesh);                                            // 0x0338(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_011E, class UParticleSystemComponent*,                                       ParticleSystem);                                           // 0x0340(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_011E, class UStaticMeshComponent*,                                           barrel);                                                   // 0x0348(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_011E, class UStaticMeshComponent*,                                           Turret);                                                   // 0x0350(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1a2_Knockedout.M1a2_Knockedout_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnBeginDestroyedVehicle();
	void ExecuteUbergraph_M1a2_Knockedout(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
