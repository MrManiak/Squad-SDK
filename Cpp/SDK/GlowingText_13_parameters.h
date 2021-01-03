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

// Function GlowingText_13.GlowingText_12_C.SetText
struct UGlowingText_12_C_SetText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GlowingText_13.GlowingText_12_C.Update
struct UGlowingText_12_C_Update_Params
{
};

// Function GlowingText_13.GlowingText_12_C.Init
struct UGlowingText_12_C_Init_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowShadow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingText_13.GlowingText_12_C.SetGlowing
struct UGlowingText_12_C_SetGlowing_Params
{
	bool                                               bGlowing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingText_13.GlowingText_12_C.Construct
struct UGlowingText_12_C_Construct_Params
{
};

// Function GlowingText_13.GlowingText_12_C.PreConstruct
struct UGlowingText_12_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingText_13.GlowingText_12_C.ExecuteUbergraph_GlowingText_13
struct UGlowingText_12_C_ExecuteUbergraph_GlowingText_13_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
