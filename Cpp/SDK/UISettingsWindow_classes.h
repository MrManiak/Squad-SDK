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

// WidgetBlueprintGeneratedClass UISettingsWindow.UISettingsWindow_C
// 0x0180 (FullSize[0x0360] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03F8 - 0x0000 // Minimum to subtract -> (0050)
class UUISettingsWindow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03F8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03F8, class USettingsItem_TickBox_C*,                                        AlwaysShowWeaponsinDeployment);                            // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03F8, class USettingsItem_TickBox_C*,                                        DisableOnScreenChat);                                      // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03F8, class UImage*,                                                         Image_1);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03F8, class UImage*,                                                         Image_2);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03F8, class UImage*,                                                         Image_3);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03F8, class UImage*,                                                         Image_4);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03F8, class USettingsItem_Slider_C*,                                         MapMarkerScale);                                           // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03F8, class USettingsItem_TickBox_C*,                                        NameTagHideName);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03F8, class USettingsItem_Slider_C*,                                         NameTagOpacity);                                           // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03F8, class USettingsItem_Slider_C*,                                         NameTagScale);                                             // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03F8, class USettingsItem_TickBox_C*,                                        NameTagShowKit);                                           // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03F8, class USettingsItem_TickBox_C*,                                        NameTagSLAlwaysVisible);                                   // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03F8, class USettingsItem_TickBox_C*,                                        NameTagsShowFTID);                                         // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03F8, class USettingsItem_TickBox_C*,                                        PlayCaptureSounds);                                        // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_03F8, class UScrollBox*,                                                     ScrollBox);                                                // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ShowDeploymentTutorial);                                   // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ShowFireteamLetters);                                      // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ShowModeIntroAnimation);                                   // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ShowStanceIndicator);                                      // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ShowVehicleKeybinds);                                      // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_03F8, class USettingsItem_TickBox_C*,                                        SkipGiveupConfirm);                                        // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ToggleGameHelp);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ToggleMenuTips);                                           // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ToggleRadialTips);                                         // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_03F8, class USettingsItem_TickBox_C*,                                        ToggleStreamerMode);                                       // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_03F8, TArray<struct FScreenResolutionStruct>,                                ScreenResolutions);                                        // 0x0300(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0130 PADDING_03F8, TArray<struct FScreenResolutionStruct>,                                ValidResolutions);                                         // 0x0310(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0140 PADDING_03F8, bool,                                                                  bConstructed);                                             // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0148 PADDING_03F8, struct FScriptMulticastDelegate,                                       Reset_Appdata_OnClicked);                                  // 0x0328(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0158 PADDING_03F8, struct FLinearColor,                                                   SelectedColor);                                            // 0x0338(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0168 PADDING_03F8, struct FLinearColor,                                                   UnselectedColor_);                                         // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0178 PADDING_03F8, class USaveData_UI_C*,                                                 Current_UI_Save);                                          // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UISettingsWindow.UISettingsWindow_C");
		return ptr;
	}


	class UWidget* Get_ToggleStreamerMode_ToolTipWidget_1();
	class UWidget* Get_ToggleGameHelp_ToolTipWidget_1();
	class UWidget* Get_ToggleRadialTips_ToolTipWidget_1();
	class UWidget* Get_ToggleMenuTips_ToolTipWidget_1();
	void UpdateButtons();
	void Construct();
	void APPLY();
	void Revert();
	void RESTORE_DEFAULTS();
	void Show_Debugs();
	void BndEvt__ToggleCrouch_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleADS_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleDoubleTapWalk_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleGameHelp_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleJumpUncrouch_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleJumpUnprone_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleLean_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleMenuTips_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleRadialTips_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleStreamerMode_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleFreelook_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleFreelookRecenter_K2Node_ComponentBoundEvent_143_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_Slider_C_0_K2Node_ComponentBoundEvent_1031_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__NameTagSLOnly_K2Node_ComponentBoundEvent_508_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__NameTagShowKit_K2Node_ComponentBoundEvent_758_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__NameTagScale_K2Node_ComponentBoundEvent_1104_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Keyboardhilite_K2Node_ComponentBoundEvent_1305_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__NameTagSLAlwaysVisible_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ShowStanceIndicator_K2Node_ComponentBoundEvent_1226_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__AlwaysShowWeaponsinDeployment_K2Node_ComponentBoundEvent_1275_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__MapMarkerScale_K2Node_ComponentBoundEvent_212_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__NameTagsShowFTID_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SkipGiveupConfirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ShowFireteamLetters_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleDeploymentTutorial_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SkipModeIntroAnimation_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ShowVehicleKeybinds_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__PlayCaptureSounds_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_TickBox_C_0_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void ExecuteUbergraph_UISettingsWindow(int EntryPoint);
	void Reset_Appdata_OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
