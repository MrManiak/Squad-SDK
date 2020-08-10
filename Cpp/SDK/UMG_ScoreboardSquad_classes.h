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

// WidgetBlueprintGeneratedClass UMG_ScoreboardSquad.UMG_ScoreboardSquad_C
// 0x0088 (FullSize[0x0390] - InheritedSize[0x0308])
// LastOffsetWithSize(0x0308)
#define PADDING_0CC4 - 0x0000 // Minimum to subtract -> (0000)
class UUMG_ScoreboardSquad_C : public USQScoreboardSquad
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CC4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0308(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CC4, class UTextBlock*,                                                     BPDeathsText);                                             // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CC4, class UHorizontalBox*,                                                 BPEndOfRoundHorizontalBox);                                // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CC4, class UTextBlock*,                                                     BPHealText);                                               // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0CC4, class UTextBlock*,                                                     BPIncapsText);                                             // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0CC4, class UTextBlock*,                                                     BPKillsText);                                              // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0CC4, class USpacer*,                                                        BPNotEndOfRoundSpacer);                                    // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0CC4, class UTextBlock*,                                                     BPObjectiveText);                                          // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0CC4, class UGridPanel*,                                                     BPPlayersGrid);                                            // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0CC4, class UTextBlock*,                                                     BPReviveText);                                             // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CC4, class UTextBlock*,                                                     BPScoreText);                                              // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CC4, class UImage*,                                                         BPSquadColorImage);                                        // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CC4, class UTextBlock*,                                                     BPSquadNameText);                                          // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CC4, class UTextBlock*,                                                     BPSquadNumberText);                                        // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CC4, class UImage*,                                                         BPTalkingImage);                                           // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CC4, class UTextBlock*,                                                     BPTeamworkText);                                           // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CC4, class UImage*,                                                         Image_1);                                                  // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ScoreboardSquad.UMG_ScoreboardSquad_C");
		return ptr;
	}


	void Sort_Squad();
	void Construct();
	void BPInit();
	void UpdateState();
	void ExecuteUbergraph_UMG_ScoreboardSquad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
