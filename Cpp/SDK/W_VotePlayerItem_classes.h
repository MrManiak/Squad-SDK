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

// WidgetBlueprintGeneratedClass W_VotePlayerItem.W_VotePlayerItem_C
// 0x004D (FullSize[0x029D] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_03BB - 0x0000 // Minimum to subtract -> (0000)
class UW_VotePlayerItem_C : public USQCommanderVotingPlayerItem
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03BB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03BB, class UBorder*,                                                        Border_Main);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03BB, class UImage*,                                                         Image_tick);                                               // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03BB, class UButton*,                                                        SelectButton);                                             // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03BB, class UTextBlock*,                                                     TBVoteeName);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03BB, class UTextBlock*,                                                     TBVotes);                                                  // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03BB, bool,                                                                  bSelected_TEMP);                                           // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03BB, struct FString,                                                        VoteeName_TEMP);                                           // 0x0288(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03BB, int,                                                                   VoteCount_TEMP);                                           // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_03BB, bool,                                                                  NewVar_1);                                                 // 0x029C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VotePlayerItem.W_VotePlayerItem_C");
		return ptr;
	}


	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void OnIsVotedByPlayerChanged();
	void OnNomineeNameChanged();
	void OnVoteCountChanged();
	void ExecuteUbergraph_W_VotePlayerItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
