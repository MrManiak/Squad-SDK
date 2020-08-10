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

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set Owner Flag Image
struct UW_FlagCapturedEvent_C_Set_Owner_Flag_Image_Params
{
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set State Text
struct UW_FlagCapturedEvent_C_Set_State_Text_Params
{
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Setup Fill Image
struct UW_FlagCapturedEvent_C_Setup_Fill_Image_Params
{
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Change Flag Image
struct UW_FlagCapturedEvent_C_Change_Flag_Image_Params
{
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Play Capture Animation
struct UW_FlagCapturedEvent_C_Play_Capture_Animation_Params
{
	struct FText                                       Flag_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char                                      New_Owning_Team;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Last_Owning_Team;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Tick
struct UW_FlagCapturedEvent_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Construct
struct UW_FlagCapturedEvent_C_Construct_Params
{
};

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.ExecuteUbergraph_W_FlagCapturedEvent
struct UW_FlagCapturedEvent_C_ExecuteUbergraph_W_FlagCapturedEvent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
