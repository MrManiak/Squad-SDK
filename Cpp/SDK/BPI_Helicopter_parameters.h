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

// Function BPI_Helicopter.BPI_Helicopter_C.Set Landing Camera
struct UBPI_Helicopter_C_Set_Landing_Camera_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Helicopter.BPI_Helicopter_C.Get UI Tint
struct UBPI_Helicopter_C_Get_UI_Tint_Params
{
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Helicopter.BPI_Helicopter_C.Is Using Landing Camera
struct UBPI_Helicopter_C_Is_Using_Landing_Camera_Params
{
	bool                                               Using_Landing_Camera;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
