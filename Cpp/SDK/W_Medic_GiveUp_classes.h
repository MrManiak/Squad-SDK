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

// WidgetBlueprintGeneratedClass W_Medic_GiveUp.W_Medic_GiveUp_C
// 0x00E4 (FullSize[0x02C4] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_032D - 0x0000 // Minimum to subtract -> (0050)
class UW_Medic_GiveUp_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_032D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_032D, class UMainMenu_Button_C*,                                             Button_CallMedic);                                         // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_032D, class UMainMenu_Button_C*,                                             Button_Giveup);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_032D, class UChallengeWindow_C*,                                             ChallengeGiveUp);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_032D, class UImage*,                                                         Image_1);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_032D, class USettingsItem_TickBox_C*,                                        SettingsItem_TickBox);                                     // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_032D, class UBorder*,                                                        SkipBorder);                                               // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_032D, class UTextBlock*,                                                     TB_Bleed);                                                 // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_032D, class UTextBlock*,                                                     TB_MedicDistance);                                         // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_032D, class UWidgetSwitcher*,                                                WidgetSwitcher_1);                                         // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_032D, class ASQPlayerController*,                                            My_PC);                                                    // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_032D, struct FSQInputState,                                                  Wounded_Stack);                                            // 0x0288(0x0020)  (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_032D, class USaveData_UI_C*,                                                 Current_Save);                                             // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_032D, float,                                                                 Incrementing_Medic_Call_Delay);                            // 0x02B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_032D, bool,                                                                  Can_Medic_Call);                                           // 0x02B4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_032D, struct FTimerHandle,                                                   Medic_Cooldown);                                           // 0x02B8(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_032D, float,                                                                 Initial_Delay_Time);                                       // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Medic_GiveUp.W_Medic_GiveUp_C");
		return ptr;
	}


	void Get_Visibility_if_Dead(bool* is_visible);
	void Get_Teammate_Distance(class ASQSoldier** Teammate, float* distance);
	void OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D(class UObject* Loaded);
	void Construct();
	void Refresh();
	void BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature();
	void BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button);
	void GiveUp();
	void BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Enable_Medic_Button();
	void Initial_Delay_for_Medic_Call();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Medic_GiveUp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
