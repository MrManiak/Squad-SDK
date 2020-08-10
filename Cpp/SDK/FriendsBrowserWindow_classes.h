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

// WidgetBlueprintGeneratedClass FriendsBrowserWindow.FriendsBrowserWindow_C
// 0x00C0 (FullSize[0x0300] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_04A5 - 0x0000 // Minimum to subtract -> (0000)
class UFriendsBrowserWindow_C : public USQFriendsBrowserWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04A5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04A5, class UButton*,                                                        Button_ClearSearch);                                       // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04A5, class UUniformGridPanel*,                                              FriendListGrid);                                           // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04A5, class UImage*,                                                         Image_4);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04A5, class UEditableTextBox*,                                               SearchBox);                                                // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04A5, class UTextBlock*,                                                     TB_Name);                                                  // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04A5, class UTextBlock*,                                                     TB_Status);                                                // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04A5, class UTextBlock*,                                                     TextBlock_4);                                              // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04A5, class UThrobber*,                                                      Throbber_1);                                               // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04A5, class UWidgetSwitcher*,                                                WidgetSwitcher_Loading);                                   // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04A5, TArray<struct FSQBlueprintFriend>,                                     Current_Friends);                                          // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04A5, struct FScriptMulticastDelegate,                                       Finished_Search);                                          // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04A5, TArray<class UFriendListItem_C*>,                                      Friend_List_Items);                                        // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04A5, struct FScriptMulticastDelegate,                                       Finished_Refresh);                                         // 0x02C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04A5, struct FScriptMulticastDelegate,                                       Start_Search);                                             // 0x02D0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04A5, struct FScriptMulticastDelegate,                                       Set_Composited_Sessions);                                  // 0x02E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_04A5, TArray<struct FBlueprintSessionResult>,                                Current_Sessions);                                         // 0x02F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendsBrowserWindow.FriendsBrowserWindow_C");
		return ptr;
	}


	void Parse_Friends_and_Sessions();
	void Clear_Search();
	void Search_Friends(const struct FString& Substring);
	void Construct();
	void OnSuccess(TArray<struct FSQBlueprintFriend> Results);
	void OnFailure();
	void Refresh_Friends();
	void BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_462_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void Set_Composited_Sessions_Event(TArray<struct FBlueprintSessionResult>* Sessions);
	void ExecuteUbergraph_FriendsBrowserWindow(int EntryPoint);
	void Set_Composited_Sessions__DelegateSignature(TArray<struct FBlueprintSessionResult>* Sessions);
	void Start_Search__DelegateSignature();
	void Finished_Refresh__DelegateSignature();
	void Finished_Search__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
