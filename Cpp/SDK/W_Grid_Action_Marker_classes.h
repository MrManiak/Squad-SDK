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

// WidgetBlueprintGeneratedClass W_Grid_Action_Marker.W_Grid_Action_Marker_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_019F - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_Action_Marker_C : public UW_Grid_Action_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_019F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action_Marker.W_Grid_Action_Marker_C");
		return ptr;
	}


	void Action_Button_Pressed();
	void ExecuteUbergraph_W_Grid_Action_Marker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
