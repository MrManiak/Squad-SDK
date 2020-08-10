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

// WidgetBlueprintGeneratedClass UMG_InventoryGroup.UMG_InventoryGroup_C
// 0x0060 (FullSize[0x02E8] - InheritedSize[0x0288])
// LastOffsetWithSize(0x0288)
#define PADDING_02AE - 0x0000 // Minimum to subtract -> (0000)
class UUMG_InventoryGroup_C : public USQInventoryGroupWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02AE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0288(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02AE, class UTextBlock*,                                                     ButtonNr);                                                 // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02AE, class UImage*,                                                         Category);                                                 // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02AE, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02AE, class UTextBlock*,                                                     ItemName);                                                 // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02AE, class UImage*,                                                         Tab);                                                      // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02AE, class UUMG_InventoryItem_C*,                                           UMG_InventoryItem_C);                                      // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02AE, class UUMG_InventoryItem_C*,                                           UMG_InventoryItem_C_65);                                   // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02AE, class UUMG_InventoryItem_C*,                                           UMG_InventoryItem_C_66);                                   // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02AE, class UUMG_InventoryItem_C*,                                           UMG_InventoryItem_C_67);                                   // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_02AE, class UUMG_InventoryItem_C*,                                           UMG_InventoryItem_C_68);                                   // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02AE, class UCanvasPanel*,                                                   UnselectedPanel);                                          // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryGroup.UMG_InventoryGroup_C");
		return ptr;
	}


	void Check_Opacity();
	void Construct();
	void Refresh();
	void ExecuteUbergraph_UMG_InventoryGroup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
