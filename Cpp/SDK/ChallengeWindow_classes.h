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

// WidgetBlueprintGeneratedClass ChallengeWindow.ChallengeWindow_C
// 0x0108 (FullSize[0x02E8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0387 - 0x0000 // Minimum to subtract -> (0050)
class UChallengeWindow_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0387, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0387, class UMainMenu_Button_C*,                                             AcceptButton);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0387, class UMainMenu_Button_C*,                                             DenyButton);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0387, class UTextBlock*,                                                     Description);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0387, class UImage*,                                                         Line);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0387, class UTextBlock*,                                                     TitleTextBlock);                                           // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0387, class UImage*,                                                         TopLine);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0387, struct FText,                                                          TitleText);                                                // 0x0268(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0387, struct FText,                                                          DescriptionText);                                          // 0x0280(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0387, struct FText,                                                          LeftButtonText);                                           // 0x0298(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0387, struct FText,                                                          RightButtonText);                                          // 0x02B0(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0387, struct FScriptMulticastDelegate,                                       OnLeftButtonClicked);                                      // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0387, struct FScriptMulticastDelegate,                                       OnRightButtonClicked);                                     // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeWindow.ChallengeWindow_C");
		return ptr;
	}


	void SetDescription(const struct FText& InDescription);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__DenyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_ChallengeWindow(int EntryPoint);
	void OnRightButtonClicked__DelegateSignature();
	void OnLeftButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
