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

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Update Info
struct UW_VehicleBayQueueItem_C_Update_Info_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Active;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Get Active Color
struct UW_VehicleBayQueueItem_C_Get_Active_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Tick
struct UW_VehicleBayQueueItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Construct
struct UW_VehicleBayQueueItem_C_Construct_Params
{
};

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.ExecuteUbergraph_W_VehicleBayQueueItem
struct UW_VehicleBayQueueItem_C_ExecuteUbergraph_W_VehicleBayQueueItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
