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

// BlueprintGeneratedClass BP_RadialAction.BP_RadialAction_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0C8D - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialAction_C : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0C8D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0028(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialAction.BP_RadialAction_C");
		return ptr;
	}


	void IsInVehicle(class AController* Controller, bool* IsInVehicle);
	void CanClick(class APlayerController* Controller, class UBP_RadialItemModel_C* Model, bool* CanClick);
	void OnClicked(class UBaseRadialMenu_C* Raidal_Menu);
	void ExecuteUbergraph_BP_RadialAction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
