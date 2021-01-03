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

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Set Main Health
struct UW_InteractableItem_HelicopterRepair_C_Set_Main_Health_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Limit_Reached;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Max_Health;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Get Format Box
struct UW_InteractableItem_HelicopterRepair_C_Get_Format_Box_Params
{
	class UHorizontalBox*                              FormatBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Update Vehicle Health
struct UW_InteractableItem_HelicopterRepair_C_Update_Vehicle_Health_Params
{
};

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Format Text
struct UW_InteractableItem_HelicopterRepair_C_Format_Text_Params
{
};

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.ExecuteUbergraph_W_InteractableItem_HelicopterRepair
struct UW_InteractableItem_HelicopterRepair_C_ExecuteUbergraph_W_InteractableItem_HelicopterRepair_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
