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

// Function W_SubRoleOptions.W_SubRoleOptions_C.Construct
struct UW_SubRoleOptions_C_Construct_Params
{
};

// Function W_SubRoleOptions.W_SubRoleOptions_C.Tick
struct UW_SubRoleOptions_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SubRoleOptions.W_SubRoleOptions_C.PreConstruct
struct UW_SubRoleOptions_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SubRoleOptions.W_SubRoleOptions_C.Clear
struct UW_SubRoleOptions_C_Clear_Params
{
};

// Function W_SubRoleOptions.W_SubRoleOptions_C.ExecuteUbergraph_W_SubRoleOptions
struct UW_SubRoleOptions_C_ExecuteUbergraph_W_SubRoleOptions_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
