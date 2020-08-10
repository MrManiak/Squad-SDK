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

// WidgetBlueprintGeneratedClass W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C
// 0x00F4 (FullSize[0x02D4] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02CA - 0x0000 // Minimum to subtract -> (0050)
class UW_Tooltip_VehicleSeatItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02CA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02CA, class UBorder*,                                                        Border_Main);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02CA, class UImage*,                                                         CommanderStar);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02CA, class UTextBlock*,                                                     FT_Text);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02CA, class UImage*,                                                         Kit_Image);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02CA, class UTextBlock*,                                                     PlayerName_Text);                                          // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02CA, class UImage*,                                                         Rank);                                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02CA, class UImage*,                                                         SquadID_BG);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_02CA, class USizeBox*,                                                       SquadID_SizeBox);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_02CA, class UTextBlock*,                                                     SquadID_Text);                                             // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_02CA, class ASQPlayerController*,                                            PC);                                                       // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_02CA, class USQMapWidgetVehicle*,                                            Vehicle_Widget);                                           // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_02CA, struct FSQVehicleOccupantInfo,                                         Occupant_Info);                                            // 0x0290(0x0038)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_02CA, bool,                                                                  Is_Self_Team);                                             // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00EC PADDING_02CA, int,                                                                   My_Seat_ID);                                               // 0x02CC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_02CA, int,                                                                   Seat_Index);                                               // 0x02D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tooltip_VehicleSeatItem.W_Tooltip_VehicleSeatItem_C");
		return ptr;
	}


	void ShowHideCommanderStar();
	bool Self_Squad();
	void Update_Fireteam();
	void UpdateRank();
	void UpdateSquadVisuals();
	void UpdateKitVisuals();
	void Get_Tint(struct FLinearColor* Out_Color);
	void Construct();
	void Update_Occupant(const struct FSQVehicleOccupantInfo& Occupant_Info, class USQMapWidgetVehicle* Vehicle_Widget, bool Is_Self_Team, int My_Seat_ID, int Seat_Index);
	void ExecuteUbergraph_W_Tooltip_VehicleSeatItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
