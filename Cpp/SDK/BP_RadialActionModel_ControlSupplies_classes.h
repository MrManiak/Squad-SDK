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

// BlueprintGeneratedClass BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C
// 0x000A (FullSize[0x00AA] - InheritedSize[0x00A0])
// LastOffsetWithSize(0x00A0)
#define PADDING_0C91 - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialActionModel_ControlSupplies_C : public UBP_RadialActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0C91, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0C91, bool,                                                                  Ammo);                                                     // 0x00A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0C91, bool,                                                                  Pickup);                                                   // 0x00A9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

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
