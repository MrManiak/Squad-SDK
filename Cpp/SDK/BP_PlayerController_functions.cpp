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
// Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.bCanRemoveMapMarkerNew
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapMarker_Selectable_C* Map_Marker                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Remove                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::bCanRemoveMapMarkerNew(class UBP_MapMarker_Selectable_C* Map_Marker, bool* Can_Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.bCanRemoveMapMarkerNew");

	ABP_PlayerController_C_bCanRemoveMapMarkerNew_Params params;
	params.Map_Marker = Map_Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Remove != nullptr)
		*Can_Remove = params.Can_Remove;

}


// Function BP_PlayerController.BP_PlayerController_C.Get Command Request Available
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Remaining_Time                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Get_Command_Request_Available(bool* Available, float* Remaining_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Get Command Request Available");

	ABP_PlayerController_C_Get_Command_Request_Available_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;
	if (Remaining_Time != nullptr)
		*Remaining_Time = params.Remaining_Time;

}


// Function BP_PlayerController.BP_PlayerController_C.Get Command Action Condition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Condition_Class                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Get_Command_Action_Condition(class UClass** Condition_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Get Command Action Condition");

	ABP_PlayerController_C_Get_Command_Action_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Condition_Class != nullptr)
		*Condition_Class = params.Condition_Class;

}


// Function BP_PlayerController.BP_PlayerController_C.Get Last Selected Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapWidgetMapMarkerSelectable* Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Get_Last_Selected_Marker(class USQMapWidgetMapMarkerSelectable** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Get Last Selected Marker");

	ABP_PlayerController_C_Get_Last_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function BP_PlayerController.BP_PlayerController_C.bCan Remove Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Remove                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::bCan_Remove_Marker(bool* Can_Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.bCan Remove Marker");

	ABP_PlayerController_C_bCan_Remove_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Remove != nullptr)
		*Can_Remove = params.Can_Remove;

}


// Function BP_PlayerController.BP_PlayerController_C.bCan Place Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Place                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::bCan_Place_Marker(bool* Can_Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.bCan Place Marker");

	ABP_PlayerController_C_bCan_Place_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Place != nullptr)
		*Can_Place = params.Can_Place;

}


// Function BP_PlayerController.BP_PlayerController_C.CanOpenRadialMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanOpenRadialMenu              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::CanOpenRadialMenu(bool* CanOpenRadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CanOpenRadialMenu");

	ABP_PlayerController_C_CanOpenRadialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanOpenRadialMenu != nullptr)
		*CanOpenRadialMenu = params.CanOpenRadialMenu;

}


// Function BP_PlayerController.BP_PlayerController_C.Set Out of Bounds Notification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Set_Out_of_Bounds_Notification(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Set Out of Bounds Notification");

	ABP_PlayerController_C_Set_Out_of_Bounds_Notification_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.PossessAdminCam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::PossessAdminCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.PossessAdminCam");

	ABP_PlayerController_C_PossessAdminCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Get Deployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Deployable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Get_Deployable(class UClass** Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Get Deployable");

	ABP_PlayerController_C_Get_Deployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployable != nullptr)
		*Deployable = params.Deployable;

}


// Function BP_PlayerController.BP_PlayerController_C.Create Director Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Create_Director_Marker(class UClass* Action, const struct FTransform& Transform, float distance, int Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Create Director Marker");

	ABP_PlayerController_C_Create_Director_Marker_Params params;
	params.Action = Action;
	params.Transform = Transform;
	params.distance = distance;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Create Command Request
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Create_Command_Request(class UClass* Action, const struct FTransform& Transform, float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Create Command Request");

	ABP_PlayerController_C_Create_Command_Request_Params params;
	params.Action = Action;
	params.Transform = Transform;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Remove Last Command Request Marker
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Remove_Last_Command_Request_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Remove Last Command Request Marker");

	ABP_PlayerController_C_Remove_Last_Command_Request_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Try to Open Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Try_to_Open_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Try to Open Menu");

	ABP_PlayerController_C_Try_to_Open_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Cancel Spawn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Cancel_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Cancel Spawn");

	ABP_PlayerController_C_Cancel_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Force Show Spawns on Map
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Force_Show_Spawns_on_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Force Show Spawns on Map");

	ABP_PlayerController_C_Force_Show_Spawns_on_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Remove Fireteam Markers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Remove_Fireteam_Markers(bool bAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Remove Fireteam Markers");

	ABP_PlayerController_C_Remove_Fireteam_Markers_Params params;
	params.bAction = bAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.MouseWheelZoomMapAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MouseWheelAxis                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::MouseWheelZoomMapAction(float MouseWheelAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.MouseWheelZoomMapAction");

	ABP_PlayerController_C_MouseWheelZoomMapAction_Params params;
	params.MouseWheelAxis = MouseWheelAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Can Place Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Can_Place_Marker(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Can Place Marker");

	ABP_PlayerController_C_Can_Place_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BP_PlayerController.BP_PlayerController_C.Can Remove Marker
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void ABP_PlayerController_C::Can_Remove_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Can Remove Marker");

	ABP_PlayerController_C_Can_Remove_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.CommandKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::CommandKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CommandKeyAction");

	ABP_PlayerController_C_CommandKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Leave Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Leave_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Leave Menu");

	ABP_PlayerController_C_Leave_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ClearFiring
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::ClearFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ClearFiring");

	ABP_PlayerController_C_ClearFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ManageMarkers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQMapMarker*            NewMarker                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::ManageMarkers(class ASQMapMarker* NewMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ManageMarkers");

	ABP_PlayerController_C_ManageMarkers_Params params;
	params.NewMarker = NewMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.TraceMarkerLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerDataAsset*   In_Marker                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hotkeyed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::TraceMarkerLocation(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* In_Marker, bool Hotkeyed, bool Emote, class UClass* MarkerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TraceMarkerLocation");

	ABP_PlayerController_C_TraceMarkerLocation_Params params;
	params.Start = Start;
	params.End = End;
	params.In_Marker = In_Marker;
	params.Hotkeyed = Hotkeyed;
	params.Emote = Emote;
	params.MarkerClass = MarkerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.IsSoldierInAVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerController_C::IsSoldierInAVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.IsSoldierInAVehicle");

	ABP_PlayerController_C_IsSoldierInAVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerController.BP_PlayerController_C.ZoomKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::ZoomKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ZoomKeyAction");

	ABP_PlayerController_C_ZoomKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.RoamingMapKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::RoamingMapKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RoamingMapKeyAction");

	ABP_PlayerController_C_RoamingMapKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.DeploymentKeyAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::DeploymentKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DeploymentKeyAction");

	ABP_PlayerController_C_DeploymentKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.OnAltFireWeaponOverride
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerController_C::OnAltFireWeaponOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnAltFireWeaponOverride");

	ABP_PlayerController_C_OnAltFireWeaponOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerController.BP_PlayerController_C.OnFireWeaponOverride
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerController_C::OnFireWeaponOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnFireWeaponOverride");

	ABP_PlayerController_C_OnFireWeaponOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerController.BP_PlayerController_C.OnRep_Current Kit
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::OnRep_Current_Kit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnRep_Current Kit");

	ABP_PlayerController_C_OnRep_Current_Kit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.HideGameMenus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::HideGameMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.HideGameMenus");

	ABP_PlayerController_C_HideGameMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_InGameMenu_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_15");

	ABP_PlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_SpawnMenu_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_SpawnMenu_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_SpawnMenu_K2Node_InputActionEvent_14");

	ABP_PlayerController_C_InpActEvt_SpawnMenu_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Map_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_Map_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Map_K2Node_InputActionEvent_13");

	ABP_PlayerController_C_InpActEvt_Map_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_12");

	ABP_PlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_11");

	ABP_PlayerController_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10");

	ABP_PlayerController_C_InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_Shift_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1");

	ABP_PlayerController_C_InpActEvt_Shift_P_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_CommandMenu_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_9");

	ABP_PlayerController_C_InpActEvt_CommandMenu_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_CommandMenu_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMenu_K2Node_InputActionEvent_8");

	ABP_PlayerController_C_InpActEvt_CommandMenu_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MapZoom_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_MapZoom_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MapZoom_K2Node_InputActionEvent_7");

	ABP_PlayerController_C_InpActEvt_MapZoom_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMap_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_CommandMap_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_CommandMap_K2Node_InputActionEvent_6");

	ABP_PlayerController_C_InpActEvt_CommandMap_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToAll_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_ChatToAll_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToAll_K2Node_InputActionEvent_5");

	ABP_PlayerController_C_InpActEvt_ChatToAll_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToSquad_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_ChatToSquad_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToSquad_K2Node_InputActionEvent_4");

	ABP_PlayerController_C_InpActEvt_ChatToSquad_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToTeam_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_ChatToTeam_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_ChatToTeam_K2Node_InputActionEvent_3");

	ABP_PlayerController_C_InpActEvt_ChatToTeam_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Interact_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Interact_K2Node_InputActionEvent_2");

	ABP_PlayerController_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerController_C::InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1");

	ABP_PlayerController_C_InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.BlueprintOnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LosingTeam                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WinnerTickets                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LoserTickets                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::BlueprintOnMatchEnded(int WinningTeam, int LosingTeam, int WinnerTickets, int LoserTickets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.BlueprintOnMatchEnded");

	ABP_PlayerController_C_BlueprintOnMatchEnded_Params params;
	params.WinningTeam = WinningTeam;
	params.LosingTeam = LosingTeam;
	params.WinnerTickets = WinnerTickets;
	params.LoserTickets = LoserTickets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.StopShowingTMenu
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::StopShowingTMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.StopShowingTMenu");

	ABP_PlayerController_C_StopShowingTMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerSpawned
// (Event, Public, BlueprintEvent)
void ABP_PlayerController_C::BlueprintPlayerSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerSpawned");

	ABP_PlayerController_C_BlueprintPlayerSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerDied
// (Event, Public, BlueprintEvent)
void ABP_PlayerController_C::BlueprintPlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.BlueprintPlayerDied");

	ABP_PlayerController_C_BlueprintPlayerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ServerEnableCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::ServerEnableCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ServerEnableCamera");

	ABP_PlayerController_C_ServerEnableCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.RequestPlaceMarker
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FireTeamId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::RequestPlaceMarker(class UClass* MarkerClass, const struct FVector& Location, int FireTeamId, bool Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestPlaceMarker");

	ABP_PlayerController_C_RequestPlaceMarker_Params params;
	params.MarkerClass = MarkerClass;
	params.Location = Location;
	params.FireTeamId = FireTeamId;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ServerHidePawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::ServerHidePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ServerHidePawn");

	ABP_PlayerController_C_ServerHidePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.RequestRemoveMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapItemComponent*     MarkerItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::RequestRemoveMarker(class USQMapItemComponent* MarkerItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestRemoveMarker");

	ABP_PlayerController_C_RequestRemoveMarker_Params params;
	params.MarkerItem = MarkerItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveLastSelectedMarker
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::RemoveLastSelectedMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RemoveLastSelectedMarker");

	ABP_PlayerController_C_RemoveLastSelectedMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.BPTraceMarkerLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::BPTraceMarkerLocation(class UClass* MarkerClass, const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.BPTraceMarkerLocation");

	ABP_PlayerController_C_BPTraceMarkerLocation_Params params;
	params.MarkerClass = MarkerClass;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.SERVER Set Selected Marker
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapWidgetMapMarkerSelectable* Marker_Ref                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::SERVER_Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SERVER Set Selected Marker");

	ABP_PlayerController_C_SERVER_Set_Selected_Marker_Params params;
	params.Marker_Ref = Marker_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");

	ABP_PlayerController_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Client Notification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ESQNotificationTypes           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Custom_Icon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Client_Notification(const struct FText& Text, ESQNotificationTypes Type, class UTexture2D* Custom_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Client Notification");

	ABP_PlayerController_C_Client_Notification_Params params;
	params.Text = Text;
	params.Type = Type;
	params.Custom_Icon = Custom_Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Place Command Map Marker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              T                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Request_Place_Command_Map_Marker(class UClass* Action, const struct FTransform& T, float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Place Command Map Marker");

	ABP_PlayerController_C_Request_Place_Command_Map_Marker_Params params;
	params.Action = Action;
	params.T = T;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Place Director Marker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              T                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Request_Place_Director_Marker(class UClass* Action, const struct FTransform& T, float distance, int Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Place Director Marker");

	ABP_PlayerController_C_Request_Place_Director_Marker_Params params;
	params.Action = Action;
	params.T = T;
	params.distance = distance;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Server Change Role
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AmmoRequired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         NewRole                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bGivePartialAmmo               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Server_Change_Role(class UObject* Context, float AmmoRequired, class USQRoleSettings* NewRole, bool bGivePartialAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server Change Role");

	ABP_PlayerController_C_Server_Change_Role_Params params;
	params.Context = Context;
	params.AmmoRequired = AmmoRequired;
	params.NewRole = NewRole;
	params.bGivePartialAmmo = bGivePartialAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Trace Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerDataAsset*   Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Trace_Marker(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* Marker, bool Hotkey, bool Emote, class UClass* MarkerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Trace Marker");

	ABP_PlayerController_C_Trace_Marker_Params params;
	params.Start = Start;
	params.End = End;
	params.Marker = Marker;
	params.Hotkey = Hotkey;
	params.Emote = Emote;
	params.MarkerClass = MarkerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Set Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapWidgetMapMarkerSelectable* Marker_Ref                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Set Selected Marker");

	ABP_PlayerController_C_Set_Selected_Marker_Params params;
	params.Marker_Ref = Marker_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Change Role from RearmSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Partial_Ammo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Change_Role_from_RearmSource(class UObject* Context, float Ammo, class USQRoleSettings* Role, bool Partial_Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Change Role from RearmSource");

	ABP_PlayerController_C_Change_Role_from_RearmSource_Params params;
	params.Context = Context;
	params.Ammo = Ammo;
	params.Role = Role;
	params.Partial_Ammo = Partial_Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Clear Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Clear_Selected_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Clear Selected Marker");

	ABP_PlayerController_C_Clear_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.SetAllowAdminCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllowAdminCam                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::SetAllowAdminCam(bool bAllowAdminCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SetAllowAdminCam");

	ABP_PlayerController_C_SetAllowAdminCam_Params params;
	params.bAllowAdminCam = bAllowAdminCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Play Emote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQEmotes                      Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Play_Emote(ESQEmotes Emote, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Play Emote");

	ABP_PlayerController_C_Play_Emote_Params params;
	params.Emote = Emote;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.OnOutOfMapBoundsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          KillTimestamp                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsOutOfBounds                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::OnOutOfMapBoundsChanged(float KillTimestamp, bool bIsOutOfBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnOutOfMapBoundsChanged");

	ABP_PlayerController_C_OnOutOfMapBoundsChanged_Params params;
	params.KillTimestamp = KillTimestamp;
	params.bIsOutOfBounds = bIsOutOfBounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.OutOfBoundsTimerCheck
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::OutOfBoundsTimerCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OutOfBoundsTimerCheck");

	ABP_PlayerController_C_OutOfBoundsTimerCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Map Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQTeam                        Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Fire_Team_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize     Location                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize     DistanceRotation               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerDataAsset*   Map_Marker_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Request_Map_Marker(int Squad_ID, ESQTeam Team_ID, int Fire_Team_ID, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& DistanceRotation, class USQMapMarkerDataAsset* Map_Marker_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Map Marker");

	ABP_PlayerController_C_Request_Map_Marker_Params params;
	params.Squad_ID = Squad_ID;
	params.Team_ID = Team_ID;
	params.Fire_Team_ID = Fire_Team_ID;
	params.Location = Location;
	params.DistanceRotation = DistanceRotation;
	params.Map_Marker_Data = Map_Marker_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Marker_Class                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Fire_Team_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Request_Marker(class UClass* Marker_Class, const struct FVector& Location, int Fire_Team_ID, bool Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Marker");

	ABP_PlayerController_C_Request_Marker_Params params;
	params.Marker_Class = Marker_Class;
	params.Location = Location;
	params.Fire_Team_ID = Fire_Team_ID;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Director Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Director_Marker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Request_Director_Marker(class UClass* Director_Marker, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, float distance, int Squad_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Director Marker");

	ABP_PlayerController_C_Request_Director_Marker_Params params;
	params.Director_Marker = Director_Marker;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.distance = distance;
	params.Squad_ID = Squad_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Request Command Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Command_Marker                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Request_Command_Marker(class UClass* Command_Marker, const struct FTransform& Transform, float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Request Command Marker");

	ABP_PlayerController_C_Request_Command_Marker_Params params;
	params.Command_Marker = Command_Marker;
	params.Transform = Transform;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Remove Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Remove_Selected_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Remove Selected Marker");

	ABP_PlayerController_C_Remove_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Accept Deny Command Request
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MapMarker_Command_Request_C* Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Accepted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Accept_Deny_Command_Request(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Accept Deny Command Request");

	ABP_PlayerController_C_Accept_Deny_Command_Request_Params params;
	params.Marker = Marker;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Server Accept Deny Command
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MapMarker_Command_Request_C* Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Accepted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerController_C::Server_Accept_Deny_Command(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server Accept Deny Command");

	ABP_PlayerController_C_Server_Accept_Deny_Command_Params params;
	params.Marker = Marker;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Set Last Command Request Time
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_C::Set_Last_Command_Request_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Set Last Command Request Time");

	ABP_PlayerController_C_Set_Last_Command_Request_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Server Remove Map Marker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  MapMarkerID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Server_Remove_Map_Marker(unsigned char MapMarkerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server Remove Map Marker");

	ABP_PlayerController_C_Server_Remove_Map_Marker_Params params;
	params.MapMarkerID = MapMarkerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Remove Map Marker New
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  MapMarkerID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Remove_Map_Marker_New(unsigned char MapMarkerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Remove Map Marker New");

	ABP_PlayerController_C_Remove_Map_Marker_New_Params params;
	params.MapMarkerID = MapMarkerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Marker Created__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQMapMarker*            Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Marker_Created__DelegateSignature(int Squad_ID, class ASQMapMarker* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Marker Created__DelegateSignature");

	ABP_PlayerController_C_Marker_Created__DelegateSignature_Params params;
	params.Squad_ID = Squad_ID;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.Opened Chat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::Opened_Chat__DelegateSignature(ESQChat Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Opened Chat__DelegateSignature");

	ABP_PlayerController_C_Opened_Chat__DelegateSignature_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
