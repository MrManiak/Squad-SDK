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

// BlueprintGeneratedClass BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C
// 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
class ABP_VehicleSmoke_Proj_C : public ABP_40MM_Proj2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect;                                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             SmokeEffect;                                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C");
		return ptr;
	}



	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VehicleSmoke_Proj(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
