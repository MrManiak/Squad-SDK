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

// BlueprintGeneratedClass BP_GoToTowingMenu.BP_GoToTowingMenu_C
// 0x0009 (FullSize[0x00B9] - InheritedSize[0x00B0])
// LastOffsetWithSize(0x00B0)
#define PADDING_0393 - 0x0000 // Minimum to subtract -> (0000)
class UBP_GoToTowingMenu_C : public UBP_GotoMenuActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0393, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0393, bool,                                                                  ActiveButton);                                             // 0x00B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoToTowingMenu.BP_GoToTowingMenu_C");
		return ptr;
	}


	void IsInteractingWithHelicopter(class UBaseRadialMenu_C* Menu, bool* Return);
	void IsInStagingPhase(class APlayerController* Controller, bool* StagingPhaseActive);
	void IsPlayerOutOfVehicle(class AController* Controller, bool* IsOutOfVehicle);
	void IsEmergencyMoveAvailable(class UBaseRadialMenu_C* Menu, bool* Available);
	void SetActiveButton(bool Active, class USQRadialButton* Button);
	void IsInDriverSeatOfGroundVehicle(class AController* Controller, bool* IsInDriverSeat);
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void Populate(class USQRadialButton* Widget, class UBaseRadialMenu_C* Menu, class UObject* Context);
	void ExecuteUbergraph_BP_GoToTowingMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
