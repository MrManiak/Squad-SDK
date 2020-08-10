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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerRequestFOB.BP_MapWidgetMapMarkerRequestFOB_C
// 0x0051 (FullSize[0x0321] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_040D - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerRequestFOB_C : public USQMapWidgetMapMarkerSelectable
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_040D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_040D, class UWidgetAnimation*,                                               In);                                                       // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_040D, class UBorder*,                                                        Border_Content);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_040D, class UImage*,                                                         MarkerImage);                                              // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_040D, class UImage*,                                                         RadiusConstruction);                                       // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_040D, class UImage*,                                                         RadiusExclusion);                                          // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_040D, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_040D, class USizeBox*,                                                       SizeBox_Construction);                                     // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_040D, class USizeBox*,                                                       SizeBox_Exclusion);                                        // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_040D, struct FTimerHandle,                                                   Update_Timer);                                             // 0x0318(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_040D, bool,                                                                  Faded);                                                    // 0x0320(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerRequestFOB.BP_MapWidgetMapMarkerRequestFOB_C");
		return ptr;
	}


	void Update_Size();
	void Update_Radius_Visibility();
	void OnTextureChanged();
	void OnTintChanged();
	void OnRightClicked();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnScaleChanged(float UniformScale);
	void Destruct();
	void ExecuteUbergraph_BP_MapWidgetMapMarkerRequestFOB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
