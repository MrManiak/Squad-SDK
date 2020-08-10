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

// WidgetBlueprintGeneratedClass BP_MapMarker_CO_Orderline.BP_MapMarker_CO_Orderline_C
// 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
// LastOffsetWithSize(0x0328)
#define PADDING_008D - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapMarker_CO_Orderline_C : public UBP_MapMarker_Selectable_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_008D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0328(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_008D, class UWidgetAnimation*,                                               In);                                                       // 0x0330(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_008D, class UBorder*,                                                        Circle);                                                   // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_008D, class UImage*,                                                         Image_1);                                                  // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_008D, class UImage*,                                                         Image_3);                                                  // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_008D, class UOverlay*,                                                       Overlay_2);                                                // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_008D, class USizeBox*,                                                       SizeBox_2);                                                // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_008D, class UTextBlock*,                                                     TB_SquadID);                                               // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapMarker_CO_Orderline.BP_MapMarker_CO_Orderline_C");
		return ptr;
	}


	void InitDirectorMarker();
	void RefreshVisibility();
	void OnMapZoom();
	void Construct();
	void OnMapCoreChanged();
	void OnHasFadedChanged();
	void ExecuteUbergraph_BP_MapMarker_CO_Orderline(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
