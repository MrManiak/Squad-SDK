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

// WidgetBlueprintGeneratedClass ServerBrowserWindow.ServerBrowserWindow_C
// 0x0150 (FullSize[0x03B8] - InheritedSize[0x0268])
// LastOffsetWithSize(0x0268)
#define PADDING_01C7 - 0x0000 // Minimum to subtract -> (0000)
class UServerBrowserWindow_C : public USQServerBrowserWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01C7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0268(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01C7, class UButton*,                                                        Button_ClearSearch);                                       // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01C7, class UBorder*,                                                        CurrentServerParent);                                      // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01C7, class UImage*,                                                         Image_1);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01C7, class UImage*,                                                         Image_2);                                                  // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01C7, class UImage*,                                                         Image_4);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_01C7, class UUniformGridPanel*,                                              PromotedGrid);                                             // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_01C7, class UVerticalBox*,                                                   PromotedVerticalBox);                                      // 0x02A0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_01C7, class UEditableTextBox*,                                               SearchBox);                                                // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_01C7, class UServerDetails_C*,                                               ServerDetails_C_1);                                        // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_01C7, class UUniformGridPanel*,                                              ServerListGrid);                                           // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01C7, class USortableColumnButton_C*,                                        SortGameMode);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01C7, class USortableColumnButton_C*,                                        SORTHealth);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01C7, class USortableColumnButton_C*,                                        SORTMaps);                                                 // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01C7, class USortableColumnButton_C*,                                        SortNumPlayers);                                           // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01C7, class USortableColumnButton_C*,                                        SortPing);                                                 // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01C7, class USortableColumnButton_C*,                                        SortServerName);                                           // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01C7, class UWidgetSwitcher*,                                                SwitcherDetails);                                          // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_01C7, class UCircularThrobber*,                                              Throbber);                                                 // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01C7, class UWidgetSwitcher*,                                                WidgetSwitcher_Loading);                                   // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01C7, class UServerListItem_C*,                                              SelectedServerItem);                                       // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_01C7, int,                                                                   WrongVersionServerCount);                                  // 0x0310(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_01C7, int,                                                                   SameVersionServerCount);                                   // 0x0314(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_01C7, bool,                                                                  Show_Licensed_Servers);                                    // 0x0318(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B1 PADDING_01C7, bool,                                                                  Show_Unlicensed_Servers);                                  // 0x0319(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_01C7, struct FText,                                                          Browser_Header);                                           // 0x0320(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_01C7, int,                                                                   CurrentServerIndex);                                       // 0x0338(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_01C7, class UServerListItem_C*,                                              JoiningServer);                                            // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_01C7, bool,                                                                  Show_Queue_Window);                                        // 0x0348(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_01C7, TArray<struct FBlueprintSessionResult>,                                Results);                                                  // 0x0350(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_01C7, bool,                                                                  Is_Sorted);                                                // 0x0360(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0100 PADDING_01C7, class UMainMenuScreen_C*,                                              REF_MainMenu);                                             // 0x0368(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_01C7, struct FScriptMulticastDelegate,                                       Found_Sessions);                                           // 0x0370(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0118 PADDING_01C7, TArray<struct FBlueprintSessionResult>,                                Composited_Sessions);                                      // 0x0380(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0128 PADDING_01C7, bool,                                                                  Search_Complete);                                          // 0x0390(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0130 PADDING_01C7, struct FString,                                                        Current_Search);                                           // 0x0398(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_01C7, bool,                                                                  UseUniqueWhitelistBox);                                    // 0x03A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0141 PADDING_01C7, bool,                                                                  Has_Promoted_Servers);                                     // 0x03A9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0148 PADDING_01C7, class UBP_ServerPassword_C*,                                           ServerPasswordWidget);                                     // 0x03B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerBrowserWindow.ServerBrowserWindow_C");
		return ptr;
	}


	ESlateVisibility Set_Promoted_Box_Visibility();
	void Should_filter_server(const struct FBlueprintSessionResult& Session, bool* Hide);
	void Save_Last_Sort_Type(TEnumAsByte<E_SortType> Type, bool LastAscendingSortType);
	void Organise_List_Rows();
	void Add_unique_sessions(TArray<struct FBlueprintSessionResult>* Results);
	void Reset_Search();
	void Remove_Current_Server();
	void Check_Mods(class UServerListItem_C* ServerListItem, bool* In_Sync);
	void Set_Details_Widget_Switcher();
	void Sort_List_by_Health_Status(bool Ascending);
	void Sort_List(bool Is_Ascending, TEnumAsByte<E_SortType> Sort_Type);
	ECheckBoxState GetCheckedShowReservedSlots();
	ECheckBoxState GetCheckedShowQueuesSeparately();
	ESlateVisibility GetQueueServerButtonVisibility();
	bool GetQueueServerButtonIsEnabled();
	void StartQueue();
	ECheckBoxState GetCheckedShowEmptyServers();
	ECheckBoxState GetCheckedShowDiffServers();
	void GetServerIndex(int PingMs, int* Index);
	void UpdateSession(const struct FBlueprintSessionResult& Result);
	void AddNewServerWidget(const struct FBlueprintSessionResult& Result, class UServerListItem_C** Item);
	void ResetServerIndex();
	void ResetSortButtons();
	void StopUpdatingThrobber();
	ESlateVisibility GetLicensingNoticeVisibility();
	void UpdateServerList();
	void RequestJoinServer(const struct FBlueprintSessionResult& Session);
	void Construct();
	void passwordEnteredForced(const struct FString& Password, class UBP_ServerPassword_C* Sender);
	void OnSuccess(TArray<struct FBlueprintSessionResult> Results);
	void OnUpdateSession(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure();
	void Request_Join_Press(class UServerListItem_C* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_ClearSearch_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void Refresh_Last_Sorting();
	void passwordCancelled();
	void ExecuteUbergraph_ServerBrowserWindow(int EntryPoint);
	void Found_Sessions__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
