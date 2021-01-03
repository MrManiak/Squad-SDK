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

// Function W_RoleQuickList.W_RoleQuickList_C.IsRoleListWidgetValid
struct UW_RoleQuickList_C_IsRoleListWidgetValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_RoleQuickList.W_RoleQuickList_C.CreateRoleListWidgetArray
struct UW_RoleQuickList_C_CreateRoleListWidgetArray_Params
{
	TArray<class UW_RoleGroup_C*>                      Array;                                                     // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function W_RoleQuickList.W_RoleQuickList_C.Tick
struct UW_RoleQuickList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_RoleQuickList.W_RoleQuickList_C.ExecuteUbergraph_W_RoleQuickList
struct UW_RoleQuickList_C_ExecuteUbergraph_W_RoleQuickList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
