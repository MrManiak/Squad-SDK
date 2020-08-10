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

// Function W_TeamInfo.W_TeamInfo_C.Same Team
struct UW_TeamInfo_C_Same_Team_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_TeamInfo.W_TeamInfo_C.Init Team Image
struct UW_TeamInfo_C_Init_Team_Image_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Refresh Descriptions
struct UW_TeamInfo_C_Refresh_Descriptions_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Validate Team
struct UW_TeamInfo_C_Validate_Team_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TeamInfo.W_TeamInfo_C.Update Button Color
struct UW_TeamInfo_C_Update_Button_Color_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Update Button
struct UW_TeamInfo_C_Update_Button_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Are Teams Unbalanced
struct UW_TeamInfo_C_Are_Teams_Unbalanced_Params
{
	bool                                               bUnbalanced;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TeamInfo.W_TeamInfo_C.Init Team
struct UW_TeamInfo_C_Init_Team_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamInfo.W_TeamInfo_C.Construct
struct UW_TeamInfo_C_Construct_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.PreConstruct
struct UW_TeamInfo_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TeamInfo.W_TeamInfo_C.BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
struct UW_TeamInfo_C_BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Get Team Info
struct UW_TeamInfo_C_Get_Team_Info_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Set Minimised
struct UW_TeamInfo_C_Set_Minimised_Params
{
	bool                                               Minimised;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TeamInfo.W_TeamInfo_C.Update Widget
struct UW_TeamInfo_C_Update_Widget_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Timer Enable Button
struct UW_TeamInfo_C_Timer_Enable_Button_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.Disable Button Temporarily
struct UW_TeamInfo_C_Disable_Button_Temporarily_Params
{
};

// Function W_TeamInfo.W_TeamInfo_C.ExecuteUbergraph_W_TeamInfo
struct UW_TeamInfo_C_ExecuteUbergraph_W_TeamInfo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TeamInfo.W_TeamInfo_C.Clicked__DelegateSignature
struct UW_TeamInfo_C_Clicked__DelegateSignature_Params
{
	class ASQTeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
