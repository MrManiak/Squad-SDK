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

// WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerWaypoint.BP_MapWidgetMapMarkerWaypoint_C
// 0x0031 (FullSize[0x0301] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_04AA - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetMapMarkerWaypoint_C : public USQMapWidgetMapMarkerWaypoint
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04AA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04AA, class UWidgetAnimation*,                                               In);                                                       // 0x02D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04AA, class UImage*,                                                         MarkerImage);                                              // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04AA, class UScaleBox*,                                                      ScaleBox_3);                                               // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04AA, class UTextBlock*,                                                     TB_SquadID);                                               // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04AA, class ASQPlayerController*,                                            My_PC);                                                    // 0x02F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04AA, bool,                                                                  Show_Team_Markers);                                        // 0x0300(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetMapMarkerWaypoint.BP_MapWidgetMapMarkerWaypoint_C");
		return ptr;
	}


	void Get_Is_My_Fireteam(bool* Same);
	void Get_Same_Squad_ID(bool* Same);
	void Set_Visibility();
	void Update_Visual();
	void Update_Waypoint_Visibility();
	void Construct();
	void OnTextureChanged();
	void OnTintChanged();
	void OnRightClicked();
	void OnFireteamIdChanged();
	void OnSquadIdChanged();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetMapMarkerWaypoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
