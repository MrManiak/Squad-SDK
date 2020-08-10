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

// WidgetBlueprintGeneratedClass UMG_NameTag.UMG_NameTag_C
// 0x0184 (FullSize[0x0364] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_007A - 0x0000 // Minimum to subtract -> (0050)
class UUMG_NameTag_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_007A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_007A, class UWidgetAnimation*,                                               FadeIn);                                                   // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_007A, class UTextBlock*,                                                     FTID);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_007A, class UImage*,                                                         Image_3);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_007A, class UImage*,                                                         Kit_Image);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_007A, class UBorder*,                                                        OpacityBorder_Info);                                       // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_007A, class UBorder*,                                                        OpacityBorder_Rank);                                       // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_007A, class UImage*,                                                         RankImage);                                                // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_007A, class UVerticalBox*,                                                   RootBox);                                                  // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_007A, class UScaleBox*,                                                      ScaleKit);                                                 // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_007A, class UTextBlock*,                                                     SQID);                                                     // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_007A, class UTextBlock*,                                                     SquadID_Top);                                              // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_007A, class UTextBlock*,                                                     TB_Name);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_007A, class UWidgetSwitcher*,                                                WidgetSwitcher_Rank);                                      // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_007A, bool,                                                                  Can_Render);                                               // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_007A, class ASQPlayerState*,                                                 REF_Owning_Player_State);                                  // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_007A, class APlayerCameraManager*,                                           REF_CameraManager);                                        // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_007A, float,                                                                 Current_Rank_Opacity);                                     // 0x02B8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DC PADDING_007A, float,                                                                 Current_Info_Opacity);                                     // 0x02BC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_007A, float,                                                                 Smooth_Screen_Position_Speed);                             // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_007A, bool,                                                                  Is_My_Squad_Leader_Tag);                                   // 0x02C4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_007A, float,                                                                 Scale);                                                    // 0x02C8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EC PADDING_007A, float,                                                                 Max_Opacity);                                              // 0x02CC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_007A, bool,                                                                  Show_Kit);                                                 // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F1 PADDING_007A, bool,                                                                  Show_Name);                                                // 0x02D1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_007A, class APawn*,                                                          Focussed_Pawn);                                            // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_007A, float,                                                                 Z_Offset_Standing);                                        // 0x02E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0104 PADDING_007A, float,                                                                 Z_Offset_Crouching);                                       // 0x02E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_007A, float,                                                                 Z_Offset_Prone);                                           // 0x02E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_007A, struct FVector2D,                                                      Desired_Screen_Location);                                  // 0x02EC(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_007A, class UCanvasPanelSlot*,                                               My_Canvas_Slot);                                           // 0x02F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_007A, float,                                                                 Z_Offset_Vehicle);                                         // 0x0300(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0124 PADDING_007A, float,                                                                 Close_Range_for_Close_Angle___cm_);                        // 0x0304(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_007A, float,                                                                 Far_Range_for_Far_Angle__cm_);                             // 0x0308(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_007A, float,                                                                 Required_Close_Angle__0_1_);                               // 0x030C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_007A, float,                                                                 Required_Far_Angle__0_0_9999_);                            // 0x0310(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0134 PADDING_007A, float,                                                                 Maximum_Range_Whole__cm_);                                 // 0x0314(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_007A, float,                                                                 Minimum_Fade_Range_My_SL__cm_);                            // 0x0318(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x013C PADDING_007A, float,                                                                 Maximum_Fade_Range_My_SL__cm_);                            // 0x031C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_007A, bool,                                                                  In_Threshold);                                             // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0148 PADDING_007A, struct FNametagTargetInfo,                                             CachedTargetInfo);                                         // 0x0328(0x0030)  (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0178 PADDING_007A, bool,                                                                  Save_Data_SL_Visible);                                     // 0x0358(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0179 PADDING_007A, bool,                                                                  Save_Data_FT_Visible);                                     // 0x0359(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x017C PADDING_007A, float,                                                                 Maximum_Range_Info__cm_);                                  // 0x035C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0180 PADDING_007A, float,                                                                 Current_Focus_Strength);                                   // 0x0360(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NameTag.UMG_NameTag_C");
		return ptr;
	}


	void Update_FT_Save_Data();
	void Update_SL_Save_Data();
	void Cache_Data();
	void Refresh_Tag();
	void Get_SL_In_Vehicle(class ASQVehicle* V, class ASQPlayerState** SL);
	struct FLinearColor GetContentColor_BOTTOM();
	struct FLinearColor GetContentColor_TOP();
	void Calc_Target_Info(bool* Success, class ASQSquadState** SquadState, class ASQPlayerState** SQ_Player_State, struct FText* PlayerName, bool* SL, bool* Same_Squad, int* Vehicle_Occupants);
	void Get_Tag_Test_Location(class APawn* Pawn, struct FVector* Location);
	struct FSlateBrush Get_Kit_Image();
	void Get_ADS(bool* In_ADS);
	void Find_Target();
	void Update_Opacity();
	struct FLinearColor Get_Color();
	void Load_Saved_Settings(class USQGameUserSettings* UserSettings);
	void Get_Local_State();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Timer_Check_Threshold();
	void Construct();
	void Looping_Refresh();
	void FindTargetEvent();
	void RefreshTagEvent();
	void ExecuteUbergraph_UMG_NameTag(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
