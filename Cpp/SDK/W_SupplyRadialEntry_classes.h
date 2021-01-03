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

// WidgetBlueprintGeneratedClass W_SupplyRadialEntry.W_SupplyRadialEntry_C
// 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
class UW_SupplyRadialEntry_C : public UIconRadialEntry_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SupplyRadialEntry.W_SupplyRadialEntry_C");
		return ptr;
	}



	void Is_Faded(bool* Faded);
	void Is_Soldier_Alive(bool* Alive);
	bool Validate_Resources();
	void UpdateActiveState();
	void OnHoverEnd();
	void ExecuteUbergraph_W_SupplyRadialEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
