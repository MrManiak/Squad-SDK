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

// BlueprintGeneratedClass Rotor_Bust_Uh60.Rotor_Bust_Uh60_C
// 0x00A0 (FullSize[0x0328] - InheritedSize[0x0288])
// LastOffsetWithSize(0x0288)
#define PADDING_04FB - 0x0000 // Minimum to subtract -> (0018)
class ARotor_Bust_Uh60_C : public ASQLastingEffect
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_04FB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04FB, class UParticleSystemComponent*,                                       ParticleSystem3);                                          // 0x02A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04FB, class UParticleSystemComponent*,                                       ParticleSystem2);                                          // 0x02B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04FB, class UParticleSystemComponent*,                                       ParticleSystem1);                                          // 0x02B8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04FB, class UParticleSystemComponent*,                                       explosion);                                                // 0x02C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04FB, class UStaticMeshComponent*,                                           ForceD);                                                   // 0x02C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04FB, class UStaticMeshComponent*,                                           ForceC);                                                   // 0x02D0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04FB, class UStaticMeshComponent*,                                           ForceB);                                                   // 0x02D8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04FB, class URadialForceComponent*,                                          BladeForce3);                                              // 0x02E0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04FB, class URadialForceComponent*,                                          BladeForce2);                                              // 0x02E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04FB, class URadialForceComponent*,                                          BladeForce1);                                              // 0x02F0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04FB, class UStaticMeshComponent*,                                           Force);                                                    // 0x02F8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04FB, class UStaticMeshComponent*,                                           Blade4);                                                   // 0x0300(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04FB, class UStaticMeshComponent*,                                           Blade3);                                                   // 0x0308(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04FB, class UStaticMeshComponent*,                                           Blade2);                                                   // 0x0310(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04FB, class UStaticMeshComponent*,                                           Blade1);                                                   // 0x0318(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04FB, class URadialForceComponent*,                                          RadialForce);                                              // 0x0320(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rotor_Bust_Uh60.Rotor_Bust_Uh60_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BndEvt__Blade1_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Blade2_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Blade3_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Blade4_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Rotor_Bust_Uh60(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
