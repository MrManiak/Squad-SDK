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

// WidgetBlueprintGeneratedClass W_FTLGridMenu.W_FTLGridMenu_C
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UW_FTLGridMenu_C : public UW_GridMenu_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FTLGridMenu.W_FTLGridMenu_C");
		return ptr;
	}



	void Build_Grid(const struct FGeometry& In_Geometry, const struct FPointerEvent& In_Mouse_Event, const struct FVector& Zero_Based_World_Location);
	void Grid_Main_Action();
	void ExecuteUbergraph_W_FTLGridMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
