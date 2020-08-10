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

// WidgetBlueprintGeneratedClass BP_MapWidgetVehicle.BP_MapWidgetVehicle_C
// 0x00C4 (FullSize[0x03B8] - InheritedSize[0x02F4])
// LastOffsetWithSize(0x02F4)
#define PADDING_030F - 0x0000 // Minimum to subtract -> (001C)
class UBP_MapWidgetVehicle_C : public USQMapWidgetVehicle
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x001C PADDING_030F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0310(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0024 PADDING_030F, class UWidgetAnimation*,                                               PulseAnim);                                                // 0x0318(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_030F, class UImage*,                                                         CommanderStar);                                            // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_030F, class UImage*,                                                         CommanderStarDropShadow);                                  // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_030F, class UImage*,                                                         PulseImage);                                               // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_030F, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_030F, class UImage*,                                                         Selection);                                                // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_030F, class USizeBox*,                                                       SizeBox_SquadID);                                          // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_030F, class UTextBlock*,                                                     SquadID_Text);                                             // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_030F, class UImage*,                                                         SquadLeaderBG);                                            // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_030F, class UBorder*,                                                        SquadTintBorder);                                          // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_030F, class UBorder*,                                                        TooltipHitBox);                                            // 0x0368(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_030F, class UImage*,                                                         Vehicle_Image);                                            // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_030F, class UCanvasPanel*,                                                   Vehicle_Rotation);                                         // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_030F, class UImage*,                                                         ViewCone_Image);                                           // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_030F, class UCanvasPanel*,                                                   ViewCone_Rotation);                                        // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_030F, class UOverlay*,                                                       WidgetOverlay);                                            // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_030F, float,                                                                 DefaultScale);                                             // 0x0398(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_030F, float,                                                                 SelfScale);                                                // 0x039C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_030F, float,                                                                 Vehicle_Angle_Offset);                                     // 0x03A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_030F, float,                                                                 View_Cone_Angle_Offset);                                   // 0x03A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_030F, class UW_Tooltip_Vehicle_C*,                                           REF_Tooltip);                                              // 0x03A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_030F, class ASQPlayerController*,                                            My_PC);                                                    // 0x03B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetVehicle.BP_MapWidgetVehicle_C");
		return ptr;
	}


	void ShowHideCommanderStar();
	struct FEventReply On_TooltipHitBox_MouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply On_TooltipHitBox_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_Tooltip();
	class UWidget* Tooltip();
	void OnTintValueChanged();
	void OnIsOwnedBySelfChanged();
	void OnAngleChanged();
	void OnCameraRotationYawChanged();
	void OnStaticUIDataChanged();
	void OnClaimingSquadIDChanged();
	void OnHoldsSquadLeaderChanged();
	void OnVehicleOccupantInfoChanged(int AtIndex);
	void OnSelfInVehicleSeatChanged();
	void OnIsInSelfTeam();
	void OnSelectionStateChanged();
	void Construct();
	void OnScaleChanged(float UniformScale);
	void OnCommanderChangedEvent_Event_1(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void OnHoldsCommanderChanged();
	void ExecuteUbergraph_BP_MapWidgetVehicle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
