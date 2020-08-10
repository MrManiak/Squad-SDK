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

// Function ModBrowser.ModBrowser_C.GetVisibility_1
struct UModBrowser_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModBrowser.ModBrowser_C.Selected Mod
struct UModBrowser_C_Selected_Mod_Params
{
	struct FModdingRuntimeModInfoDetails               ModInfo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ModBrowser.ModBrowser_C.Init
struct UModBrowser_C_Init_Params
{
};

// Function ModBrowser.ModBrowser_C.ExecuteUbergraph_ModBrowser
struct UModBrowser_C_ExecuteUbergraph_ModBrowser_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
