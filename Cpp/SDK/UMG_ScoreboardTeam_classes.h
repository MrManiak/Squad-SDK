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

// WidgetBlueprintGeneratedClass UMG_ScoreboardTeam.UMG_ScoreboardTeam_C
// 0x00F0 (FullSize[0x0498] - InheritedSize[0x03A8])
// LastOffsetWithSize(0x03A8)
#define PADDING_023D - 0x0000 // Minimum to subtract -> (0000)
class UUMG_ScoreboardTeam_C : public USQScoreboardTeam
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_023D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x03A8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_023D, class UImage*,                                                         BPColoredHeaderBarImage);                                  // 0x03B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_023D, class UImage*,                                                         BPColoredHeaderTabImage);                                  // 0x03B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_023D, class UHorizontalBox*,                                                 BPEndOfRoundHorizontal);                                   // 0x03C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_023D, class USpacer*,                                                        BPEnemyTeamPingAligner);                                   // 0x03C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_023D, class UImage*,                                                         BPFlagImage);                                              // 0x03D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_023D, class UCanvasPanel*,                                                   BpNonSquadPlayersCanvasPanel);                             // 0x03D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_023D, class USpacer*,                                                        BPNotEndOfRoundSpacer);                                    // 0x03E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_023D, class UImage*,                                                         BpObjectiveScore);                                         // 0x03E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_023D, class UTextBlock*,                                                     BpPlayerNumberText);                                       // 0x03F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_023D, class UGridPanel*,                                                     BPPlayersGrid);                                            // 0x03F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_023D, class UTextBlock*,                                                     BPRemainingTicketsText);                                   // 0x0400(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_023D, class UUMG_ScoreboardTeamScore_C*,                                     BPScoreboardTeamScore);                                    // 0x0408(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_023D, class UTextBlock*,                                                     BPScoreText);                                              // 0x0410(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_023D, class UImage*,                                                         BPSquadScore);                                             // 0x0418(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_023D, class UGridPanel*,                                                     BPSquadsGrid);                                             // 0x0420(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_023D, class UHorizontalBox*,                                                 BPTeamHorizontalBox);                                      // 0x0428(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_023D, class UTextBlock*,                                                     BPTeamNameText);                                           // 0x0430(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_023D, class UImage*,                                                         BPTicketIcon);                                             // 0x0438(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_023D, class UVerticalBox*,                                                   BPTopVerticalBox);                                         // 0x0440(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_023D, class UImage*,                                                         Deaths);                                                   // 0x0448(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_023D, class UImage*,                                                         Heal);                                                     // 0x0450(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_023D, class UImage*,                                                         Image_1);                                                  // 0x0458(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_023D, class UImage*,                                                         Image_2);                                                  // 0x0460(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_023D, class UImage*,                                                         Incaps);                                                   // 0x0468(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_023D, class UImage*,                                                         Ping);                                                     // 0x0470(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_023D, class UImage*,                                                         Revive);                                                   // 0x0478(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_023D, class UImage*,                                                         TB_Kills);                                                 // 0x0480(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_023D, class UTextBlock*,                                                     TB_Kit);                                                   // 0x0488(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_023D, class UImage*,                                                         VehicleImage);                                             // 0x0490(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ScoreboardTeam.UMG_ScoreboardTeam_C");
		return ptr;
	}


	class UWidget* Get_Ping_ToolTipWidget_1();
	class UWidget* Get_BPScoreText_ToolTipWidget_1();
	class UWidget* Get_BpObjectiveScore_ToolTipWidget_1();
	class UWidget* Get_BPSquadScore_ToolTipWidget_1();
	class UWidget* Get_Heal_ToolTipWidget_1();
	class UWidget* Get_Revive_ToolTipWidget_1();
	class UWidget* Get_Incaps_ToolTipWidget_1();
	class UWidget* Get_Deaths_ToolTipWidget_1();
	class UWidget* Get_TB_Kills_ToolTipWidget_1();
	class UWidget* Get_TB_Kit_ToolTipWidget_1();
	class UWidget* Get_VehicleImage_ToolTipWidget_1();
	void Construct();
	void BPInit();
	void ExecuteUbergraph_UMG_ScoreboardTeam(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
