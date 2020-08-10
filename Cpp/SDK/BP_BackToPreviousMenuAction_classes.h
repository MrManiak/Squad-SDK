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

// BlueprintGeneratedClass BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_04F9 - 0x0000 // Minimum to subtract -> (0000)
class UBP_BackToPreviousMenuAction_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04F9, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BackToPreviousMenuAction.BP_BackToPreviousMenuAction_C");
		return ptr;
	}


	void CanClick(class APlayerController* Controller, class UBP_RadialItemModel_C* Model, bool* CanClick);
	void OnClicked(class UBaseRadialMenu_C* Raidal_Menu);
	void ExecuteUbergraph_BP_BackToPreviousMenuAction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
