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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C
// 0x0134 (FullSize[0x0410] - InheritedSize[0x02DC])
// LastOffsetWithSize(0x02DC)
#define PADDING_00C7 - 0x0000 // Minimum to subtract -> (0004)
class UBP_MarkerWidget_CaptureZoneTC_C : public USQMapWidgetCaptureZone
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_00C7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_00C7, class UWidgetAnimation*,                                               Pulse);                                                    // 0x02E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_00C7, class UImage*,                                                         Anchor);                                                   // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_00C7, class UBorder*,                                                        AnchorBG);                                                 // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_00C7, class UScaleBox*,                                                      AnchorIcon);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_00C7, class UImage*,                                                         B);                                                        // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_00C7, class UImage*,                                                         BL);                                                       // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_00C7, class UImage*,                                                         BR);                                                       // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_00C7, class UCanvasPanel*,                                                   CanvasPanel_Main);                                         // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_00C7, class UProgressBar*,                                                   CaptureBar);                                               // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_00C7, class UTextBlock*,                                                     FlagNameText);                                             // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_00C7, class UImage*,                                                         HexFill);                                                  // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_00C7, class UImage*,                                                         HexHashed);                                                // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_00C7, class UImage*,                                                         HexOutline);                                               // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_00C7, class UOverlay*,                                                       HexParent);                                                // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_00C7, class UImage*,                                                         Protected);                                                // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_00C7, class UScaleBox*,                                                      ProtectIcon);                                              // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_00C7, class UScaleBox*,                                                      ScaleBox_Info);                                            // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_00C7, class USizeBox*,                                                       SizeBox_CaptureBar);                                       // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_00C7, class USizeBox*,                                                       SizeBox_Main);                                             // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_00C7, class UImage*,                                                         T);                                                        // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_00C7, class UImage*,                                                         TL);                                                       // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_00C7, class UImage*,                                                         TR);                                                       // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_00C7, struct FScriptMulticastDelegate,                                       CloseTooltip);                                             // 0x0398(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00CC PADDING_00C7, float,                                                                 UpdateStateTime);                                          // 0x03A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_00C7, class ATC_HexZone_C*,                                                  This_Hex_Zone);                                            // 0x03B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DC PADDING_00C7, class ASQPlayerController*,                                            My_PC);                                                    // 0x03B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_00C7, TArray<class UImage*>,                                                 Edge_Lines);                                               // 0x03C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_00C7, float,                                                                 Flag_Radius);                                              // 0x03D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FC PADDING_00C7, struct FString,                                                        Grid_Ref);                                                 // 0x03D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_00C7, float,                                                                 MaxZoomFactor);                                            // 0x03E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_00C7, float,                                                                 Zoom_Alpha);                                               // 0x03EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_00C7, float,                                                                 Show_Large_Text_Threshold);                                // 0x03F0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_00C7, float,                                                                 Show_Data_Threshold);                                      // 0x03F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_00C7, bool,                                                                  Can_Animate_Capture_Fade);                                 // 0x03F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0124 PADDING_00C7, struct FTimerHandle,                                                   Update_Timer);                                             // 0x0400(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_00C7, bool,                                                                  Is_Point_of_Interest);                                     // 0x0408(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0130 PADDING_00C7, int,                                                                   PlayerController_Team_ID);                                 // 0x040C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C");
		return ptr;
	}


	void Update_Protected_Visibility();
	void Update_Touching_Start();
	void Bind_BPHUD_Events();
	void Update_Visibility_from_Save_Data();
	bool Get_POI();
	struct FText Get_Hex_Text();
	void Get_Hex_Owning_Team(unsigned char* OwningTeam);
	void Get_Can_Cap_Team(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral);
	void Get_Captor(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral);
	void Get_Owner(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral);
	void Update_Frontline();
	void Nearby_Zones(bool* Team_1_Nearby, bool* Team_2_Nearby);
	void Get_Hex_Zone();
	void Update_Anchor_Visual();
	void Can_Cap(class ATC_HexZone_C* Zone, bool Self_Team, bool* Can_Cap);
	void Get_Same_Team(bool* Same);
	void Update_Capture_Bar();
	void Update_Hex_Color();
	void Update_Widget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnFlagNameChanged();
	void OnScaleChanged(float UniformScale);
	void Set_Name_Via_Grid_Ref();
	void Destruct();
	void Reset_Hex_Opacity();
	void OnCapturePercentChanged();
	void Play_Capture_Fade_Animation();
	void UpdateState();
	void Start_Timer_Update_Hex(class UUMG_MenuBase_C* Menu);
	void Stop_Timer_Update_Hex(class UUMG_MenuBase_C* Menu);
	void Construct();
	void ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC(int EntryPoint);
	void CloseTooltip__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
