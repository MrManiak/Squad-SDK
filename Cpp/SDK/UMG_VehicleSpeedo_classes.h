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

// WidgetBlueprintGeneratedClass UMG_VehicleSpeedo.UMG_VehicleSpeedo_C
// 0x0118 (FullSize[0x02F8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04E4 - 0x0000 // Minimum to subtract -> (0050)
class UUMG_VehicleSpeedo_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04E4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04E4, class UBorder*,                                                        Border_Gear);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04E4, class UCanvasPanel*,                                                   DialNumParent);                                            // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04E4, class UImage*,                                                         FrontImage);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04E4, class UImage*,                                                         Image_1);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04E4, class UOverlay*,                                                       PitchParent);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04E4, class UHorizontalBox*,                                                 RearmBox);                                                 // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04E4, class UImage*,                                                         REVs);                                                     // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04E4, class UOverlay*,                                                       RollParent);                                               // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04E4, class UImage*,                                                         SideImage);                                                // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04E4, class UImage*,                                                         SpeedArrow);                                               // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_04E4, class UOverlay*,                                                       SpeedParent);                                              // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_04E4, class UTextBlock*,                                                     TB_Cost);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_04E4, class UTextBlock*,                                                     TB_Gear);                                                  // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_04E4, class ASQGroundVehicle*,                                               My_Vehicle);                                               // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_04E4, float,                                                                 Speed);                                                    // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CC PADDING_04E4, float,                                                                 RPM);                                                      // 0x02AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_04E4, float,                                                                 Warning_Roll);                                             // 0x02B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_04E4, float,                                                                 Warning_Pitch);                                            // 0x02B4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_04E4, class UMaterialInstanceDynamic*,                                       MI_Revs);                                                  // 0x02B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_04E4, float,                                                                 RevsPercent);                                              // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_04E4, class ASQPlayerController*,                                            My_PC);                                                    // 0x02C8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_04E4, class ASQPlayerState*,                                                 My_PS);                                                    // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_04E4, class UTexture2D*,                                                     DefaultFrontImage);                                        // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_04E4, class UTexture2D*,                                                     DefaultSideImage);                                         // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_04E4, class ASQSoldierNew*,                                                  My_Soldier);                                               // 0x02E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_04E4, struct FTimerHandle,                                                   Refresh_Timer);                                            // 0x02F0(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_VehicleSpeedo.UMG_VehicleSpeedo_C");
		return ptr;
	}


	void Refresh_Data();
	void Rearm_Cost();
	void Hide_Widget();
	void Refresh_Icon();
	void Update_Revs();
	void Clear_Dial_Numbers();
	void DrawDialNumbers();
	struct FLinearColor GearColor();
	void Refresh_Widget();
	struct FText GearText();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh_Dial();
	void Update_Vehicle(class ASQSoldier* Soldier, class ASQVehicle* Vehicle, class USQVehicleSeatComponent* FromSeat, class USQVehicleSeatComponent* ToSeat);
	void Changed_Team(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam);
	void Get_Soldier();
	void Soldier_Died();
	void Validate_Visibility();
	void ExecuteUbergraph_UMG_VehicleSpeedo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
