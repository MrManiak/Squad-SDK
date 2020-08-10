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

// WidgetBlueprintGeneratedClass GraphicsWindow.GraphicsWindow_C
// 0x0139 (FullSize[0x0319] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0360 - 0x0000 // Minimum to subtract -> (0050)
class UGraphicsWindow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0360, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0360, class USettingsItem_AntiAliasToggle_C*,                                ANTIALIAS);                                                // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 Effects);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0360, class USettingsItem_Slider_C*,                                         Gamma);                                                    // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 GraphicsQuality);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0360, class UImage*,                                                         Image_1);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0360, class UImage*,                                                         Image_2);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 MODEWINDOW);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0360, class USettingsComboboxItem_C*,                                        RESCOMBO);                                                 // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0360, class UScrollBox*,                                                     ScrollBox);                                                // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 Shadow);                                                   // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0360, class USettingsItem_Slider_C*,                                         SHARPENING);                                               // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 SUPERSAMPLES);                                             // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 Textures);                                                 // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleAO);                                                 // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleAOFRACTION);                                         // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleBLOOM);                                              // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleDISTANCESHADOWS);                                    // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleEYEADAPTATION);                                      // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleLENSFLARE);                                          // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleMOTIONBLUR);                                         // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleTEXTURELOADING);                                     // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0360, class USettingsItem_TickBox_C*,                                        ToggleVSYNC);                                              // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0360, class USettingsItem_GraphicsToggle_C*,                                 VIEWDIST);                                                 // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0360, TArray<struct FScreenResolutionStruct>,                                ScreenResolutions);                                        // 0x02F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0360, TArray<struct FScreenResolutionStruct>,                                ValidResolutions);                                         // 0x0300(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0360, bool,                                                                  bConstructed);                                             // 0x0310(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0134 PADDING_0360, int,                                                                   Testing);                                                  // 0x0314(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_0360, bool,                                                                  woo);                                                      // 0x0318(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GraphicsWindow.GraphicsWindow_C");
		return ptr;
	}


	class UWidget* Get_GAMMA_ToolTipWidget_1();
	void Update_DF();
	class UWidget* Get_Tooltip_DISTANCE_SHADOWS();
	class UWidget* Get_ToggleTEXTURELOADING_ToolTipWidget_1();
	class UWidget* Get_SUPERSAMPLES_ToolTipWidget_1();
	void Refresh_Res();
	void UpdateResolutions();
	void GetGraphicsQuality(int* QualityLevel);
	void Refresh_Settings();
	void Construct();
	void BndEvt__RESCOMBO_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(const struct FString& Option, int Index);
	void BndEvt__ANTIALIAS_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BENCHMARK();
	void APPLY_SETTINGS();
	void RESTORE_DEFAULTS();
	void BndEvt__GAMMANEW_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__GRAPHICSSETTING_K2Node_ComponentBoundEvent_7_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__MODEWINDOW_K2Node_ComponentBoundEvent_9_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__SHADOWSETTINGS_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__SHARPENING_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SUPERSAMPLES_K2Node_ComponentBoundEvent_13_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__VIEWDIST_K2Node_ComponentBoundEvent_16_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__EFFECTSSETTINGS_K2Node_ComponentBoundEvent_17_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__ToggleVSYNC_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleTEXTURELOADING_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleMOTIONBLUR_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleLENSFLARE_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleEYEADAPTATION_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleBLOOM_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleAOFRACTION_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleAO_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleDISTANCESHADOWS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__TEXTURES_K2Node_ComponentBoundEvent_962_OnButtonClick__DelegateSignature(int ButtonNumber);
	void ExecuteUbergraph_GraphicsWindow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
