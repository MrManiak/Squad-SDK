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

// WidgetBlueprintGeneratedClass GameSettingsWindow.GameSettingsWindow_C
// 0x01C8 (FullSize[0x03A8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03D4 - 0x0000 // Minimum to subtract -> (0050)
class UGameSettingsWindow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03D4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03D4, class USettingsItem_Slider_C*,                                         DOUBLETAPTIMESLIDER);                                      // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03D4, class USettingsItem_Slider_C*,                                         FOV);                                                      // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03D4, class USettingsItem_Slider_C*,                                         FreelookSensitivity);                                      // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03D4, class USettingsItem_Slider_C*,                                         GlobalSensitivity);                                        // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03D4, class USettingsItem_Slider_C*,                                         HelicopterPitchSensitivity);                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03D4, class USettingsItem_Slider_C*,                                         HelicopterRollSensitivity);                                // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03D4, class UImage*,                                                         Image_2);                                                  // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03D4, class UImage*,                                                         Image_4);                                                  // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03D4, class UImage*,                                                         Image_5);                                                  // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03D4, class UImage*,                                                         Image_6);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03D4, class USettingsItem_TickBox_C*,                                        KeyboardHighlight);                                        // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03D4, class USettingsItem_TextBox_C*,                                        PLAYERPREFIX);                                             // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03D4, class UScrollBox*,                                                     ScrollBox);                                                // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03D4, class USettingsItem_Slider_C*,                                         Slider_MaxFPS);                                            // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_03D4, class USettingsItem_Slider_C*,                                         SoldierLongSensitivity);                                   // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03D4, class USettingsItem_Slider_C*,                                         SoldierMediumSensitivity);                                 // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_03D4, class USettingsItem_Slider_C*,                                         SoldierNonAdsSensitivity);                                 // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_03D4, class USettingsItem_Slider_C*,                                         SoldierShortSensitivity);                                  // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_03D4, class UTextBlock*,                                                     TextSOLDIERSENSITIVITYMULTIPLIERS);                        // 0x02C8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleADS);                                                // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleCrouch);                                             // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleDoubleTapWalk);                                      // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleFreelook);                                           // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleFreelookRecenter);                                   // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleHelicopterInvertMousePitch);                         // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleInvertY);                                            // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleJumpUncrouch);                                       // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleJumpUnprone);                                        // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleLean);                                               // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_03D4, class USettingsItem_TickBox_C*,                                        ToggleMouseSmooth);                                        // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_03D4, class USettingsItem_TickBox_C*,                                        UseSensitivityScaling);                                    // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0150 PADDING_03D4, class USettingsItem_Slider_C*,                                         VehicleLongSensitivity);                                   // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_03D4, class USettingsItem_Slider_C*,                                         VehicleSensitivity);                                       // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0160 PADDING_03D4, class USettingsItem_Slider_C*,                                         VehicleShortSensitivity);                                  // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0168 PADDING_03D4, TArray<struct FScreenResolutionStruct>,                                ScreenResolutions);                                        // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0178 PADDING_03D4, TArray<struct FScreenResolutionStruct>,                                ValidResolutions);                                         // 0x0358(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0188 PADDING_03D4, bool,                                                                  bConstructed);                                             // 0x0368(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0190 PADDING_03D4, struct FScriptMulticastDelegate,                                       Reset_Appdata_OnClicked);                                  // 0x0370(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_03D4, struct FLinearColor,                                                   SelectedColor);                                            // 0x0380(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_03D4, struct FLinearColor,                                                   UnselectedColor_);                                         // 0x0390(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01C0 PADDING_03D4, class USaveData_UI_C*,                                                 Current_UI_Save);                                          // 0x03A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameSettingsWindow.GameSettingsWindow_C");
		return ptr;
	}


	class UWidget* Get_ToggleHelicopterInvertMousePitch_ToolTipWidget_1();
	class UWidget* Get_HelicopterRollSensitivity_ToolTipWidget_1();
	class UWidget* Get_HelicopterPitchSensitivity_ToolTipWidget_1();
	class UWidget* Get_UseSensitivityScaling_ToolTipWidget_1();
	class UWidget* Get_SoldierNonAdsSensitivity_ToolTipWidget_1();
	class UWidget* Get_GlobalSensitivity_ToolTipWidget_2();
	class UWidget* Get_VehicleLongSensitivity_ToolTipWidget_1();
	class UWidget* Get_VehicleShortSensitivity_ToolTipWidget_1();
	class UWidget* Get_SoldierLongSensitivity_ToolTipWidget_1();
	class UWidget* Get_SoldierMediumSensitivity_ToolTipWidget_1();
	class UWidget* Get_SoldierShortSensitivity_ToolTipWidget_1();
	struct FLinearColor Get_IndividualMultipliers_Color();
	void UpdateZoomSensitivitySliders();
	class UWidget* Get_DOUBLETAPTIMESLIDER_ToolTipWidget_1();
	class UWidget* Get_ToggleDoubleTapWalk_ToolTipWidget_1();
	class UWidget* Get_ToggleJumpUnprone_ToolTipWidget_1();
	class UWidget* Get_ToggleJumpUncrouch_ToolTipWidget_1();
	class UWidget* Get_ToggleFreelook_ToolTipWidget_1();
	class UWidget* Get_ToggleLean_ToolTipWidget_1();
	class UWidget* Get_ToggleCrouch_ToolTipWidget_1();
	class UWidget* Get_ToggleADS_ToolTipWidget_1();
	class UWidget* Get_PLAYERPREFIX_ToolTipWidget_1();
	class UWidget* Get_ToggleFreelookRecenter_ToolTipWidget_1();
	class UWidget* Get_FreelookSensitivity_ToolTipWidget_1();
	void UpdateButtons();
	void BndEvt__FOV_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(float Value);
	void APPLY();
	void Revert();
	void RESTORE_DEFAULTS();
	void Construct();
	void BndEvt__PLAYERPREFIX_K2Node_ComponentBoundEvent_31_OnValueChanged__DelegateSignature(const struct FText& NewText);
	void Show_Debugs();
	void BndEvt__DOUBLETAPTIMESLIDER_K2Node_ComponentBoundEvent_46_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__ToggleCrouch_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleADS_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleDoubleTapWalk_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleInvertY_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleJumpUncrouch_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleJumpUnprone_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleLean_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleMouseSmooth_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleFreelook_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleFreelookRecenter_K2Node_ComponentBoundEvent_143_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__FreelookSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SoldierShortSensitivity_K2Node_ComponentBoundEvent_703_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SoldierMediumSensitivity_K2Node_ComponentBoundEvent_708_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SoldierLongSensitivity_K2Node_ComponentBoundEvent_746_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__VehicleShortSensitivity_K2Node_ComponentBoundEvent_786_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__VehicleMediumSensitivity_K2Node_ComponentBoundEvent_828_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__UseSensitivityScaling_K2Node_ComponentBoundEvent_651_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SoldierSensitivity_K2Node_ComponentBoundEvent_406_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__VehicleSensitivity_K2Node_ComponentBoundEvent_411_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__GlobalSensitivity_K2Node_ComponentBoundEvent_190_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__Keyboardhilite_K2Node_ComponentBoundEvent_1305_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__SettingsItem_Slider_C_0_K2Node_ComponentBoundEvent_164_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__HelicopterPitchSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__HelicopterRollSensitivity_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__ToggleHelicopterInvertMousePitch_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void ExecuteUbergraph_GameSettingsWindow(int EntryPoint);
	void Reset_Appdata_OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
