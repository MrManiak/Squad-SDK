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

// BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
// LastOffsetWithSize(0x0090)
#define PADDING_09CE - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09CE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0090(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09CE, class UClass*,                                                         Action);                                                   // 0x0098(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C");
		return ptr;
	}


	void IsInVehicle(class AController* Controller, bool* IsInVehicle);
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_RadialActionModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
