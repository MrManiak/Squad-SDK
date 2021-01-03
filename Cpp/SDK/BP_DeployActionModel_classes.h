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

// BlueprintGeneratedClass BP_DeployActionModel.BP_DeployActionModel_C
// 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
class UBP_DeployActionModel_C : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DeployableClass;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployActionModel.BP_DeployActionModel_C");
		return ptr;
	}



	void Get_Deployable(class UClass** Deployable);
	void Open_Voice_Model();
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_DeployActionModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
