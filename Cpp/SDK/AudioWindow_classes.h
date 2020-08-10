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

// WidgetBlueprintGeneratedClass AudioWindow.AudioWindow_C
// 0x0121 (FullSize[0x0301] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02E1 - 0x0000 // Minimum to subtract -> (0050)
class UAudioWindow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02E1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02E1, class USettingsItem_GraphicsToggle_C*,                                 AudioInputDevice);                                         // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02E1, class USettingsItem_GraphicsToggle_C*,                                 AUDIOOUTPUTDEVICE);                                        // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02E1, class USettingsItem_GraphicsToggle_C*,                                 AUDIOQUALITY);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02E1, class USettingsItem_Slider_LR_C*,                                      COMMANDVOICEBALANCE);                                      // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02E1, class USettingsItem_Slider_C*,                                         COMMANDVOICEVOLUME);                                       // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02E1, class USettingsItem_Slider_C*,                                         EffectsVolume);                                            // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02E1, class USettingsItem_Slider_C*,                                         LOCALVOICEVOLUME);                                         // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02E1, class USettingsItem_Slider_C*,                                         MasterVolume);                                             // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02E1, class USettingsItem_Slider_C*,                                         MusicVolume);                                              // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02E1, class USettingsItem_Slider_C*,                                         OUTOFGAMEVOLUME);                                          // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_02E1, class USettingsItem_Slider_C*,                                         PrioritySpeakerDucking);                                   // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02E1, class UScrollBox*,                                                     ScrollBox);                                                // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_02E1, class UImage*,                                                         Separator0);                                               // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_02E1, class UImage*,                                                         Separator1);                                               // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_02E1, class USettingsItem_Slider_LR_C*,                                      SQUADVOICEBALANCE);                                        // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_02E1, class USettingsItem_Slider_C*,                                         SquadVoiceVolume);                                         // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_02E1, class USettingsItem_TickBox_C*,                                        ToggleCOMMANDBEEP);                                        // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_02E1, class USettingsItem_TickBox_C*,                                        ToggleLeaderOnlyBias);                                     // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_02E1, class USettingsItem_TickBox_C*,                                        ToggleRADIOFILTER);                                        // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_02E1, class USettingsItem_TickBox_C*,                                        ToggleSQUADBEEP);                                          // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_02E1, class USettingsItem_Slider_C*,                                         UIVolume);                                                 // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_02E1, TArray<struct FScreenResolutionStruct>,                                ScreenResolutions);                                        // 0x02E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0110 PADDING_02E1, TArray<struct FScreenResolutionStruct>,                                ValidResolutions);                                         // 0x02F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0120 PADDING_02E1, bool,                                                                  bConstructed);                                             // 0x0300(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioWindow.AudioWindow_C");
		return ptr;
	}


	void UpdateSoundDevices();
	class UWidget* Get_ToggleSQUADBEEP_ToolTipWidget_1();
	class UWidget* Get_ToggleCOMMANDBEEP_ToolTipWidget_1();
	class UWidget* Get_OUTOFGAMENEW_ToolTipWidget_1();
	void UpdateButtons();
	void Construct();
	void BndEvt__AUDIONEW_K2Node_ComponentBoundEvent_51_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__ToggleCOMMANDBEEP_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleSQUADBEEP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__ToggleRADIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void BndEvt__MASTERNEW_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__EFFECTSNEW_K2Node_ComponentBoundEvent_49_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__UINEW_K2Node_ComponentBoundEvent_82_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__OUTOFGAMENEW_K2Node_ComponentBoundEvent_150_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__COMMANDVOICENEW_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__VOICENEW_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__LOCALVOICENEW_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature(float Value);
	void APPLY();
	void Revert();
	void Default();
	void BndEvt__MUSICNEW_K2Node_ComponentBoundEvent_27_OnCaptureEnd__DelegateSignature(float Value);
	void BndEvt__CommandVoiceBias_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SquadVoiceBias_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__PrioritySpeakerDucking_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__AUDIOOUTPUTDEVICE_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__AUDIOINPUTDEVICE_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature(int ButtonNumber);
	void BndEvt__ToggleLeaderOnlyBias_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void ExecuteUbergraph_AudioWindow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
