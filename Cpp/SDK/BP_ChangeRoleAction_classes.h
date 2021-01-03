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

// BlueprintGeneratedClass BP_ChangeRoleAction.BP_ChangeRoleAction_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBP_ChangeRoleAction_C : public UBP_RadialAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChangeRoleAction.BP_ChangeRoleAction_C");
		return ptr;
	}



	void Is_Role_Available(class APlayerController* Player, class USQRoleSettings* Role, bool* Available);
	void Change_role_from_Rearm_Source(class USQRoleSettings* NewRole, class APlayerController* Player, class UBaseRadialMenu_C* Radial, class UObject* Context);
	void ChangeRole(class UBaseRadialMenu_C* Radial, class USQRoleSettings* Role);
	void ExecuteUbergraph_BP_ChangeRoleAction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
