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

// WidgetBlueprintGeneratedClass W_BackpackRow.W_BackpackRow_C
// 0x0090 (FullSize[0x0270] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03C2 - 0x0000 // Minimum to subtract -> (0050)
class UW_BackpackRow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03C2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03C2, class UGridPanel*,                                                     GridPanel_1);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03C2, TArray<class ASQEquipableItem*>,                                       Item_Array);                                               // 0x0240(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03C2, bool,                                                                  Show_Bottom);                                              // 0x0250(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0071 PADDING_03C2, bool,                                                                  Show_Top);                                                 // 0x0251(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03C2, class UW_RoleDetails_C*,                                               RoleDetails);                                              // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03C2, TArray<struct FSQInventoryData>,                                       Data_Array);                                               // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BackpackRow.W_BackpackRow_C");
		return ptr;
	}


	void Set_Items(TArray<class ASQEquipableItem*> In_Array, TArray<struct FSQInventoryData> Data_Array);
	void Update_Details(class ASQEquipableItem* Item);
	void ExecuteUbergraph_W_BackpackRow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
