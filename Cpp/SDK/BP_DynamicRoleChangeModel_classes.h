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

// BlueprintGeneratedClass BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UBP_DynamicRoleChangeModel_C : public UBP_BaseRoleChangeModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C");
		return ptr;
	}



	void OnClicked(class UBaseRadialMenu_C* Radial);
	void Set_Role(class USQRoleSettings* Role);
	void ExecuteUbergraph_BP_DynamicRoleChangeModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
