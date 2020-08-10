#pragma once

// Name: Sq, Version: b21

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

// Function W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C.Set Main Health
struct UW_InteractableItem_VehicleRepair_C_Set_Main_Health_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Limit_Reached;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Max_Health;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C.Get Format Box
struct UW_InteractableItem_VehicleRepair_C_Get_Format_Box_Params
{
	class UHorizontalBox*                              FormatBox;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C.Update Vehicle Health
struct UW_InteractableItem_VehicleRepair_C_Update_Vehicle_Health_Params
{
};

// Function W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C.Format Text
struct UW_InteractableItem_VehicleRepair_C_Format_Text_Params
{
};

// Function W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C.ExecuteUbergraph_W_InteractableItem_VehicleRepair
struct UW_InteractableItem_VehicleRepair_C_ExecuteUbergraph_W_InteractableItem_VehicleRepair_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
