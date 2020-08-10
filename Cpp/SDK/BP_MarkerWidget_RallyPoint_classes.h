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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C
// 0x008C (FullSize[0x02DC] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_04CE - 0x0000 // Minimum to subtract -> (0000)
class UBP_MarkerWidget_RallyPoint_C : public USQMapIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04CE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04CE, class UCanvasPanel*,                                                   CanvasPanel_1);                                            // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04CE, class UImage*,                                                         RallypointBrush);                                          // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04CE, class UImage*,                                                         SelectedIcon);                                             // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04CE, class UImage*,                                                         SpawnFront_IMG);                                           // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04CE, class UTextBlock*,                                                     SquadNumber);                                              // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04CE, bool,                                                                  bIsSelected);                                              // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04CE, struct FSlateColor,                                                    OwnSquadTint);                                             // 0x0288(0x0028)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04CE, struct FSlateColor,                                                    OtherSquadTint);                                           // 0x02B0(0x0028)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04CE, float,                                                                 StateUpdateTime);                                          // 0x02D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C");
		return ptr;
	}


	void UpdateRallyPointBrush();
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void SelectSpawn(bool Commit);
	void UpdateSelectVisibility();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UpdateSquadIDText();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateStateEvent();
	void ExecuteUbergraph_BP_MarkerWidget_RallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
