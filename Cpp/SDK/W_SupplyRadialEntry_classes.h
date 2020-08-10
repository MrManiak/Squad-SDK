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

// WidgetBlueprintGeneratedClass W_SupplyRadialEntry.W_SupplyRadialEntry_C
// 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
// LastOffsetWithSize(0x0440)
#define PADDING_022A - 0x0000 // Minimum to subtract -> (0000)
class UW_SupplyRadialEntry_C : public UIconRadialEntry_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_022A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0440(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

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
