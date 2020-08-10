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

// Function BP_PlayerController.BP_PlayerController_C.bCanRemoveMapMarkerNew
struct ABP_PlayerController_C_bCanRemoveMapMarkerNew_Params
{
	class UBP_MapMarker_Selectable_C*                  Map_Marker;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Remove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Get Command Request Available
struct ABP_PlayerController_C_Get_Command_Request_Available_Params
{
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Remaining_Time;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Get Command Action Condition
struct ABP_PlayerController_C_Get_Command_Action_Condition_Params
{
	class UClass*                                      Condition_Class;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Get Last Selected Marker
struct ABP_PlayerController_C_Get_Last_Selected_Marker_Params
{
	class USQMapWidgetMapMarkerSelectable*             Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.bCan Remove Marker
struct ABP_PlayerController_C_bCan_Remove_Marker_Params
{
	bool                                               Can_Remove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.bCan Place Marker
struct ABP_PlayerController_C_bCan_Place_Marker_Params
{
	bool                                               Can_Place;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.CanOpenRadialMenu
struct ABP_PlayerController_C_CanOpenRadialMenu_Params
{
	bool                                               CanOpenRadialMenu;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Set Out of Bounds Notification
struct ABP_PlayerController_C_Set_Out_of_Bounds_Notification_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.PossessAdminCam
struct ABP_PlayerController_C_PossessAdminCam_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Get Deployable
struct ABP_PlayerController_C_Get_Deployable_Params
{
	class UClass*                                      Deployable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Create Director Marker
struct ABP_PlayerController_C_Create_Director_Marker_Params
{
	class UClass*                                      Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Create Command Request
struct ABP_PlayerController_C_Create_Command_Request_Params
{
	class UClass*                                      Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Remove Last Command Request Marker
struct ABP_PlayerController_C_Remove_Last_Command_Request_Marker_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Try to Open Menu
struct ABP_PlayerController_C_Try_to_Open_Menu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Cancel Spawn
struct ABP_PlayerController_C_Cancel_Spawn_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Force Show Spawns on Map
struct ABP_PlayerController_C_Force_Show_Spawns_on_Map_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Remove Fireteam Markers
struct ABP_PlayerController_C_Remove_Fireteam_Markers_Params
{
	bool                                               bAction;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.MouseWheelZoomMapAction
struct ABP_PlayerController_C_MouseWheelZoomMapAction_Params
{
	float                                              MouseWheelAxis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Can Place Marker
struct ABP_PlayerController_C_Can_Place_Marker_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Can Remove Marker
struct ABP_PlayerController_C_Can_Remove_Marker_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.CommandKeyAction
struct ABP_PlayerController_C_CommandKeyAction_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Leave Menu
struct ABP_PlayerController_C_Leave_Menu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ClearFiring
struct ABP_PlayerController_C_ClearFiring_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ManageMarkers
struct ABP_PlayerController_C_ManageMarkers_Params
{
	class ASQMapMarker*                                NewMarker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.TraceMarkerLocation
struct ABP_PlayerController_C_TraceMarkerLocation_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerDataAsset*                       In_Marker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hotkeyed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.IsSoldierInAVehicle
struct ABP_PlayerController_C_IsSoldierInAVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.ZoomKeyAction
struct ABP_PlayerController_C_ZoomKeyAction_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.RoamingMapKeyAction
struct ABP_PlayerController_C_RoamingMapKeyAction_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.DeploymentKeyAction
struct ABP_PlayerController_C_DeploymentKeyAction_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnAltFireWeaponOverride
struct ABP_PlayerController_C_OnAltFireWeaponOverride_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.OnFireWeaponOverride
struct ABP_PlayerController_C_OnFireWeaponOverride_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.OnRep_Current Kit
struct ABP_PlayerController_C_OnRep_Current_Kit_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.HideGameMenus
struct ABP_PlayerController_C_HideGameMenus_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_15
struct ABP_PlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_SpawnMenu_K2Node_InputActionEvent_14
struct ABP_PlayerController_C_InpActEvt_SpawnMenu_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Map_K2Node_InputActionEvent_13
struct ABP_PlayerController_C_InpActEvt_Map_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_12
struct ABP_PlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_11
struct ABP_PlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10
struct ABP_PlayerController_C_InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1
struct ABP_PlayerController_C_InpActEvt_Shift_P_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_9
struct ABP_PlayerController_C_InpActEvt_CommandMenu_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_8
struct ABP_PlayerController_C_InpActEvt_CommandMenu_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MapZoom_K2Node_InputActionEvent_7
struct ABP_PlayerController_C_InpActEvt_MapZoom_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMap_K2Node_InputActionEvent_6
struct ABP_PlayerController_C_InpActEvt_CommandMap_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToAll_K2Node_InputActionEvent_5
struct ABP_PlayerController_C_InpActEvt_ChatToAll_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToSquad_K2Node_InputActionEvent_4
struct ABP_PlayerController_C_InpActEvt_ChatToSquad_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToTeam_K2Node_InputActionEvent_3
struct ABP_PlayerController_C_InpActEvt_ChatToTeam_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Interact_K2Node_InputActionEvent_2
struct ABP_PlayerController_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1
struct ABP_PlayerController_C_InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.BlueprintOnMatchEnded
struct ABP_PlayerController_C_BlueprintOnMatchEnded_Params
{
	int                                                WinningTeam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LosingTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WinnerTickets;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoserTickets;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.StopShowingTMenu
struct ABP_PlayerController_C_StopShowingTMenu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerSpawned
struct ABP_PlayerController_C_BlueprintPlayerSpawned_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerDied
struct ABP_PlayerController_C_BlueprintPlayerDied_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ServerEnableCamera
struct ABP_PlayerController_C_ServerEnableCamera_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.RequestPlaceMarker
struct ABP_PlayerController_C_RequestPlaceMarker_Params
{
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FireTeamId;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.ServerHidePawn
struct ABP_PlayerController_C_ServerHidePawn_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.RequestRemoveMarker
struct ABP_PlayerController_C_RequestRemoveMarker_Params
{
	class USQMapItemComponent*                         MarkerItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.RemoveLastSelectedMarker
struct ABP_PlayerController_C_RemoveLastSelectedMarker_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.BPTraceMarkerLocation
struct ABP_PlayerController_C_BPTraceMarkerLocation_Params
{
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     Start;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.SERVER Set Selected Marker
struct ABP_PlayerController_C_SERVER_Set_Selected_Marker_Params
{
	class USQMapWidgetMapMarkerSelectable*             Marker_Ref;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
struct ABP_PlayerController_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Client Notification
struct ABP_PlayerController_C_Client_Notification_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESQNotificationTypes                               Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Custom_Icon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Request Place Command Map Marker
struct ABP_PlayerController_C_Request_Place_Command_Map_Marker_Params
{
	class UClass*                                      Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  T;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Request Place Director Marker
struct ABP_PlayerController_C_Request_Place_Director_Marker_Params
{
	class UClass*                                      Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  T;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Squad;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Server Change Role
struct ABP_PlayerController_C_Server_Change_Role_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmmoRequired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                             NewRole;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bGivePartialAmmo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Trace Marker
struct ABP_PlayerController_C_Trace_Marker_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerDataAsset*                       Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Set Selected Marker
struct ABP_PlayerController_C_Set_Selected_Marker_Params
{
	class USQMapWidgetMapMarkerSelectable*             Marker_Ref;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Change Role from RearmSource
struct ABP_PlayerController_C_Change_Role_from_RearmSource_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Partial_Ammo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Clear Selected Marker
struct ABP_PlayerController_C_Clear_Selected_Marker_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.SetAllowAdminCam
struct ABP_PlayerController_C_SetAllowAdminCam_Params
{
	bool                                               bAllowAdminCam;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Play Emote
struct ABP_PlayerController_C_Play_Emote_Params
{
	ESQEmotes                                          Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.OnOutOfMapBoundsChanged
struct ABP_PlayerController_C_OnOutOfMapBoundsChanged_Params
{
	float                                              KillTimestamp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsOutOfBounds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.OutOfBoundsTimerCheck
struct ABP_PlayerController_C_OutOfBoundsTimerCheck_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Request Map Marker
struct ABP_PlayerController_C_Request_Map_Marker_Params
{
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQTeam                                            Team_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Fire_Team_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         DistanceRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerDataAsset*                       Map_Marker_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Request Marker
struct ABP_PlayerController_C_Request_Marker_Params
{
	class UClass*                                      Marker_Class;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Fire_Team_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Request Director Marker
struct ABP_PlayerController_C_Request_Director_Marker_Params
{
	class UClass*                                      Director_Marker;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Request Command Marker
struct ABP_PlayerController_C_Request_Command_Marker_Params
{
	class UClass*                                      Command_Marker;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Remove Selected Marker
struct ABP_PlayerController_C_Remove_Selected_Marker_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Accept Deny Command Request
struct ABP_PlayerController_C_Accept_Deny_Command_Request_Params
{
	class ABP_MapMarker_Command_Request_C*             Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Accepted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Server Accept Deny Command
struct ABP_PlayerController_C_Server_Accept_Deny_Command_Params
{
	class ABP_MapMarker_Command_Request_C*             Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Accepted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerController.BP_PlayerController_C.Set Last Command Request Time
struct ABP_PlayerController_C_Set_Last_Command_Request_Time_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.Server Remove Map Marker
struct ABP_PlayerController_C_Server_Remove_Map_Marker_Params
{
	unsigned char                                      MapMarkerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Remove Map Marker New
struct ABP_PlayerController_C_Remove_Map_Marker_New_Params
{
	unsigned char                                      MapMarkerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
struct ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Marker Created__DelegateSignature
struct ABP_PlayerController_C_Marker_Created__DelegateSignature_Params
{
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQMapMarker*                                Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerController.BP_PlayerController_C.Opened Chat__DelegateSignature
struct ABP_PlayerController_C_Opened_Chat__DelegateSignature_Params
{
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
