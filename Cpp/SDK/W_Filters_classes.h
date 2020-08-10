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

// WidgetBlueprintGeneratedClass W_Filters.W_Filters_C
// 0x00C0 (FullSize[0x02A0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CCB - 0x0000 // Minimum to subtract -> (0050)
class UW_Filters_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CCB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CCB, class UBorder*,                                                        Border_Filters);                                           // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CCB, class UVerticalBox*,                                                   ServerFilters);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_Empty);                                            // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_ModdedServers);                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_Queues);                                           // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_Reserved);                                         // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_ShowFull);                                         // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Setting_Version);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CCB, class USettingsItem_TickBox_C*,                                        Settings_Favourites);                                      // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CCB, class UMainMenu_Button_C*,                                             Vis_Button);                                               // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CCB, class USaveData_UI_C*,                                                 Save_Data);                                                // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CCB, struct FScriptMulticastDelegate,                                       Option_Changed);                                           // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Filters.W_Filters_C");
		return ptr;
	}


	class UWidget* FavouriteTooltip();
	void BndEvt__ButtonServer_DiffVersion_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_TickBox_C_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_TickBox_C_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void Refresh_Filters();
	void BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Reset_Filters();
	void Construct();
	void BndEvt__Setting_Empty_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__Setting_Queues_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__Setting_Reserved_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__Settings_Favourites_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_TickBox_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void ExecuteUbergraph_W_Filters(int EntryPoint);
	void Option_Changed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
