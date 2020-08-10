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

// Function BPI_PlayerController.BPI_PlayerController_C.bCanRemoveMapMarkerNew
struct UBPI_PlayerController_C_bCanRemoveMapMarkerNew_Params
{
	class UBP_MapMarker_Selectable_C*                  Map_Marker;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Remove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Set Last Command Request Time
struct UBPI_PlayerController_C_Set_Last_Command_Request_Time_Params
{
};

// Function BPI_PlayerController.BPI_PlayerController_C.Get Command Request Available
struct UBPI_PlayerController_C_Get_Command_Request_Available_Params
{
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Remaining_Time;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Accept Deny Command Request
struct UBPI_PlayerController_C_Accept_Deny_Command_Request_Params
{
	class ABP_MapMarker_Command_Request_C*             Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Accepted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Get Command Action Condition
struct UBPI_PlayerController_C_Get_Command_Action_Condition_Params
{
	class UClass*                                      Condition_Class;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Get Last Selected Marker
struct UBPI_PlayerController_C_Get_Last_Selected_Marker_Params
{
	class USQMapWidgetMapMarkerSelectable*             Marker;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Remove Selected Marker
struct UBPI_PlayerController_C_Remove_Selected_Marker_Params
{
};

// Function BPI_PlayerController.BPI_PlayerController_C.Request Command Marker
struct UBPI_PlayerController_C_Request_Command_Marker_Params
{
	class UClass*                                      Command_Marker;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Request Director Marker
struct UBPI_PlayerController_C_Request_Director_Marker_Params
{
	class UClass*                                      Director_Marker;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Remove Map Marker New
struct UBPI_PlayerController_C_Remove_Map_Marker_New_Params
{
	unsigned char                                      MapMarkerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Request Marker
struct UBPI_PlayerController_C_Request_Marker_Params
{
	class UClass*                                      Marker_Class;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Fire_Team_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Request Map Marker
struct UBPI_PlayerController_C_Request_Map_Marker_Params
{
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQTeam                                            Team_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Fire_Team_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize                         DistanceRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerDataAsset*                       Map_Marker_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Play Emote
struct UBPI_PlayerController_C_Play_Emote_Params
{
	ESQEmotes                                          Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.SetAllowAdminCam
struct UBPI_PlayerController_C_SetAllowAdminCam_Params
{
	bool                                               bAllowAdminCam;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.bCan Remove Marker
struct UBPI_PlayerController_C_bCan_Remove_Marker_Params
{
	bool                                               Can_Remove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.bCan Place Marker
struct UBPI_PlayerController_C_bCan_Place_Marker_Params
{
	bool                                               Can_Place;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Clear Selected Marker
struct UBPI_PlayerController_C_Clear_Selected_Marker_Params
{
};

// Function BPI_PlayerController.BPI_PlayerController_C.Change Role from RearmSource
struct UBPI_PlayerController_C_Change_Role_from_RearmSource_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRoleSettings*                             Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Partial_Ammo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Set Selected Marker
struct UBPI_PlayerController_C_Set_Selected_Marker_Params
{
	class USQMapWidgetMapMarkerSelectable*             Marker_Ref;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerController.BPI_PlayerController_C.Trace Marker
struct UBPI_PlayerController_C_Trace_Marker_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapMarkerDataAsset*                       Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
