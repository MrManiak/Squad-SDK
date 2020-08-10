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

// WidgetBlueprintGeneratedClass BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C
// 0x004C (FullSize[0x032C] - InheritedSize[0x02E0])
// LastOffsetWithSize(0x02E0)
#define PADDING_03AE - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetRallyPoint_C : public USQMapWidgetRallyPoint
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03AE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03AE, class UWidgetAnimation*,                                               CornerPulse);                                              // 0x02E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03AE, class UImage*,                                                         Corners);                                                  // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03AE, class UImage*,                                                         RallypointBrush);                                          // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03AE, class UScaleBox*,                                                      ScaleBox_SpawnRally);                                      // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03AE, class UBorder*,                                                        selected);                                                 // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03AE, class UTextBlock*,                                                     SquadNumber);                                              // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03AE, class UW_ShareRally_C*,                                                W_ShareRally);                                             // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03AE, class UW_Tooltip_RallyPoint_C*,                                        Rally_Tooltip);                                            // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03AE, float,                                                                 Last_Click_Time);                                          // 0x0328(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_Color();
	void Update_Rally_Spawns_Visibility();
	class UWidget* Get_SpawnFront_IMG_ToolTipWidget_1();
	void Construct();
	void OnIsSelectedChanged();
	void OnSquadIdChanged();
	void OnIsInSelfSquadChanged();
	void OnTintValueChanged();
	void OnNumberOfSpawnsChanged();
	void Check_Animation();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetRallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
