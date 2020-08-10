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

// WidgetBlueprintGeneratedClass TravelQueueWidgetSmall.TravelQueueWidgetSmall_C
// 0x0268 (FullSize[0x0448] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04F8 - 0x0000 // Minimum to subtract -> (0050)
class UTravelQueueWidgetSmall_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04F8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04F8, class UWidgetAnimation*,                                               OpenClose);                                                // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04F8, class UTextBlock*,                                                     TB_Position);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04F8, bool,                                                                  Open);                                                     // 0x0248(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x006C PADDING_04F8, int,                                                                   Secs_to_Join);                                             // 0x024C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04F8, class UMainMenuScreen_C*,                                              REF_Menu);                                                 // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04F8, struct FBlueprintSessionResult,                                        Queued_Session);                                           // 0x0258(0x00B8)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0130 PADDING_04F8, bool,                                                                  Can_Toggle_Open);                                          // 0x0310(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0138 PADDING_04F8, struct FString,                                                        Marquee_String);                                           // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_04F8, bool,                                                                  was_hovered);                                              // 0x0328(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0150 PADDING_04F8, struct FTimerHandle,                                                   Count_down_handle);                                        // 0x0330(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_04F8, struct FText,                                                          Position);                                                 // 0x0338(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0170 PADDING_04F8, struct FText,                                                          Status);                                                   // 0x0350(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0188 PADDING_04F8, struct FText,                                                          Queue_Details);                                            // 0x0368(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_04F8, class ASQJoinBeaconClient*,                                            Current_Queue);                                            // 0x0380(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_04F8, class USQGameInstance*,                                                Game_Instance);                                            // 0x0388(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_04F8, struct FBlueprintSessionResult,                                        Pending_Server);                                           // 0x0390(0x00B8)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TravelQueueWidgetSmall.TravelQueueWidgetSmall_C");
		return ptr;
	}


	ESlateVisibility Bind_Visibility_via_bToggle();
	struct FText Bind_Text_Detailed_Queue_2();
	struct FText Bind_Text_Detailed_Queue_1();
	struct FText Bind_Text_Countdown();
	struct FText Bind_Text_Position();
	void Get_Queue(class ASQJoinBeaconClient** JoinQueueClient);
	void Marquee();
	void Construct();
	void Check_Queue();
	void ExecuteUbergraph_TravelQueueWidgetSmall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
