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

// Function CreditListItem.CreditListItem_C.Refresh
struct UCreditListItem_C_Refresh_Params
{
	TArray<struct FString>                             New_Columns;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CreditListItem.CreditListItem_C.Construct
struct UCreditListItem_C_Construct_Params
{
};

// Function CreditListItem.CreditListItem_C.ExecuteUbergraph_CreditListItem
struct UCreditListItem_C_ExecuteUbergraph_CreditListItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
