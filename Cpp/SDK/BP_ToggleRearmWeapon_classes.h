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

// BlueprintGeneratedClass BP_ToggleRearmWeapon.BP_ToggleRearmWeapon_C
// 0x002C (FullSize[0x005C] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_013C - 0x0000 // Minimum to subtract -> (0000)
class UBP_ToggleRearmWeapon_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_013C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_013C, class ASQEquipableItem*,                                               Equippable);                                               // 0x0038(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_013C, bool,                                                                  bIsAmmoFull);                                              // 0x0040(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0014 PADDING_013C, int,                                                                   MagsToRearm);                                              // 0x0044(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_013C, TScriptInterface<class USQRearmSource>,                                RearmSource);                                              // 0x0048(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0028 PADDING_013C, float,                                                                 RemainingAmmo);                                            // 0x0058(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToggleRearmWeapon.BP_ToggleRearmWeapon_C");
		return ptr;
	}


	void CanClick(class APlayerController* Controller, class UBP_RadialItemModel_C* Model, bool* CanClick);
	void OnClicked(class UBaseRadialMenu_C* Raidal_Menu);
	void ExecuteUbergraph_BP_ToggleRearmWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
