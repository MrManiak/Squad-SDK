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

// WidgetBlueprintGeneratedClass W_Tooltip_Soldier.W_Tooltip_Soldier_C
// 0x00C8 (FullSize[0x02A8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04FC - 0x0000 // Minimum to subtract -> (0050)
class UW_Tooltip_Soldier_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04FC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04FC, class UBorder*,                                                        Border_Main);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04FC, class UImage*,                                                         CommanderStar);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04FC, class UTextBlock*,                                                     FT_Text);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04FC, class UImage*,                                                         Kit_Image);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04FC, class UTextBlock*,                                                     PlayerName_Text);                                          // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04FC, class UImage*,                                                         Rank);                                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04FC, class USizeBox*,                                                       SquadID_SizeBox);                                          // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04FC, class UTextBlock*,                                                     SquadID_Text);                                             // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04FC, class UImage*,                                                         SquadLeaderBG);                                            // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04FC, struct FSQSoldierInfo,                                                 Soldier_Info);                                             // 0x0280(0x0028)  (Edit, BlueprintVisible, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tooltip_Soldier.W_Tooltip_Soldier_C");
		return ptr;
	}


	void ShowHideCommanderStar();
	void Update_Fireteam();
	void Update_Rank();
	void Update_Tint_Color(const struct FLinearColor& Color);
	void UpdateSquadVisuals();
	void UpdateKitVisuals();
	void Construct();
	void Update_Info(const struct FSQSoldierInfo& Soldier_Info);
	void ExecuteUbergraph_W_Tooltip_Soldier(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
