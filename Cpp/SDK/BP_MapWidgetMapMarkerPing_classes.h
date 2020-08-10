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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C
// 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_0343 - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerPing_C : public USQMapWidgetMapMarkerSelectable
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0343, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0343, class UWidgetAnimation*,                                               Grow);                                                     // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0343, class UBorder*,                                                        Border_3);                                                 // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0343, class UBorder*,                                                        Border_4);                                                 // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0343, class UBorder*,                                                        Border_Content);                                           // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0343, class UImage*,                                                         Image_2);                                                  // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0343, class UImage*,                                                         Image_Three);                                              // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0343, class UImage*,                                                         Image_Two);                                                // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0343, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerPing.BP_MapWidgetMapMarkerPing_C");
		return ptr;
	}


	void Construct();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetMapMarkerPing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
