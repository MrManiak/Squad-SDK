#pragma once

// Name: S, Version: b


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
class UW_Grid_Enemy_Directors_C : public UW_GridButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


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
