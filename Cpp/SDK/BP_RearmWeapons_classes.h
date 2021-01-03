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

// BlueprintGeneratedClass BP_RearmWeapons.BP_RearmWeapons_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBP_RearmWeapons_C : public UBP_RadialAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RearmWeapons.BP_RearmWeapons_C");
		return ptr;
	}



	void OnClicked(class UBaseRadialMenu_C* Raidal_Menu);
	void ExecuteUbergraph_BP_RearmWeapons(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
