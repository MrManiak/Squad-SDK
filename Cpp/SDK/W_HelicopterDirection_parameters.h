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

// Function W_HelicopterDirection.W_HelicopterDirection_C.Tick
struct UW_HelicopterDirection_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelicopterDirection.W_HelicopterDirection_C.InitializeScreen
struct UW_HelicopterDirection_C_InitializeScreen_Params
{
	TScriptInterface<class USQHelicopterInstruments>   Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HelicopterDirection.W_HelicopterDirection_C.ExecuteUbergraph_W_HelicopterDirection
struct UW_HelicopterDirection_C_ExecuteUbergraph_W_HelicopterDirection_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
