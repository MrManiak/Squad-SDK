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

// BlueprintGeneratedClass M1a2_Ammocook.M1a2_Ammocook_C
// 0x0050 (FullSize[0x0370] - InheritedSize[0x0320])
// LastOffsetWithSize(0x0320)
#define PADDING_00DC - 0x0000 // Minimum to subtract -> (0000)
class AM1a2_Ammocook_C : public ABP_GenericDestroyedVehicleWreck_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00DC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0320(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00DC, class UStaticMeshComponent*,                                           CollisionMesh);                                            // 0x0328(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00DC, class UAudioComponent*,                                                FlamesAudio);                                              // 0x0330(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00DC, class URadialForceComponent*,                                          RadialForce);                                              // 0x0338(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00DC, class UStaticMeshComponent*,                                           Panel2);                                                   // 0x0340(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00DC, class UStaticMeshComponent*,                                           Panel1);                                                   // 0x0348(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_00DC, class UParticleSystemComponent*,                                       Exploshiom);                                               // 0x0350(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_00DC, class UParticleSystemComponent*,                                       ParticleSystem);                                           // 0x0358(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_00DC, class UStaticMeshComponent*,                                           barrel);                                                   // 0x0360(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_00DC, class UStaticMeshComponent*,                                           Turret);                                                   // 0x0368(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1a2_Ammocook.M1a2_Ammocook_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnBeginDestroyedVehicle();
	void BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_M1a2_Ammocook(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
