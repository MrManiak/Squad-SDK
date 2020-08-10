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

// BlueprintGeneratedClass BP_40MM_Proj2.BP_40MM_Proj2_C
// 0x0064 (FullSize[0x0538] - InheritedSize[0x04D4])
// LastOffsetWithSize(0x04D4)
#define PADDING_049A - 0x0000 // Minimum to subtract -> (003C)
class ABP_40MM_Proj2_C : public ASQMortarProjectile
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x003C PADDING_049A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0510(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0044 PADDING_049A, class UChildActorComponent*,                                           Shockwave);                                                // 0x0518(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_049A, class USkeletalMeshComponent*,                                         SkeletalMesh);                                             // 0x0520(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_049A, class UParticleSystem*,                                                BPEffectOnUnderMinFlightTime);                             // 0x0528(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_049A, class USoundBase*,                                                     BPSoundonUnderMinFlightTime);                              // 0x0530(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_40MM_Proj2.BP_40MM_Proj2_C");
		return ptr;
	}


	void OnImpact(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_40MM_Proj2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
