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

// BlueprintGeneratedClass BPRadialPopulatorDeployable.BPRadialPopulatorDeployable_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_032E - 0x0000 // Minimum to subtract -> (0000)
class UBPRadialPopulatorDeployable_C : public UBPRadialPopulatorIcon_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_032E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPRadialPopulatorDeployable.BPRadialPopulatorDeployable_C");
		return ptr;
	}


	void InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu);
	void ExecuteUbergraph_BPRadialPopulatorDeployable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
