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

// WidgetBlueprintGeneratedClass W_CommandVoteParent.W_CommandVoteParent_C
// 0x00A8 (FullSize[0x02F0] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_04A8 - 0x0000 // Minimum to subtract -> (0008)
class UW_CommandVoteParent_C : public USQCommanderVotingWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_04A8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04A8, class UBorder*,                                                        Border_1);                                                 // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04A8, class UMainMenu_Button_C*,                                             ButtonCommander);                                          // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04A8, class UScrollBox*,                                                     CommandVoteScrollBox);                                     // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04A8, class UGridPanel*,                                                     Grid_Votee);                                               // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04A8, class UImage*,                                                         Image_1);                                                  // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04A8, class UImage*,                                                         Image_2);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04A8, class UTextBlock*,                                                     TB_CommandVote);                                           // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04A8, class UTextBlock*,                                                     TB_TimerText);                                             // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04A8, class UBorder*,                                                        TimerBorder);                                              // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04A8, class UVerticalBox*,                                                   TopPanel);                                                 // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04A8, struct FTimerHandle,                                                   Vote_Handle);                                              // 0x02A8(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04A8, float,                                                                 TimerDuration);                                            // 0x02B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04A8, class ASQCommanderState*,                                              Cache_Commander_State);                                    // 0x02B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04A8, class ASQPlayerController*,                                            My_PC);                                                    // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04A8, bool,                                                                  Can_Vote);                                                 // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04A8, class ASQPlayerState*,                                                 My_PS);                                                    // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04A8, struct FText,                                                          Commander_Name);                                           // 0x02D8(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandVoteParent.W_CommandVoteParent_C");
		return ptr;
	}


	void Get_Can_Use_Button(bool* Valid, struct FText* Reason);
	void Update_Appearance();
	void UpdateVisibilities();
	struct FText Get_TB_VoteActiveText_Text_1();
	void BPInit();
	void BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnIsVoteInProgressChanged();
	void OnIsVotingAvailableChanged();
	void Construct();
	void Cache_Player_State();
	void ExecuteUbergraph_W_CommandVoteParent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
