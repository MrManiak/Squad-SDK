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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C
// 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
// LastOffsetWithSize(0x02C8)
#define PADDING_023E - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerObjective_C : public USQMapWidgetMapMarkerObjective
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_023E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02C8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_023E, class UImage*,                                                         MarkerImage);                                              // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_023E, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerObjective.BP_MapWidgetMapMarkerObjective_C");
		return ptr;
	}


	void Get_Owning_Player_Map_Widget(class USQMapWidgetSoldier** Local_Player_Soldier_Widget);
	void Construct();
	void OnTextureChanged();
	void OnTintChanged();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetMapMarkerObjective(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
