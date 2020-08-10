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

// WidgetBlueprintGeneratedClass W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
// LastOffsetWithSize(0x02D8)
#define PADDING_04A0 - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_Enemy_Directors_C : public UW_GridButton_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04A0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Enemy_Directors.W_Grid_Enemy_Directors_C");
		return ptr;
	}


	void Grid_Button_Pressed();
	void ExecuteUbergraph_W_Grid_Enemy_Directors(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
