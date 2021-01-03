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

// BlueprintGeneratedClass BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C
// 0x000A (FullSize[0x00AA] - InheritedSize[0x00A0])
class UBP_RadialActionModel_ControlSupplies_C : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Ammo;                                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Pickup;                                                    // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C");
		return ptr;
	}



	void Is_Soldier_Alive(class AController* Target, bool* Alive);
	void Validate_Logistics(class UBaseRadialMenu_C* Radial, bool* Is_Valid);
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void OnReleased(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_RadialActionModel_ControlSupplies(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
