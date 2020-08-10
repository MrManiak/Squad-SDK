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

// WidgetBlueprintGeneratedClass BP_Role_Inventory.BP_Role_Inventory_C
// 0x00CC (FullSize[0x02AC] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_00C8 - 0x0000 // Minimum to subtract -> (0050)
class UBP_Role_Inventory_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_00C8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00C8, class UUniformGridPanel*,                                              InventoryGrid);                                            // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00C8, class UTextBlock*,                                                     Role_WeaponName);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00C8, class UImage*,                                                         Weapon_Image);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_00C8, TArray<struct FSQInventoryWeaponGroupData>,                            RoleInventory);                                            // 0x0250(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0080 PADDING_00C8, struct FText,                                                          WeaponName);                                               // 0x0260(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0098 PADDING_00C8, int,                                                                   Columns);                                                  // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_00C8, TArray<class UClass*>,                                                 RulesetItemsToRemove);                                     // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_00C8, TArray<struct FSQInventoryMod>,                                        RulesetItemsToAdd);                                        // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_00C8, class USQRoleSettings*,                                                RoleReference);                                            // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_00C8, float,                                                                 UpdateTimer);                                              // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Role_Inventory.BP_Role_Inventory_C");
		return ptr;
	}


	void ClearWidget();
	void GetRulesetModifications();
	void AddItemToInventory(const struct FSQInventoryData& InventoryData, int Slot, int Offset);
	void PopulateInventoryUI();
	void UpdateStateAndVisibilityEvent();
	void ExecuteUbergraph_BP_Role_Inventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
