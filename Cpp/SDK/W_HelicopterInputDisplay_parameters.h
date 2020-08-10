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

// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.InitializeMeter
struct UW_HelicopterInputDisplay_C_InitializeMeter_Params
{
	TScriptInterface<class USQHelicopterInstruments>   ParentVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.Tick
struct UW_HelicopterInputDisplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.ExecuteUbergraph_W_HelicopterInputDisplay
struct UW_HelicopterInputDisplay_C_ExecuteUbergraph_W_HelicopterInputDisplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
