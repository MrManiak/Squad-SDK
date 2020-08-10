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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C
// 0x0031 (FullSize[0x0301] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_03A3 - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerSpotted_C : public USQMapWidgetMapMarkerSpotted
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03A3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03A3, class UWidgetAnimation*,                                               In);                                                       // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03A3, class UBorder*,                                                        Border_Content);                                           // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03A3, class UImage*,                                                         MarkerImage);                                              // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03A3, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03A3, struct FTimerHandle,                                                   Fade_Timer);                                               // 0x02F8(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03A3, bool,                                                                  Faded);                                                    // 0x0300(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C");
		return ptr;
	}


	void OnTextureChanged();
	void OnTintChanged();
	void OnRightClicked();
	void OnScaleChanged(float UniformScale);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_BP_MapWidgetMapMarkerSpotted(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
