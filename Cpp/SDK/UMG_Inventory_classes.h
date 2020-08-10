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

// WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C
// 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_020A - 0x0000 // Minimum to subtract -> (0000)
class UUMG_Inventory_C : public USQInventoryWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_020A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup);                                       // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_1);                                   // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_2);                                   // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_3);                                   // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_4);                                   // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_5);                                   // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_6);                                   // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_7);                                   // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_020A, class UUMG_InventoryGroup_C*,                                          UMG_InventoryGroup_C_8);                                   // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_020A, class UUMG_RearmCostInventory_C*,                                      UMG_RearmCostInventory_3);                                 // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_020A, class UVerticalBox*,                                                   VerticalBox_1);                                            // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_Inventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
