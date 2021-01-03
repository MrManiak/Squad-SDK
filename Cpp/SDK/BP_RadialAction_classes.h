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

// BlueprintGeneratedClass BP_RadialAction.BP_RadialAction_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBP_RadialAction_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


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
