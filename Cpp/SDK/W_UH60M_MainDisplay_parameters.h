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

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Set Owning Vehicle
struct UW_UH60M_MainDisplay_C_Set_Owning_Vehicle_Params
{
	class ABP_Generic_Helicopter_C*                    OwningVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Refresh HelicopterDisplay
struct UW_UH60M_MainDisplay_C_Refresh_HelicopterDisplay_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update TAXI
struct UW_UH60M_MainDisplay_C_Update_TAXI_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update MainDisplay
struct UW_UH60M_MainDisplay_C_Update_MainDisplay_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update RPM
struct UW_UH60M_MainDisplay_C_Update_RPM_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen On
struct UW_UH60M_MainDisplay_C_Screen_On_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen Off
struct UW_UH60M_MainDisplay_C_Screen_Off_Params
{
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Manage Update
struct UW_UH60M_MainDisplay_C_Manage_Update_Params
{
	bool                                               Can_Update;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.ExecuteUbergraph_W_UH60M_MainDisplay
struct UW_UH60M_MainDisplay_C_ExecuteUbergraph_W_UH60M_MainDisplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
