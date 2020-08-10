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

// WidgetBlueprintGeneratedClass W_SQMapBody.W_SQMapBody_C
// 0x00A8 (FullSize[0x02E0] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_01D7 - 0x0000 // Minimum to subtract -> (0028)
class UW_SQMapBody_C : public USQMapWidgetBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0028 PADDING_01D7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0260(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0030 PADDING_01D7, class URelativeCanvasPanel*,                                           ElementsRoot);                                             // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_01D7, class UCanvasPanel*,                                                   FixedSizeLayer);                                           // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_01D7, class UW_SQMapGridLines_C*,                                            GridLines);                                                // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_01D7, class UW_SQMapHorizontalBar_C*,                                        HorizontalBar);                                            // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_01D7, class UImage*,                                                         MapBoundary);                                              // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01D7, class UImage*,                                                         MapImage);                                                 // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01D7, class UCanvasPanel*,                                                   PanLayer);                                                 // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01D7, class UW_SQMapScaleBars_C*,                                            Scalebars);                                                // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01D7, class UTextBlock*,                                                     TB_MapName);                                               // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01D7, class UW_MapLattice_C*,                                                UMG_MapLattice);                                           // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01D7, class UW_SQMapVerticalBar_C*,                                          VerticalBar);                                              // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01D7, class UW_SQMapOrderWaypointLines_C*,                                   W_SQMapOrderWaypointLines);                                // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_01D7, class USizeBox*,                                                       ZoomLayer);                                                // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_01D7, struct FVector2D,                                                      DesignTimeGridLines);                                      // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_01D7, struct FVector2D,                                                      AppliedMapBoundsScale);                                    // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapBody.W_SQMapBody_C");
		return ptr;
	}


	void Get_Relative_Location(const struct FVector& In_Location, struct FVector2D* Relative);
	void Map_Corner_Bounds(struct FVector* Extent);
	void Init_Map_Boundary();
	bool RemoveMarkerWidget(class USQMapMarkerBase* Target);
	class USQMapMarkerBase* CreateMarkerWidget(const struct FSQMapMarkerVisualData& MapMarkerVisualData);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeLattice(class USQCoreStateMapComponent* MapComponent);
	void Set_Flag_Lattice_Visibility(bool InVisibility);
	void ExecuteUbergraph_W_SQMapBody(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
