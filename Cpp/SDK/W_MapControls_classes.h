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

// WidgetBlueprintGeneratedClass W_MapControls.W_MapControls_C
// 0x0148 (FullSize[0x0328] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0352 - 0x0000 // Minimum to subtract -> (0050)
class UW_MapControls_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0352, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0352, class UMainMenu_Button_C*,                                             Button_ChatToggle);                                        // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0352, class UMainMenu_Button_C*,                                             Button_DirectorLines);                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0352, class UMainMenu_Button_C*,                                             Button_FobRadius);                                         // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0352, class UMainMenu_Button_C*,                                             Button_GridOpacity);                                       // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Icon_Legend);                                       // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0352, class UMainMenu_Button_C*,                                             Button_IconScale);                                         // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0352, class UMainMenu_Button_C*,                                             Button_LatticeOpacity);                                    // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Role);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Spawns);                                            // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Supplies);                                          // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0352, class UMainMenu_Button_C*,                                             Button_TCZones);                                           // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Tix_Legend);                                        // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Vehicles_Legend);                                   // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0352, class UMainMenu_Button_C*,                                             Button_Waypoints);                                         // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0352, class UMainMenu_Button_C*,                                             MainMenu_Button_C_12);                                     // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0352, class UVerticalBox*,                                                   Options);                                                  // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0352, class USizeBox*,                                                       SizeBox_18);                                               // 0x02B8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0352, class UW_Slider_GridOpacity_C*,                                        W_GridOpacity);                                            // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0352, class UW_Slider_LatticeOpacity_C*,                                     W_LatticeOpacity);                                         // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0352, class UW_Slider_UIScale_C*,                                            W_UIScaleSlider);                                          // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0352, class USaveData_UI_C*,                                                 Current_Save_Data);                                        // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0352, class UW_PopupGeneric_C*,                                              Popup_Legend_Tickets);                                     // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0352, class UW_PopupGeneric_C*,                                              Popup_Legend_Icons);                                       // 0x02E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0352, class ASQPlayerController*,                                            My_PC);                                                    // 0x02F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0352, bool,                                                                  Cached_SL_Value);                                          // 0x02F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x011C PADDING_0352, float,                                                                 Options_Top_Padding);                                      // 0x02FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0352, class UW_PopupGeneric_C*,                                              Popup_Legend_Vehicles);                                    // 0x0300(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0352, struct FScriptMulticastDelegate,                                       ToggleFOBRadiusVisibility);                                // 0x0308(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0138 PADDING_0352, struct FScriptMulticastDelegate,                                       ToggleDirectorLinesVisibility);                            // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapControls.W_MapControls_C");
		return ptr;
	}


	void Refresh_Director_Lines();
	class UWidget* Get_Tooltip_Director_Lines();
	void Refresh_Chat_Boxes();
	void Refresh_TC_Zone_Visibility();
	class UWidget* Get_Button_GridLines_ToolTipWidget_1();
	class UWidget* Get_Button_FlagLines_ToolTipWidget_2();
	class UWidget* Get_Button_IconScale_ToolTipWidget_1();
	void Reset_Waypoints();
	ESlateVisibility Get_Button_Waypoints_Visibility_1();
	class UWidget* Get_Button_Supplies_ToolTipWidget_1();
	class UWidget* Get_Button_Spawns_ToolTipWidget_1();
	void Refresh_Spawns_Visibility();
	void Refresh_FOB_Supplies_Visibility();
	class UWidget* Get_Button_Ticket_Legend_ToolTipWidget_1();
	class UWidget* Get_Button_Icon_Legend_ToolTipWidget_1();
	class UWidget* Get_Button_Waypoints_ToolTipWidget_1();
	class UWidget* Get_Button_FobRadius_ToolTipWidget_1();
	class UWidget* Get_Button_Role_ToolTipWidget_1();
	void Refresh_Waypoint_Visibility();
	void Refresh_FOB_Radius_Visibility();
	void Refresh_Map_Role_Visibility();
	void Refresh_Toggles();
	void BndEvt__MainMenu_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_3_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Role_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Construct();
	void BndEvt__Button_Supplies_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Spawns_K2Node_ComponentBoundEvent_165_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Icon_Legend_K2Node_ComponentBoundEvent_36_OnHover__DelegateSignature(bool bHovered);
	void BndEvt__Button_Legend_K2Node_ComponentBoundEvent_119_OnHover__DelegateSignature(bool bHovered);
	void BndEvt__Button_Tix_Legend_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Icon_Legend_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Removed_Icons();
	void Removed_Tix();
	void BndEvt__Button_LatticeOpacity_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_GridOpacity_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_IconScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_11_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_HexZones_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature(bool bHovered);
	void Removed_Vehicles();
	void BndEvt__Button_ChatToggle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_DirectorLines_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_W_MapControls(int EntryPoint);
	void ToggleDirectorLinesVisibility__DelegateSignature();
	void ToggleFOBRadiusVisibility__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
