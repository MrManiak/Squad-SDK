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

// Function W_SquadSelect.W_SquadSelect_C.BIND - Squad Name
struct UW_SquadSelect_C_BIND___Squad_Name_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadSelect.W_SquadSelect_C.BIND - Map & Mode
struct UW_SquadSelect_C_BIND___Map___Mode_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Color
struct UW_SquadSelect_C_BIND___Lock_Button_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Visibility
struct UW_SquadSelect_C_BIND___Lock_Button_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadSelect.W_SquadSelect_C.PreConstruct
struct UW_SquadSelect_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SquadSelect.W_SquadSelect_C.Construct
struct UW_SquadSelect_C_Construct_Params
{
};

// Function W_SquadSelect.W_SquadSelect_C.BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_SquadSelect_C_BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SquadSelect.W_SquadSelect_C.ExecuteUbergraph_W_SquadSelect
struct UW_SquadSelect_C_ExecuteUbergraph_W_SquadSelect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
