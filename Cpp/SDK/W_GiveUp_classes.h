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

// WidgetBlueprintGeneratedClass W_GiveUp.W_GiveUp_C
// 0x0099 (FullSize[0x0279] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0376 - 0x0000 // Minimum to subtract -> (0050)
class UW_GiveUp_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0376, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0376, class UMainMenu_Button_C*,                                             GiveUpButton);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0376, class UImage*,                                                         Image_1);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0376, class UTextBlock*,                                                     TB_Bleed);                                                 // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0376, class ASQPlayerController*,                                            My_PC);                                                    // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0376, struct FScriptMulticastDelegate,                                       GiveUpPressed);                                            // 0x0258(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0376, struct FScriptMulticastDelegate,                                       Hide_Confirmation);                                        // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0376, bool,                                                                  Collapse_On_Hide);                                         // 0x0278(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GiveUp.W_GiveUp_C");
		return ptr;
	}


	void Update_Visibility(bool* is_visible);
	void Construct();
	void Refresh();
	void Confirm_GiveUp();
	void BndEvt__GiveUpButton_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_W_GiveUp(int EntryPoint);
	void Hide_Confirmation__DelegateSignature();
	void GiveUpPressed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
