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

// Function DeploymentList.DeploymentList_C.Auto Select Spawn Point
struct UDeploymentList_C_Auto_Select_Spawn_Point_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DeploymentList.DeploymentList_C.Update Prompt
struct UDeploymentList_C_Update_Prompt_Params
{
};

// Function DeploymentList.DeploymentList_C.Set List Visibility
struct UDeploymentList_C_Set_List_Visibility_Params
{
	bool                                               Hidden;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DeploymentList.DeploymentList_C.Construct
struct UDeploymentList_C_Construct_Params
{
};

// Function DeploymentList.DeploymentList_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UDeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DeploymentList.DeploymentList_C.ExecuteUbergraph_DeploymentList
struct UDeploymentList_C_ExecuteUbergraph_DeploymentList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
