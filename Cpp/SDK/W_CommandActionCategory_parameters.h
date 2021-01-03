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

// Function W_CommandActionCategory.W_CommandActionCategory_C.Check Interaction
struct UW_CommandActionCategory_C_Check_Interaction_Params
{
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CommandActionCategory.W_CommandActionCategory_C.Update Category
struct UW_CommandActionCategory_C_Update_Category_Params
{
};

// Function W_CommandActionCategory.W_CommandActionCategory_C.Construct
struct UW_CommandActionCategory_C_Construct_Params
{
};

// Function W_CommandActionCategory.W_CommandActionCategory_C.Tick
struct UW_CommandActionCategory_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CommandActionCategory.W_CommandActionCategory_C.Init
struct UW_CommandActionCategory_C_Init_Params
{
};

// Function W_CommandActionCategory.W_CommandActionCategory_C.ExecuteUbergraph_W_CommandActionCategory
struct UW_CommandActionCategory_C_ExecuteUbergraph_W_CommandActionCategory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
