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

// Function W_FireteamGroup.W_FireteamGroup_C.OnMouseButtonDown
struct UW_FireteamGroup_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_FireteamGroup.W_FireteamGroup_C.Set Fireteam Option Visibility
struct UW_FireteamGroup_C_Set_Fireteam_Option_Visibility_Params
{
	ESlateVisibility                                   InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FireteamGroup.W_FireteamGroup_C.Is Member Highlighted
struct UW_FireteamGroup_C_Is_Member_Highlighted_Params
{
	bool                                               Has_Highlighted_member;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_FireteamGroup.W_FireteamGroup_C.Highlight Fireteam
struct UW_FireteamGroup_C_Highlight_Fireteam_Params
{
	ESQSelectionState                                  InSelectionState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FireteamGroup.W_FireteamGroup_C.PreConstruct
struct UW_FireteamGroup_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_FireteamGroup.W_FireteamGroup_C.Construct
struct UW_FireteamGroup_C_Construct_Params
{
};

// Function W_FireteamGroup.W_FireteamGroup_C.Create Disband Option
struct UW_FireteamGroup_C_Create_Disband_Option_Params
{
};

// Function W_FireteamGroup.W_FireteamGroup_C.Option Clicked_Event_1
struct UW_FireteamGroup_C_Option_Clicked_Event_1_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_FireteamGroup.W_FireteamGroup_C. Hide Fireteam
struct UW_FireteamGroup_C__Hide_Fireteam_Params
{
};

// Function W_FireteamGroup.W_FireteamGroup_C.ExecuteUbergraph_W_FireteamGroup
struct UW_FireteamGroup_C_ExecuteUbergraph_W_FireteamGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
