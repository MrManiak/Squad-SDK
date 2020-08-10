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

// WidgetBlueprintGeneratedClass TravelQueueWidget.TravelQueueWidget_C
// 0x0200 (FullSize[0x03E0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_032C - 0x0000 // Minimum to subtract -> (0050)
class UTravelQueueWidget_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_032C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_032C, class UWidgetAnimation*,                                               OpenClose);                                                // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_032C, class UButton*,                                                        Button_Toggle);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_032C, class UImage*,                                                         Image_2);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_032C, class UImage*,                                                         Image_3);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_032C, class UMainMenu_Button_C*,                                             LeaveQueue);                                               // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_032C, class UVerticalBox*,                                                   Queue);                                                    // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_032C, class USizeBox*,                                                       SizeBox_1);                                                // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_032C, class UTextBlock*,                                                     TB_Details1);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_032C, class UTextBlock*,                                                     TB_Details2);                                              // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_032C, class UTextBlock*,                                                     TB_MapName);                                               // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_032C, class UTextBlock*,                                                     TB_Position);                                              // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_032C, class UTextBlock*,                                                     TB_ServerName);                                            // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_032C, class UImage*,                                                         TopLine);                                                  // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_032C, bool,                                                                  Open);                                                     // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_032C, int,                                                                   Secs_to_Join);                                             // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_032C, class UMainMenuScreen_C*,                                              REF_Menu);                                                 // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_032C, struct FBlueprintSessionResult,                                        Queued_Session);                                           // 0x02B0(0x00B8)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0188 PADDING_032C, bool,                                                                  Can_Toggle_Open);                                          // 0x0368(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0190 PADDING_032C, struct FString,                                                        Marquee_String);                                           // 0x0370(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_032C, bool,                                                                  was_hovered);                                              // 0x0380(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_032C, struct FTimerHandle,                                                   Count_down_handle);                                        // 0x0388(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_032C, struct FText,                                                          Position);                                                 // 0x0390(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_032C, struct FText,                                                          Status);                                                   // 0x03A8(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x01E0 PADDING_032C, struct FText,                                                          Queue_Details);                                            // 0x03C0(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x01F8 PADDING_032C, class ASQJoinBeaconClient*,                                            Current_Queue);                                            // 0x03D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TravelQueueWidget.TravelQueueWidget_C");
		return ptr;
	}


	ESlateVisibility Bind_Visibility_via_bToggle();
	struct FText Bind_Text_Detailed_Queue_2();
	struct FText Bind_Text_Detailed_Queue_1();
	struct FText Bind_Text_Countdown();
	struct FText Bind_Text_Position();
	void Get_Queue(class ASQJoinBeaconClient** JoinQueueClient);
	void OnFailure_338384884E6EB2D7330F46BC3A121CC7();
	void OnSuccess_338384884E6EB2D7330F46BC3A121CC7();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void Start_Countdown(const struct FBlueprintSessionResult& Sesh);
	void Count_Down();
	void Lock_Open();
	void BndEvt__CancelTravel_K2Node_ComponentBoundEvent_220_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__LeaveQueue_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Reset_Queue_Window();
	void Initiate_Travel(const struct FBlueprintSessionResult& Session);
	void Construct();
	void Marquee();
	void New_Queue();
	void ExecuteUbergraph_TravelQueueWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
