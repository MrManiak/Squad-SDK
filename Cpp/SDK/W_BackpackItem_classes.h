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

// WidgetBlueprintGeneratedClass W_BackpackItem.W_BackpackItem_C
// 0x00D0 (FullSize[0x02B0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CD1 - 0x0000 // Minimum to subtract -> (0050)
class UW_BackpackItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CD1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CD1, class UImage*,                                                         Bottom);                                                   // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CD1, class UButton*,                                                        Button_1);                                                 // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CD1, class UImage*,                                                         Icon);                                                     // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CD1, class UImage*,                                                         Left);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CD1, class UImage*,                                                         Right);                                                    // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CD1, class UTextBlock*,                                                     TB_Amount);                                                // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CD1, class UImage*,                                                         Top);                                                      // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CD1, class ASQEquipableItem*,                                               Item);                                                     // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CD1, bool,                                                                  Show_Top);                                                 // 0x0278(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x009C PADDING_0CD1, int,                                                                   Column_ID);                                                // 0x027C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CD1, bool,                                                                  Show_Bottom);                                              // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CD1, struct FScriptMulticastDelegate,                                       Hovered);                                                  // 0x0288(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0CD1, struct FSQInventoryData,                                               Data);                                                     // 0x0298(0x0018)  (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BackpackItem.W_BackpackItem_C");
		return ptr;
	}


	void Get_Item_Count(const struct FSQInventoryData& SQInventoryData, int* Item_Count);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_BackpackItem(int EntryPoint);
	void Hovered__DelegateSignature(class ASQEquipableItem* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
