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

// BlueprintGeneratedClass BP_BaseRoleChangeModel.BP_BaseRoleChangeModel_C
// 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
// LastOffsetWithSize(0x00A0)
#define PADDING_028A - 0x0000 // Minimum to subtract -> (0000)
class UBP_BaseRoleChangeModel_C : public UBP_RadialActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_028A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_028A, class USQRoleSettings*,                                                Role);                                                     // 0x00A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseRoleChangeModel.BP_BaseRoleChangeModel_C");
		return ptr;
	}


	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_BaseRoleChangeModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
