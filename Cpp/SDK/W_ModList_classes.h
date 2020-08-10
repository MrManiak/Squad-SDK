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

// WidgetBlueprintGeneratedClass W_ModList.W_ModList_C
// 0x00C0 (FullSize[0x02A0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02C6 - 0x0000 // Minimum to subtract -> (0050)
class UW_ModList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02C6, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02C6, class UBorder*,                                                        HoverCheckArea);                                           // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02C6, class UBorder*,                                                        MainBorder);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02C6, class UTextBlock*,                                                     TB_Whitelist);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem);                                         // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_5);                                     // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_6);                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_7);                                     // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_8);                                     // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_9);                                     // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_10);                                    // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_02C6, class UW_ModTooltipItem_C*,                                            W_ModTooltipItem_C_11);                                    // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02C6, class UWrapBox*,                                                       WrapBox_1);                                                // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_02C6, class USQServerListItemWidget*,                                        ServerListItem);                                           // 0x0298(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModList.W_ModList_C");
		return ptr;
	}


	bool Is_Modded();
	void Is_Whitelisted(bool* Is_Whitelisted);
	struct FText Get_TB_Whitelist_Text_1();
	void Display_Mods();
	void Init(class USQServerListItemWidget* ServerListItem);
	void ExecuteUbergraph_W_ModList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
