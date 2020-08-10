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

// WidgetBlueprintGeneratedClass BP_MapMarker_Circle.BP_MapMarker_Circle_C
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
// LastOffsetWithSize(0x0328)
#define PADDING_001C - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapMarker_Circle_C : public UBP_MapMarker_Selectable_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_001C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0328(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_001C, class UWidgetAnimation*,                                               In);                                                       // 0x0330(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_001C, class UBorder*,                                                        Fill);                                                     // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_001C, class UBorder*,                                                        Radius);                                                   // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_001C, class USizeBox*,                                                       SizeBox_1);                                                // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapMarker_Circle.BP_MapMarker_Circle_C");
		return ptr;
	}


	void InitDirectorMarker();
	void RefreshVisibility();
	void Construct();
	void OnMapZoom();
	void OnMapCoreChanged();
	void OnHasFadedChanged();
	void ExecuteUbergraph_BP_MapMarker_Circle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
