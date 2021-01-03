#pragma once

// Name: S, Version: b

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Find Name of Weapon from Image
struct UW_RoleMainWeapon_C_Find_Name_of_Weapon_from_Image_Params
{
	class UObject*                                     In_Texture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (Parm, OutParm)
	struct FSQInventoryData                            Inventory;                                                 // (Parm, OutParm, NoDestructor)
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Update Selected
struct UW_RoleMainWeapon_C_Update_Selected_Params
{
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Get Item Info
struct UW_RoleMainWeapon_C_Get_Item_Info_Params
{
	struct FSQInventoryData                            SQInventoryData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                Item_Count;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Construct
struct UW_RoleMainWeapon_C_Construct_Params
{
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UW_RoleMainWeapon_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Refresh
struct UW_RoleMainWeapon_C_Refresh_Params
{
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature
struct UW_RoleMainWeapon_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.ExecuteUbergraph_W_RoleMainWeapon
struct UW_RoleMainWeapon_C_ExecuteUbergraph_W_RoleMainWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Hovered__DelegateSignature
struct UW_RoleMainWeapon_C_SubRole_Hovered__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Pressed__DelegateSignature
struct UW_RoleMainWeapon_C_SubRole_Pressed__DelegateSignature_Params
{
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
