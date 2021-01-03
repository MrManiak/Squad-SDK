#pragma once

// Name: S, Version: b


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

// BlueprintGeneratedClass BP_GenericMelee.BP_GenericMelee_C
// 0x0008 (FullSize[0x0700] - InheritedSize[0x06F8])
class ABP_GenericMelee_C : public ABP_Weapon2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericMelee.BP_GenericMelee_C");
		return ptr;
	}



	void BlueprintOnFire(const struct FVector& Origin);
	void PlayImpactEffect(const struct FSQPenetrationTrace& ImpactHit, bool bIsProjectileTracer);
	void ExecuteUbergraph_BP_GenericMelee(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
