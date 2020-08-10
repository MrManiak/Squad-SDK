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

// BlueprintGeneratedClass BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C
// 0x0018 (FullSize[0x0550] - InheritedSize[0x0538])
// LastOffsetWithSize(0x0538)
#define PADDING_0304 - 0x0000 // Minimum to subtract -> (0000)
class ABP_VehicleSmoke_Proj_C : public ABP_40MM_Proj2_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0304, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0538(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0304, class UParticleSystemComponent*,                                       Effect);                                                   // 0x0540(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0304, class UParticleSystem*,                                                SmokeEffect);                                              // 0x0548(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
