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

// WidgetBlueprintGeneratedClass BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C
// 0x008C (FullSize[0x0368] - InheritedSize[0x02DC])
// LastOffsetWithSize(0x02DC)
#define PADDING_031D - 0x0000 // Minimum to subtract -> (0004)
class UBP_MapWidgetCaptureZone_C : public USQMapWidgetCaptureZone
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_031D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_031D, class UWidgetAnimation*,                                               OwnerChanged);                                             // 0x02E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_031D, class UWidgetAnimation*,                                               Pulse);                                                    // 0x02F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_031D, class UImage*,                                                         AttackDefend);                                             // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_031D, class UBorder*,                                                        Border_1);                                                 // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_031D, class UProgressBar*,                                                   CaptureBar);                                               // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_031D, class UImage*,                                                         CaptureStateCircle);                                       // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_031D, class UImage*,                                                         FlagImage);                                                // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_031D, class UTextBlock*,                                                     FlagNameText);                                             // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_031D, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_031D, class USizeBox*,                                                       SizeBox_CaptureBar);                                       // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_031D, class UImage*,                                                         UncapOverlay);                                             // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_031D, class ASQPlayerController*,                                            My_PC);                                                    // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_031D, struct FLinearColor,                                                   Enemy_Color);                                              // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_031D, struct FLinearColor,                                                   Friendly_Color);                                           // 0x0358(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetCaptureZone.BP_MapWidgetCaptureZone_C");
		return ptr;
	}


	void update_fog_of_war();
	void Update_Capture_Bar_Visibility();
	void Get_Same_Team(bool* Same);
	class UWidget* Get_FlagImage_ToolTipWidget_1();
	void Construct();
	void OnFlagNameChanged();
	void OnFlagTextureChanged();
	void OnUncappableChanged();
	void OnContestingChanged();
	void OnCapturePercentChanged();
	void OnOwningTeamChanged();
	void OnCapturingTeamChanged();
	void OnScaleChanged(float UniformScale);
	void Update_Contested_State();
	void ExecuteUbergraph_BP_MapWidgetCaptureZone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
