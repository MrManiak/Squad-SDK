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

// Function BPI_HUD.BPI_HUD_C.Zoom In Map Wheel
struct UBPI_HUD_C_Zoom_In_Map_Wheel_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Get Showing Main Menu
struct UBPI_HUD_C_Get_Showing_Main_Menu_Params
{
	bool                                               Showing;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_HUD.BPI_HUD_C.Zoom In Map
struct UBPI_HUD_C_Zoom_In_Map_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Destroy Radial
struct UBPI_HUD_C_Destroy_Radial_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Close Menus
struct UBPI_HUD_C_Close_Menus_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Get Interactable Widget
struct UBPI_HUD_C_Get_Interactable_Widget_Params
{
	class USQInteractableWidgetList*                   Interact_Widget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Get UI Input Stacks
struct UBPI_HUD_C_Get_UI_Input_Stacks_Params
{
	TArray<struct FSQInputState>                       Input_Stacks;                                              // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function BPI_HUD.BPI_HUD_C.Player Died
struct UBPI_HUD_C_Player_Died_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Set Commander Max Cooldowns
struct UBPI_HUD_C_Set_Commander_Max_Cooldowns_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Get Scoreboard
struct UBPI_HUD_C_Get_Scoreboard_Params
{
	class USQScoreboard*                               ScoreBoard;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Toggle Leaderboard
struct UBPI_HUD_C_Toggle_Leaderboard_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Show Leaderboard
struct UBPI_HUD_C_Show_Leaderboard_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_HUD.BPI_HUD_C.Close Radial
struct UBPI_HUD_C_Close_Radial_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Destroy SL Menu
struct UBPI_HUD_C_Destroy_SL_Menu_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Create SL Menu
struct UBPI_HUD_C_Create_SL_Menu_Params
{
};

// Function BPI_HUD.BPI_HUD_C.End Match
struct UBPI_HUD_C_End_Match_Params
{
	int                                                Winning_Team;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Losing_Team;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Winning_Tickets;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loser_Tickets;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Menu Close
struct UBPI_HUD_C_Menu_Close_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Toggle Main Menu
struct UBPI_HUD_C_Toggle_Main_Menu_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Clear All Floating Widgets
struct UBPI_HUD_C_Clear_All_Floating_Widgets_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Menu Toggle
struct UBPI_HUD_C_Menu_Toggle_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_MenuBase_C*                             In_Menu;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show_Mouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_HUD.BPI_HUD_C.Get Map Component
struct UBPI_HUD_C_Get_Map_Component_Params
{
	class USQCoreStateMapComponent*                    Map_Component;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Get Map Core
struct UBPI_HUD_C_Get_Map_Core_Params
{
	class UW_SQMapCore_C*                              Map_Core;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Get Is Showing Settings Menu
struct UBPI_HUD_C_Get_Is_Showing_Settings_Menu_Params
{
	bool                                               Showing_Main_Menu;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_HUD.BPI_HUD_C.Show End Scoreboard
struct UBPI_HUD_C_Show_End_Scoreboard_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Get Main Menus
struct UBPI_HUD_C_Get_Main_Menus_Params
{
	class UUMG_MenuBase_C*                             Deployment;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             Command;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             Roaming;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Show 3D Marker
struct UBPI_HUD_C_Show_3D_Marker_Params
{
	class ASQMapMarker*                                Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Get Radial Menu
struct UBPI_HUD_C_Get_Radial_Menu_Params
{
	class UBaseRadialMenu_C*                           Radial_Menu;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Create Radial Menu
struct UBPI_HUD_C_Create_Radial_Menu_Params
{
	class UClass*                                      Model;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Close_Command;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_HUD.BPI_HUD_C.Open Deployment
struct UBPI_HUD_C_Open_Deployment_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
