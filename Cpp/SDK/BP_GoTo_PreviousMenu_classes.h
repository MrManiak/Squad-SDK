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

// BlueprintGeneratedClass BP_GoTo_PreviousMenu.BP_GoTo_PreviousMenu_C
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
// LastOffsetWithSize(0x00B0)
#define PADDING_0389 - 0x0000 // Minimum to subtract -> (0000)
class UBP_GoTo_PreviousMenu_C : public UBP_GotoMenuActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0389, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoTo_PreviousMenu.BP_GoTo_PreviousMenu_C");
		return ptr;
	}


	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_GoTo_PreviousMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
