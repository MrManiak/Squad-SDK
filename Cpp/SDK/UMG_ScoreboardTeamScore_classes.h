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

// WidgetBlueprintGeneratedClass UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C
// 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_03AA - 0x0000 // Minimum to subtract -> (0000)
class UUMG_ScoreboardTeamScore_C : public USQScoreboardTeamScore
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03AA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03AA, class UTextBlock*,                                                     BPDeathsText);                                             // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03AA, class UHorizontalBox*,                                                 BPEndOfRoundPanel);                                        // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03AA, class UTextBlock*,                                                     BPHealText);                                               // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03AA, class UTextBlock*,                                                     BPIncapsText);                                             // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03AA, class UTextBlock*,                                                     BPKillsText);                                              // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03AA, class USpacer*,                                                        BPNotEndOfRoundSpacer);                                    // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03AA, class UTextBlock*,                                                     BPObjectivesText);                                         // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03AA, class UTextBlock*,                                                     BPReviveText);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03AA, class UTextBlock*,                                                     BPScoreText);                                              // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_03AA, class UTextBlock*,                                                     BPTeamworkText);                                           // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ScoreboardTeamScore.UMG_ScoreboardTeamScore_C");
		return ptr;
	}


	void Construct();
	void BPInit();
	void ExecuteUbergraph_UMG_ScoreboardTeamScore(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
