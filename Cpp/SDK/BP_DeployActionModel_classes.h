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

// BlueprintGeneratedClass BP_DeployActionModel.BP_DeployActionModel_C
// 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
// LastOffsetWithSize(0x00A0)
#define PADDING_035D - 0x0000 // Minimum to subtract -> (0000)
class UBP_DeployActionModel_C : public UBP_RadialActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_035D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_035D, class UClass*,                                                         DeployableClass);                                          // 0x00A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
