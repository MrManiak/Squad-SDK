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

// WidgetBlueprintGeneratedClass UMG_InventoryItem.UMG_InventoryItem_C
// 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_0C9D - 0x0000 // Minimum to subtract -> (0000)
class UUMG_InventoryItem_C : public USQInventoryItemWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0C9D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0C9D, class UImage*,                                                         Background);                                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0C9D, class UBorder*,                                                        Border_1);                                                 // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0C9D, class UImage*,                                                         Item);                                                     // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0C9D, class UTextBlock*,                                                     MagText);                                                  // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItem.UMG_InventoryItem_C");
		return ptr;
	}


	void Construct();
	void UpdateState();
	void ExecuteUbergraph_UMG_InventoryItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
