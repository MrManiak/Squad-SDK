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

// WidgetBlueprintGeneratedClass BP_MapMarker_Selectable.BP_MapMarker_Selectable_C
// 0x000F (FullSize[0x0328] - InheritedSize[0x0319])
// LastOffsetWithSize(0x0319)
#define PADDING_0CCC - 0x0000 // Minimum to subtract -> (0007)
class UBP_MapMarker_Selectable_C : public USQMapMarkerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0CCC, float,                                                                 MarkerScale);                                              // 0x0320(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x000B PADDING_0CCC, float,                                                                 FadeOpacity);                                              // 0x0324(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapMarker_Selectable.BP_MapMarker_Selectable_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
