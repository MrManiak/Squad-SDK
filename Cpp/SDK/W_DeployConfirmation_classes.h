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

// WidgetBlueprintGeneratedClass W_DeployConfirmation.W_DeployConfirmation_C
// 0x00A9 (FullSize[0x0289] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_040A - 0x0000 // Minimum to subtract -> (0050)
class UW_DeployConfirmation_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_040A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_040A, class UMainMenu_Button_C*,                                             CancelButton);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_040A, class USizeBox*,                                                       CancelSizeBox);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_040A, class UMainMenu_Button_C*,                                             ConfirmButton);                                            // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_040A, class UWidgetSwitcher*,                                                ConfirmSwitcher);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_040A, class UOverlay*,                                                       Overlay_DeployButton);                                     // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_040A, class UTextBlock*,                                                     TB_Description);                                           // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_040A, class UTextBlock*,                                                     TB_Timer);                                                 // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_040A, class UImage*,                                                         TopLine);                                                  // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_040A, class ASQPlayerController*,                                            My_PC);                                                    // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_040A, class ASQGameSpawn*,                                                   SelectedSpawnPoint);                                       // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_040A, bool,                                                                  Confirmed);                                                // 0x0288(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DeployConfirmation.W_DeployConfirmation_C");
		return ptr;
	}


	void BndEvt__DeployButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Refresh();
	void Construct();
	void Cache_Player();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void New_Spawn_Selected();
	void Confirm_Spawn();
	void ExecuteUbergraph_W_DeployConfirmation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
