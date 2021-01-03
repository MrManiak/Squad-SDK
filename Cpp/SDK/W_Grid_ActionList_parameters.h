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

// Function W_Grid_ActionList.W_Grid_ActionList_C.Get Squad ID
struct UW_Grid_ActionList_C_Get_Squad_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Get Fireteam ID
struct UW_Grid_ActionList_C_Get_Fireteam_ID_Params
{
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Tick
struct UW_Grid_ActionList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.PreConstruct
struct UW_Grid_ActionList_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Close
struct UW_Grid_ActionList_C_Close_Params
{
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Construct
struct UW_Grid_ActionList_C_Construct_Params
{
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Populate List
struct UW_Grid_ActionList_C_Populate_List_Params
{
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.ExecuteUbergraph_W_Grid_ActionList
struct UW_Grid_ActionList_C_ExecuteUbergraph_W_Grid_ActionList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Grid_ActionList.W_Grid_ActionList_C.Closed__DelegateSignature
struct UW_Grid_ActionList_C_Closed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
