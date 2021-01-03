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

// BlueprintGeneratedClass BPRadialPopulatorEmpty.BPRadialPopulatorEmpty_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBPRadialPopulatorEmpty_C : public UBPRadialPopulatorIcon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPRadialPopulatorEmpty.BPRadialPopulatorEmpty_C");
		return ptr;
	}



	void InitialSetup(class USQUserWidget* Widget, class UBP_RadialItemModel_C* Model, class UBaseRadialMenu_C* RadialMenu);
	void ExecuteUbergraph_BPRadialPopulatorEmpty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
