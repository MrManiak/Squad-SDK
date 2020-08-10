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

// WidgetBlueprintGeneratedClass BP_MapWidgetForwardBase.BP_MapWidgetForwardBase_C
// 0x0084 (FullSize[0x0348] - InheritedSize[0x02C4])
// LastOffsetWithSize(0x02C4)
#define PADDING_02F2 - 0x0000 // Minimum to subtract -> (0004)
class UBP_MapWidgetForwardBase_C : public USQMapWidgetForwardBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_02F2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02C8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_02F2, class UImage*,                                                         FOBIcon);                                                  // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_02F2, class UHorizontalBox*,                                                 H_Ammo);                                                   // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_02F2, class UHorizontalBox*,                                                 H_Construction);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_02F2, class UImage*,                                                         Image_1);                                                  // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_02F2, class UImage*,                                                         Image_2);                                                  // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_02F2, class UImage*,                                                         RadiusConstruction);                                       // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_02F2, class UImage*,                                                         RadiusExclusion);                                          // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_02F2, class UScaleBox*,                                                      Scale2);                                                   // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_02F2, class UScaleBox*,                                                      ScaleBox_Supplies);                                        // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_02F2, class UScaleBox*,                                                      ScaleBoxFob);                                              // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_02F2, class USizeBox*,                                                       SizeBox_Construction);                                     // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_02F2, class USizeBox*,                                                       SizeBox_Exclusion);                                        // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_02F2, class UTextBlock*,                                                     TB_AmmoAmount);                                            // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_02F2, class UTextBlock*,                                                     TB_ConstructionAmount);                                    // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_02F2, class UW_Tooltip_FobSupplies_C*,                                       Supplies_Widget);                                          // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetForwardBase.BP_MapWidgetForwardBase_C");
		return ptr;
	}


	class UWidget* Get_FOBIcon_ToolTipWidget_1();
	void Update_Supplies_Visibility();
	void Update_Radius_Visibility();
	void Update_Color();
	void Update_Exclusion_Radius();
	void Update_Construction_Radius();
	void OnTintValueChanged();
	void OnExclusionRadiusChanged();
	void OnAmmoPointsChanged();
	void OnConstructionRadiusChanged();
	void OnConstructionPointsChanged();
	void OnCanSpawnChanged();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetForwardBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
