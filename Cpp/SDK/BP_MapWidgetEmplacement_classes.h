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

// WidgetBlueprintGeneratedClass BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C
// 0x0090 (FullSize[0x03B8] - InheritedSize[0x0328])
// LastOffsetWithSize(0x0328)
#define PADDING_02C2 - 0x0000 // Minimum to subtract -> (0008)
class UBP_MapWidgetEmplacement_C : public USQMapWidgetEmplacement
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_02C2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0330(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02C2, class UWidgetAnimation*,                                               PulseAnim);                                                // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02C2, class UImage*,                                                         Emplacement_Image);                                        // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02C2, class UCanvasPanel*,                                                   Emplacement_Rotation);                                     // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02C2, class UImage*,                                                         PulseImage);                                               // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02C2, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02C2, class UImage*,                                                         Selection);                                                // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02C2, class USizeBox*,                                                       SizeBox_1);                                                // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02C2, class UTextBlock*,                                                     SquadID_Text);                                             // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_02C2, class UImage*,                                                         SquadLeaderBG);                                            // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02C2, class UImage*,                                                         TooltipVisible);                                           // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02C2, class UImage*,                                                         ViewCone_Image);                                           // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02C2, class UCanvasPanel*,                                                   ViewCone_Rotation);                                        // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02C2, class UOverlay*,                                                       WidgetOverlay);                                            // 0x0398(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02C2, class UW_Tooltip_Vehicle_C*,                                           REF_Tooltip);                                              // 0x03A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02C2, float,                                                                 DefaultScale);                                             // 0x03A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_02C2, float,                                                                 SelfScale);                                                // 0x03AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02C2, class ASQPlayerController*,                                            My_PC);                                                    // 0x03B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetEmplacement.BP_MapWidgetEmplacement_C");
		return ptr;
	}


	struct FEventReply On_TooltipVisible_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_Tooltip();
	class UWidget* Tooltip();
	void OnVehicleOccupantInfoChanged(int AtIndex);
	void OnSelfInVehicleSeatChanged();
	void OnIsInSelfTeam();
	void OnSelectionStateChanged();
	void Construct();
	void OnStaticUIDataChanged();
	void OnIsOwnedBySelfChanged();
	void OnAngleChanged();
	void OnCameraRotationYawChanged();
	void OnHoldsOccupantChanged();
	void OnHoldsSquadLeaderChanged();
	void OnClaimingSquadIDChanged();
	void OnTintValueChanged();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetEmplacement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
