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
// Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerController.BPI_PlayerController_C.bCanRemoveMapMarkerNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapMarker_Selectable_C* Map_Marker                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Remove                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::bCanRemoveMapMarkerNew(class UBP_MapMarker_Selectable_C* Map_Marker, bool* Can_Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.bCanRemoveMapMarkerNew");

	UBPI_PlayerController_C_bCanRemoveMapMarkerNew_Params params;
	params.Map_Marker = Map_Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Remove != nullptr)
		*Can_Remove = params.Can_Remove;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Set Last Command Request Time
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerController_C::Set_Last_Command_Request_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Set Last Command Request Time");

	UBPI_PlayerController_C_Set_Last_Command_Request_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Get Command Request Available
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Remaining_Time                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Get_Command_Request_Available(bool* Available, float* Remaining_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Get Command Request Available");

	UBPI_PlayerController_C_Get_Command_Request_Available_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;
	if (Remaining_Time != nullptr)
		*Remaining_Time = params.Remaining_Time;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Accept Deny Command Request
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MapMarker_Command_Request_C* Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Accepted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::Accept_Deny_Command_Request(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Accept Deny Command Request");

	UBPI_PlayerController_C_Accept_Deny_Command_Request_Params params;
	params.Marker = Marker;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Get Command Action Condition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Condition_Class                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Get_Command_Action_Condition(class UClass** Condition_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Get Command Action Condition");

	UBPI_PlayerController_C_Get_Command_Action_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Condition_Class != nullptr)
		*Condition_Class = params.Condition_Class;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Get Last Selected Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapWidgetMapMarkerSelectable* Marker                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Get_Last_Selected_Marker(class USQMapWidgetMapMarkerSelectable** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Get Last Selected Marker");

	UBPI_PlayerController_C_Get_Last_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Marker != nullptr)
		*Marker = params.Marker;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Remove Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerController_C::Remove_Selected_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Remove Selected Marker");

	UBPI_PlayerController_C_Remove_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Request Command Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Command_Marker                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Request_Command_Marker(class UClass* Command_Marker, const struct FTransform& Transform, float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Request Command Marker");

	UBPI_PlayerController_C_Request_Command_Marker_Params params;
	params.Command_Marker = Command_Marker;
	params.Transform = Transform;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Request Director Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Director_Marker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Request_Director_Marker(class UClass* Director_Marker, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, float distance, int Squad_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Request Director Marker");

	UBPI_PlayerController_C_Request_Director_Marker_Params params;
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


// Function BPI_PlayerController.BPI_PlayerController_C.Remove Map Marker New
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  MapMarkerID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Remove_Map_Marker_New(unsigned char MapMarkerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Remove Map Marker New");

	UBPI_PlayerController_C_Remove_Map_Marker_New_Params params;
	params.MapMarkerID = MapMarkerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Request Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Marker_Class                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Fire_Team_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::Request_Marker(class UClass* Marker_Class, const struct FVector& Location, int Fire_Team_ID, bool Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Request Marker");

	UBPI_PlayerController_C_Request_Marker_Params params;
	params.Marker_Class = Marker_Class;
	params.Location = Location;
	params.Fire_Team_ID = Fire_Team_ID;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Request Map Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQTeam                        Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Fire_Team_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize     Location                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize     DistanceRotation               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerDataAsset*   Map_Marker_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Request_Map_Marker(int Squad_ID, ESQTeam Team_ID, int Fire_Team_ID, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& DistanceRotation, class USQMapMarkerDataAsset* Map_Marker_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Request Map Marker");

	UBPI_PlayerController_C_Request_Map_Marker_Params params;
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


// Function BPI_PlayerController.BPI_PlayerController_C.Play Emote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQEmotes                      Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Play_Emote(ESQEmotes Emote, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Play Emote");

	UBPI_PlayerController_C_Play_Emote_Params params;
	params.Emote = Emote;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.SetAllowAdminCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllowAdminCam                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::SetAllowAdminCam(bool bAllowAdminCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.SetAllowAdminCam");

	UBPI_PlayerController_C_SetAllowAdminCam_Params params;
	params.bAllowAdminCam = bAllowAdminCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.bCan Remove Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Remove                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::bCan_Remove_Marker(bool* Can_Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.bCan Remove Marker");

	UBPI_PlayerController_C_bCan_Remove_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Remove != nullptr)
		*Can_Remove = params.Can_Remove;

}


// Function BPI_PlayerController.BPI_PlayerController_C.bCan Place Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Place                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::bCan_Place_Marker(bool* Can_Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.bCan Place Marker");

	UBPI_PlayerController_C_bCan_Place_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Place != nullptr)
		*Can_Place = params.Can_Place;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Clear Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerController_C::Clear_Selected_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Clear Selected Marker");

	UBPI_PlayerController_C_Clear_Selected_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Change Role from RearmSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Partial_Ammo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerController_C::Change_Role_from_RearmSource(class UObject* Context, float Ammo, class USQRoleSettings* Role, bool Partial_Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Change Role from RearmSource");

	UBPI_PlayerController_C_Change_Role_from_RearmSource_Params params;
	params.Context = Context;
	params.Ammo = Ammo;
	params.Role = Role;
	params.Partial_Ammo = Partial_Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Set Selected Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapWidgetMapMarkerSelectable* Marker_Ref                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Set Selected Marker");

	UBPI_PlayerController_C_Set_Selected_Marker_Params params;
	params.Marker_Ref = Marker_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerController.BPI_PlayerController_C.Trace Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerDataAsset*   Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerController_C::Trace_Marker(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* Marker, bool Hotkey, bool Emote, class UClass* MarkerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.Trace Marker");

	UBPI_PlayerController_C_Trace_Marker_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
