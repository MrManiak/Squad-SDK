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

// WidgetBlueprintGeneratedClass W_TerritoryControl_Bar.W_TerritoryControl_Bar_C
// 0x00A0 (FullSize[0x0280] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03FE - 0x0000 // Minimum to subtract -> (0050)
class UW_TerritoryControl_Bar_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03FE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03FE, class UHorizontalBox*,                                                 EnemyTeamTickets);                                         // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03FE, class UProgressBar*,                                                   ProgressBar_WinPercent);                                   // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03FE, class UHorizontalBox*,                                                 SelfTeamTickets);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03FE, class USlider*,                                                        Slider_WinPercent);                                        // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03FE, class UTextBlock*,                                                     TB_Hexes);                                                 // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03FE, class UTextBlock*,                                                     TB_Tickets_EnemyTeam);                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03FE, class UTextBlock*,                                                     TB_Tickets_SelfTeam);                                      // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03FE, class ATC_HexGraph_C*,                                                 TC_Graph);                                                 // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03FE, class ASQPlayerController*,                                            My_PC);                                                    // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TerritoryControl_Bar.W_TerritoryControl_Bar_C");
		return ptr;
	}


	void Set_Flags();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Bind_Team_Change();
	void Team_Changed_Event(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam);
	void ExecuteUbergraph_W_TerritoryControl_Bar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
