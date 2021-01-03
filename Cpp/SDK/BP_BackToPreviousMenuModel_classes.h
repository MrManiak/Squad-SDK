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

// BlueprintGeneratedClass BP_BackToPreviousMenuModel.BP_BackToPreviousMenuModel_C
// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
class UBP_BackToPreviousMenuModel_C : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BackToPreviousMenuModel.BP_BackToPreviousMenuModel_C");
		return ptr;
	}



	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_BackToPreviousMenuModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
