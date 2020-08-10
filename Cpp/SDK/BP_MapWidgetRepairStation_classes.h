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

// WidgetBlueprintGeneratedClass BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C
// 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
// LastOffsetWithSize(0x02A9)
#define PADDING_003E - 0x0000 // Minimum to subtract -> (0007)
class UBP_MapWidgetRepairStation_C : public USQMapWidgetRepairStation
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_003E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_003E, class UImage*,                                                         MarkerImage);                                              // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_003E, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetRepairStation.BP_MapWidgetRepairStation_C");
		return ptr;
	}


	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetRepairStation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
