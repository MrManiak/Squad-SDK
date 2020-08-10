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

// BlueprintGeneratedClass BP_Projectile_50cal.BP_Projectile_50cal_C
// 0x0030 (FullSize[0x0490] - InheritedSize[0x0460])
// LastOffsetWithSize(0x0460)
#define PADDING_01A5 - 0x0000 // Minimum to subtract -> (0020)
class ABP_Projectile_50cal_C : public ASQProjectile
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_01A5, class UStaticMesh*,                                                    TracerMesh);                                               // 0x0480(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01A5, class UMaterial*,                                                      TracerMaterial);                                           // 0x0488(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_50cal.BP_Projectile_50cal_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
