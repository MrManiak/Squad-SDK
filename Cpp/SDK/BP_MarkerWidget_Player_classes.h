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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Player.BP_MarkerWidget_Player_C
// 0x0138 (FullSize[0x03AC] - InheritedSize[0x0274])
// LastOffsetWithSize(0x0274)
#define PADDING_0017 - 0x0000 // Minimum to subtract -> (0004)
class UBP_MarkerWidget_Player_C : public USQMapSoldierIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0017, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_0017, class UWidgetAnimation*,                                               PlayerWoundedAnim);                                        // 0x0280(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0017, class UWidgetAnimation*,                                               PlayerIncapAnim);                                          // 0x0288(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0017, class UWidgetAnimation*,                                               SelfPulseAnim);                                            // 0x0290(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0017, class UCanvasPanel*,                                                   IncapPanel);                                               // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_0017, class UImage*,                                                         MedicOverlayImage);                                        // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0017, class UImage*,                                                         Player_Cone_Image);                                        // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_0017, class UImage*,                                                         Player_Image);                                             // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0017, class UScaleBox*,                                                      PlayerPulseScaleBox);                                      // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_0017, class UImage*,                                                         PulseImage);                                               // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0017, class UTextBlock*,                                                     SL_Text);                                                  // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_0017, class UOverlay*,                                                       WidgetOverlay);                                            // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0017, class UImage*,                                                         WoundedBackground);                                        // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_0017, class UImage*,                                                         WoundedBloodDrop);                                         // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0017, class UCanvasPanel*,                                                   WoundedPanel);                                             // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_0017, class UImage*,                                                         WoundedRing);                                              // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0017, struct FLinearColor,                                                   Self_Color);                                               // 0x02F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0017, struct FLinearColor,                                                   EnemyColor);                                               // 0x0308(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0017, struct FLinearColor,                                                   SquadColor);                                               // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0017, struct FLinearColor,                                                   TeamColor);                                                // 0x0328(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_0017, class UTexture2D*,                                                     SquadLeaderImage);                                         // 0x0338(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CC PADDING_0017, class UTexture2D*,                                                     Medic_Overlay_Image);                                      // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_0017, class UTexture2D*,                                                     Self_Image);                                               // 0x0348(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DC PADDING_0017, class UTexture2D*,                                                     PlayerImage);                                              // 0x0350(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_0017, float,                                                                 MapAngleAdjust);                                           // 0x0358(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0017, float,                                                                 SL_Scale);                                                 // 0x035C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0017, float,                                                                 SelfScale);                                                // 0x0360(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0017, float,                                                                 Medic_Overlay_Scale);                                      // 0x0364(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_0017, float,                                                                 SoldierScale);                                             // 0x0368(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0017, float,                                                                 Medic_Scale);                                              // 0x036C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0017, struct FScriptMulticastDelegate,                                       CloseTooltip);                                             // 0x0370(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x010C PADDING_0017, struct FVector2D,                                                      DefaultPulseScale);                                        // 0x0380(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0017, struct FVector2D,                                                      PlayerPulseSLScale);                                       // 0x0388(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_0017, bool,                                                                  bIncapAnimPlaying);                                        // 0x0390(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x011D PADDING_0017, bool,                                                                  bBleedingAnimPlaying);                                     // 0x0391(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0124 PADDING_0017, class UTexture2D*,                                                     VehicleImage);                                             // 0x0398(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_0017, float,                                                                 VehicleScale);                                             // 0x03A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0017, float,                                                                 StateUpdateTime);                                          // 0x03A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0134 PADDING_0017, float,                                                                 VisualsUpdateTime);                                        // 0x03A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_Player.BP_MarkerWidget_Player_C");
		return ptr;
	}


	void UpdateVisibilities();
	void UpdateStateData();
	void UpdateSizeAndZOrder();
	void UpdateViewAngle();
	bool IsMarkerVisible();
	void BPUpdateIsInVehicle(bool* IsInVehicle);
	void BPGetWidgetPlayerState(class APlayerState** SquadPlayerState);
	void Update_Player_Cone_Visibility();
	void Update_BleedingPanel_Visibility();
	class UWidget* Get_Player_Image_ToolTipWidget();
	ESlateVisibility Get_Player_Image_Visibility();
	void Update_IncapPanel_Visibility();
	void UpdateMedicOverlayVisibility();
	ESlateVisibility Get_SL_Text_Visibility();
	void Update_PlayerImage_Brush();
	void Update_SL_Text();
	void SetAngle(float InAngle);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateVisuals_Event();
	void ExecuteUbergraph_BP_MarkerWidget_Player(int EntryPoint);
	void CloseTooltip__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
