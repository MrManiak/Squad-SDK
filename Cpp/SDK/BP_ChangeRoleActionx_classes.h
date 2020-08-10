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

// BlueprintGeneratedClass BP_ChangeRoleActionx.BP_ChangeRoleActionx_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_04A3 - 0x0000 // Minimum to subtract -> (0000)
class UBP_ChangeRoleActionx_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04A3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChangeRoleActionx.BP_ChangeRoleActionx_C");
		return ptr;
	}


	void ChangeRole(class UBaseRadialMenu_C* Radial, class USQRoleSettings* Role);
	void ExecuteUbergraph_BP_ChangeRoleActionx(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
