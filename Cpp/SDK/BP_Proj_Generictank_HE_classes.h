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

// BlueprintGeneratedClass BP_Proj_Generictank_HE.BP_Proj_Generictank_HE_C
// 0x005C (FullSize[0x0530] - InheritedSize[0x04D4])
// LastOffsetWithSize(0x04D4)
#define PADDING_04D2 - 0x0000 // Minimum to subtract -> (003C)
class ABP_Proj_Generictank_HE_C : public ASQMortarProjectile
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x003C PADDING_04D2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0510(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0044 PADDING_04D2, class UParticleSystemComponent*,                                       ParticleSystem);                                           // 0x0518(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_04D2, class UStaticMesh*,                                                    TracerMesh);                                               // 0x0520(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_04D2, class UMaterial*,                                                      TracerMaterial);                                           // 0x0528(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proj_Generictank_HE.BP_Proj_Generictank_HE_C");
		return ptr;
	}


	void OnImpact(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Proj_Generictank_HE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
