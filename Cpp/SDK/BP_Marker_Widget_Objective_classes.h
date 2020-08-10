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

// WidgetBlueprintGeneratedClass BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_0C99 - 0x0000 // Minimum to subtract -> (0000)
class UBP_Marker_Widget_Objective_C : public USQMapIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0C99, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0C99, class UImage*,                                                         MarkerImage);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Marker_Widget_Objective.BP_Marker_Widget_Objective_C");
		return ptr;
	}


	struct FText GetText_1();
	struct FSlateBrush Get_MarkerImage_Brush_1();
	void Construct();
	void ExecuteUbergraph_BP_Marker_Widget_Objective(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
