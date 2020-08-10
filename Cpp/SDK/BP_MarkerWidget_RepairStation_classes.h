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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_RepairStation.BP_MarkerWidget_RepairStation_C
// 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_0277 - 0x0000 // Minimum to subtract -> (0000)
class UBP_MarkerWidget_RepairStation_C : public USQMapIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0277, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0277, class UImage*,                                                         MarkerImage);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0277, class UOverlay*,                                                       Overlay_1);                                                // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0277, float,                                                                 StateUpdateTime);                                          // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0277, class USQMapIconComponent*,                                            SQ_Map_Icon);                                              // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_RepairStation.BP_MarkerWidget_RepairStation_C");
		return ptr;
	}


	void UpdateMarkerImageBrush();
	void Construct();
	void Find_SQ_Map_Icon();
	void ExecuteUbergraph_BP_MarkerWidget_RepairStation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
