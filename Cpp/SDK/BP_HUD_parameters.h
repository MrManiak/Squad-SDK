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

// Function BP_HUD.BP_HUD_C.Get Showing Main Menu
struct ABP_HUD_C_Get_Showing_Main_Menu_Params
{
	bool                                               Showing;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Get Interactable Widget
struct ABP_HUD_C_Get_Interactable_Widget_Params
{
	class USQInteractableWidgetList*                   Interact_Widget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get UI Input Stacks
struct ABP_HUD_C_Get_UI_Input_Stacks_Params
{
	TArray<struct FSQInputState>                       Input_Stacks;                                              // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function BP_HUD.BP_HUD_C.Get Scoreboard
struct ABP_HUD_C_Get_Scoreboard_Params
{
	class USQScoreboard*                               ScoreBoard;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get Map Component
struct ABP_HUD_C_Get_Map_Component_Params
{
	class USQCoreStateMapComponent*                    Map_Component;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get Map Core
struct ABP_HUD_C_Get_Map_Core_Params
{
	class UW_SQMapCore_C*                              Map_Core;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get Is Showing Settings Menu
struct ABP_HUD_C_Get_Is_Showing_Settings_Menu_Params
{
	bool                                               Showing_Main_Menu;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Get Main Menus
struct ABP_HUD_C_Get_Main_Menus_Params
{
	class UUMG_MenuBase_C*                             Deployment;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             Command;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             Roaming;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get Radial Menu
struct ABP_HUD_C_Get_Radial_Menu_Params
{
	class UBaseRadialMenu_C*                           Radial_Menu;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Get Deployable
struct ABP_HUD_C_Get_Deployable_Params
{
	class UClass*                                      Deployable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Remove All Interactable Widgets
struct ABP_HUD_C_Remove_All_Interactable_Widgets_Params
{
};

// Function BP_HUD.BP_HUD_C.CreateVoiceMenu
struct ABP_HUD_C_CreateVoiceMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.Get Interactor Display Name
struct ABP_HUD_C_Get_Interactor_Display_Name_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (Parm, OutParm)
};

// Function BP_HUD.BP_HUD_C.Draw Interact Widget
struct ABP_HUD_C_Draw_Interact_Widget_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Add;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Close Radial Menu
struct ABP_HUD_C_Close_Radial_Menu_Params
{
};

// Function BP_HUD.BP_HUD_C.Load Icon Scale
struct ABP_HUD_C_Load_Icon_Scale_Params
{
};

// Function BP_HUD.BP_HUD_C.Show Spawn Points
struct ABP_HUD_C_Show_Spawn_Points_Params
{
};

// Function BP_HUD.BP_HUD_C.Create Deployment
struct ABP_HUD_C_Create_Deployment_Params
{
};

// Function BP_HUD.BP_HUD_C.ZoomMapWithWheel
struct ABP_HUD_C_ZoomMapWithWheel_Params
{
	float                                              WheelAxis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Remove Menus
struct ABP_HUD_C_Remove_Menus_Params
{
};

// Function BP_HUD.BP_HUD_C.Configure Map
struct ABP_HUD_C_Configure_Map_Params
{
	class UW_SQMapCore_C*                              Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Call Zoom Update
struct ABP_HUD_C_Call_Zoom_Update_Params
{
	float                                              Zoom_Amount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Remove SL Menu
struct ABP_HUD_C_Remove_SL_Menu_Params
{
};

// Function BP_HUD.BP_HUD_C.Close All Menus
struct ABP_HUD_C_Close_All_Menus_Params
{
};

// Function BP_HUD.BP_HUD_C.Create RoamingMap
struct ABP_HUD_C_Create_RoamingMap_Params
{
};

// Function BP_HUD.BP_HUD_C.Create Command
struct ABP_HUD_C_Create_Command_Params
{
};

// Function BP_HUD.BP_HUD_C.Clear Floating Widgets
struct ABP_HUD_C_Clear_Floating_Widgets_Params
{
};

// Function BP_HUD.BP_HUD_C.Toggle Menu
struct ABP_HUD_C_Toggle_Menu_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_MenuBase_C*                             In_Menu;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show_Mouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.CreateChat
struct ABP_HUD_C_CreateChat_Params
{
};

// Function BP_HUD.BP_HUD_C.CreateScoreboard
struct ABP_HUD_C_CreateScoreboard_Params
{
};

// Function BP_HUD.BP_HUD_C.DrawCurrentMapMarker
struct ABP_HUD_C_DrawCurrentMapMarker_Params
{
};

// Function BP_HUD.BP_HUD_C.GetPlayerStateFromSoldier
struct ABP_HUD_C_GetPlayerStateFromSoldier_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ToggleMainMenu
struct ABP_HUD_C_ToggleMainMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.DestroyRadialMenu
struct ABP_HUD_C_DestroyRadialMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.DestroyCommandMenu
struct ABP_HUD_C_DestroyCommandMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.CreateRadialMenu
struct ABP_HUD_C_CreateRadialMenu_Params
{
	class UClass*                                      Model;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CloseWindowCommand;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.CreateCommandMenu
struct ABP_HUD_C_CreateCommandMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.ShowHideMainMenu
struct ABP_HUD_C_ShowHideMainMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.CreateMainMenu
struct ABP_HUD_C_CreateMainMenu_Params
{
};

// Function BP_HUD.BP_HUD_C.DrawNametag
struct ABP_HUD_C_DrawNametag_Params
{
	class APawn*                                       Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ZoomMap
struct ABP_HUD_C_ZoomMap_Params
{
};

// Function BP_HUD.BP_HUD_C.Close Menu
struct ABP_HUD_C_Close_Menu_Params
{
	class UUMG_MenuBase_C*                             Target_Menu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Open Menu
struct ABP_HUD_C_Open_Menu_Params
{
	class UUMG_MenuBase_C*                             Target_Menu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show_Mouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.DrawHUD
struct ABP_HUD_C_DrawHUD_Params
{
	int                                                Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.DrawHealthIcon
struct ABP_HUD_C_DrawHealthIcon_Params
{
	float                                              Size_X;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Size_Y;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.CalculateHitIndicatorOpacity
struct ABP_HUD_C_CalculateHitIndicatorOpacity_Params
{
	float                                              Delta_Time;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.DrawHitIndicator
struct ABP_HUD_C_DrawHitIndicator_Params
{
	float                                              Size_X;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Size_Y;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.DrawTicketCount
struct ABP_HUD_C_DrawTicketCount_Params
{
	float                                              Size_X;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Open Deployment
struct ABP_HUD_C_Open_Deployment_Params
{
};

// Function BP_HUD.BP_HUD_C.Set Commander Max Cooldowns
struct ABP_HUD_C_Set_Commander_Max_Cooldowns_Params
{
};

// Function BP_HUD.BP_HUD_C.ReceiveDrawHUD
struct ABP_HUD_C_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SizeY;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ReceiveTick
struct ABP_HUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.BlueprintNotifyHit
struct ABP_HUD_C_BlueprintNotifyHit_Params
{
	float                                              DamageTaken;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APawn*                                       PawnInstigator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ReceiveBeginPlay
struct ABP_HUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_HUD.BP_HUD_C.HideMarkerPlacement_Event
struct ABP_HUD_C_HideMarkerPlacement_Event_Params
{
};

// Function BP_HUD.BP_HUD_C.VehicleCreateOverlay
struct ABP_HUD_C_VehicleCreateOverlay_Params
{
	class UClass*                                      WidgetClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.DisplayAmmoBagOverlay
struct ABP_HUD_C_DisplayAmmoBagOverlay_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanPickup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.HideAmmoBagOverlay
struct ABP_HUD_C_HideAmmoBagOverlay_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Force Update Zoom
struct ABP_HUD_C_Force_Update_Zoom_Params
{
	float                                              Zoom_Amount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.OnDied
struct ABP_HUD_C_OnDied_Params
{
};

// Function BP_HUD.BP_HUD_C.ReceiveEndPlay
struct ABP_HUD_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ReceiveDestroyed
struct ABP_HUD_C_ReceiveDestroyed_Params
{
};

// Function BP_HUD.BP_HUD_C.BPOnSetHudWidgetsEnabled
struct ABP_HUD_C_BPOnSetHudWidgetsEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.BPOnUsableVisible
struct ABP_HUD_C_BPOnUsableVisible_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Show End Round Widget
struct ABP_HUD_C_Show_End_Round_Widget_Params
{
	int                                                Winning_Team;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Losing_Team;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Winning_Tickets;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Losing_Tickets;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Show Scoreboard
struct ABP_HUD_C_Show_Scoreboard_Params
{
};

// Function BP_HUD.BP_HUD_C.Hide Scoreboard
struct ABP_HUD_C_Hide_Scoreboard_Params
{
};

// Function BP_HUD.BP_HUD_C.Toggle Scoreboard
struct ABP_HUD_C_Toggle_Scoreboard_Params
{
};

// Function BP_HUD.BP_HUD_C.Open Voice Model
struct ABP_HUD_C_Open_Voice_Model_Params
{
};

// Function BP_HUD.BP_HUD_C.Show 3D Marker
struct ABP_HUD_C_Show_3D_Marker_Params
{
	class ASQMapMarker*                                Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Create Radial Menu
struct ABP_HUD_C_Create_Radial_Menu_Params
{
	class UClass*                                      Model;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Close_Command;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Show End Scoreboard
struct ABP_HUD_C_Show_End_Scoreboard_Params
{
};

// Function BP_HUD.BP_HUD_C.Clear All Floating Widgets
struct ABP_HUD_C_Clear_All_Floating_Widgets_Params
{
};

// Function BP_HUD.BP_HUD_C.Toggle Main Menu
struct ABP_HUD_C_Toggle_Main_Menu_Params
{
};

// Function BP_HUD.BP_HUD_C.Menu Close
struct ABP_HUD_C_Menu_Close_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Create SL Menu
struct ABP_HUD_C_Create_SL_Menu_Params
{
};

// Function BP_HUD.BP_HUD_C.Destroy SL Menu
struct ABP_HUD_C_Destroy_SL_Menu_Params
{
};

// Function BP_HUD.BP_HUD_C.Close Radial
struct ABP_HUD_C_Close_Radial_Params
{
};

// Function BP_HUD.BP_HUD_C.Show Leaderboard
struct ABP_HUD_C_Show_Leaderboard_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Toggle Leaderboard
struct ABP_HUD_C_Toggle_Leaderboard_Params
{
};

// Function BP_HUD.BP_HUD_C.Menu Toggle
struct ABP_HUD_C_Menu_Toggle_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_MenuBase_C*                             In_Menu;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show_Mouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.Player Died
struct ABP_HUD_C_Player_Died_Params
{
};

// Function BP_HUD.BP_HUD_C.Game State Became Valid
struct ABP_HUD_C_Game_State_Became_Valid_Params
{
};

// Function BP_HUD.BP_HUD_C.End Match
struct ABP_HUD_C_End_Match_Params
{
	int                                                Winning_Team;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Losing_Team;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Winning_Tickets;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loser_Tickets;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Close Menus
struct ABP_HUD_C_Close_Menus_Params
{
};

// Function BP_HUD.BP_HUD_C.Destroy Radial
struct ABP_HUD_C_Destroy_Radial_Params
{
};

// Function BP_HUD.BP_HUD_C.Zoom In Map
struct ABP_HUD_C_Zoom_In_Map_Params
{
};

// Function BP_HUD.BP_HUD_C.Zoom In Map Wheel
struct ABP_HUD_C_Zoom_In_Map_Wheel_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.ShowMarkerOnHUD
struct ABP_HUD_C_ShowMarkerOnHUD_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.CreateMapMarker
struct ABP_HUD_C_CreateMapMarker_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_HUD.BP_HUD_C.InvalidateMapMarker_Event
struct ABP_HUD_C_InvalidateMapMarker_Event_Params
{
};

// Function BP_HUD.BP_HUD_C.DeleteMarkerOnHUD
struct ABP_HUD_C_DeleteMarkerOnHUD_Params
{
};

// Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.OnMapCoreChanged__DelegateSignature
struct ABP_HUD_C_OnMapCoreChanged__DelegateSignature_Params
{
};

// Function BP_HUD.BP_HUD_C.HUD Can Start__DelegateSignature
struct ABP_HUD_C_HUD_Can_Start__DelegateSignature_Params
{
};

// Function BP_HUD.BP_HUD_C.Menu Opened__DelegateSignature
struct ABP_HUD_C_Menu_Opened__DelegateSignature_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Menu Closed__DelegateSignature
struct ABP_HUD_C_Menu_Closed__DelegateSignature_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUD.BP_HUD_C.Clear Widgets__DelegateSignature
struct ABP_HUD_C_Clear_Widgets__DelegateSignature_Params
{
};

// Function BP_HUD.BP_HUD_C.Zoom Updated__DelegateSignature
struct ABP_HUD_C_Zoom_Updated__DelegateSignature_Params
{
	float                                              Zoom_Amount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
