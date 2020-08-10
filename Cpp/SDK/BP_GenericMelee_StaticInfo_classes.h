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

// BlueprintGeneratedClass BP_GenericMelee_StaticInfo.BP_GenericMelee_StaticInfo_C
// 0x0030 (FullSize[0x0960] - InheritedSize[0x0930])
// LastOffsetWithSize(0x0929)
#define PADDING_0035 - 0x0000 // Minimum to subtract -> (0007)
class UBP_GenericMelee_StaticInfo_C : public UBP_GenericWeapon_StaticInfo_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0035, class UAnimMontage*,                                                   BP_MeleeNoHitSoldier1pMontage);                            // 0x0930(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x000F PADDING_0035, class UAnimMontage*,                                                   BP_MeleeHitSoldier1pMontage);                              // 0x0938(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0035, class UAnimMontage*,                                                   BP_MeleeNoHitSoldier3pMontage);                            // 0x0940(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_0035, class UAnimMontage*,                                                   BP_MeleeNoHitSoldierWeaponMontage);                        // 0x0948(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0035, class UAnimMontage*,                                                   BP_MeleeHitSoldier3pMontage);                              // 0x0950(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_0035, class UAnimMontage*,                                                   BP_MeleeHitSoldierWeaponMontage);                          // 0x0958(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericMelee_StaticInfo.BP_GenericMelee_StaticInfo_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
