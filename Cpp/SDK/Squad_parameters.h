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

// Function Squad.SQWorldSettings.SetMapTexture
struct ASQWorldSettings_SetMapTexture_Params
{
	class UTexture*                                    Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetVehicleTeamRequirementDisabled
struct ASQWorldSettings_GetVehicleTeamRequirementDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetVehicleKitRequirementDisabled
struct ASQWorldSettings_GetVehicleKitRequirementDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceVehicleClaimingDisabled
struct ASQWorldSettings_GetForceVehicleClaimingDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceOutOfBoundsKillDisabled
struct ASQWorldSettings_GetForceOutOfBoundsKillDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceNoTeamChangeTimer
struct ASQWorldSettings_GetForceNoTeamChangeTimer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceNoRespawnTime
struct ASQWorldSettings_GetForceNoRespawnTime_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceNoKitLimits
struct ASQWorldSettings_GetForceNoKitLimits_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceNoCommanderCooldowns
struct ASQWorldSettings_GetForceNoCommanderCooldowns_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetForceAllowCommanderActions
struct ASQWorldSettings_GetForceAllowCommanderActions_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetDeployablePlacementAlwaysValid
struct ASQWorldSettings_GetDeployablePlacementAlwaysValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWorldSettings.GetCommanderDisabled
struct ASQWorldSettings_GetCommanderDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawn.SetTeam
struct ASQPawn_SetTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawn.OnRep_Team
struct ASQPawn_OnRep_Team_Params
{
};

// DelegateFunction Squad.SQPawn.OnPossessionChanged__DelegateSignature
struct ASQPawn_OnPossessionChanged__DelegateSignature_Params
{
};

// Function Squad.SQPawn.GetTeam
struct ASQPawn_GetTeam_Params
{
	ESQTeam                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawn.BlueprintCalcCamera
struct ASQPawn_BlueprintCalcCamera_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InRotation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InFOV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OutFOV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.SetTurnOut
struct ASQVehicleSeat_SetTurnOut_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.ServerSetTurnOut
struct ASQVehicleSeat_ServerSetTurnOut_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.ServerOnInteract
struct ASQVehicleSeat_ServerOnInteract_Params
{
};

// Function Squad.SQVehicleSeat.ServerCancelPlayerExit
struct ASQVehicleSeat_ServerCancelPlayerExit_Params
{
	class ASQPlayerController*                         SPC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.RequestChangeSeat
struct ASQVehicleSeat_RequestChangeSeat_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequestedSeat;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.OverlayZoom
struct ASQVehicleSeat_OverlayZoom_Params
{
};

// Function Squad.SQVehicleSeat.OverlayUnzoom
struct ASQVehicleSeat_OverlayUnzoom_Params
{
};

// Function Squad.SQVehicleSeat.OnRep_TurnOut
struct ASQVehicleSeat_OnRep_TurnOut_Params
{
};

// Function Squad.SQVehicleSeat.OnRep_SeatHealth
struct ASQVehicleSeat_OnRep_SeatHealth_Params
{
	float                                              PreviousHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.OnPrevItem
struct ASQVehicleSeat_OnPrevItem_Params
{
};

// Function Squad.SQVehicleSeat.OnNextItem
struct ASQVehicleSeat_OnNextItem_Params
{
};

// Function Squad.SQVehicleSeat.GetWeaponAttachComponent
struct ASQVehicleSeat_GetWeaponAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetVehicleSeatComponent
struct ASQVehicleSeat_GetVehicleSeatComponent_Params
{
	class USQVehicleSeatComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetVehicleResourceInventory
struct ASQVehicleSeat_GetVehicleResourceInventory_Params
{
	class USQVehicleResourceWeaponInventoryComponent*  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetVehicleInventory
struct ASQVehicleSeat_GetVehicleInventory_Params
{
	class USQVehicleInventoryComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetVehicleEngine
struct ASQVehicleSeat_GetVehicleEngine_Params
{
	class USQVehicleComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetVehicle
struct ASQVehicleSeat_GetVehicle_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetSoldierAttachComponent
struct ASQVehicleSeat_GetSoldierAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetSeatHealth
struct ASQVehicleSeat_GetSeatHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetNormalizedSeatHealth
struct ASQVehicleSeat_GetNormalizedSeatHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetMasterPoseComponent
struct ASQVehicleSeat_GetMasterPoseComponent_Params
{
	class USkinnedMeshComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetDefaultCameraLocationComponent
struct ASQVehicleSeat_GetDefaultCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetCameraComponent
struct ASQVehicleSeat_GetCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.GetADSCameraLocationComponent
struct ASQVehicleSeat_GetADSCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.Get3PAttachComponent
struct ASQVehicleSeat_Get3PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeat.Get1PAttachComponent
struct ASQVehicleSeat_Get1PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.SwitchedSeat
struct ASQVehicle_SwitchedSeat_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.SetEffectPhysmatParams
struct ASQVehicle_SetEffectPhysmatParams_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQPhysicalMaterial*                         SQPhysMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.ResetLastSeatEventTime
struct ASQVehicle_ResetLastSeatEventTime_Params
{
};

// Function Squad.SQVehicle.RepairVehicle
struct ASQVehicle_RepairVehicle_Params
{
	class AActor*                                      SourceRepairer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQRepairSource                                    RepairSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RepairAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoldierHealAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.PlayerRequestLeaveSeat
struct ASQVehicle_PlayerRequestLeaveSeat_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.OutOfBoundsKillCallback
struct ASQVehicle_OutOfBoundsKillCallback_Params
{
};

// Function Squad.SQVehicle.OnVehicleRepaired
struct ASQVehicle_OnVehicleRepaired_Params
{
};

// Function Squad.SQVehicle.OnRep_HealthChanged
struct ASQVehicle_OnRep_HealthChanged_Params
{
};

// Function Squad.SQVehicle.OnRep_HasBeenDestroyed
struct ASQVehicle_OnRep_HasBeenDestroyed_Params
{
};

// Function Squad.SQVehicle.OnRep_DestroyedState
struct ASQVehicle_OnRep_DestroyedState_Params
{
};

// Function Squad.SQVehicle.OnExitBoundary
struct ASQVehicle_OnExitBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.OnEnterBoundary
struct ASQVehicle_OnEnterBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.MulticastPlayDamageEffects
struct ASQVehicle_MulticastPlayDamageEffects_Params
{
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactLocationZeroBased;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.LeftVehicle
struct ASQVehicle_LeftVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.IsVehicleFull
struct ASQVehicle_IsVehicleFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.IsVehicleEmpty
struct ASQVehicle_IsVehicleEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.IsValidSeat
struct ASQVehicle_IsValidSeat_Params
{
	int                                                Seat;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.IsSeatHeldByClaimingSquad
struct ASQVehicle_IsSeatHeldByClaimingSquad_Params
{
	int                                                Seat;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.IsOutOfMapBounds
struct ASQVehicle_IsOutOfMapBounds_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetSeats
struct ASQVehicle_GetSeats_Params
{
	TArray<class USQVehicleSeatComponent*>             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetPlayersSeat
struct ASQVehicle_GetPlayersSeat_Params
{
	class ASQPlayerController*                         Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetNumOccupants
struct ASQVehicle_GetNumOccupants_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetInventoryAmmoPoints
struct ASQVehicle_GetInventoryAmmoPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetExitPoints
struct ASQVehicle_GetExitPoints_Params
{
	TArray<struct FTransform>                          OutTransforms;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.GetDriverSeat
struct ASQVehicle_GetDriverSeat_Params
{
	class USQVehicleSeatComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.FindFirstAvailableSeat
struct ASQVehicle_FindFirstAvailableSeat_Params
{
	class ASQPlayerController*                         SPC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeDriverSeat;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.ExitTurnOut
struct ASQVehicle_ExitTurnOut_Params
{
	class USQVehicleSeatComponent*                     Seat;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.EnterTurnOut
struct ASQVehicle_EnterTurnOut_Params
{
	class USQVehicleSeatComponent*                     Seat;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.EnteredVehicle
struct ASQVehicle_EnteredVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.EjectPlayerFromSeat
struct ASQVehicle_EjectPlayerFromSeat_Params
{
	int                                                Seat;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.EjectAllPlayers
struct ASQVehicle_EjectAllPlayers_Params
{
};

// Function Squad.SQVehicle.DrivetrainComponentRepaired
struct ASQVehicle_DrivetrainComponentRepaired_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.DrivetrainComponentDestroyed
struct ASQVehicle_DrivetrainComponentDestroyed_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.CanActAsRearmSource
struct ASQVehicle_CanActAsRearmSource_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.BurnVehicle
struct ASQVehicle_BurnVehicle_Params
{
	float                                              VehicleBurnAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoldierBurnAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 BurnCauser;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicle.BPClientDestroyed
struct ASQVehicle_BPClientDestroyed_Params
{
};

// Function Squad.SQVehicle.AmmoUpdated
struct ASQVehicle_AmmoUpdated_Params
{
};

// Function Squad.SQGroundVehicle.UpdateIsHardLanding
struct ASQGroundVehicle_UpdateIsHardLanding_Params
{
};

// Function Squad.SQGroundVehicle.UpdateIsFlying
struct ASQGroundVehicle_UpdateIsFlying_Params
{
};

// Function Squad.SQGroundVehicle.ServerVehicleHitSoldier
struct ASQGroundVehicle_ServerVehicleHitSoldier_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.ServerSetEngineToggleActiveInput
struct ASQGroundVehicle_ServerSetEngineToggleActiveInput_Params
{
	bool                                               bInIsEngineToggleActive;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.ServerSetEngineBoostPressed
struct ASQGroundVehicle_ServerSetEngineBoostPressed_Params
{
	bool                                               bInHasEngineBoostBeenPressed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.ServerSetEngineActiveInput
struct ASQGroundVehicle_ServerSetEngineActiveInput_Params
{
	bool                                               bNewEngineActive;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.ServerEmergencyTeleport
struct ASQGroundVehicle_ServerEmergencyTeleport_Params
{
	float                                              HeightOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawDegrees;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.OnRep_ShouldSimulate
struct ASQGroundVehicle_OnRep_ShouldSimulate_Params
{
};

// Function Squad.SQGroundVehicle.OnRep_EngineToggleActive
struct ASQGroundVehicle_OnRep_EngineToggleActive_Params
{
};

// Function Squad.SQGroundVehicle.OnRep_EngineActive
struct ASQGroundVehicle_OnRep_EngineActive_Params
{
};

// Function Squad.SQGroundVehicle.OnRagdollBeginOverlap
struct ASQGroundVehicle_OnRagdollBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.IsHandbrakeActive
struct ASQGroundVehicle_IsHandbrakeActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.IsEngineToggleActive
struct ASQGroundVehicle_IsEngineToggleActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.IsEngineActive
struct ASQGroundVehicle_IsEngineActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetForwardSpeed
struct ASQGroundVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetEngineRPM
struct ASQGroundVehicle_GetEngineRPM_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetEngineMaxRPM
struct ASQGroundVehicle_GetEngineMaxRPM_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetEngineLoad
struct ASQGroundVehicle_GetEngineLoad_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetCurrentEngineToggleRequiredDuration
struct ASQGroundVehicle_GetCurrentEngineToggleRequiredDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetCurrentEngineTogglePercentage
struct ASQGroundVehicle_GetCurrentEngineTogglePercentage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.GetCurrentEngineToggleElapsedTime
struct ASQGroundVehicle_GetCurrentEngineToggleElapsedTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.EmergencyTeleport
struct ASQGroundVehicle_EmergencyTeleport_Params
{
	float                                              HeightOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawDegrees;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGroundVehicle.EjectAllOpenSeatPlayers
struct ASQGroundVehicle_EjectAllOpenSeatPlayers_Params
{
};

// Function Squad.SQWheeledVehicleBase.DestroyWheel
struct ASQWheeledVehicleBase_DestroyWheel_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeaponAttachment_Scope.ShowADSMesh
struct USQWeaponAttachment_Scope_ShowADSMesh_Params
{
};

// Function Squad.SQWeaponAttachment_Scope.SetMeshTransitionSetting
struct USQWeaponAttachment_Scope_SetMeshTransitionSetting_Params
{
	struct FSQMeshTransitionSettings                   MeshTransitionSetting;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeaponAttachment_Scope.HideADSMesh
struct USQWeaponAttachment_Scope_HideADSMesh_Params
{
};

// Function Squad.SQAnimInstance.UpdateStaticItemInfo
struct USQAnimInstance_UpdateStaticItemInfo_Params
{
	class USQItemStaticInfo*                           InfoObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.UpdateBoredMontage
struct USQAnimInstance_UpdateBoredMontage_Params
{
};

// Function Squad.SQAnimInstance.StopAnimationHandler
struct USQAnimInstance_StopAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopAllWeaponAnims;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.SetAnimationPlayRateHandler
struct USQAnimInstance_SetAnimationPlayRateHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPlayRate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.ResumeAnimationHandler
struct USQAnimInstance_ResumeAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.PlayAnimationHandler
struct USQAnimInstance_PlayAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.PauseAnimationHandler
struct USQAnimInstance_PauseAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstance.EndLoopAnimationHandler
struct USQAnimInstance_EndLoopAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQMontageSectionNames                      SectionNames;                                              // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ServerMoveOld
struct USQMovementComponentBase_ServerMoveOld_Params
{
	TArray<unsigned char>                              Move;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ServerMoveDual
struct USQMovementComponentBase_ServerMoveDual_Params
{
	TArray<unsigned char>                              Move1;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Move2;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ServerMove
struct USQMovementComponentBase_ServerMove_Params
{
	TArray<unsigned char>                              Move;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.OnRep_Movement
struct USQMovementComponentBase_OnRep_Movement_Params
{
};

// Function Squad.SQMovementComponentBase.IsSimulatedProxy
struct USQMovementComponentBase_IsSimulatedProxy_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.IsServerComponent
struct USQMovementComponentBase_IsServerComponent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.IsLocallyControlledComponent
struct USQMovementComponentBase_IsLocallyControlledComponent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.GetCurrentVelocity
struct USQMovementComponentBase_GetCurrentVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.GetCurrentRotationalVelocity
struct USQMovementComponentBase_GetCurrentRotationalVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.GetCurrentRotationalAcceleration
struct USQMovementComponentBase_GetCurrentRotationalAcceleration_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.GetCurrentAcceleration
struct USQMovementComponentBase_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ClientAdjustPositionAndRotation
struct USQMovementComponentBase_ClientAdjustPositionAndRotation_Params
{
	float                                              Timestamp;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationZeroBased;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InVelocity;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ClientAdjustPosition
struct USQMovementComponentBase_ClientAdjustPosition_Params
{
	float                                              Timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationZeroBased;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InVelocity;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentBase.ClientAckGoodMove
struct USQMovementComponentBase_ClientAckGoodMove_Params
{
	float                                              Timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentPacked.ClientAdjustRotation
struct USQMovementComponentPacked_ClientAdjustRotation_Params
{
	float                                              Timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InRotation;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     InRotationalVelocity;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.ToggleStabilization
struct USQVelocityRotatingMovementComponent_ToggleStabilization_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.SetStabilizationTargetHeading
struct USQVelocityRotatingMovementComponent_SetStabilizationTargetHeading_Params
{
	struct FRotator                                    InTargetHeading;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.SetStabilizationEnabled
struct USQVelocityRotatingMovementComponent_SetStabilizationEnabled_Params
{
	bool                                               bInIsStabilizationEnabled;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.ServerSetStabilizationTargetHeading
struct USQVelocityRotatingMovementComponent_ServerSetStabilizationTargetHeading_Params
{
	struct FRotator                                    InTargetHeading;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.OnRep_RotationReplicatedMovement
struct USQVelocityRotatingMovementComponent_OnRep_RotationReplicatedMovement_Params
{
};

// Function Squad.SQVelocityRotatingMovementComponent.IsStabilizationEnabled
struct USQVelocityRotatingMovementComponent_IsStabilizationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.GetWorldRotation
struct USQVelocityRotatingMovementComponent_GetWorldRotation_Params
{
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.GetCurrentRotation
struct USQVelocityRotatingMovementComponent_GetCurrentRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.GetCurrentLocation
struct USQVelocityRotatingMovementComponent_GetCurrentLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.ClientSetStabilizationTargetHeading
struct USQVelocityRotatingMovementComponent_ClientSetStabilizationTargetHeading_Params
{
	struct FRotator                                    InTargetHeading;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVelocityRotatingMovementComponent.AddRotationInput
struct USQVelocityRotatingMovementComponent_AddRotationInput_Params
{
	struct FRotator                                    InRotationInput;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.OnRep_VehicleComponentState
struct USQVehicleComponent_OnRep_VehicleComponentState_Params
{
	ESQVehicleComponentStates                          PreviousState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.OnRep_HealthChanged
struct USQVehicleComponent_OnRep_HealthChanged_Params
{
	float                                              PreviousHealthValue;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.MulticastComponentRepairedFromDestruction
struct USQVehicleComponent_MulticastComponentRepairedFromDestruction_Params
{
};

// Function Squad.SQVehicleComponent.MulticastComponentFullyRepaired
struct USQVehicleComponent_MulticastComponentFullyRepaired_Params
{
};

// Function Squad.SQVehicleComponent.MulticastComponentDestroyed
struct USQVehicleComponent_MulticastComponentDestroyed_Params
{
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.IsDestroyed
struct USQVehicleComponent_IsDestroyed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetVehicleComponentState
struct USQVehicleComponent_GetVehicleComponentState_Params
{
	ESQVehicleComponentStates                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetPreviousVehicleComponentState
struct USQVehicleComponent_GetPreviousVehicleComponentState_Params
{
	ESQVehicleComponentStates                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetParentVehicle
struct USQVehicleComponent_GetParentVehicle_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetNormalizedHealth
struct USQVehicleComponent_GetNormalizedHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetMaximumHealth
struct USQVehicleComponent_GetMaximumHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleComponent.GetHealth
struct USQVehicleComponent_GetHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWheel.GetBoneName
struct USQVehicleWheel_GetBoneName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.UpdateSprintBobbing
struct ASQEquipableItem_UpdateSprintBobbing_Params
{
	bool                                               bForceStopLoop;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.UpdateMoveInputs
struct ASQEquipableItem_UpdateMoveInputs_Params
{
	bool                                               bForceStopLoop;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.UpdateMoveBobbing
struct ASQEquipableItem_UpdateMoveBobbing_Params
{
};

// Function Squad.SQEquipableItem.UpdateLeanRight
struct ASQEquipableItem_UpdateLeanRight_Params
{
};

// Function Squad.SQEquipableItem.UpdateLeanLeft
struct ASQEquipableItem_UpdateLeanLeft_Params
{
};

// Function Squad.SQEquipableItem.UpdateFirstPersonVisibility
struct ASQEquipableItem_UpdateFirstPersonVisibility_Params
{
};

// Function Squad.SQEquipableItem.ShovelHitDeployable
struct ASQEquipableItem_ShovelHitDeployable_Params
{
	struct FHitResult                                  HitResult;                                                 // (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bRemovingHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQDeployable*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.SetLoweringAnimation
struct ASQEquipableItem_SetLoweringAnimation_Params
{
	bool                                               bLowered;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.ServerConsumeItem
struct ASQEquipableItem_ServerConsumeItem_Params
{
};

// Function Squad.SQEquipableItem.ReinitializeEquip
struct ASQEquipableItem_ReinitializeEquip_Params
{
};

// Function Squad.SQEquipableItem.ReinitializeAnimInstances
struct ASQEquipableItem_ReinitializeAnimInstances_Params
{
};

// Function Squad.SQEquipableItem.Rearm
struct ASQEquipableItem_Rearm_Params
{
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.PlayUnequipAnimation
struct ASQEquipableItem_PlayUnequipAnimation_Params
{
};

// Function Squad.SQEquipableItem.PlaySoundAttachedToWeapon
struct ASQEquipableItem_PlaySoundAttachedToWeapon_Params
{
	class USoundCue*                                   Sound1p;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   Sound3p;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FallbackOrigin;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.PlayEquipAnimation
struct ASQEquipableItem_PlayEquipAnimation_Params
{
};

// Function Squad.SQEquipableItem.Pickup
struct ASQEquipableItem_Pickup_Params
{
};

// Function Squad.SQEquipableItem.PendingEquip
struct ASQEquipableItem_PendingEquip_Params
{
};

// Function Squad.SQEquipableItem.IsFirstPersonViewTarget
struct ASQEquipableItem_IsFirstPersonViewTarget_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.IsEquipped
struct ASQEquipableItem_IsEquipped_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.IsBeingUsed
struct ASQEquipableItem_IsBeingUsed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.IsAmmoFull
struct ASQEquipableItem_IsAmmoFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.InitializeAmmoValues
struct ASQEquipableItem_InitializeAmmoValues_Params
{
	struct FSQInventoryData                            ItemClass;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnMaxAmmo;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQPersistedAmmoCount                       PersistedAmmo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.HasAmmo
struct ASQEquipableItem_HasAmmo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetRearmMaxItemCount
struct ASQEquipableItem_GetRearmMaxItemCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetRearmItemCount
struct ASQEquipableItem_GetRearmItemCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetOwnerPawn
struct ASQEquipableItem_GetOwnerPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetMesh
struct ASQEquipableItem_GetMesh_Params
{
	bool                                               bGetMesh1P;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetItemStaticInfo
struct ASQEquipableItem_GetItemStaticInfo_Params
{
	class USQItemStaticInfo*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.GetFireDirection
struct ASQEquipableItem_GetFireDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.EndUse
struct ASQEquipableItem_EndUse_Params
{
};

// Function Squad.SQEquipableItem.EndAltUse
struct ASQEquipableItem_EndAltUse_Params
{
};

// Function Squad.SQEquipableItem.Drop
struct ASQEquipableItem_Drop_Params
{
};

// Function Squad.SQEquipableItem.CreatePersistingAmmoCount
struct ASQEquipableItem_CreatePersistingAmmoCount_Params
{
	struct FSQPersistedAmmoCount                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CanShovel
struct ASQEquipableItem_CanShovel_Params
{
	int                                                ShovelTraceLength;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShovelTraceSphereRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bRemovingHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQDeployable*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CanRearmFromType
struct ASQEquipableItem_CanRearmFromType_Params
{
	ESQRearmType                                       RearmType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CanRearm
struct ASQEquipableItem_CanRearm_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CalculateRearmAmmoCost
struct ASQEquipableItem_CalculateRearmAmmoCost_Params
{
	int                                                QuantityToRearm;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CalculateMissingRearmItems
struct ASQEquipableItem_CalculateMissingRearmItems_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CalculateMissingAmmoCost
struct ASQEquipableItem_CalculateMissingAmmoCost_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.CalculateMaxAmmoCost
struct ASQEquipableItem_CalculateMaxAmmoCost_Params
{
	int                                                MaxCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.BPEndUse
struct ASQEquipableItem_BPEndUse_Params
{
};

// Function Squad.SQEquipableItem.BPEndAltUse
struct ASQEquipableItem_BPEndAltUse_Params
{
};

// Function Squad.SQEquipableItem.BPBeginUse
struct ASQEquipableItem_BPBeginUse_Params
{
};

// Function Squad.SQEquipableItem.BPBeginAltUse
struct ASQEquipableItem_BPBeginAltUse_Params
{
};

// Function Squad.SQEquipableItem.BlueprintUpdateFirstPersonVisibility
struct ASQEquipableItem_BlueprintUpdateFirstPersonVisibility_Params
{
	bool                                               bIsFirstPersonVisible;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.BlueprintOnUnequipped
struct ASQEquipableItem_BlueprintOnUnequipped_Params
{
};

// Function Squad.SQEquipableItem.BlueprintOnUnequip
struct ASQEquipableItem_BlueprintOnUnequip_Params
{
};

// Function Squad.SQEquipableItem.BlueprintOnEquipped
struct ASQEquipableItem_BlueprintOnEquipped_Params
{
};

// Function Squad.SQEquipableItem.BlueprintOnEquip
struct ASQEquipableItem_BlueprintOnEquip_Params
{
};

// Function Squad.SQEquipableItem.BlueprintDrawHUD
struct ASQEquipableItem_BlueprintDrawHUD_Params
{
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQEquipableItem.BeginUse
struct ASQEquipableItem_BeginUse_Params
{
};

// Function Squad.SQEquipableItem.BeginAltUse
struct ASQEquipableItem_BeginAltUse_Params
{
};

// Function Squad.SQWeapon.UpdateBipod
struct ASQWeapon_UpdateBipod_Params
{
};

// Function Squad.SQWeapon.UpdateAimProneBobbing
struct ASQWeapon_UpdateAimProneBobbing_Params
{
};

// Function Squad.SQWeapon.UpdateAdjustableSightAnimPos
struct ASQWeapon_UpdateAdjustableSightAnimPos_Params
{
};

// Function Squad.SQWeapon.ToggleFiremode
struct ASQWeapon_ToggleFiremode_Params
{
};

// Function Squad.SQWeapon.StopModifyZeroing
struct ASQWeapon_StopModifyZeroing_Params
{
};

// Function Squad.SQWeapon.StartReload
struct ASQWeapon_StartReload_Params
{
};

// Function Squad.SQWeapon.StartModifyZeroing
struct ASQWeapon_StartModifyZeroing_Params
{
};

// Function Squad.SQWeapon.SetZoom
struct ASQWeapon_SetZoom_Params
{
	bool                                               bNewZoom;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerStopFire
struct ASQWeapon_ServerStopFire_Params
{
};

// Function Squad.SQWeapon.ServerStartReload
struct ASQWeapon_ServerStartReload_Params
{
};

// Function Squad.SQWeapon.ServerStartFire
struct ASQWeapon_ServerStartFire_Params
{
};

// Function Squad.SQWeapon.ServerSetIsAimingDownSights
struct ASQWeapon_ServerSetIsAimingDownSights_Params
{
	bool                                               bIsAimingDownSights;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerSetCurrentFireMode
struct ASQWeapon_ServerSetCurrentFireMode_Params
{
	int                                                NewCurrentFireMode;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerNotifyHit
struct ASQWeapon_ServerNotifyHit_Params
{
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSQPenetrationTrace>                 TargetsZeroBased;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsRayTracedShot;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsManuallyCalled;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerNotifyFireAndMiss
struct ASQWeapon_ServerNotifyFireAndMiss_Params
{
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResultZeroBased;                                        // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsRayTracedShot;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerFireProjectileWithId
struct ASQWeapon_ServerFireProjectileWithId_Params
{
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint64_t                                           UniqueProjectileId;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ServerFireProjectile
struct ASQWeapon_ServerFireProjectile_Params
{
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.PlayImpactEffect
struct ASQWeapon_PlayImpactEffect_Params
{
	struct FSQPenetrationTrace                         ImpactHit;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsProjectileTracer;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.PlayFiringSound
struct ASQWeapon_PlayFiringSound_Params
{
	class USoundBase*                                  Sound1p;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound3p;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.OnRep_Reloading
struct ASQWeapon_OnRep_Reloading_Params
{
};

// Function Squad.SQWeapon.OnRep_Magazines
struct ASQWeapon_OnRep_Magazines_Params
{
	TArray<struct FSQMagazineData>                     OldMagazines;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.OnRep_Firing
struct ASQWeapon_OnRep_Firing_Params
{
};

// Function Squad.SQWeapon.OnRep_AimingDownSights
struct ASQWeapon_OnRep_AimingDownSights_Params
{
	bool                                               bPrevAimingDownSights;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.MulticastFireProjectileWithId
struct ASQWeapon_MulticastFireProjectileWithId_Params
{
	struct FVector                                     OriginZeroBased;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           UniqueProjectileId;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.MulticastFireProjectile
struct ASQWeapon_MulticastFireProjectile_Params
{
	struct FVector                                     OriginZeroBased;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.MulticastFireMultipleProjectileEffects
struct ASQWeapon_MulticastFireMultipleProjectileEffects_Params
{
	TArray<struct FSQPenetrationProxy>                 HitResultsZeroBased;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsRayTracedShot;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsManuallyCalled;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.ModifyZeroing
struct ASQWeapon_ModifyZeroing_Params
{
	bool                                               bIncrease;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.MagazineHasAmmo
struct ASQWeapon_MagazineHasAmmo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsZoomed
struct ASQWeapon_IsZoomed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsReloading
struct ASQWeapon_IsReloading_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsPullingTrigger
struct ASQWeapon_IsPullingTrigger_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsPendingFire
struct ASQWeapon_IsPendingFire_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsFullyZoomed
struct ASQWeapon_IsFullyZoomed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.IsAimingDownSights
struct ASQWeapon_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetZoomProgress
struct ASQWeapon_GetZoomProgress_Params
{
	bool                                               bJustToggledZoom;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetWeaponStaticInfo
struct ASQWeapon_GetWeaponStaticInfo_Params
{
	class USQWeaponStaticInfo*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetMOAAdjustedAimDirectionFromRotator
struct ASQWeapon_GetMOAAdjustedAimDirectionFromRotator_Params
{
	struct FRotator                                    AimDirection;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetMOAAdjustedAimDirection
struct ASQWeapon_GetMOAAdjustedAimDirection_Params
{
	struct FVector                                     AimDirection;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetAimLocation
struct ASQWeapon_GetAimLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.GetAimDirection
struct ASQWeapon_GetAimDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.FinishAdsTransition
struct ASQWeapon_FinishAdsTransition_Params
{
};

// Function Squad.SQWeapon.BlueprintOnZoom
struct ASQWeapon_BlueprintOnZoom_Params
{
	bool                                               bNewZoom;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon.BlueprintOnToggleFiremode
struct ASQWeapon_BlueprintOnToggleFiremode_Params
{
};

// Function Squad.SQWeapon.BlueprintOnReloaded
struct ASQWeapon_BlueprintOnReloaded_Params
{
};

// Function Squad.SQWeapon.BlueprintOnReload
struct ASQWeapon_BlueprintOnReload_Params
{
};

// Function Squad.SQWeapon.BlueprintOnFire
struct ASQWeapon_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQWeapon_Effects.InterpRecoil
struct ASQWeapon_Effects_InterpRecoil_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeapon.SoldierLeavesVehicle
struct ASQVehicleWeapon_SoldierLeavesVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeapon.SoldierEntersVehicle
struct ASQVehicleWeapon_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeapon.GetWeaponRotation
struct ASQVehicleWeapon_GetWeaponRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeapon.GetSoldier
struct ASQVehicleWeapon_GetSoldier_Params
{
	class ASQSoldier*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeapon.GetOwnerSeat
struct ASQVehicleWeapon_GetOwnerSeat_Params
{
	class ASQVehicleSeat*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleWeaponTOW.DelayedFireWeapon
struct ASQVehicleWeaponTOW_DelayedFireWeapon_Params
{
};

// Function Squad.SQVehicleWeaponTOW.BlueprintOnPreFire
struct ASQVehicleWeaponTOW_BlueprintOnPreFire_Params
{
};

// Function Squad.SQVehicleTurret.IsCurrentWeaponInputEnabled
struct ASQVehicleTurret_IsCurrentWeaponInputEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleTurretClosedTop.ResetZoom
struct ASQVehicleTurretClosedTop_ResetZoom_Params
{
};

// Function Squad.SQVehicleTurretClosedTop.GetYawMovementComponent
struct ASQVehicleTurretClosedTop_GetYawMovementComponent_Params
{
	class USQMovementComponentBase*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleTurretClosedTop.GetPitchMovementComponent
struct ASQVehicleTurretClosedTop_GetPitchMovementComponent_Params
{
	class USQMovementComponentBase*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleTurretClosedTop.BP_OnVehicleZoom
struct ASQVehicleTurretClosedTop_BP_OnVehicleZoom_Params
{
};

// Function Squad.SQVehicleSpawner.SpawnVehicle
struct ASQVehicleSpawner_SpawnVehicle_Params
{
};

// Function Squad.SQVehicleSpawner.OnVehicleDestroyed
struct ASQVehicleSpawner_OnVehicleDestroyed_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSpawner.GetTeam
struct ASQVehicleSpawner_GetTeam_Params
{
	ESQTeam                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSmokeGenerator.SetupParticleSystem
struct ASQVehicleSmokeGenerator_SetupParticleSystem_Params
{
	class AActor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSmokeGenerator.ServerUseGenerator
struct ASQVehicleSmokeGenerator_ServerUseGenerator_Params
{
};

// Function Squad.SQVehicleSmokeGenerator.ServerStopGenerator
struct ASQVehicleSmokeGenerator_ServerStopGenerator_Params
{
};

// Function Squad.SQVehicleSmokeGenerator.MulticastDeactivate
struct ASQVehicleSmokeGenerator_MulticastDeactivate_Params
{
};

// Function Squad.SQVehicleSmokeGenerator.MulticastActivate
struct ASQVehicleSmokeGenerator_MulticastActivate_Params
{
};

// Function Squad.SQVehicleSeatComponent.TransitionComplete
struct USQVehicleSeatComponent_TransitionComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.OnRep_SeatPawn
struct USQVehicleSeatComponent_OnRep_SeatPawn_Params
{
};

// Function Squad.SQVehicleSeatComponent.OnRep_AnimationSeatState
struct USQVehicleSeatComponent_OnRep_AnimationSeatState_Params
{
};

// Function Squad.SQVehicleSeatComponent.GetSoldierSeatState
struct USQVehicleSeatComponent_GetSoldierSeatState_Params
{
	ESQSoldierSeatState                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.GetSeatPawnInventory
struct USQVehicleSeatComponent_GetSeatPawnInventory_Params
{
	class USQVehicleInventoryComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.GetSeatPawnEquipableItem
struct USQVehicleSeatComponent_GetSeatPawnEquipableItem_Params
{
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.GetSeatPawn
struct USQVehicleSeatComponent_GetSeatPawn_Params
{
	class ASQVehicleSeat*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.ChangeSeatState
struct USQVehicleSeatComponent_ChangeSeatState_Params
{
	int                                                StateIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleSeatComponent.CanSeatBeRepaired
struct USQVehicleSeatComponent_CanSeatBeRepaired_Params
{
	ESQRepairSource                                    RepairSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.UpdateStaticItemInfo
struct USQPawnInventoryComponent_UpdateStaticItemInfo_Params
{
	class USQItemStaticInfo*                           InfoObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.UpdateInventorySwitch
struct USQPawnInventoryComponent_UpdateInventorySwitch_Params
{
	int                                                NewSlot;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInteracting;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SwitchWeaponDirectly
struct USQPawnInventoryComponent_SwitchWeaponDirectly_Params
{
	int                                                NewWeaponSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewWeaponOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInstant;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SwitchWeapon
struct USQPawnInventoryComponent_SwitchWeapon_Params
{
	int                                                NewItemSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SwitchItem
struct USQPawnInventoryComponent_SwitchItem_Params
{
	int                                                ItemSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.StopAnimationHandler
struct USQPawnInventoryComponent_StopAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopAllWeaponAnims;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SpawnEquipableItem
struct USQPawnInventoryComponent_SpawnEquipableItem_Params
{
	struct FSQInventoryData                            ItemClass;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnMaxAmmo;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQPersistedAmmoCount                       StartingAmmo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SetupStaticInfoBindings
struct USQPawnInventoryComponent_SetupStaticInfoBindings_Params
{
	class ASQEquipableItem*                            Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.SetAnimationPlayRateHandler
struct USQPawnInventoryComponent_SetAnimationPlayRateHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPlayRate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.ServerSwitchWeapon2
struct USQPawnInventoryComponent_ServerSwitchWeapon2_Params
{
	class ASQEquipableItem*                            NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.ServerSwitchWeapon
struct USQPawnInventoryComponent_ServerSwitchWeapon_Params
{
	int                                                NewWeaponSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.ResumeAnimationHandler
struct USQPawnInventoryComponent_ResumeAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.ResetInventorySwitch
struct USQPawnInventoryComponent_ResetInventorySwitch_Params
{
};

// Function Squad.SQPawnInventoryComponent.ReplaceItemInInventory
struct USQPawnInventoryComponent_ReplaceItemInInventory_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQInventoryData                            ItemClass;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.RemoveWithoutDestroyingItem
struct USQPawnInventoryComponent_RemoveWithoutDestroyingItem_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.RemoveItemFromInventory
struct USQPawnInventoryComponent_RemoveItemFromInventory_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.RemoveItemClassFromInventory
struct USQPawnInventoryComponent_RemoveItemClassFromInventory_Params
{
	class UClass*                                      EquipableItemToRemove;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.RemoveGroupFromInventory
struct USQPawnInventoryComponent_RemoveGroupFromInventory_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.PlayAnimationHandler
struct USQPawnInventoryComponent_PlayAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.PauseAnimationHandler
struct USQPawnInventoryComponent_PauseAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.OnRep_RepInventory
struct USQPawnInventoryComponent_OnRep_RepInventory_Params
{
};

// Function Squad.SQPawnInventoryComponent.OnRep_PendingWeapon
struct USQPawnInventoryComponent_OnRep_PendingWeapon_Params
{
	class ASQEquipableItem*                            PreviousPendingWeapon;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.OnPrevItem
struct USQPawnInventoryComponent_OnPrevItem_Params
{
};

// Function Squad.SQPawnInventoryComponent.OnPendingWeaponPawnOwnerChanged
struct USQPawnInventoryComponent_OnPendingWeaponPawnOwnerChanged_Params
{
	class APawn*                                       NewPawnOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.OnNextItem
struct USQPawnInventoryComponent_OnNextItem_Params
{
};

// Function Squad.SQPawnInventoryComponent.OnAmmoChanged
struct USQPawnInventoryComponent_OnAmmoChanged_Params
{
};

// Function Squad.SQPawnInventoryComponent.InsertItemIntoInventory
struct USQPawnInventoryComponent_InsertItemIntoInventory_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQInventoryData                            ItemClass;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnMaxAmmo;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.InsertExistingItemIntoInventory
struct USQPawnInventoryComponent_InsertExistingItemIntoInventory_Params
{
	class ASQEquipableItem*                            Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.GetInventoryItemGroups
struct USQPawnInventoryComponent_GetInventoryItemGroups_Params
{
	TArray<struct FSQWeaponGroupData>                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.FindValidWeaponInGroup
struct USQPawnInventoryComponent_FindValidWeaponInGroup_Params
{
	int                                                WeaponSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponOffset;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.FindValidWeaponByClass
struct USQPawnInventoryComponent_FindValidWeaponByClass_Params
{
	class UClass*                                      WeaponClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.EndLoopAnimationHandler
struct USQPawnInventoryComponent_EndLoopAnimationHandler_Params
{
	class UAnimMontage*                                WeaponMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pMontage;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQMontageSectionNames                      SectionNames;                                              // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.CalculateRearmCost
struct USQPawnInventoryComponent_CalculateRearmCost_Params
{
	float                                              OutCost;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class USQRearmSource>             RearmSource;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSQRearmWeaponRequest>               RearmRequest;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.CalculateMissingAmmoCost
struct USQPawnInventoryComponent_CalculateMissingAmmoCost_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnInventoryComponent.AddGroupToInventory
struct USQPawnInventoryComponent_AddGroupToInventory_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.UpdateVisibilities
struct USQVehicleResourceWeaponInventoryComponent_UpdateVisibilities_Params
{
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.SetStaticMeshResourcesConstruction
struct USQVehicleResourceWeaponInventoryComponent_SetStaticMeshResourcesConstruction_Params
{
	TArray<class UStaticMeshComponent*>                InStaticMeshResources;                                     // (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.SetStaticMeshResourcesAmmo
struct USQVehicleResourceWeaponInventoryComponent_SetStaticMeshResourcesAmmo_Params
{
	TArray<class UStaticMeshComponent*>                InStaticMeshResources;                                     // (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.OnRep_ResourcesChanged
struct USQVehicleResourceWeaponInventoryComponent_OnRep_ResourcesChanged_Params
{
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.HasConstructionWeapon
struct USQVehicleResourceWeaponInventoryComponent_HasConstructionWeapon_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.GetTotalSharedResourceAmount
struct USQVehicleResourceWeaponInventoryComponent_GetTotalSharedResourceAmount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.GetCurrentSharedResourceAmount
struct USQVehicleResourceWeaponInventoryComponent_GetCurrentSharedResourceAmount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.GetAmmoPoints
struct USQVehicleResourceWeaponInventoryComponent_GetAmmoPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.FindConstructionWeapon
struct USQVehicleResourceWeaponInventoryComponent_FindConstructionWeapon_Params
{
	class ASQVehicleResource*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResourceWeaponInventoryComponent.FindAmmoWeapon
struct USQVehicleResourceWeaponInventoryComponent_FindAmmoWeapon_Params
{
	class ASQVehicleResource*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.SetShouldSimulate
struct USQVehicleMovementComponentInterface_SetShouldSimulate_Params
{
	bool                                               InbShouldSimulate;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.SetEngineBoostTorqueMultiplier
struct USQVehicleMovementComponentInterface_SetEngineBoostTorqueMultiplier_Params
{
	float                                              InEngineBoostTorqueMultiplier;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetThrottleInput
struct USQVehicleMovementComponentInterface_GetThrottleInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetSteeringInput
struct USQVehicleMovementComponentInterface_GetSteeringInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetShouldSimulate
struct USQVehicleMovementComponentInterface_GetShouldSimulate_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetRawThrottleInput
struct USQVehicleMovementComponentInterface_GetRawThrottleInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetRawSteeringInput
struct USQVehicleMovementComponentInterface_GetRawSteeringInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetMaxSpringForce
struct USQVehicleMovementComponentInterface_GetMaxSpringForce_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetHandbrakeInput
struct USQVehicleMovementComponentInterface_GetHandbrakeInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleMovementComponentInterface.GetBrakeInput
struct USQVehicleMovementComponentInterface_GetBrakeInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleCleanupComponent.ResetDestructionTimer
struct USQVehicleCleanupComponent_ResetDestructionTimer_Params
{
};

// Function Squad.SQVehicleClaim.GetVehicleClaimed
struct USQVehicleClaim_GetVehicleClaimed_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleClaim.GetTimeUntilExpiration
struct USQVehicleClaim_GetTimeUntilExpiration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleClaim.GetTimeOfClaim
struct USQVehicleClaim_GetTimeOfClaim_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleClaim.GetStatus
struct USQVehicleClaim_GetStatus_Params
{
	ESQVehicleClaimStatus                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleClaim.GetClaimingSquad
struct USQVehicleClaim_GetClaimingSquad_Params
{
	class ASQSquad*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.ShouldDisplayPrompt
struct USQUsable_ShouldDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.ServerStopUsed
struct USQUsable_ServerStopUsed_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.ServerOnUsed
struct USQUsable_ServerOnUsed_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.GetUsableData
struct USQUsable_GetUsableData_Params
{
	struct FSQUsableData                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.GetInterfaceTeam
struct USQUsable_GetInterfaceTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.BPStopUsed
struct USQUsable_BPStopUsed_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.BPOnUsed
struct USQUsable_BPOnUsed_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUsable.BPHidePrompt
struct USQUsable_BPHidePrompt_Params
{
};

// Function Squad.SQUsable.BPDisplayPrompt
struct USQUsable_BPDisplayPrompt_Params
{
	class AController*                                 User;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.UpdateSession
struct USQUpdateSessionsCallbackProxy_UpdateSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SessionName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQUpdateSessionsCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetSessionFlagStruct
struct USQUpdateSessionsCallbackProxy_GetSessionFlagStruct_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSQSessionFlagStruct                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetServerName
struct USQUpdateSessionsCallbackProxy_GetServerName_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetSearchKeywords
struct USQUpdateSessionsCallbackProxy_GetSearchKeywords_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetPingInMs
struct USQUpdateSessionsCallbackProxy_GetPingInMs_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetPasswordProtected
struct USQUpdateSessionsCallbackProxy_GetPasswordProtected_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetMaxPlayers
struct USQUpdateSessionsCallbackProxy_GetMaxPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetMatchTimeout
struct USQUpdateSessionsCallbackProxy_GetMatchTimeout_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetMapName
struct USQUpdateSessionsCallbackProxy_GetMapName_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetLicensedServer
struct USQUpdateSessionsCallbackProxy_GetLicensedServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetGameVersion
struct USQUpdateSessionsCallbackProxy_GetGameVersion_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetGameMode
struct USQUpdateSessionsCallbackProxy_GetGameMode_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetCurrentPlayers
struct USQUpdateSessionsCallbackProxy_GetCurrentPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUpdateSessionsCallbackProxy.GetAnticheatProtected
struct USQUpdateSessionsCallbackProxy_GetAnticheatProtected_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTournamentModeRulesetState.OnRep_Restrictions
struct ASQTournamentModeRulesetState_OnRep_Restrictions_Params
{
};

// Function Squad.SQGameRuleSet.VehicleDestroyed
struct ASQGameRuleSet_VehicleDestroyed_Params
{
	class ASQPlayerController*                         Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQVehicle*                                  DestroyedVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.UnregisterActor
struct ASQGameRuleSet_UnregisterActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.SetRoundTimeOverride
struct ASQGameRuleSet_SetRoundTimeOverride_Params
{
	int                                                InRoundTimeOverride;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.SendChatMessage
struct ASQGameRuleSet_SendChatMessage_Params
{
	ESQChat                                            ChatType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBroadcastToAdmin;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.SecondPassed
struct ASQGameRuleSet_SecondPassed_Params
{
};

// Function Squad.SQGameRuleSet.RegisterActor
struct ASQGameRuleSet_RegisterActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.ReadyToEndMatch
struct ASQGameRuleSet_ReadyToEndMatch_Params
{
	ESQReadyToEndMatch                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PostPlayerSpawn
struct ASQGameRuleSet_PostPlayerSpawn_Params
{
	class ASQSoldier*                                  SpawningSoldier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PostPlayerLogout
struct ASQGameRuleSet_PostPlayerLogout_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PostPlayerLogin
struct ASQGameRuleSet_PostPlayerLogin_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerWounded
struct ASQGameRuleSet_PlayerWounded_Params
{
	class ASQPlayerController*                         Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerWound
struct ASQGameRuleSet_PlayerWound_Params
{
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerTeamWounded
struct ASQGameRuleSet_PlayerTeamWounded_Params
{
	class ASQPlayerController*                         Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerTeamKilled
struct ASQGameRuleSet_PlayerTeamKilled_Params
{
	class ASQPlayerController*                         Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerSuicide
struct ASQGameRuleSet_PlayerSuicide_Params
{
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerSpawned
struct ASQGameRuleSet_PlayerSpawned_Params
{
	class ASQPlayerController*                         NewPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerSelfWound
struct ASQGameRuleSet_PlayerSelfWound_Params
{
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerSelfHealed
struct ASQGameRuleSet_PlayerSelfHealed_Params
{
	class ASQPlayerController*                         Healer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerSelfBandaged
struct ASQGameRuleSet_PlayerSelfBandaged_Params
{
	class ASQPlayerController*                         Bandager;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerRevived
struct ASQGameRuleSet_PlayerRevived_Params
{
	class ASQPlayerController*                         Reviver;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         RevivedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerKilled
struct ASQGameRuleSet_PlayerKilled_Params
{
	class ASQPlayerController*                         Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerJoinedTeam
struct ASQGameRuleSet_PlayerJoinedTeam_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerJoined
struct ASQGameRuleSet_PlayerJoined_Params
{
	class ASQPlayerController*                         NewPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerHealed
struct ASQGameRuleSet_PlayerHealed_Params
{
	class ASQPlayerController*                         Healer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         HealedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerDied
struct ASQGameRuleSet_PlayerDied_Params
{
	class ASQPlayerController*                         Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.PlayerBandaged
struct ASQGameRuleSet_PlayerBandaged_Params
{
	class ASQPlayerController*                         Bandager;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         BandagedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.NotifyPlayerOnScoreEvent
struct ASQGameRuleSet_NotifyPlayerOnScoreEvent_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQScoreEvent                               ScoreEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.NotifyPlayer
struct ASQGameRuleSet_NotifyPlayer_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.ModifySoldierInventory
struct ASQGameRuleSet_ModifySoldierInventory_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.MatchStarted
struct ASQGameRuleSet_MatchStarted_Params
{
};

// Function Squad.SQGameRuleSet.MatchIsWaitingToStart
struct ASQGameRuleSet_MatchIsWaitingToStart_Params
{
};

// Function Squad.SQGameRuleSet.LogisticsDropOff
struct ASQGameRuleSet_LogisticsDropOff_Params
{
	class AActor*                                      VehicleActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmmoDroppedOff;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstructionDroppedOff;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.GetRoundTimeRemaining
struct ASQGameRuleSet_GetRoundTimeRemaining_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.GetRoundTimeOverride
struct ASQGameRuleSet_GetRoundTimeOverride_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.GetGameMode
struct ASQGameRuleSet_GetGameMode_Params
{
	class ASQGameMode*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameRuleSet.GetDisplayName
struct ASQGameRuleSet_GetDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQToastWidget.ToastTextUpdatedEvent__DelegateSignature
struct USQToastWidget_ToastTextUpdatedEvent__DelegateSignature_Params
{
	struct FText                                       ToastText;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function Squad.SQToastWidget.SetToastText
struct USQToastWidget_SetToastText_Params
{
	struct FText                                       InToastText;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQToastWidget.SetLifetime
struct USQToastWidget_SetLifetime_Params
{
	float                                              InLifetime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQToastWidget.GetToastText
struct USQToastWidget_GetToastText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQTemperatureComponent.OnRep_CurrentTemperature
struct USQTemperatureComponent_OnRep_CurrentTemperature_Params
{
	float                                              PreviousTemperature;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTemperatureComponent.AdjustTemperature
struct USQTemperatureComponent_AdjustTemperature_Params
{
	float                                              DegressOfAdjustment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 TempChanger;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamStatePrivate.OnRep_IndexedTeamPrivateSquadStates
struct ASQTeamStatePrivate_OnRep_IndexedTeamPrivateSquadStates_Params
{
};

// Function Squad.SQTeamStatePrivate.GetId
struct ASQTeamStatePrivate_GetId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.ScorePointsDelayed
struct ASQTeamState_ScorePointsDelayed_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.ScorePoints
struct ASQTeamState_ScorePoints_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.RemovePlayerState
struct ASQTeamState_RemovePlayerState_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.RefreshSquadStates
struct ASQTeamState_RefreshSquadStates_Params
{
};

// Function Squad.SQTeamState.OnRep_InfoClass
struct ASQTeamState_OnRep_InfoClass_Params
{
};

// Function Squad.SQTeamState.OnRep_IndexedSquadStates
struct ASQTeamState_OnRep_IndexedSquadStates_Params
{
};

// Function Squad.SQTeamState.GetTickets
struct ASQTeamState_GetTickets_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.GetTeamRoleAvailability
struct ASQTeamState_GetTeamRoleAvailability_Params
{
	class USQRoleSettings*                             SquadRole;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForDeployment;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutTotal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutUsed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.GetSquadRoleAvailability
struct ASQTeamState_GetSquadRoleAvailability_Params
{
	class USQRoleSettings*                             SquadRole;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForDeployment;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutTotal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutUsed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.GetRoleGroupAvailability
struct ASQTeamState_GetRoleGroupAvailability_Params
{
	ESQRoleTypeEnum                                    RoleType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutTotal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutUsed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.GetFirstAvailableSquadId
struct ASQTeamState_GetFirstAvailableSquadId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamState.AddPlayerState
struct ASQTeamState_AddPlayerState_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.SetTeam
struct ASQGameSpawn_SetTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.SetSpawningEnabled
struct ASQGameSpawn_SetSpawningEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.SetSieged
struct ASQGameSpawn_SetSieged_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.SetRespawnIncrease
struct ASQGameSpawn_SetRespawnIncrease_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.OnRep_Team
struct ASQGameSpawn_OnRep_Team_Params
{
};

// Function Squad.SQGameSpawn.OnRep_SpawningEnabledChanged
struct ASQGameSpawn_OnRep_SpawningEnabledChanged_Params
{
};

// Function Squad.SQGameSpawn.OnRep_SiegedChanged
struct ASQGameSpawn_OnRep_SiegedChanged_Params
{
};

// Function Squad.SQGameSpawn.HasValidSpawnLocation
struct ASQGameSpawn_HasValidSpawnLocation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetWaveTime
struct ASQGameSpawn_GetWaveTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetWaveSpawnStartTime
struct ASQGameSpawn_GetWaveSpawnStartTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetWaveIntervalTime
struct ASQGameSpawn_GetWaveIntervalTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetValidSpawnLocations
struct ASQGameSpawn_GetValidSpawnLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetValidSpawnLocation
struct ASQGameSpawn_GetValidSpawnLocation_Params
{
	class UClass*                                      DefaultPawnClass;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetTeam
struct ASQGameSpawn_GetTeam_Params
{
	ESQTeam                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetSpawnPointType
struct ASQGameSpawn_GetSpawnPointType_Params
{
	ESQSpawnPointType                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetSpawningEnabled
struct ASQGameSpawn_GetSpawningEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetSpawnActor
struct ASQGameSpawn_GetSpawnActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetSieged
struct ASQGameSpawn_GetSieged_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetRespawnIncrease
struct ASQGameSpawn_GetRespawnIncrease_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.GetRespawnDelay
struct ASQGameSpawn_GetRespawnDelay_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.CanSpawn
struct ASQGameSpawn_CanSpawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSpawn.BP_OnSiegedStateChanged
struct ASQGameSpawn_BP_OnSiegedStateChanged_Params
{
};

// Function Squad.SQTeamPrep.OnCompExit
struct ASQTeamPrep_OnCompExit_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamPrep.OnCompBeginOverlap
struct ASQTeamPrep_OnCompBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamPrep.GetStagingTimeRemaining
struct ASQTeamPrep_GetStagingTimeRemaining_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamPrep.CheckOverlap
struct ASQTeamPrep_CheckOverlap_Params
{
};

// Function Squad.SQTeamInterface.OnTeamChange
struct USQTeamInterface_OnTeamChange_Params
{
	int                                                PreviousTeam;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamInterface.GetTeamId
struct USQTeamInterface_GetTeamId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUserWidget.SelfRemove
struct USQUserWidget_SelfRemove_Params
{
};

// Function Squad.SQUserWidget.BPInit
struct USQUserWidget_BPInit_Params
{
};

// Function Squad.SQBaseButton.UpdateActiveState
struct USQBaseButton_UpdateActiveState_Params
{
};

// Function Squad.SQBaseButton.InitWidget
struct USQBaseButton_InitWidget_Params
{
};

// Function Squad.SQSteamItem.SetEnabled
struct USQSteamItem_SetEnabled_Params
{
	bool                                               bNewEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideIncompatibles;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamItem.IsCompatibleWith
struct USQSteamItem_IsCompatibleWith_Params
{
	class USQSteamItem*                                OtherItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUIBlueprintFunctionLibrary.GetSteamInventory
struct USQSteamInventoryUIBlueprintFunctionLibrary_GetSteamInventory_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQSteamInventoryUI*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUI.OnGetCacheSuccess
struct USQSteamInventoryUI_OnGetCacheSuccess_Params
{
	TArray<struct FBlueprintOnlineItem>                Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUI.GetItemsOfClass
struct USQSteamInventoryUI_GetItemsOfClass_Params
{
	class UClass*                                      ItemClass;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQSteamItem*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUI.GetIncompatibleItems
struct USQSteamInventoryUI_GetIncompatibleItems_Params
{
	class USQSteamItem*                                ItemToCheckFor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabledOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQSteamItem*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUI.GetFirstIncompatibleItem
struct USQSteamInventoryUI_GetFirstIncompatibleItem_Params
{
	class USQSteamItem*                                ItemToCheckFor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabledOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQSteamItem*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSteamInventoryUI.CacheSteamItems
struct USQSteamInventoryUI_CacheSteamItems_Params
{
};

// Function Squad.SQSteamInventory.OnGetCacheSuccess
struct USQSteamInventory_OnGetCacheSuccess_Params
{
	TArray<struct FBlueprintOnlineItem>                Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPawnMovementComponent.GetMovementBase
struct USQPawnMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQNetMoveComponent.SendPackedMoveRPC
struct USQNetMoveComponent_SendPackedMoveRPC_Params
{
	TArray<unsigned char>                              PackedMove;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQNetMoveComponent.SendClientCorrection
struct USQNetMoveComponent_SendClientCorrection_Params
{
	TArray<unsigned char>                              PackedMove;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQNetMoveComponent.OnRep_LatestPackedMove
struct USQNetMoveComponent_OnRep_LatestPackedMove_Params
{
};

// Function Squad.SQStatefulButton.OnPressed
struct USQStatefulButton_OnPressed_Params
{
};

// Function Squad.SQStatefulButton.GetCurrentState
struct USQStatefulButton_GetCurrentState_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQStatefulButton.ChangeImage
struct USQStatefulButton_ChangeImage_Params
{
	int                                                ImageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQStagingTimerText.OnFellBelowThreshold
struct USQStagingTimerText_OnFellBelowThreshold_Params
{
};

// Function Squad.SQCoreStateData.OnWorldCleanup
struct USQCoreStateData_OnWorldCleanup_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSessionEnded;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCleanupResources;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateData.OnListenerCreate
struct USQCoreStateData_OnListenerCreate_Params
{
	class USQCoreStateListener*                        Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.ScorePointsDelayed
struct ASQSquadState_ScorePointsDelayed_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.ScorePoints
struct ASQSquadState_ScorePoints_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.RemovePlayerState
struct ASQSquadState_RemovePlayerState_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.OnRep_TeamId
struct ASQSquadState_OnRep_TeamId_Params
{
};

// Function Squad.SQSquadState.OnRep_PlayerStates
struct ASQSquadState_OnRep_PlayerStates_Params
{
};

// Function Squad.SQSquadState.OnRep_Name
struct ASQSquadState_OnRep_Name_Params
{
};

// Function Squad.SQSquadState.OnRep_LeaderState
struct ASQSquadState_OnRep_LeaderState_Params
{
	class ASQPlayerState*                              LastLeaderState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.OnRep_IsLocked
struct ASQSquadState_OnRep_IsLocked_Params
{
};

// Function Squad.SQSquadState.OnRep_Id
struct ASQSquadState_OnRep_Id_Params
{
};

// Function Squad.SQSquadState.BroadcastPlayerLeaveEvent
struct ASQSquadState_BroadcastPlayerLeaveEvent_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.BroadcastPlayerJoinEvent
struct ASQSquadState_BroadcastPlayerJoinEvent_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.BroadcastLeaderChangeEvent
struct ASQSquadState_BroadcastLeaderChangeEvent_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadState.AddPlayerState
struct ASQSquadState_AddPlayerState_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadSelection.ShowSquadCreationWidgets
struct USQSquadSelection_ShowSquadCreationWidgets_Params
{
};

// Function Squad.SQSquadSelection.SelfTick
struct USQSquadSelection_SelfTick_Params
{
};

// Function Squad.SQSquadSelection.RethrowSquadCreated
struct USQSquadSelection_RethrowSquadCreated_Params
{
};

// Function Squad.SQSquadSelection.LeaveSquad
struct USQSquadSelection_LeaveSquad_Params
{
};

// Function Squad.SQSquadSelection.InitWidget
struct USQSquadSelection_InitWidget_Params
{
};

// Function Squad.SQSquadSelection.HideSquadCreationWidgets
struct USQSquadSelection_HideSquadCreationWidgets_Params
{
};

// Function Squad.SQGameRallyPoint.GetNumberOfSpawns
struct ASQGameRallyPoint_GetNumberOfSpawns_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadRallyPoint.OnRep_SquadState
struct ASQSquadRallyPoint_OnRep_SquadState_Params
{
};

// Function Squad.SQSquadMemberListItem.ShowActionMenu
struct USQSquadMemberListItem_ShowActionMenu_Params
{
	int                                                MenuIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquadMemberListItem.OnSLInvite
struct USQSquadMemberListItem_OnSLInvite_Params
{
};

// Function Squad.SQSquadMemberListItem.OnPromoteToSL
struct USQSquadMemberListItem_OnPromoteToSL_Params
{
};

// Function Squad.SQSquadMemberListItem.OnKick
struct USQSquadMemberListItem_OnKick_Params
{
};

// Function Squad.SQSquadMemberListItem.OnActionButton
struct USQSquadMemberListItem_OnActionButton_Params
{
};

// Function Squad.SQSquadMemberListItem.InitEventHandlers
struct USQSquadMemberListItem_InitEventHandlers_Params
{
};

// Function Squad.SQSquadMemberListItem.BPInitWidgetRefs
struct USQSquadMemberListItem_BPInitWidgetRefs_Params
{
};

// Function Squad.SQSquadMemberList.RefreshSquadInfo
struct USQSquadMemberList_RefreshSquadInfo_Params
{
};

// Function Squad.SQSquadMemberList.RefreshList
struct USQSquadMemberList_RefreshList_Params
{
};

// Function Squad.SQSquadMemberList.OnLockButtonClicked
struct USQSquadMemberList_OnLockButtonClicked_Params
{
};

// Function Squad.SQSquadMemberList.OnInviteButtonClicked
struct USQSquadMemberList_OnInviteButtonClicked_Params
{
};

// Function Squad.SQSquadMemberList.Init
struct USQSquadMemberList_Init_Params
{
};

// Function Squad.SQSquadList.InitWidget
struct USQSquadList_InitWidget_Params
{
};

// Function Squad.SQSquad.TryClaimVehicle
struct ASQSquad_TryClaimVehicle_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquad.TryApproveVehicleClaim
struct ASQSquad_TryApproveVehicleClaim_Params
{
};

// DelegateFunction Squad.SQSquad.OnPlayerJoinPartSquadEvent__DelegateSignature
struct ASQSquad_OnPlayerJoinPartSquadEvent__DelegateSignature_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQSquad.OnFireteamChangedEvent__DelegateSignature
struct ASQSquad_OnFireteamChangedEvent__DelegateSignature_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquad.GiveSquadLeader
struct ASQSquad_GiveSquadLeader_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquad.GetBlockingPartyVehicleClaims
struct ASQSquad_GetBlockingPartyVehicleClaims_Params
{
	TArray<class USQVehicleClaim*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSquad.GetBlockingDirectVehicleClaims
struct ASQSquad_GetBlockingDirectVehicleClaims_Params
{
	TArray<class USQVehicleClaim*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSpectatorMan.ServerSetFlySpeedTarget
struct ASQSpectatorMan_ServerSetFlySpeedTarget_Params
{
	float                                              InFlySpeedTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSpectatorMan.ServerSetDecelerationTarget
struct ASQSpectatorMan_ServerSetDecelerationTarget_Params
{
	float                                              InDecelerationTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSpectatorMan.DrawHUD
struct ASQSpectatorMan_DrawHUD_Params
{
	class ASQHUD*                                      SquadHUD;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierRagdollComponent.SetRagdollState
struct USQSoldierRagdollComponent_SetRagdollState_Params
{
	ESQSoldierRagdollReason                            NewRagdollState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierRagdollComponent.SetDragging
struct USQSoldierRagdollComponent_SetDragging_Params
{
	bool                                               bIsDragging;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierRagdollComponent.ServerSetRagdollState
struct USQSoldierRagdollComponent_ServerSetRagdollState_Params
{
	ESQSoldierRagdollReason                            NewRagdollState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierRagdollComponent.OnRep_RagdollState
struct USQSoldierRagdollComponent_OnRep_RagdollState_Params
{
};

// Function Squad.SQSoldierRagdollComponent.IsInRagdoll
struct USQSoldierRagdollComponent_IsInRagdoll_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierRagdollComponent.GetRagdollState
struct USQSoldierRagdollComponent_GetRagdollState_Params
{
	ESQSoldierRagdollReason                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.Wound
struct ASQSoldier_Wound_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.UpdatePatches
struct ASQSoldier_UpdatePatches_Params
{
};

// Function Squad.SQSoldier.UpdateFirstPersonVisibility
struct ASQSoldier_UpdateFirstPersonVisibility_Params
{
};

// Function Squad.SQSoldier.UnProne
struct ASQSoldier_UnProne_Params
{
};

// Function Squad.SQSoldier.SwitchWeapon
struct ASQSoldier_SwitchWeapon_Params
{
	int                                                NewWeaponSlotla;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.SwitchedSeat
struct ASQSoldier_SwitchedSeat_Params
{
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.Suicide
struct ASQSoldier_Suicide_Params
{
};

// Function Squad.SQSoldier.StopBodyDragging
struct ASQSoldier_StopBodyDragging_Params
{
};

// Function Squad.SQSoldier.StopBleeding
struct ASQSoldier_StopBleeding_Params
{
};

// Function Squad.SQSoldier.StartBodyDragging
struct ASQSoldier_StartBodyDragging_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.StartAimDownSights
struct ASQSoldier_StartAimDownSights_Params
{
};

// Function Squad.SQSoldier.SetSeatState
struct ASQSoldier_SetSeatState_Params
{
	ESQSoldierSeatState                                SoldierSeatState;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.SetFirstPersonVisibility
struct ASQSoldier_SetFirstPersonVisibility_Params
{
	bool                                               bIsFirstPersonVisible;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.ServerVehicleCollision
struct ASQSoldier_ServerVehicleCollision_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldKill;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.ServerPickupAmmoBag
struct ASQSoldier_ServerPickupAmmoBag_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.ServerEndInteract
struct ASQSoldier_ServerEndInteract_Params
{
};

// Function Squad.SQSoldier.ServerDragBody
struct ASQSoldier_ServerDragBody_Params
{
	bool                                               bDrag;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSoldier*                                  SoldierToDrag;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.ServerDisableSpawnProtection
struct ASQSoldier_ServerDisableSpawnProtection_Params
{
};

// Function Squad.SQSoldier.ServerDeployableInteractable
struct ASQSoldier_ServerDeployableInteractable_Params
{
	class ASQDeployableInteractable*                   Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.ServerDebugToggleGodMode
struct ASQSoldier_ServerDebugToggleGodMode_Params
{
};

// Function Squad.SQSoldier.ServerDebugStopBleeding
struct ASQSoldier_ServerDebugStopBleeding_Params
{
};

// Function Squad.SQSoldier.ServerDebugRevive
struct ASQSoldier_ServerDebugRevive_Params
{
};

// Function Squad.SQSoldier.ServerDebugRearm
struct ASQSoldier_ServerDebugRearm_Params
{
};

// Function Squad.SQSoldier.ServerDebugFullHealth
struct ASQSoldier_ServerDebugFullHealth_Params
{
};

// Function Squad.SQSoldier.ServerBeginInteract
struct ASQSoldier_ServerBeginInteract_Params
{
};

// Function Squad.SQSoldier.ReviveServerOnly
struct ASQSoldier_ReviveServerOnly_Params
{
};

// Function Squad.SQSoldier.Prone
struct ASQSoldier_Prone_Params
{
};

// Function Squad.SQSoldier.PlayFootStep
struct ASQSoldier_PlayFootStep_Params
{
	struct FName                                       SocketName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OpposingKneeSocketName;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistanceInMeters;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.PlayEquipmentSound
struct ASQSoldier_PlayEquipmentSound_Params
{
	float                                              MaxDistanceInMeters;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.PlayClothingSound
struct ASQSoldier_PlayClothingSound_Params
{
	float                                              MaxDistanceInMeters;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnSnapZoneOverlapEnd
struct ASQSoldier_OnSnapZoneOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnSnapZoneOverlapBegin
struct ASQSoldier_OnSnapZoneOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnRep_SoldierSkinIndex
struct ASQSoldier_OnRep_SoldierSkinIndex_Params
{
};

// Function Squad.SQSoldier.OnRep_LastTakeHitInfo
struct ASQSoldier_OnRep_LastTakeHitInfo_Params
{
};

// Function Squad.SQSoldier.OnRep_IsWounded
struct ASQSoldier_OnRep_IsWounded_Params
{
};

// Function Squad.SQSoldier.OnRep_IsDying
struct ASQSoldier_OnRep_IsDying_Params
{
};

// Function Squad.SQSoldier.OnRep_IsBleeding
struct ASQSoldier_OnRep_IsBleeding_Params
{
};

// Function Squad.SQSoldier.OnRep_Health
struct ASQSoldier_OnRep_Health_Params
{
	float                                              OldHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnRep_DraggingData
struct ASQSoldier_OnRep_DraggingData_Params
{
};

// Function Squad.SQSoldier.OnRep_CurrentSeat
struct ASQSoldier_OnRep_CurrentSeat_Params
{
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnRagdollHit
struct ASQSoldier_OnRagdollHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.OnPrevItem
struct ASQSoldier_OnPrevItem_Params
{
};

// Function Squad.SQSoldier.OnNextItem
struct ASQSoldier_OnNextItem_Params
{
};

// Function Squad.SQSoldier.MulticastToggleGodMode
struct ASQSoldier_MulticastToggleGodMode_Params
{
};

// Function Squad.SQSoldier.MulticastSetDragging
struct ASQSoldier_MulticastSetDragging_Params
{
	bool                                               bDrag;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSoldier*                                  SoldierToDrag;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.MulticastLean
struct ASQSoldier_MulticastLean_Params
{
	unsigned char                                      NewLeanDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.MulticastChangeRootComponent
struct ASQSoldier_MulticastChangeRootComponent_Params
{
	bool                                               bSetMeshAsRoot;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.LeftVehicle
struct ASQSoldier_LeftVehicle_Params
{
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.LeftSeat
struct ASQSoldier_LeftSeat_Params
{
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSwitchedSeats;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeftVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.IsSprinting
struct ASQSoldier_IsSprinting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.IsInVehicle
struct ASQSoldier_IsInVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.IsInteracting
struct ASQSoldier_IsInteracting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.IsFirstPersonViewTarget
struct ASQSoldier_IsFirstPersonViewTarget_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.IsAlive
struct ASQSoldier_IsAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.InitiateDragging
struct ASQSoldier_InitiateDragging_Params
{
	class ASQSoldier*                                  SoldierToDrag;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BoneIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.Heal
struct ASQSoldier_Heal_Params
{
	float                                              AmountHealed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetTeamState
struct ASQSoldier_GetTeamState_Params
{
	class ASQTeamState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetTeam
struct ASQSoldier_GetTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetSeatState
struct ASQSoldier_GetSeatState_Params
{
	ESQSoldierSeatState                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetPendingWeapon
struct ASQSoldier_GetPendingWeapon_Params
{
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetMaxHealth
struct ASQSoldier_GetMaxHealth_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetInventory
struct ASQSoldier_GetInventory_Params
{
	class USQPawnInventoryComponent*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetFirstPersonVisibility
struct ASQSoldier_GetFirstPersonVisibility_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetCurrentWeapon
struct ASQSoldier_GetCurrentWeapon_Params
{
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetCurrentVehicle
struct ASQSoldier_GetCurrentVehicle_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetCurrentSeatWeaponRotation
struct ASQSoldier_GetCurrentSeatWeaponRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetCurrentSeatPawn
struct ASQSoldier_GetCurrentSeatPawn_Params
{
	class ASQVehicleSeat*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.GetCurrentSeat
struct ASQSoldier_GetCurrentSeat_Params
{
	class USQVehicleSeatComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.EnteredVehicle
struct ASQSoldier_EnteredVehicle_Params
{
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.EnteredSeat
struct ASQSoldier_EnteredSeat_Params
{
	class USQVehicleSeatComponent*                     PreviousSeat;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQVehicleSeatComponent*                     NewSeat;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSwitchedSeats;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnteredVehicle;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.EndInteract
struct ASQSoldier_EndInteract_Params
{
};

// Function Squad.SQSoldier.EndFireWeapon
struct ASQSoldier_EndFireWeapon_Params
{
};

// Function Squad.SQSoldier.EndAltFireWeapon
struct ASQSoldier_EndAltFireWeapon_Params
{
};

// Function Squad.SQSoldier.EndAimDownSights
struct ASQSoldier_EndAimDownSights_Params
{
};

// Function Squad.SQSoldier.DisableSpawnProtection
struct ASQSoldier_DisableSpawnProtection_Params
{
};

// Function Squad.SQSoldier.Die
struct ASQSoldier_Die_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.DebugToggleGodMode
struct ASQSoldier_DebugToggleGodMode_Params
{
};

// Function Squad.SQSoldier.DebugStopBleeding
struct ASQSoldier_DebugStopBleeding_Params
{
};

// Function Squad.SQSoldier.DebugRevive
struct ASQSoldier_DebugRevive_Params
{
};

// Function Squad.SQSoldier.DebugRearm
struct ASQSoldier_DebugRearm_Params
{
};

// Function Squad.SQSoldier.DebugFullHealth
struct ASQSoldier_DebugFullHealth_Params
{
};

// Function Squad.SQSoldier.ClearSeatState
struct ASQSoldier_ClearSeatState_Params
{
};

// Function Squad.SQSoldier.ChangeSoundMix
struct ASQSoldier_ChangeSoundMix_Params
{
	class USoundMix*                                   NewSoundMix;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.CanStartWithMaxAmmo
struct ASQSoldier_CanStartWithMaxAmmo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPWoundedDamageTaken
struct ASQSoldier_BPWoundedDamageTaken_Params
{
	float                                              damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPWound
struct ASQSoldier_BPWound_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPOnSuppression
struct ASQSoldier_BPOnSuppression_Params
{
	struct FVector                                     ClosestPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClosenessRatio;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAppliedSuppression;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPOnStartProne
struct ASQSoldier_BPOnStartProne_Params
{
	float                                              HalfHeightAdjust;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaledHalfHeightAdjust;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPOnSnapZoneOverlapEnd
struct ASQSoldier_BPOnSnapZoneOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPOnSnapZoneOverlapBegin
struct ASQSoldier_BPOnSnapZoneOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPOnEndProne
struct ASQSoldier_BPOnEndProne_Params
{
	float                                              HalfHeightAdjust;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaledHalfHeightAdjust;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPGetYawViewLimits
struct ASQSoldier_BPGetYawViewLimits_Params
{
	struct FVector2D                                   YawViewLimits;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPDie
struct ASQSoldier_BPDie_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BPBleedingDamageTaken
struct ASQSoldier_BPBleedingDamageTaken_Params
{
	float                                              damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BlueprintUpdateSkin
struct ASQSoldier_BlueprintUpdateSkin_Params
{
};

// Function Squad.SQSoldier.BlueprintUpdateFirstPersonVisibility
struct ASQSoldier_BlueprintUpdateFirstPersonVisibility_Params
{
	bool                                               bIsFirstPersonVisible;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BlueprintCalcCamera
struct ASQSoldier_BlueprintCalcCamera_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InRotation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InFOV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OutFOV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.BeginInteract
struct ASQSoldier_BeginInteract_Params
{
};

// Function Squad.SQSoldier.BeginFireWeapon
struct ASQSoldier_BeginFireWeapon_Params
{
};

// Function Squad.SQSoldier.BeginAltFireWeapon
struct ASQSoldier_BeginAltFireWeapon_Params
{
};

// Function Squad.SQSoldier.AttemptToRearmWeapons
struct ASQSoldier_AttemptToRearmWeapons_Params
{
	TScriptInterface<class USQRearmSource>             RearmSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSQRearmWeaponRequest>               RearmRequest;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldier.AttemptSuppression
struct ASQSoldier_AttemptSuppression_Params
{
	struct FVector                                     SuppressionStart;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SuppressionEnd;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ProjectileInstigator;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SuppressionInfoClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutClosestPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutApplySuppression;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.WeaponMagazineHasAmmo
struct ASQSoldierNew_WeaponMagazineHasAmmo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.UpdateToProneCapsuleMotion
struct ASQSoldierNew_UpdateToProneCapsuleMotion_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.UpdateStaticItemInfo
struct ASQSoldierNew_UpdateStaticItemInfo_Params
{
	class USQItemStaticInfo*                           InfoObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.UpdateCachedAnimInstance3p
struct ASQSoldierNew_UpdateCachedAnimInstance3p_Params
{
};

// Function Squad.SQSoldierNew.UpdateBreathingSound
struct ASQSoldierNew_UpdateBreathingSound_Params
{
};

// Function Squad.SQSoldierNew.Update1pRelativeLocation
struct ASQSoldierNew_Update1pRelativeLocation_Params
{
};

// Function Squad.SQSoldierNew.Update1pCamStanceHeight
struct ASQSoldierNew_Update1pCamStanceHeight_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.ToggleViewReleased
struct ASQSoldierNew_ToggleViewReleased_Params
{
};

// Function Squad.SQSoldierNew.ToggleViewPressed
struct ASQSoldierNew_ToggleViewPressed_Params
{
};

// Function Squad.SQSoldierNew.ToggleThirdPersonView
struct ASQSoldierNew_ToggleThirdPersonView_Params
{
};

// Function Squad.SQSoldierNew.ToggleBipod
struct ASQSoldierNew_ToggleBipod_Params
{
};

// Function Squad.SQSoldierNew.TickUpdateThirdPersonView
struct ASQSoldierNew_TickUpdateThirdPersonView_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.ServerRetractBipod
struct ASQSoldierNew_ServerRetractBipod_Params
{
};

// Function Squad.SQSoldierNew.ServerLowerWeapon
struct ASQSoldierNew_ServerLowerWeapon_Params
{
	bool                                               bValue;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.ServerDeployBipod
struct ASQSoldierNew_ServerDeployBipod_Params
{
	struct FVector                                     RemoteBipodDeploymentLocationZeroBased;                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RemoteActorLocationZeroBased;                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.ServerClimb
struct ASQSoldierNew_ServerClimb_Params
{
	struct FTransform                                  ClientTransformZeroBased;                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSQClimbInfo                                ClientInfo;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.PlayOrStopMontage
struct ASQSoldierNew_PlayOrStopMontage_Params
{
	class UAnimInstance*                               AnimInstance;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.PlayOrStopAnimations
struct ASQSoldierNew_PlayOrStopAnimations_Params
{
	class UAnimMontage*                                FirstPersonAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.OutOfBoundsKillCallback
struct ASQSoldierNew_OutOfBoundsKillCallback_Params
{
};

// Function Squad.SQSoldierNew.OnRep_WeaponLoweredChanged
struct ASQSoldierNew_OnRep_WeaponLoweredChanged_Params
{
	bool                                               bVal;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.OnRep_ClimbInfo
struct ASQSoldierNew_OnRep_ClimbInfo_Params
{
	struct FSQClimbInfo                                PrevClimbInfo;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.OnRep_Bipod
struct ASQSoldierNew_OnRep_Bipod_Params
{
	bool                                               bBipodWasDeployed;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQSoldierNew.OnPossessionChanged__DelegateSignature
struct ASQSoldierNew_OnPossessionChanged__DelegateSignature_Params
{
};

// Function Squad.SQSoldierNew.OnExitBoundary
struct ASQSoldierNew_OnExitBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQSoldierNew.OnEquip__DelegateSignature
struct ASQSoldierNew_OnEquip__DelegateSignature_Params
{
	class USQItemStaticInfo*                           StaticInfo;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.OnEnterBoundary
struct ASQSoldierNew_OnEnterBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.On_RepIsPlayingVoipHandAnim
struct ASQSoldierNew_On_RepIsPlayingVoipHandAnim_Params
{
};

// Function Squad.SQSoldierNew.MulticastPlayEmoteAnim
struct ASQSoldierNew_MulticastPlayEmoteAnim_Params
{
	ESQEmotes                                          Emote;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.MulticastPlayCustomEmote
struct ASQSoldierNew_MulticastPlayCustomEmote_Params
{
	struct FName                                       CustomName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.IsWeaponLowered
struct ASQSoldierNew_IsWeaponLowered_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.IsPullingTriggerOnWeapon
struct ASQSoldierNew_IsPullingTriggerOnWeapon_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.IsOutOfMapBounds
struct ASQSoldierNew_IsOutOfMapBounds_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.IsMontagePlaying
struct ASQSoldierNew_IsMontagePlaying_Params
{
	class UAnimMontage*                                FirstPersonAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.IsClimbing
struct ASQSoldierNew_IsClimbing_Params
{
	bool                                               bRequiredOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.InputClimb
struct ASQSoldierNew_InputClimb_Params
{
};

// Function Squad.SQSoldierNew.IncreaseCameraDistance
struct ASQSoldierNew_IncreaseCameraDistance_Params
{
};

// Function Squad.SQSoldierNew.DecreaseCameraDistance
struct ASQSoldierNew_DecreaseCameraDistance_Params
{
};

// Function Squad.SQSoldierNew.ClientRejectClimb
struct ASQSoldierNew_ClientRejectClimb_Params
{
};

// Function Squad.SQSoldierNew.ClientRejectBipod
struct ASQSoldierNew_ClientRejectBipod_Params
{
};

// Function Squad.SQSoldierNew.CheckItemCollision
struct ASQSoldierNew_CheckItemCollision_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.CanZoom
struct ASQSoldierNew_CanZoom_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierNew.CalcCamera_BP
struct ASQSoldierNew_CalcCamera_BP_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InRotation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InFOV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OutFOV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.UpdateStamina
struct USQSoldierMovement_UpdateStamina_Params
{
};

// Function Squad.SQSoldierMovement.SetIsHurt
struct USQSoldierMovement_SetIsHurt_Params
{
	bool                                               bHurt;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsWalkPressed
struct USQSoldierMovement_IsWalkPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsStaminaOverThreshold
struct USQSoldierMovement_IsStaminaOverThreshold_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsSprintPressed
struct USQSoldierMovement_IsSprintPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsSprinting
struct USQSoldierMovement_IsSprinting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsProne
struct USQSoldierMovement_IsProne_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsLeaningRight
struct USQSoldierMovement_IsLeaningRight_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsLeaningLeft
struct USQSoldierMovement_IsLeaningLeft_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsDragging
struct USQSoldierMovement_IsDragging_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.IsAimingDownSights
struct USQSoldierMovement_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.GetProneWeight
struct USQSoldierMovement_GetProneWeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.GetJumpVelocity
struct USQSoldierMovement_GetJumpVelocity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.GetCrouchWeight
struct USQSoldierMovement_GetCrouchWeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.CanSprint
struct USQSoldierMovement_CanSprint_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.CanRun
struct USQSoldierMovement_CanRun_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.CanJump
struct USQSoldierMovement_CanJump_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.CanCrouchInCurrentState
struct USQSoldierMovement_CanCrouchInCurrentState_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.CalculateStamina
struct USQSoldierMovement_CalculateStamina_Params
{
	float                                              Penalty;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StanceRegenMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSoldierMovement.ApplyStaminaBurstLoss
struct USQSoldierMovement_ApplyStaminaBurstLoss_Params
{
	float                                              Penalty;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSimpleMovementComponent.AddRotationInput
struct USQSimpleMovementComponent_AddRotationInput_Params
{
	struct FRotator                                    InRotationInput;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQSimpleMovementComponent.AddMoveInput
struct USQSimpleMovementComponent_AddMoveInput_Params
{
	struct FVector                                     InMoveInput;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQShockwave.NearbyExplosionEvent
struct USQShockwave_NearbyExplosionEvent_Params
{
	class AActor*                                      ProjectileActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromEffect;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQShockwave.GetShockwaveSetting
struct USQShockwave_GetShockwaveSetting_Params
{
	struct FSQShockwaveQualitySetting                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQShockwave.Explode
struct USQShockwave_Explode_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ProjectileActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerListItemWidget.SetSession
struct USQServerListItemWidget_SetSession_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerListItemWidget.ServerConnectionCheckUpdate
struct USQServerListItemWidget_ServerConnectionCheckUpdate_Params
{
	struct FSQConnectionCheckResponse                  UpdateResponse;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerListItemWidget.GetServerURL
struct USQServerListItemWidget_GetServerURL_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerListItemWidget.ClientJoinAccepted
struct USQServerListItemWidget_ClientJoinAccepted_Params
{
};

// Function Squad.SQServerListItemWidget.CheckMissingMods
struct USQServerListItemWidget_CheckMissingMods_Params
{
	TArray<struct FSQModLoadProgress>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.UpdateSortedState
struct USQServerBrowserWidget_UpdateSortedState_Params
{
	ESQSortLevels                                      SortLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.UpdateIndexes
struct USQServerBrowserWidget_UpdateIndexes_Params
{
};

// Function Squad.SQServerBrowserWidget.StartFindSessions
struct USQServerBrowserWidget_StartFindSessions_Params
{
};

// Function Squad.SQServerBrowserWidget.SortServerName
struct USQServerBrowserWidget_SortServerName_Params
{
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.SortPing
struct USQServerBrowserWidget_SortPing_Params
{
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.SortNumPlayers
struct USQServerBrowserWidget_SortNumPlayers_Params
{
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.SortMapName
struct USQServerBrowserWidget_SortMapName_Params
{
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.SortGameMode
struct USQServerBrowserWidget_SortGameMode_Params
{
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.SortByName
struct USQServerBrowserWidget_SortByName_Params
{
	ESQSortLevels                                      SortByColumn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAscending;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.ResetSortedState
struct USQServerBrowserWidget_ResetSortedState_Params
{
};

// Function Squad.SQServerBrowserWidget.OnUpdateSession
struct USQServerBrowserWidget_OnUpdateSession_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.OnSuccess
struct USQServerBrowserWidget_OnSuccess_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.OnFindSessionsNewSessionUpdate
struct USQServerBrowserWidget_OnFindSessionsNewSessionUpdate_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.OnFindSessionsCompleted
struct USQServerBrowserWidget_OnFindSessionsCompleted_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQServerBrowserWidget.OnFindSessionsCancelled
struct USQServerBrowserWidget_OnFindSessionsCancelled_Params
{
};

// Function Squad.SQServerBrowserWidget.OnFailure
struct USQServerBrowserWidget_OnFailure_Params
{
};

// Function Squad.SQProgressWidget.ToggleTimer
struct USQProgressWidget_ToggleTimer_Params
{
};

// Function Squad.SQProgressWidget.StartTimer
struct USQProgressWidget_StartTimer_Params
{
};

// Function Squad.SQProgressWidget.ResumeTimer
struct USQProgressWidget_ResumeTimer_Params
{
};

// Function Squad.SQProgressWidget.PauseTimer
struct USQProgressWidget_PauseTimer_Params
{
};

// Function Squad.SQProgressWidget.CancelTimer
struct USQProgressWidget_CancelTimer_Params
{
};

// Function Squad.SQProgressWidget.BPOnTimerStarted
struct USQProgressWidget_BPOnTimerStarted_Params
{
};

// Function Squad.SQProgressWidget.BPOnTimerResumed
struct USQProgressWidget_BPOnTimerResumed_Params
{
};

// Function Squad.SQProgressWidget.BPOnTimerReached
struct USQProgressWidget_BPOnTimerReached_Params
{
};

// Function Squad.SQProgressWidget.BPOnTimerProgress
struct USQProgressWidget_BPOnTimerProgress_Params
{
	float                                              RemainingPct;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProgressWidget.BPOnTimerPaused
struct USQProgressWidget_BPOnTimerPaused_Params
{
};

// Function Squad.SQProgressWidget.BPOnTimerCanceled
struct USQProgressWidget_BPOnTimerCanceled_Params
{
};

// Function Squad.SQSeatProgressWidget.FinishOnServer
struct USQSeatProgressWidget_FinishOnServer_Params
{
};

// Function Squad.SQSeatProgressWidget.BPOnShowVehicleInventory
struct USQSeatProgressWidget_BPOnShowVehicleInventory_Params
{
};

// Function Squad.SQScoreboardTeamScore.InitWidget
struct USQScoreboardTeamScore_InitWidget_Params
{
};

// Function Squad.SQScoreboardTeam.UpdateState
struct USQScoreboardTeam_UpdateState_Params
{
};

// Function Squad.SQScoreboardTeam.UpdateSquads
struct USQScoreboardTeam_UpdateSquads_Params
{
};

// Function Squad.SQScoreboardTeam.UpdatePlayers
struct USQScoreboardTeam_UpdatePlayers_Params
{
};

// Function Squad.SQScoreboardTeam.UpdatePlayerJoinedSquad
struct USQScoreboardTeam_UpdatePlayerJoinedSquad_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboardTeam.UpdateAllSpeakers
struct USQScoreboardTeam_UpdateAllSpeakers_Params
{
	TArray<struct FSQRemoteTalkerDisplayInfo>          CurrentTalkers;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboardTeam.ToggleShowAllStats
struct USQScoreboardTeam_ToggleShowAllStats_Params
{
};

// Function Squad.SQScoreboardTeam.SortSquads
struct USQScoreboardTeam_SortSquads_Params
{
};

// Function Squad.SQScoreboardTeam.InitWidget
struct USQScoreboardTeam_InitWidget_Params
{
};

// Function Squad.SQScoreboardTeam.CreateNewSquad
struct USQScoreboardTeam_CreateNewSquad_Params
{
	class ASQSquadState*                               NewSquad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboardTeam.CreateNewPlayer
struct USQScoreboardTeam_CreateNewPlayer_Params
{
	class ASQTeamState*                                Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboardTeam.CleanDataForWidget
struct USQScoreboardTeam_CleanDataForWidget_Params
{
};

// Function Squad.SQScoreboardSquad.UpdateState
struct USQScoreboardSquad_UpdateState_Params
{
};

// Function Squad.SQScoreboardSquad.InitWidget
struct USQScoreboardSquad_InitWidget_Params
{
};

// Function Squad.SQScoreboardPlayer.UpdateState
struct USQScoreboardPlayer_UpdateState_Params
{
};

// Function Squad.SQScoreboardPlayer.OnMutePlayer
struct USQScoreboardPlayer_OnMutePlayer_Params
{
	int                                                CurrentState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboardPlayer.InitWidget
struct USQScoreboardPlayer_InitWidget_Params
{
};

// Function Squad.SQScoreboardPlayer.ChangeVoipColor
struct USQScoreboardPlayer_ChangeVoipColor_Params
{
	ESQVoiceChannel                                    Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQScoreboard.UpdateState
struct USQScoreboard_UpdateState_Params
{
};

// Function Squad.SQScoreboard.InitWidget
struct USQScoreboard_InitWidget_Params
{
};

// Function Squad.SQSaveGameWrapper.SetSavedGame
struct USQSaveGameWrapper_SetSavedGame_Params
{
	class USaveGame*                                   NewSaveGame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQSaveGameWrapper.Save
struct USQSaveGameWrapper_Save_Params
{
};

// Function Squad.SQSaveGameWrapper.GetSavedGame
struct USQSaveGameWrapper_GetSavedGame_Params
{
	class USaveGame*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddYawTorque
struct USQForceNetMovementComponent_AddYawTorque_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddTorque
struct USQForceNetMovementComponent_AddTorque_Params
{
	struct FVector                                     Torque;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddRollTorque
struct USQForceNetMovementComponent_AddRollTorque_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddPitchTorque
struct USQForceNetMovementComponent_AddPitchTorque_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddForceAtLocationWithTorqueMultiplier
struct USQForceNetMovementComponent_AddForceAtLocationWithTorqueMultiplier_Params
{
	struct FVector                                     Force;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TorqueMultiplier;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddForceAtLocation
struct USQForceNetMovementComponent_AddForceAtLocation_Params
{
	struct FVector                                     Force;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TorqueMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForceNetMovementComponent.AddForce
struct USQForceNetMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorVehicleMovementComponent.ToggleRotorLockByType
struct USQRotorVehicleMovementComponent_ToggleRotorLockByType_Params
{
	ESQRotorType                                       RotorType;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorVehicleMovementComponent.AddThrustByType
struct USQRotorVehicleMovementComponent_AddThrustByType_Params
{
	ESQRotorType                                       RotorType;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thrust;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorVehicleMovementComponent.AddThrust
struct USQRotorVehicleMovementComponent_AddThrust_Params
{
	int                                                RotorIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thrust;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngine.IsEngineToggleActive
struct USQVehicleEngine_IsEngineToggleActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngine.IsEngineActive
struct USQVehicleEngine_IsEngineActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngine.GetCurrentEngineToggleRequiredDuration
struct USQVehicleEngine_GetCurrentEngineToggleRequiredDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngine.GetCurrentEngineTogglePercentage
struct USQVehicleEngine_GetCurrentEngineTogglePercentage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngineComponent.StopEngineImmediately
struct USQVehicleEngineComponent_StopEngineImmediately_Params
{
};

// Function Squad.SQVehicleEngineComponent.ServerSetEngineToggleActiveInput
struct USQVehicleEngineComponent_ServerSetEngineToggleActiveInput_Params
{
	bool                                               bInIsEngineToggleActive;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngineComponent.ServerSetEngineActiveInput
struct USQVehicleEngineComponent_ServerSetEngineActiveInput_Params
{
	bool                                               bNewEngineActive;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngineComponent.OnRep_EngineToggleActive
struct USQVehicleEngineComponent_OnRep_EngineToggleActive_Params
{
};

// Function Squad.SQVehicleEngineComponent.OnRep_EngineActive
struct USQVehicleEngineComponent_OnRep_EngineActive_Params
{
};

// Function Squad.SQVehicleEngineComponent.OnPlayerExitedVehicleHandler
struct USQVehicleEngineComponent_OnPlayerExitedVehicleHandler_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleEngineComponent.OnPlayerEnteredVehicleHandler
struct USQVehicleEngineComponent_OnPlayerEnteredVehicleHandler_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorBladesComponent.TakeFatalDamage
struct USQRotorBladesComponent_TakeFatalDamage_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorBladesComponent.IsHealthy
struct USQRotorBladesComponent_IsHealthy_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorBladesComponent.DamageRotor
struct USQRotorBladesComponent_DamageRotor_Params
{
};

// Function Squad.SQRotatingMovementComponent.OnRep_RotationReplicatedMovement
struct USQRotatingMovementComponent_OnRep_RotationReplicatedMovement_Params
{
};

// Function Squad.SQRotatingMovementComponent.GetCurrentRotationVelocity
struct USQRotatingMovementComponent_GetCurrentRotationVelocity_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotatingMovementComponent.AddRotationInput
struct USQRotatingMovementComponent_AddRotationInput_Params
{
	struct FRotator                                    InRotationInput;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQRoleListUnit.SelfTick
struct USQRoleListUnit_SelfTick_Params
{
};

// Function Squad.SQRoleListUnit.InitWidget
struct USQRoleListUnit_InitWidget_Params
{
};

// Function Squad.SQRoleListGroup.InitWidget
struct USQRoleListGroup_InitWidget_Params
{
};

// Function Squad.SQRoleListGroup.GroupAvailabilityText
struct USQRoleListGroup_GroupAvailabilityText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQRoleList.InitWidget
struct USQRoleList_InitWidget_Params
{
};

// Function Squad.SQRoleList.DoTick
struct USQRoleList_DoTick_Params
{
};

// Function Squad.SQRoleList.DisableAllRoleTicks
struct USQRoleList_DisableAllRoleTicks_Params
{
};

// Function Squad.SQRepairEquipable.OnRep_RepairedTarget
struct ASQRepairEquipable_OnRep_RepairedTarget_Params
{
	class ASQVehicle*                                  PreviousRepairedTarget;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRepairTool.ServerStopRepairing
struct ASQRepairTool_ServerStopRepairing_Params
{
};

// Function Squad.SQRepairTool.ServerStartRepairing
struct ASQRepairTool_ServerStartRepairing_Params
{
	class ASQVehicle*                                  RepairedVehicle;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.UnbindEventToAmmoUpdated
struct USQRearmSource_UnbindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.GetRearmType
struct USQRearmSource_GetRearmType_Params
{
	ESQRearmType                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.GetRearmSuccessString
struct USQRearmSource_GetRearmSuccessString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.GetRearmNoAmmoString
struct USQRearmSource_GetRearmNoAmmoString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.GetAmmo
struct USQRearmSource_GetAmmo_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.ConsumeAmmo
struct USQRearmSource_ConsumeAmmo_Params
{
	float                                              AmmoRequired;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.CanRearmWeapon
struct USQRearmSource_CanRearmWeapon_Params
{
	class ASQEquipableItem*                            Weapon;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.CanRearmPawn
struct USQRearmSource_CanRearmPawn_Params
{
	class APawn*                                       Rearmer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRearmSource.BindEventToAmmoUpdated
struct USQRearmSource_BindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer.OnRep_RandomSeed
struct ASQRandomizer_OnRep_RandomSeed_Params
{
};

// Function Squad.SQRandomizer.BPRandRange
struct ASQRandomizer_BPRandRange_Params
{
	int                                                Min;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer.BPRandHSVColor
struct ASQRandomizer_BPRandHSVColor_Params
{
	struct FLinearColor                                BaseColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeHue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHue;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHue;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeSaturation;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSaturation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSaturation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeValue;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeAlpha;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer.BPRandColor
struct ASQRandomizer_BPRandColor_Params
{
	struct FLinearColor                                BaseColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeRed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeGreen;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeBlue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeAlpha;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer.BPFRandRange
struct ASQRandomizer_BPFRandRange_Params
{
	float                                              Min;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer.BPBeginSeededPlay
struct ASQRandomizer_BPBeginSeededPlay_Params
{
};

// Function Squad.SQRandomizer_StaticMesh.SetMesh
struct ASQRandomizer_StaticMesh_SetMesh_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRandomizer_SceneComponent.ShowRandomComponent
struct ASQRandomizer_SceneComponent_ShowRandomComponent_Params
{
};

// Function Squad.SQRandomizer_SceneComponent.DisableAllComponents
struct ASQRandomizer_SceneComponent_DisableAllComponents_Params
{
};

// Function Squad.SQRadialButton.UpdateRadialAngle
struct USQRadialButton_UpdateRadialAngle_Params
{
	float                                              UpdatedAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQRadialButton.OnHoverEnd
struct USQRadialButton_OnHoverEnd_Params
{
};

// Function Squad.SQRadialButton.OnHoverBegin
struct USQRadialButton_OnHoverBegin_Params
{
};

// Function Squad.SQRadialIconButton.UpdateOuterRimImage
struct USQRadialIconButton_UpdateOuterRimImage_Params
{
};

// Function Squad.SQRadialIconButton.UpdateInnerHoverImage
struct USQRadialIconButton_UpdateInnerHoverImage_Params
{
};

// Function Squad.SQRadialIconButton.UpdateIconImage
struct USQRadialIconButton_UpdateIconImage_Params
{
};

// Function Squad.SQRadialRoleIconButton.UpdateLimit
struct USQRadialRoleIconButton_UpdateLimit_Params
{
};

// Function Squad.SQRadialIconToggleButton.Toggle
struct USQRadialIconToggleButton_Toggle_Params
{
};

// Function Squad.SQRadialIconToggleButton.OnToggleChanged
struct USQRadialIconToggleButton_OnToggleChanged_Params
{
};

// Function Squad.SQRadialDeployableButton.UpdateLimitText
struct USQRadialDeployableButton_UpdateLimitText_Params
{
};

// Function Squad.SQRadialDeployableButton.UpdateDeployableLimit
struct USQRadialDeployableButton_UpdateDeployableLimit_Params
{
};

// Function Squad.SQProtectionZone.OnCompExit
struct ASQProtectionZone_OnCompExit_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProtectionZone.OnCompBeginOverlap
struct ASQProtectionZone_OnCompBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQProtectionZone.CheckOverlap
struct ASQProtectionZone_CheckOverlap_Params
{
};

// Function Squad.SQProjectileSpawnerComponent.StopFiring
struct USQProjectileSpawnerComponent_StopFiring_Params
{
};

// Function Squad.SQProjectileSpawnerComponent.StartFiring
struct USQProjectileSpawnerComponent_StartFiring_Params
{
};

// Function Squad.SQProjectileSpawnerComponent.OnRep_IsFiring
struct USQProjectileSpawnerComponent_OnRep_IsFiring_Params
{
	bool                                               OldValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectileSpawnerComponent.OnProjectileImpact
struct USQProjectileSpawnerComponent_OnProjectileImpact_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQProjectileSpawnerComponent.OnFireEvent__DelegateSignature
struct USQProjectileSpawnerComponent_OnFireEvent__DelegateSignature_Params
{
};

// Function Squad.SQProjectileMovement.SetFlightToPosition
struct USQProjectileMovement_SetFlightToPosition_Params
{
	struct FVector                                     LookatPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.UpdateContextVoiceSettings
struct ASQPlayerState_UpdateContextVoiceSettings_Params
{
	class ASQSquadState*                               Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetTeamWorkScore
struct ASQPlayerState_SetTeamWorkScore_Params
{
	float                                              InTeamWorkScore;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetTeamState
struct ASQPlayerState_SetTeamState_Params
{
	class ASQTeamState*                                NewTeamState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetSupporterPatch
struct ASQPlayerState_SetSupporterPatch_Params
{
	class UTexture*                                    InSupporterPatch;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetSquadState
struct ASQPlayerState_SetSquadState_Params
{
	class ASQSquadState*                               NewSquadState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetSoldier
struct ASQPlayerState_SetSoldier_Params
{
	class ASQSoldier*                                  InSoldier;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetRevivedPoints
struct ASQPlayerState_SetRevivedPoints_Params
{
	float                                              InRevivedPoints;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetPlayerNamePrefix
struct ASQPlayerState_SetPlayerNamePrefix_Params
{
	struct FString                                     NewPlayerNamePrefix;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetObjectiveScore
struct ASQPlayerState_SetObjectiveScore_Params
{
	float                                              InObjectiveScore;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetNumWounds
struct ASQPlayerState_SetNumWounds_Params
{
	int                                                InWounds;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetNumWounded
struct ASQPlayerState_SetNumWounded_Params
{
	int                                                InWounded;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetNumTeamKills
struct ASQPlayerState_SetNumTeamKills_Params
{
	int                                                InNumTeamkills;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetNumKills
struct ASQPlayerState_SetNumKills_Params
{
	int                                                InNumKill;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetNumDeaths
struct ASQPlayerState_SetNumDeaths_Params
{
	int                                                InNumDeaths;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetLives
struct ASQPlayerState_SetLives_Params
{
	int                                                InLives;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetIsQA
struct ASQPlayerState_SetIsQA_Params
{
	bool                                               bInIsQA;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetIsMember
struct ASQPlayerState_SetIsMember_Params
{
	bool                                               bInIsMember;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetIsDev
struct ASQPlayerState_SetIsDev_Params
{
	bool                                               bInIsDev;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetIsAdmin
struct ASQPlayerState_SetIsAdmin_Params
{
	bool                                               bInIsAdmin;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetHealPoints
struct ASQPlayerState_SetHealPoints_Params
{
	float                                              InHealPoints;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetDeployRoleAvaliable
struct ASQPlayerState_SetDeployRoleAvaliable_Params
{
	bool                                               InDeployRoleAvaliable;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetDeployRole
struct ASQPlayerState_SetDeployRole_Params
{
	class USQRoleSettings*                             InDeployRole;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetCurrentSeat
struct ASQPlayerState_SetCurrentSeat_Params
{
	class USQVehicleSeatComponent*                     InCurrentSeat;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetCurrentRole
struct ASQPlayerState_SetCurrentRole_Params
{
	class USQRoleSettings*                             InCurrentRole;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetCurrentPawn
struct ASQPlayerState_SetCurrentPawn_Params
{
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.SetClanPatch
struct ASQPlayerState_SetClanPatch_Params
{
	class UTexture*                                    InClanPatch;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ServerSetPlayerNamePrefix
struct ASQPlayerState_ServerSetPlayerNamePrefix_Params
{
	struct FString                                     NewPlayerNamePrefix;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ServerSendSerializedInventoryItems
struct ASQPlayerState_ServerSendSerializedInventoryItems_Params
{
	TArray<unsigned char>                              SerializedData;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        ActiveClanMemberItems;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ServerRequestTeamChange
struct ASQPlayerState_ServerRequestTeamChange_Params
{
	int                                                NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ServerOnImpact
struct ASQPlayerState_ServerOnImpact_Params
{
	uint64_t                                           ProjectileId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ScorePointsDelayed
struct ASQPlayerState_ScorePointsDelayed_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.ScorePoints
struct ASQPlayerState_ScorePoints_Params
{
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.RemovedPlacedDeployableItemAt
struct ASQPlayerState_RemovedPlacedDeployableItemAt_Params
{
	int                                                Index;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.OnRep_TeamState
struct ASQPlayerState_OnRep_TeamState_Params
{
};

// Function Squad.SQPlayerState.OnRep_SquadState
struct ASQPlayerState_OnRep_SquadState_Params
{
	class ASQSquadState*                               OldSquadState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.OnRep_PlayerNamePrefix
struct ASQPlayerState_OnRep_PlayerNamePrefix_Params
{
	struct FString                                     OldPlayerNamePrefix;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.OnRep_FireTeamPosition
struct ASQPlayerState_OnRep_FireTeamPosition_Params
{
};

// Function Squad.SQPlayerState.OnRep_FireTeamIndex
struct ASQPlayerState_OnRep_FireTeamIndex_Params
{
};

// Function Squad.SQPlayerState.OnRep_DeployRole
struct ASQPlayerState_OnRep_DeployRole_Params
{
};

// Function Squad.SQPlayerState.OnRep_CurrentSeat
struct ASQPlayerState_OnRep_CurrentSeat_Params
{
	class USQVehicleSeatComponent*                     LastSeat;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.OnRep_CurrentRole
struct ASQPlayerState_OnRep_CurrentRole_Params
{
	class USQRoleSettings*                             OldPlayerCurrentRole;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.OnRep_CurrentPawn
struct ASQPlayerState_OnRep_CurrentPawn_Params
{
};

// Function Squad.SQPlayerState.MulticastOnImpact
struct ASQPlayerState_MulticastOnImpact_Params
{
	uint64_t                                           ProjectileId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsSquadLeader
struct ASQPlayerState_IsSquadLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsQA
struct ASQPlayerState_IsQA_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsMember
struct ASQPlayerState_IsMember_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsFireTeamLeader
struct ASQPlayerState_IsFireTeamLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsDev
struct ASQPlayerState_IsDev_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsCommander
struct ASQPlayerState_IsCommander_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.IsAdmin
struct ASQPlayerState_IsAdmin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetUniqueNetID
struct ASQPlayerState_GetUniqueNetID_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetTeamWorkScore
struct ASQPlayerState_GetTeamWorkScore_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetTeamState
struct ASQPlayerState_GetTeamState_Params
{
	class ASQTeamState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetSupporterPatch
struct ASQPlayerState_GetSupporterPatch_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetSquadState
struct ASQPlayerState_GetSquadState_Params
{
	class ASQSquadState*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetSoldier
struct ASQPlayerState_GetSoldier_Params
{
	class ASQSoldier*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetShortPlayerName
struct ASQPlayerState_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetRevivedPoints
struct ASQPlayerState_GetRevivedPoints_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetPlayerOnlineID
struct ASQPlayerState_GetPlayerOnlineID_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetPlayerNamePrefix
struct ASQPlayerState_GetPlayerNamePrefix_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetPlacedDeployableItemsCount
struct ASQPlayerState_GetPlacedDeployableItemsCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetPlacedDeployableAt
struct ASQPlayerState_GetPlacedDeployableAt_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQDeployable*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetObjectiveScore
struct ASQPlayerState_GetObjectiveScore_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetNumWounds
struct ASQPlayerState_GetNumWounds_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetNumWounded
struct ASQPlayerState_GetNumWounded_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetNumTeamKills
struct ASQPlayerState_GetNumTeamKills_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetNumKills
struct ASQPlayerState_GetNumKills_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetNumDeaths
struct ASQPlayerState_GetNumDeaths_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetLives
struct ASQPlayerState_GetLives_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetHealPoints
struct ASQPlayerState_GetHealPoints_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetFullPlayerName
struct ASQPlayerState_GetFullPlayerName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetFireTeamPosition
struct ASQPlayerState_GetFireTeamPosition_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetFireTeamIndex
struct ASQPlayerState_GetFireTeamIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetDeployRoleAvaliable
struct ASQPlayerState_GetDeployRoleAvaliable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetDeployRole
struct ASQPlayerState_GetDeployRole_Params
{
	class USQRoleSettings*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetCurrentVehicle
struct ASQPlayerState_GetCurrentVehicle_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetCurrentSeatPawn
struct ASQPlayerState_GetCurrentSeatPawn_Params
{
	class ASQVehicleSeat*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetCurrentSeat
struct ASQPlayerState_GetCurrentSeat_Params
{
	class USQVehicleSeatComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetCurrentRole
struct ASQPlayerState_GetCurrentRole_Params
{
	class USQRoleSettings*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetCurrentPawn
struct ASQPlayerState_GetCurrentPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.GetClanPatch
struct ASQPlayerState_GetClanPatch_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.BPOnRep_PlayerNamePrefix
struct ASQPlayerState_BPOnRep_PlayerNamePrefix_Params
{
	struct FString                                     OldPlayerNamePrefix;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPlayerNamePrefix;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerState.AddPlacedDeployableItem
struct ASQPlayerState_AddPlacedDeployableItem_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerCameraManager.ModifyNearClipPlane
struct ASQPlayerCameraManager_ModifyNearClipPlane_Params
{
	float                                              NearClipPlaneDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerCameraManager.GetNearClipPlane
struct ASQPlayerCameraManager_GetNearClipPlane_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerCameraManager.GetLastNearClipPlane
struct ASQPlayerCameraManager_GetLastNearClipPlane_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerCameraManager.CalcScreenCenterRay
struct ASQPlayerCameraManager_CalcScreenCenterRay_Params
{
	float                                              Range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicsVolume.BPActorLeavingVolume
struct ASQPhysicsVolume_BPActorLeavingVolume_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicsVolume.BPActorEnteredVolume
struct ASQPhysicsVolume_BPActorEnteredVolume_Params
{
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterialEffects.GetThrowableEffect
struct USQPhysicalMaterialEffects_GetThrowableEffect_Params
{
	class USQPhysicalMaterial*                         Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQProjectileImpactEffect                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterialEffects.GetImpactEffect
struct USQPhysicalMaterialEffects_GetImpactEffect_Params
{
	class USQPhysicalMaterial*                         Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQProjectileImpactEffect                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterialEffects.GetExplosionEffect
struct USQPhysicalMaterialEffects_GetExplosionEffect_Params
{
	class USQPhysicalMaterial*                         Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQExplosionEffect                          ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterialEffects.GetEffect
struct USQPhysicalMaterialEffects_GetEffect_Params
{
	class USQPhysicalMaterial*                         Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQEffectsSet                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterialEffects.GetBlastEffect
struct USQPhysicalMaterialEffects_GetBlastEffect_Params
{
	class USQPhysicalMaterial*                         Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQProjectileImpactEffect                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterial.GetShockwave
struct USQPhysicalMaterial_GetShockwave_Params
{
	struct FSQProjectileImpactEffect                   InImpactEffect;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USQShockwave*                                DefaultShockwave;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQShockwave*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterial.GetParticle
struct USQPhysicalMaterial_GetParticle_Params
{
	struct FSQProjectileImpactEffect                   InImpactEffect;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DefaultParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPhysicalMaterial.GetDecal
struct USQPhysicalMaterial_GetDecal_Params
{
	struct FSQProjectileImpactEffect                   InImpactEffect;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DefaultDecal;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPainCausingVolumeComponent.OnBeginOverlap
struct USQPainCausingVolumeComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapLattice.WorldLocationToDrawLocation
struct USQMapLattice_WorldLocationToDrawLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQMapWidgetBase*                            MapWidget;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapLattice.DrawWidget
struct USQMapLattice_DrawWidget_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQOnlineHelpers.IsUserInSession
struct USQOnlineHelpers_IsUserInSession_Params
{
	struct FSQBlueprintFriend                          User;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     Session;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQOnlineHelpers.GetUsersSessionIndex
struct USQOnlineHelpers_GetUsersSessionIndex_Params
{
	struct FSQBlueprintFriend                          User;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQOnlineHelpers.GetUsersInSession
struct USQOnlineHelpers_GetUsersInSession_Params
{
	TArray<struct FSQBlueprintFriend>                  Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     Session;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSQBlueprintFriend>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamActor.SetTeam
struct ASQTeamActor_SetTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeamActor.OnRep_Team
struct ASQTeamActor_OnRep_Team_Params
{
};

// Function Squad.SQTeamActor.GetTeam
struct ASQTeamActor_GetTeam_Params
{
	ESQTeam                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.SetWaitingToBeShown
struct ASQObjective_SetWaitingToBeShown_Params
{
	bool                                               bInIsWaitingToBeShown;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.SetObjectiveMet
struct ASQObjective_SetObjectiveMet_Params
{
	bool                                               bObjectiveMet;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.SetKnownToEveryone
struct ASQObjective_SetKnownToEveryone_Params
{
	bool                                               bInIsKnownToEveryone;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.OnRep_HasObjectiveBeenMet
struct ASQObjective_OnRep_HasObjectiveBeenMet_Params
{
};

// Function Squad.SQObjective.OnMet
struct ASQObjective_OnMet_Params
{
};

// Function Squad.SQObjective.IsWaitingToBeShown
struct ASQObjective_IsWaitingToBeShown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.IsKnownToEveryone
struct ASQObjective_IsKnownToEveryone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.HasObjectiveBeenMet
struct ASQObjective_HasObjectiveBeenMet_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.GetObjectiveShownMessage
struct ASQObjective_GetObjectiveShownMessage_Params
{
	class ASQGameRuleSet*                              RuleSet;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.GetObjectiveMetMessage
struct ASQObjective_GetObjectiveMetMessage_Params
{
	class ASQGameRuleSet*                              RuleSet;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.GetObjectiveMetByTeam
struct ASQObjective_GetObjectiveMetByTeam_Params
{
	ESQTeam                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective.GetLocationForTeam
struct ASQObjective_GetLocationForTeam_Params
{
	ESQTeam                                            InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective_Destroyable.OnRep_HasBeenDestroyed
struct ASQObjective_Destroyable_OnRep_HasBeenDestroyed_Params
{
};

// Function Squad.SQObjective_Destroyable.ObjectiveDestroyed
struct ASQObjective_Destroyable_ObjectiveDestroyed_Params
{
	float                                              damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective_Destroyable.MulticastPlayDamageEffects
struct ASQObjective_Destroyable_MulticastPlayDamageEffects_Params
{
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjective_Destroyable.BPClientObjectiveDestroyed
struct ASQObjective_Destroyable_BPClientObjectiveDestroyed_Params
{
};

// Function Squad.SQNotificationData.GetNotificationLayout
struct USQNotificationData_GetNotificationLayout_Params
{
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQNotificationLayout                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQNetworkPollingComponent.GetRollingPacketLossOutgoing
struct USQNetworkPollingComponent_GetRollingPacketLossOutgoing_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQNetworkPollingComponent.GetRollingPacketLossIncoming
struct USQNetworkPollingComponent_GetRollingPacketLossIncoming_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentNetworker.Server_ReplicateMoveToServer
struct USQMovementComponentNetworker_Server_ReplicateMoveToServer_Params
{
	TArray<struct FMovePacket>                         Payload;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentNetworker.Client_ReplicateClientAdjustment
struct USQMovementComponentNetworker_Client_ReplicateClientAdjustment_Params
{
	TArray<struct FAdjustPositionAndRotationPacket>    Payload;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentManager.UnRegisterComponent
struct USQMovementComponentManager_UnRegisterComponent_Params
{
	class USQMovementComponentBase*                    MovementComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementComponentManager.RegisterComponent
struct USQMovementComponentManager_RegisterComponent_Params
{
	class USQMovementComponentBase*                    MovementComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementAdjustmentComponent.OnEndOverlap
struct USQMovementAdjustmentComponent_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMovementAdjustmentComponent.OnBeginOverlap
struct USQMovementAdjustmentComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleViewWidget.Unzoom
struct USQVehicleViewWidget_Unzoom_Params
{
};

// Function Squad.SQVehicleViewWidget.InitWidget
struct USQVehicleViewWidget_InitWidget_Params
{
};

// Function Squad.SQVehicleViewWidget.IncreaseZoomLevel
struct USQVehicleViewWidget_IncreaseZoomLevel_Params
{
};

// Function Squad.SQVehicleViewWidget.DecreaseZoomLevel
struct USQVehicleViewWidget_DecreaseZoomLevel_Params
{
};

// Function Squad.SQProjectile.PlayProjectileSound
struct ASQProjectile_PlayProjectileSound_Params
{
	class USoundCue*                                   Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.PlayExplosionEffect
struct ASQProjectile_PlayExplosionEffect_Params
{
	struct FHitResult                                  ImpactHit;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.OnImpact
struct ASQProjectile_OnImpact_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.GetWeapon
struct ASQProjectile_GetWeapon_Params
{
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.GetDamage
struct ASQProjectile_GetDamage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.DisableAndDestroy
struct ASQProjectile_DisableAndDestroy_Params
{
};

// Function Squad.SQProjectile.BPApplyExplosiveDamage
struct ASQProjectile_BPApplyExplosiveDamage_Params
{
	struct FHitResult                                  LastHitResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQProjectile.BlueprintOnImpact
struct ASQProjectile_BlueprintOnImpact_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQMortarProjectile.SpawnArtilleryProjectile
struct ASQMortarProjectile_SpawnArtilleryProjectile_Params
{
	class UClass*                                      ProjectileClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatorController;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ProjectileOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InitialVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreatedOnServer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMortarProjectile.CreateSmoke
struct ASQMortarProjectile_CreateSmoke_Params
{
};

// Function Squad.SQMortarProjectile.BPOnNearGroundDistanceReached
struct ASQMortarProjectile_BPOnNearGroundDistanceReached_Params
{
};

// Function Squad.SQMortarProjectile.BPOnBeginDescending
struct ASQMortarProjectile_BPOnBeginDescending_Params
{
};

// Function Squad.SQHealingEquipableItem.OnRep_HealedTarget
struct ASQHealingEquipableItem_OnRep_HealedTarget_Params
{
	class ASQSoldier*                                  PreviousHealedTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMedicBag.IncreaseHealth
struct ASQMedicBag_IncreaseHealth_Params
{
};

// Function Squad.SQCoreStateWidget.OnSelectionStateChanged
struct USQCoreStateWidget_OnSelectionStateChanged_Params
{
};

// Function Squad.SQCoreStateWidget.OnScaleChanged
struct USQCoreStateWidget_OnScaleChanged_Params
{
	float                                              UniformScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateWidget.AnnounceSelectionState
struct USQCoreStateWidget_AnnounceSelectionState_Params
{
	ESQSelectionState                                  InSelectionState;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidget.OnTintValueChanged
struct USQMapWidget_OnTintValueChanged_Params
{
};

// Function Squad.SQMapWidget.OnAngleChanged
struct USQMapWidget_OnAngleChanged_Params
{
};

// Function Squad.SQMapWidget.GetTintValue
struct USQMapWidget_GetTintValue_Params
{
	TEnumAsByte<ESQMapWidgetTint>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidget.GetTintColor
struct USQMapWidget_GetTintColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetPawn.OnIsOwnedChanged
struct USQMapWidgetPawn_OnIsOwnedChanged_Params
{
};

// Function Squad.SQMapWidgetPawn.OnIsOwnedBySelfChanged
struct USQMapWidgetPawn_OnIsOwnedBySelfChanged_Params
{
};

// Function Squad.SQMapWidgetPawn.OnIsInSelfTeam
struct USQMapWidgetPawn_OnIsInSelfTeam_Params
{
};

// Function Squad.SQMapWidgetPawn.OnIsInSelfSquad
struct USQMapWidgetPawn_OnIsInSelfSquad_Params
{
};

// Function Squad.SQMapWidgetPawn.OnFireTeamIndexChanged
struct USQMapWidgetPawn_OnFireTeamIndexChanged_Params
{
};

// Function Squad.SQMapWidgetPawn.OnCameraRotationYawChanged
struct USQMapWidgetPawn_OnCameraRotationYawChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnSquadIdChanged
struct USQMapWidgetSoldier_OnSquadIdChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnSoldierLocationChanged
struct USQMapWidgetSoldier_OnSoldierLocationChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnSoldierInfoChanged
struct USQMapWidgetSoldier_OnSoldierInfoChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnShowIncapChanged
struct USQMapWidgetSoldier_OnShowIncapChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnShowBleedingChanged
struct USQMapWidgetSoldier_OnShowBleedingChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnPlayerChangedRole
struct USQMapWidgetSoldier_OnPlayerChangedRole_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetSoldier.OnLeaderStateChanged
struct USQMapWidgetSoldier_OnLeaderStateChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsWoundedChanged
struct USQMapWidgetSoldier_OnIsWoundedChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsWithinCanSelfSeeHealthSatusRangeChanged
struct USQMapWidgetSoldier_OnIsWithinCanSelfSeeHealthSatusRangeChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsUsingFreeLookChanged
struct USQMapWidgetSoldier_OnIsUsingFreeLookChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsMedicChanged
struct USQMapWidgetSoldier_OnIsMedicChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsInVehicleChanged
struct USQMapWidgetSoldier_OnIsInVehicleChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsBleedingChanged
struct USQMapWidgetSoldier_OnIsBleedingChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnIsAliveChanged
struct USQMapWidgetSoldier_OnIsAliveChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnHealthStatusRangeChanged
struct USQMapWidgetSoldier_OnHealthStatusRangeChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnFireteamIdChanged
struct USQMapWidgetSoldier_OnFireteamIdChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnCurrentRoleChanged
struct USQMapWidgetSoldier_OnCurrentRoleChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.OnCanSelfSeeHealthStatusChanged
struct USQMapWidgetSoldier_OnCanSelfSeeHealthStatusChanged_Params
{
};

// Function Squad.SQMapWidgetSoldier.GetShowIncap
struct USQMapWidgetSoldier_GetShowIncap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetSoldier.GetShowBleeding
struct USQMapWidgetSoldier_GetShowBleeding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetDeployable.OnBuildStateChanged
struct USQMapWidgetDeployable_OnBuildStateChanged_Params
{
};

// Function Squad.SQMapWidgetSpawnPoint.OnSpawnPointTypeChanged
struct USQMapWidgetSpawnPoint_OnSpawnPointTypeChanged_Params
{
};

// Function Squad.SQMapWidgetSpawnPoint.OnSpawningEnabledChanged
struct USQMapWidgetSpawnPoint_OnSpawningEnabledChanged_Params
{
};

// Function Squad.SQMapWidgetSpawnPoint.OnSiegedChanged
struct USQMapWidgetSpawnPoint_OnSiegedChanged_Params
{
};

// Function Squad.SQMapWidgetSpawnPoint.OnIsSelectedChanged
struct USQMapWidgetSpawnPoint_OnIsSelectedChanged_Params
{
};

// Function Squad.SQMapWidgetRallyPoint.OnSquadIdChanged
struct USQMapWidgetRallyPoint_OnSquadIdChanged_Params
{
};

// Function Squad.SQMapWidgetRallyPoint.OnNumberOfSpawnsChanged
struct USQMapWidgetRallyPoint_OnNumberOfSpawnsChanged_Params
{
};

// Function Squad.SQMapWidgetRallyPoint.OnIsInSelfSquadChanged
struct USQMapWidgetRallyPoint_OnIsInSelfSquadChanged_Params
{
};

// Function Squad.SQMapWidgetRallyPoint.OnEventSquadStateChanged
struct USQMapWidgetRallyPoint_OnEventSquadStateChanged_Params
{
	class ASQSquadState*                               NewSquad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSquadState*                               OldSquad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetMapMarker.OnTintChanged
struct USQMapWidgetMapMarker_OnTintChanged_Params
{
};

// Function Squad.SQMapWidgetMapMarker.OnTextureChanged
struct USQMapWidgetMapMarker_OnTextureChanged_Params
{
};

// Function Squad.SQMapWidgetMapMarker.OnSquadIdChanged
struct USQMapWidgetMapMarker_OnSquadIdChanged_Params
{
};

// Function Squad.SQMapWidgetMapMarker.OnFireteamIdChanged
struct USQMapWidgetMapMarker_OnFireteamIdChanged_Params
{
};

// Function Squad.SQMapWidgetMapMarkerSelectable.OnRightClicked
struct USQMapWidgetMapMarkerSelectable_OnRightClicked_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnSiegedChanged
struct USQMapWidgetForwardBase_OnSiegedChanged_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnExclusionRadiusChanged
struct USQMapWidgetForwardBase_OnExclusionRadiusChanged_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnConstructionRadiusChanged
struct USQMapWidgetForwardBase_OnConstructionRadiusChanged_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnConstructionPointsChanged
struct USQMapWidgetForwardBase_OnConstructionPointsChanged_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnCanSpawnChanged
struct USQMapWidgetForwardBase_OnCanSpawnChanged_Params
{
};

// Function Squad.SQMapWidgetForwardBase.OnAmmoPointsChanged
struct USQMapWidgetForwardBase_OnAmmoPointsChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.UpdateHoldsCommander
struct USQMapWidgetVehicle_UpdateHoldsCommander_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnVehicleOccupantInfoChanged
struct USQMapWidgetVehicle_OnVehicleOccupantInfoChanged_Params
{
	int                                                AtIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetVehicle.OnStaticUIDataChanged
struct USQMapWidgetVehicle_OnStaticUIDataChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnSelfInVehicleSeatChanged
struct USQMapWidgetVehicle_OnSelfInVehicleSeatChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnIsInClaimingSquadChanged
struct USQMapWidgetVehicle_OnIsInClaimingSquadChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnHoldsSquadLeaderChanged
struct USQMapWidgetVehicle_OnHoldsSquadLeaderChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnHoldsOccupantChanged
struct USQMapWidgetVehicle_OnHoldsOccupantChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnHoldsCommanderChanged
struct USQMapWidgetVehicle_OnHoldsCommanderChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.OnClaimingSquadIDChanged
struct USQMapWidgetVehicle_OnClaimingSquadIDChanged_Params
{
};

// Function Squad.SQMapWidgetVehicle.IsSelfInVehicle
struct USQMapWidgetVehicle_IsSelfInVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetEmplacement.OnTeamIDChanged
struct USQMapWidgetEmplacement_OnTeamIDChanged_Params
{
};

// Function Squad.SQMapWidgetDeployableExplosive.OnExplosiveTypeChanged
struct USQMapWidgetDeployableExplosive_OnExplosiveTypeChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnUncappableChanged
struct USQMapWidgetCaptureZone_OnUncappableChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnOwningTeamChanged
struct USQMapWidgetCaptureZone_OnOwningTeamChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnFlagTextureChanged
struct USQMapWidgetCaptureZone_OnFlagTextureChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnFlagNameChanged
struct USQMapWidgetCaptureZone_OnFlagNameChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnContestingChanged
struct USQMapWidgetCaptureZone_OnContestingChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnCapturingTeamChanged
struct USQMapWidgetCaptureZone_OnCapturingTeamChanged_Params
{
};

// Function Squad.SQMapWidgetCaptureZone.OnCapturePercentChanged
struct USQMapWidgetCaptureZone_OnCapturePercentChanged_Params
{
};

// Function Squad.SQMapWidgetBase.SetMapBody
struct USQMapWidgetBase_SetMapBody_Params
{
	class UPanelWidget*                                NewMapBody;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.RemoveMarkerWidget
struct USQMapWidgetBase_RemoveMarkerWidget_Params
{
	class USQMapMarkerBase*                            Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.GetWorldBounds
struct USQMapWidgetBase_GetWorldBounds_Params
{
	struct FBox2D                                      ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.GetNumGridLines
struct USQMapWidgetBase_GetNumGridLines_Params
{
	struct FVector2D                                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.GetMapBoundsScale
struct USQMapWidgetBase_GetMapBoundsScale_Params
{
	struct FVector2D                                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.GetMapBody
struct USQMapWidgetBase_GetMapBody_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapWidgetBase.CreateMarkerWidget
struct USQMapWidgetBase_CreateMarkerWidget_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USQMapMarkerBase*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.ShouldMarkerUpdate
struct USQMapIconWidget_ShouldMarkerUpdate_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.IsMarkerVisible
struct USQMapIconWidget_IsMarkerVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.GetSquadColor
struct USQMapIconWidget_GetSquadColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.GetNeutralColor
struct USQMapIconWidget_GetNeutralColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.GetFriendlyColor
struct USQMapIconWidget_GetFriendlyColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapIconWidget.GetEnemyColor
struct USQMapIconWidget_GetEnemyColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapPawnIconWidget.UpdateTeam
struct USQMapPawnIconWidget_UpdateTeam_Params
{
};

// Function Squad.SQMapPawnIconWidget.UpdateIsSl
struct USQMapPawnIconWidget_UpdateIsSl_Params
{
};

// Function Squad.SQMapPawnIconWidget.UpdateIsSelf
struct USQMapPawnIconWidget_UpdateIsSelf_Params
{
};

// Function Squad.SQMapPawnIconWidget.UpdateIsInSameTeam
struct USQMapPawnIconWidget_UpdateIsInSameTeam_Params
{
};

// Function Squad.SQMapPawnIconWidget.UpdateIsInSameSquad
struct USQMapPawnIconWidget_UpdateIsInSameSquad_Params
{
};

// Function Squad.SQMapPawnIconWidget.GetWidgetPlayerState
struct USQMapPawnIconWidget_GetWidgetPlayerState_Params
{
	class ASQPlayerState*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsWithinMedicRange
struct USQMapSoldierIconWidget_UpdateIsWithinMedicRange_Params
{
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsSelfMedic
struct USQMapSoldierIconWidget_UpdateIsSelfMedic_Params
{
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsMedic
struct USQMapSoldierIconWidget_UpdateIsMedic_Params
{
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsInVehicle
struct USQMapSoldierIconWidget_UpdateIsInVehicle_Params
{
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsBleeding
struct USQMapSoldierIconWidget_UpdateIsBleeding_Params
{
};

// Function Squad.SQMapSoldierIconWidget.UpdateIsAlive
struct USQMapSoldierIconWidget_UpdateIsAlive_Params
{
};

// Function Squad.SQMap.ZoomSwitch
struct USQMap_ZoomSwitch_Params
{
};

// Function Squad.SQMap.UpdateTickZoom
struct USQMap_UpdateTickZoom_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapCoords;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateWorldToMapZoom
struct USQMap_TranslateWorldToMapZoom_Params
{
	struct FVector                                     InWorldCoords;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutbIsInRange;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateWorldToMapAnchorsDirect
struct USQMap_TranslateWorldToMapAnchorsDirect_Params
{
	struct FVector                                     InWorldCoords;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateMapToWorldRayTrace
struct USQMap_TranslateMapToWorldRayTrace_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateMapToWorld
struct USQMap_TranslateMapToWorld_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateMapPathBorderClamp
struct USQMap_TranslateMapPathBorderClamp_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutbIsClamped;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateMapCoordsIsInRange
struct USQMap_TranslateMapCoordsIsInRange_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutbIsInRange;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateMapCoords
struct USQMap_TranslateMapCoords_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.TranslateInverseMapCoords
struct USQMap_TranslateInverseMapCoords_Params
{
	struct FVector2D                                   InCoords;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.SetWorldCoords
struct USQMap_SetWorldCoords_Params
{
};

// Function Squad.SQMap.IsSquadLeader
struct USQMap_IsSquadLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.IsInCameraMan
struct USQMap_IsInCameraMan_Params
{
	class ASQPlayerController*                         SQPlayerController;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.IsCursorOverMapPos
struct USQMap_IsCursorOverMapPos_Params
{
	bool                                               OutbIsOverMap;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.GetMapDisplayName
struct USQMap_GetMapDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.GetMajorGridSpacingInCM
struct USQMap_GetMajorGridSpacingInCM_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.GetCursorPos
struct USQMap_GetCursorPos_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.GetCursorNormalizedPos
struct USQMap_GetCursorNormalizedPos_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.GetCurrentTeam
struct USQMap_GetCurrentTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMap.CalculatePathDistanceAndAngle
struct USQMap_CalculatePathDistanceAndAngle_Params
{
	struct FVector2D                                   PointStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PointEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMK2.UpdatePosition
struct USQMapMK2_UpdatePosition_Params
{
	struct FVector2D                                   NewMapCoord;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMK2.UpdateDrawOffsets
struct USQMapMK2_UpdateDrawOffsets_Params
{
};

// Function Squad.SQMapMK2.MapFollowPlayer
struct USQMapMK2_MapFollowPlayer_Params
{
};

// Function Squad.SQMapMK2.MapCalculateOffsets
struct USQMapMK2_MapCalculateOffsets_Params
{
};

// Function Squad.SQMapMarkerManagerComponent.SetRootWidget
struct USQMapMarkerManagerComponent_SetRootWidget_Params
{
	class USQMapWidgetBase*                            NewRootWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.SetRootHUD
struct USQMapMarkerManagerComponent_SetRootHUD_Params
{
	class ASQHUD*                                      NewRootHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.SetMarkerWidgetScale
struct USQMapMarkerManagerComponent_SetMarkerWidgetScale_Params
{
	float                                              ScaleValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.RemoveMapMarker
struct USQMapMarkerManagerComponent_RemoveMapMarker_Params
{
	unsigned char                                      ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasTimedOut;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnSquadLeaderChangedEvent
struct USQMapMarkerManagerComponent_OnSquadLeaderChangedEvent_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnSquadDeletedEvent
struct USQMapMarkerManagerComponent_OnSquadDeletedEvent_Params
{
	int                                                OldSquadId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnMarkerReceived
struct USQMapMarkerManagerComponent_OnMarkerReceived_Params
{
	TArray<int>                                        MapMarkerModifiedIndices;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnMarkerDeleted
struct USQMapMarkerManagerComponent_OnMarkerDeleted_Params
{
	TArray<int>                                        MapMarkerModifiedIndices;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnFireteamLeaderChangedEvent
struct USQMapMarkerManagerComponent_OnFireteamLeaderChangedEvent_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnFireteamDeletedEvent
struct USQMapMarkerManagerComponent_OnFireteamDeletedEvent_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnCommanderPromotedEvent
struct USQMapMarkerManagerComponent_OnCommanderPromotedEvent_Params
{
	class ASQPlayerState*                              NewCommander;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.OnCommanderDemotedEvent
struct USQMapMarkerManagerComponent_OnCommanderDemotedEvent_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.InitializeRelevantMarkers
struct USQMapMarkerManagerComponent_InitializeRelevantMarkers_Params
{
	TArray<int>                                        MapMarkerModifiedIndices;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerManagerComponent.DeleteRelevantMarkers
struct USQMapMarkerManagerComponent_DeleteRelevantMarkers_Params
{
	TArray<int>                                        MapMarkerModifiedIndices;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerInputComponent.ServerRequestRemoveMapMarker
struct USQMapMarkerInputComponent_ServerRequestRemoveMapMarker_Params
{
	unsigned char                                      ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerInputComponent.ServerRequestMapMarker
struct USQMapMarkerInputComponent_ServerRequestMapMarker_Params
{
	struct FSQMapMarkerGameplayData                    MarkerGameplayData;                                        // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerInputComponent.RefreshMarkerWidgets
struct USQMapMarkerInputComponent_RefreshMarkerWidgets_Params
{
};

// Function Squad.SQMapMarkerBase.SetupMapMarker
struct USQMapMarkerBase_SetupMapMarker_Params
{
	class UCanvasPanelSlot*                            PanelSlot;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerBase.OnScaleChanged
struct USQMapMarkerBase_OnScaleChanged_Params
{
	float                                              ScaleValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarkerBase.OnHasFadedChanged
struct USQMapMarkerBase_OnHasFadedChanged_Params
{
};

// Function Squad.SQMapMarkerBase.GetMapMarkerData
struct USQMapMarkerBase_GetMapMarkerData_Params
{
	struct FSQMapMarkerVisualData                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.SetSquad
struct ASQMapMarker_SetSquad_Params
{
	int                                                Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.SetMarkerVisibleTo
struct ASQMapMarker_SetMarkerVisibleTo_Params
{
	ESQMapMarkerVisibleTo                              VisibleTo;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.SetMarkerType
struct ASQMapMarker_SetMarkerType_Params
{
	ESQMapMarkerType                                   MarkerType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.SetFireteamId
struct ASQMapMarker_SetFireteamId_Params
{
	int                                                FireTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.OnRep_Squad
struct ASQMapMarker_OnRep_Squad_Params
{
};

// Function Squad.SQMapMarker.GetSquad
struct ASQMapMarker_GetSquad_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.GetMarkerType
struct ASQMapMarker_GetMarkerType_Params
{
	ESQMapMarkerType                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapMarker.GetFireteamId
struct ASQMapMarker_GetFireteamId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapGrid.InitWidget
struct USQMapGrid_InitWidget_Params
{
};

// Function Squad.SQMapGrid.DrawWidget
struct USQMapGrid_DrawWidget_Params
{
	class USQMapGrid*                                  MapGrid;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapGrid.DrawLegendLine
struct USQMapGrid_DrawLegendLine_Params
{
	class USQMapGrid*                                  MapGrid;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   StepSize;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LegendText;                                                // (ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                              YOffset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapGrid.DrawGridMarkers
struct USQMapGrid_DrawGridMarkers_Params
{
	class USQMapGrid*                                  MapGrid;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StepSize;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GridLinesNeeded;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapGrid.DrawGrid
struct USQMapGrid_DrawGrid_Params
{
	class USQMapGrid*                                  MapGrid;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StepSize;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GridLinesNeeded;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkipNumber;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.WorldToMapVector
struct USQMapConversions_WorldToMapVector_Params
{
	struct FVector2D                                   OutMapVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldVectorZeroBased;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                      WorldBoundsZeroBased;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapBoundsScale;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.WorldToMapLocation
struct USQMapConversions_WorldToMapLocation_Params
{
	struct FVector2D                                   OutMapLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocationZeroBased;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                      WorldBoundsZeroBased;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapBoundsScale;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.WorldToMapGridLocation
struct USQMapConversions_WorldToMapGridLocation_Params
{
	struct FVector2D                                   OutMapGrid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldVectorZeroBased;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                      WorldBoundsZeroBased;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapBoundsScale;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NumGridLines;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.ScreenLocationToMapLocation
struct USQMapConversions_ScreenLocationToMapLocation_Params
{
	struct FVector2D                                   OutMapLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                MapBody;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.MapToMapGridLocation
struct USQMapConversions_MapToMapGridLocation_Params
{
	struct FVector2D                                   OutMapGrid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NumGridLines;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.MapLocationToScreenLocation
struct USQMapConversions_MapLocationToScreenLocation_Params
{
	struct FVector2D                                   OutScreenLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                MapBody;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapConversions.MapLocationToGridCoordinateString
struct USQMapConversions_MapLocationToGridCoordinateString_Params
{
	struct FVector2D                                   MapLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NumGridLines;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.UnregisterListener
struct ASQBoundary_UnregisterListener_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.RegisterListener
struct ASQBoundary_RegisterListener_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.OnListenerExitBoundary
struct ASQBoundary_OnListenerExitBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.OnListenerEnterBoundary
struct ASQBoundary_OnListenerEnterBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.IsInside
struct ASQBoundary_IsInside_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundary.GenerateBoundaryMask
struct ASQBoundary_GenerateBoundaryMask_Params
{
};

// Function Squad.SQBoundary.FindListenerData
struct ASQBoundary_FindListenerData_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQBoundaryListenerData                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapBoundary.FindKillTime
struct ASQMapBoundary_FindKillTime_Params
{
	class UClass*                                      Class;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMapBoundary.CalcKillTimestamp
struct ASQMapBoundary_CalcKillTimestamp_Params
{
	class UClass*                                      Class;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQMagazineWidget.InitWidget
struct USQMagazineWidget_InitWidget_Params
{
};

// Function Squad.SQMagazineGroupWidget.InitWidget
struct USQMagazineGroupWidget_InitWidget_Params
{
};

// Function Squad.SQLoginCallbackProxy.Login
struct USQLoginCallbackProxy_Login_Params
{
	class UObject*                                     InWorldContextObject;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           InPlayerController;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InLoginName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InPassword;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQLoginCallbackProxy*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQLoginCallbackProxy.GetLoginResult
struct USQLoginCallbackProxy_GetLoginResult_Params
{
	struct FSQBlueprintLoginResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQLockButtonWidget.OnPressed
struct USQLockButtonWidget_OnPressed_Params
{
};

// Function Squad.SQLicensedServerManager.IsServerPromoted
struct USQLicensedServerManager_IsServerPromoted_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQLastingEffect.OnTriggerLastingEffectTimerExpired
struct ASQLastingEffect_OnTriggerLastingEffectTimerExpired_Params
{
};

// Function Squad.SQLastingEffect.OnTriggerLastingEffectEvent
struct ASQLastingEffect_OnTriggerLastingEffectEvent_Params
{
};

// Function Squad.SQLastingEffect.OnDestroyedEvent
struct ASQLastingEffect_OnDestroyedEvent_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQLastingEffect.OnBeginPlayTimerExpired
struct ASQLastingEffect_OnBeginPlayTimerExpired_Params
{
};

// Function Squad.SQLastingEffect.OnActorHitEvent
struct ASQLastingEffect_OnActorHitEvent_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQLastingEffect.Deactivate
struct ASQLastingEffect_Deactivate_Params
{
};

// Function Squad.SQLastingEffect.Activate
struct ASQLastingEffect_Activate_Params
{
};

// Function Squad.SQKickBanComponent.KickPlayer
struct USQKickBanComponent_KickPlayer_Params
{
	class ASQPlayerController*                         ToKickPC;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KickReason;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQKickBanComponent.BanPlayer
struct USQKickBanComponent_BanPlayer_Params
{
	class ASQPlayerController*                         ToBanPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BanReason;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQJoinSessionCallbackProxy.JoinSession
struct USQJoinSessionCallbackProxy_JoinSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USQJoinSessionCallbackProxy*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQJoinSessionCallbackProxy.IsServerModded
struct USQJoinSessionCallbackProxy_IsServerModded_Params
{
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsWhitelisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQJoinBeaconClient.RequestClientJoin
struct ASQJoinBeaconClient_RequestClientJoin_Params
{
};

// Function Squad.SQJoinBeaconClient.LeaveQueue
struct ASQJoinBeaconClient_LeaveQueue_Params
{
};

// Function Squad.SQJoinBeaconClient.InitConnection
struct ASQJoinBeaconClient_InitConnection_Params
{
	struct FString                                     ServerURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQJoinBeaconClient.HostTravelRequestReconnect
struct ASQJoinBeaconClient_HostTravelRequestReconnect_Params
{
	int                                                TimeLeftInMatch;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondsPerRetry;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQInventoryWidget.UpdateInventoryWidgets
struct USQInventoryWidget_UpdateInventoryWidgets_Params
{
};

// Function Squad.SQInventoryWidget.UpdateElements
struct USQInventoryWidget_UpdateElements_Params
{
};

// Function Squad.SQInventoryWidget.SetupInventoryWidgets
struct USQInventoryWidget_SetupInventoryWidgets_Params
{
};

// Function Squad.SQInventoryWidget.InitWidget
struct USQInventoryWidget_InitWidget_Params
{
};

// Function Squad.SQInventoryItemWidget.UpdateState
struct USQInventoryItemWidget_UpdateState_Params
{
};

// Function Squad.SQInventoryItemWidget.InitWidget
struct USQInventoryItemWidget_InitWidget_Params
{
};

// Function Squad.SQInventoryGroupWidget.UpdateState
struct USQInventoryGroupWidget_UpdateState_Params
{
};

// Function Squad.SQInventoryGroupWidget.InitWidget
struct USQInventoryGroupWidget_InitWidget_Params
{
};

// Function Squad.SQGameModeRuleset.SetWinningTeamFromEnum
struct ASQGameModeRuleset_SetWinningTeamFromEnum_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameModeRuleset.SetWinningTeam
struct ASQGameModeRuleset_SetWinningTeam_Params
{
	class ASQTeam*                                     Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameModeRuleset.SendMessageToPlayer
struct ASQGameModeRuleset_SendMessageToPlayer_Params
{
	class ASQPlayerController*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetime;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.ShowNewObjectivesFromTimer
struct ASQObjectiveRuleset_ShowNewObjectivesFromTimer_Params
{
};

// Function Squad.SQObjectiveRuleset.ShowNewObjectives
struct ASQObjectiveRuleset_ShowNewObjectives_Params
{
	TArray<class ASQObjective*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.RandomlySelectUnusedObjectiveLocation
struct ASQObjectiveRuleset_RandomlySelectUnusedObjectiveLocation_Params
{
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.RandomlySelectDistantUnusedObjectiveLocation
struct ASQObjectiveRuleset_RandomlySelectDistantUnusedObjectiveLocation_Params
{
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.OnObjectiveShown
struct ASQObjectiveRuleset_OnObjectiveShown_Params
{
	class ASQObjective*                                ObjectiveShown;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.OnObjectiveMet
struct ASQObjectiveRuleset_OnObjectiveMet_Params
{
	class ASQObjective*                                ObjectiveMet;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.GenerateMarkersForTeam
struct ASQObjectiveRuleset_GenerateMarkersForTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.DelayShowNewObjectives
struct ASQObjectiveRuleset_DelayShowNewObjectives_Params
{
	float                                              InDelay;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeamTwo
struct ASQObjectiveRuleset_ClearAndGenerateMarkersForTeamTwo_Params
{
};

// Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeamOne
struct ASQObjectiveRuleset_ClearAndGenerateMarkersForTeamOne_Params
{
};

// Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeam
struct ASQObjectiveRuleset_ClearAndGenerateMarkersForTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQInsurgencyRuleset.NotifyCoalitionOfSingleCache
struct ASQInsurgencyRuleset_NotifyCoalitionOfSingleCache_Params
{
};

// Function Squad.SQInsurgencyRuleset.NotifyCoalitionOfCaches
struct ASQInsurgencyRuleset_NotifyCoalitionOfCaches_Params
{
	TArray<class ASQObjective*>                        NewCaches;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQInsurgencyRuleset.GetNumberOfPlayersOnServer
struct ASQInsurgencyRuleset_GetNumberOfPlayersOnServer_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQInsurgencyRuleset.CheckIntelligencePoints
struct ASQInsurgencyRuleset_CheckIntelligencePoints_Params
{
};

// Function Squad.SQInfantryWeapon.GetOwnerSoldier
struct ASQInfantryWeapon_GetOwnerSoldier_Params
{
	class ASQSoldier*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQInfantryWeapon.BlueprintIsAnimationSystemValid
struct ASQInfantryWeapon_BlueprintIsAnimationSystemValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.Init
struct USQHUDWidget_Init_Params
{
	class ASQHUD*                                      InHUD;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.Draw
struct USQHUDWidget_Draw_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.CanDraw
struct USQHUDWidget_CanDraw_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.BPDrawTexture
struct USQHUDWidget_BPDrawTexture_Params
{
	class UTexture*                                    Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UL;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VL;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawingAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DrawingOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotationPivotPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMask;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.BPDrawText
struct USQHUDWidget_BPDrawText_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontRenderInfo                             FontRenderInfo;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawingAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextHorizontalAlignment                         HorizontalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextVerticalAlignment                           VerticalAlignment;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawShadow;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawOutline;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutlineColor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.BPDrawSpriteTexture
struct USQHUDWidget_BPDrawSpriteTexture_Params
{
	class UTexture*                                    Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextureX;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextureY;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextureXL;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextureYL;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawingAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DrawingOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotationPivotPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMask;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUDWidget.BPDrawMaterial
struct USQHUDWidget_BPDrawMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UL;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VL;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawingAlpha;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DrawingOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotationPivotPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.VehicleResetZoom
struct ASQHUD_VehicleResetZoom_Params
{
};

// Function Squad.SQHUD.VehicleRemoveOverlay
struct ASQHUD_VehicleRemoveOverlay_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.VehicleIncreaseZoomOverlay
struct ASQHUD_VehicleIncreaseZoomOverlay_Params
{
};

// Function Squad.SQHUD.VehicleDecreaseZoomOverlay
struct ASQHUD_VehicleDecreaseZoomOverlay_Params
{
};

// Function Squad.SQHUD.VehicleCreateOverlay
struct ASQHUD_VehicleCreateOverlay_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.TraceViewToggle
struct ASQHUD_TraceViewToggle_Params
{
};

// Function Squad.SQHUD.ToggleScoreboard
struct ASQHUD_ToggleScoreboard_Params
{
};

// Function Squad.SQHUD.ShowScoreboard
struct ASQHUD_ShowScoreboard_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.ShowMarkerOnHUD
struct ASQHUD_ShowMarkerOnHUD_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.ShouldOffsetSpawnText
struct ASQHUD_ShouldOffsetSpawnText_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.SettingsChangedHandler
struct ASQHUD_SettingsChangedHandler_Params
{
	class USQGameUserSettings*                         Settings;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.SetHudWidgetsEnabled
struct ASQHUD_SetHudWidgetsEnabled_Params
{
	bool                                               bValue;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.RemoveLineOfSightActor
struct ASQHUD_RemoveLineOfSightActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.RemoveInputStackState
struct ASQHUD_RemoveInputStackState_Params
{
	struct FSQInputState                               OldState;                                                  // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSQInputState                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQHUD.OnReceiveChatEvent__DelegateSignature
struct ASQHUD_OnReceiveChatEvent__DelegateSignature_Params
{
	struct FString                                     PlayerName;                                                // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.IsScoreboardVisible
struct ASQHUD_IsScoreboardVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.IncrementMapZoomLevel
struct ASQHUD_IncrementMapZoomLevel_Params
{
	float                                              CurrentMapZoom;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.HudWidgetsEnabled
struct ASQHUD_HudWidgetsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.HideDeployableInteractableOverlay
struct ASQHUD_HideDeployableInteractableOverlay_Params
{
	class ASQDeployableInteractable*                   ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.HideAmmoBagOverlay
struct ASQHUD_HideAmmoBagOverlay_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetTeamColor
struct ASQHUD_GetTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetTeamBasedColor
struct ASQHUD_GetTeamBasedColor_Params
{
	ESQTeam                                            InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetSystemMessagesColor
struct ASQHUD_GetSystemMessagesColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetStartingMapZoom
struct ASQHUD_GetStartingMapZoom_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetSquadColor
struct ASQHUD_GetSquadColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetScaleUI
struct ASQHUD_GetScaleUI_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetRemoteTalkers
struct ASQHUD_GetRemoteTalkers_Params
{
	TArray<struct FSQRemoteTalkerDisplayInfo>          ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetOwnerSpeakerState
struct ASQHUD_GetOwnerSpeakerState_Params
{
	ESQVoiceChannel                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetOtherPlayerColor
struct ASQHUD_GetOtherPlayerColor_Params
{
	class ASQPlayerState*                              OtherPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetMouseScreenSpacePosition
struct ASQHUD_GetMouseScreenSpacePosition_Params
{
	struct FIntPoint                                   OutPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetFireTeamColor
struct ASQHUD_GetFireTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetEnemyColor
struct ASQHUD_GetEnemyColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.GetCanvas
struct ASQHUD_GetCanvas_Params
{
	class UCanvas*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DrawSystemMessages
struct ASQHUD_DrawSystemMessages_Params
{
	float                                              PosX;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosY;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DrawString
struct ASQHUD_DrawString_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosX;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosY;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQMessageBoxInfo                           Info;                                                      // (Parm, NativeAccessSpecifierPublic)
	ESQTextHorizontalAlignment                         HorizontalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextVerticalAlignment                           VerticalAlignment;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DrawChatMessages
struct ASQHUD_DrawChatMessages_Params
{
	struct FSQMessageBoxInfo                           ChatBox;                                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	float                                              PosX;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosY;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DisplayDeployableInteractableOverlay
struct ASQHUD_DisplayDeployableInteractableOverlay_Params
{
	class ASQDeployableInteractable*                   ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanPickup;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DisplayAmmoBagOverlay
struct ASQHUD_DisplayAmmoBagOverlay_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanPickup;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.DeleteMarkerOnHUD
struct ASQHUD_DeleteMarkerOnHUD_Params
{
};

// Function Squad.SQHUD.ConditionalCloseScoreboard
struct ASQHUD_ConditionalCloseScoreboard_Params
{
};

// Function Squad.SQHUD.BPOnUsableVisible
struct ASQHUD_BPOnUsableVisible_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.BPOnSetHudWidgetsEnabled
struct ASQHUD_BPOnSetHudWidgetsEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.BlueprintNotifyHit
struct ASQHUD_BlueprintNotifyHit_Params
{
	float                                              DamageTaken;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APawn*                                       PawnInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.AddSystemMessage
struct ASQHUD_AddSystemMessage_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetimeOverride;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.AddLineOfSightActor
struct ASQHUD_AddLineOfSightActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.AddInputStackState
struct ASQHUD_AddInputStackState_Params
{
	struct FSQInputState                               NewState;                                                  // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSQInputState                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.AddChatMessageDefaultColor
struct ASQHUD_AddChatMessageDefaultColor_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetimeOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHUD.AddChatMessage
struct ASQHUD_AddChatMessage_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetimeOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.ResetMovementState
struct USQHelicopterMovementComponent_ResetMovementState_Params
{
};

// Function Squad.SQHelicopterMovementComponent.OnRep_IsSimulatingPhysics
struct USQHelicopterMovementComponent_OnRep_IsSimulatingPhysics_Params
{
};

// Function Squad.SQHelicopterMovementComponent.IsSimulatingPhysics
struct USQHelicopterMovementComponent_IsSimulatingPhysics_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.GetRotationInput
struct USQHelicopterMovementComponent_GetRotationInput_Params
{
	struct FRotator                                    ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.GetMaxBrakingDeceleration
struct USQHelicopterMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.GetMaxAcceleration
struct USQHelicopterMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.CapsuleTouched
struct USQHelicopterMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.AddRotationInput
struct USQHelicopterMovementComponent_AddRotationInput_Params
{
	struct FRotator                                    InRotationInput;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.AddImpulse
struct USQHelicopterMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVelocityChange;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterMovementComponent.AddForce
struct USQHelicopterMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.SetActivationProgress
struct USQHelicopterInstruments_SetActivationProgress_Params
{
	float                                              Progress;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.IsEngineActive
struct USQHelicopterInstruments_IsEngineActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetYawInput
struct USQHelicopterInstruments_GetYawInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetRollInput
struct USQHelicopterInstruments_GetRollInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetPitchInput
struct USQHelicopterInstruments_GetPitchInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetMaxLift
struct USQHelicopterInstruments_GetMaxLift_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetLiftInput
struct USQHelicopterInstruments_GetLiftInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetForwardSpeed
struct USQHelicopterInstruments_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterInstruments.GetActivationProgress
struct USQHelicopterInstruments_GetActivationProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCollisionDamage.OnActorHit
struct USQCollisionDamage_OnActorHit_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQCollisionDamage.CalculateDamage
struct USQCollisionDamage_CalculateDamage_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCollisionDamage.ApplyDamage
struct USQCollisionDamage_ApplyDamage_Params
{
	float                                              damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopterCollisionDamage.HandleImpact
struct USQHelicopterCollisionDamage_HandleImpact_Params
{
	struct FHitResult                                  Impact;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              TimeSlice;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MoveDelta;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.SlerpToUpSideDown
struct ASQHelicopter2_SlerpToUpSideDown_Params
{
	float                                              AngleRad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.MainRotorDestroyedHandler
struct ASQHelicopter2_MainRotorDestroyedHandler_Params
{
	class USQVehicleComponent*                         VehicleComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.IsTailRotorColliding
struct ASQHelicopter2_IsTailRotorColliding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.IsPhysicsEnabled
struct ASQHelicopter2_IsPhysicsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.IsMainRotorColliding
struct ASQHelicopter2_IsMainRotorColliding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.IsLanded
struct ASQHelicopter2_IsLanded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.GetThrottle
struct ASQHelicopter2_GetThrottle_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.GetTailRotorThrust
struct ASQHelicopter2_GetTailRotorThrust_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.GetMaxRPM
struct ASQHelicopter2_GetMaxRPM_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.GetMainRotorThrust
struct ASQHelicopter2_GetMainRotorThrust_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQHelicopter2.EnablePhysicsSimulation
struct ASQHelicopter2_EnablePhysicsSimulation_Params
{
	bool                                               bSimulate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGridMarkerUnit.SetBoxSize
struct USQGridMarkerUnit_SetBoxSize_Params
{
	float                                              NewSize;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGridMarkerBase.InitWidget
struct USQGridMarkerBase_InitWidget_Params
{
};

// Function Squad.SQGridMarkerBase.DrawWidget
struct USQGridMarkerBase_DrawWidget_Params
{
	class USQGridMarkerBase*                           MapGridMarker;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenadeProjectile.PlayThrowableImpactEffect
struct ASQGrenadeProjectile_PlayThrowableImpactEffect_Params
{
	struct FHitResult                                  ImpactHit;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.UpdateUnderhandThrow
struct ASQGrenade_UpdateUnderhandThrow_Params
{
};

// Function Squad.SQGrenade.UpdateUnderhandPinpull
struct ASQGrenade_UpdateUnderhandPinpull_Params
{
};

// Function Squad.SQGrenade.UpdateReloading
struct ASQGrenade_UpdateReloading_Params
{
};

// Function Squad.SQGrenade.UpdateOverhandThrow
struct ASQGrenade_UpdateOverhandThrow_Params
{
};

// Function Squad.SQGrenade.UpdateOverhandPinpull
struct ASQGrenade_UpdateOverhandPinpull_Params
{
};

// Function Squad.SQGrenade.ServerSpawnGrenade
struct ASQGrenade_ServerSpawnGrenade_Params
{
	struct FVector                                     SpawnLocationZeroBased;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.ServerReleaseThrow
struct ASQGrenade_ServerReleaseThrow_Params
{
	bool                                               bOverhand;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.ServerPrepareThrow
struct ASQGrenade_ServerPrepareThrow_Params
{
	bool                                               bOverhand;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.OnRep_GrenadeState
struct ASQGrenade_OnRep_GrenadeState_Params
{
};

// Function Squad.SQGrenade.GetOwnerSoldier
struct ASQGrenade_GetOwnerSoldier_Params
{
	class ASQSoldier*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.GetGrenadeStaticInfo
struct ASQGrenade_GetGrenadeStaticInfo_Params
{
	class USQGrenadeStaticInfo*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.GetAimLocation
struct ASQGrenade_GetAimLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.GetAimDirection
struct ASQGrenade_GetAimDirection_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQGrenade.BlueprintOnGrenadeStateChanged
struct ASQGrenade_BlueprintOnGrenadeStateChanged_Params
{
};

// Function Squad.SQGraphVisualizerComponent.UpdateDesignLinks
struct USQGraphVisualizerComponent_UpdateDesignLinks_Params
{
};

// Function Squad.SQGraphVisualizerComponent.DrawNode
struct USQGraphVisualizerComponent_DrawNode_Params
{
	class USQGraphNodeComponent*                       Node;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphVisualizerComponent.DrawLink
struct USQGraphVisualizerComponent_DrawLink_Params
{
	class USQGraphNodeComponent*                       NodeA;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQGraphNodeComponent*                       NodeB;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphVisualizerComponent.Draw
struct USQGraphVisualizerComponent_Draw_Params
{
};

// Function Squad.SQGraphRAASVisualizerComponent.UpdateCachedRoutes
struct USQGraphRAASVisualizerComponent_UpdateCachedRoutes_Params
{
};

// Function Squad.SQGraphInitializerComponent.UpdateDesignLinks
struct USQGraphInitializerComponent_UpdateDesignLinks_Params
{
};

// Function Squad.SQGraphInitializerComponent.PopulateGraph
struct USQGraphInitializerComponent_PopulateGraph_Params
{
};

// Function Squad.RouteCombinerPredicate.Execute
struct URouteCombinerPredicate_Execute_Params
{
	TArray<struct FSQRoute2>                           NewRoutes;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSQRoute2>                           Routes;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.RouteSelectorPredicate.Execute
struct URouteSelectorPredicate_Execute_Params
{
	TArray<class USQGraphNodeComponent*>               LinksLeft;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USQGraphNodeComponent*>               ChosenLinks;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandStream;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.UpdateQualityLevels
struct USQGameUserSettings_UpdateQualityLevels_Params
{
};

// Function Squad.SQGameUserSettings.UpdateQualityBasedOnGraphicsQuality
struct USQGameUserSettings_UpdateQualityBasedOnGraphicsQuality_Params
{
	int                                                InBaseQuality;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InGraphicsQuality;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetSteamItemEnabled
struct USQGameUserSettings_SetSteamItemEnabled_Params
{
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetResolutionQuality
struct USQGameUserSettings_SetResolutionQuality_Params
{
	int                                                ResolutionQuality;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetPostProcessQuality
struct USQGameUserSettings_SetPostProcessQuality_Params
{
	int                                                PostProcessQuality;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetGraphicsQuality
struct USQGameUserSettings_SetGraphicsQuality_Params
{
	int                                                InGraphicsQuality;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetEffectsQuality
struct USQGameUserSettings_SetEffectsQuality_Params
{
	int                                                EffectsQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetActiveAudioOutputDevice
struct USQGameUserSettings_SetActiveAudioOutputDevice_Params
{
	struct FString                                     InDevice;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.SetActiveAudioInputDevice
struct USQGameUserSettings_SetActiveAudioInputDevice_Params
{
	struct FString                                     InDevice;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.IsSteamItemEnabled
struct USQGameUserSettings_IsSteamItemEnabled_Params
{
	int                                                ItemId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.GetAvailableAudioOutputDevice
struct USQGameUserSettings_GetAvailableAudioOutputDevice_Params
{
	TArray<struct FString>                             OutAvailableDevice;                                        // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     OutCurrentDevice;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.GetActiveAudioInputDevice
struct USQGameUserSettings_GetActiveAudioInputDevice_Params
{
	struct FString                                     OutCurrentDevice;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BPSetMSAACompositingSampleCount
struct USQGameUserSettings_BPSetMSAACompositingSampleCount_Params
{
	int                                                InMSAACompositingSampleCount;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BPGetMSAACompositingSampleCount
struct USQGameUserSettings_BPGetMSAACompositingSampleCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintSetVSync
struct USQGameUserSettings_BlueprintSetVSync_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintSetToDefaults
struct USQGameUserSettings_BlueprintSetToDefaults_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintSetSoundsToDefaults
struct USQGameUserSettings_BlueprintSetSoundsToDefaults_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintSetScreenResolution
struct USQGameUserSettings_BlueprintSetScreenResolution_Params
{
	struct FIntPoint                                   Resolution;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintSetKeysToDefaults
struct USQGameUserSettings_BlueprintSetKeysToDefaults_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintSetGraphicsToDefaults
struct USQGameUserSettings_BlueprintSetGraphicsToDefaults_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintSetGameToDefaults
struct USQGameUserSettings_BlueprintSetGameToDefaults_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintSetFullscreenMode
struct USQGameUserSettings_BlueprintSetFullscreenMode_Params
{
	int                                                InFullscreenMode;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintResetToCurrentSettings
struct USQGameUserSettings_BlueprintResetToCurrentSettings_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintResetLocalAppdata
struct USQGameUserSettings_BlueprintResetLocalAppdata_Params
{
};

// Function Squad.SQGameUserSettings.BlueprintGetVSync
struct USQGameUserSettings_BlueprintGetVSync_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintGetScreenResolution
struct USQGameUserSettings_BlueprintGetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintGetQualityLevels
struct USQGameUserSettings_BlueprintGetQualityLevels_Params
{
	int                                                ResolutionQuality;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistanceQuality;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutShadowQuality;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostProcessQuality;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectsQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScreenEffects;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintGetFullscreenMode
struct USQGameUserSettings_BlueprintGetFullscreenMode_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BlueprintApplySettings
struct USQGameUserSettings_BlueprintApplySettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameUserSettings.BenchmarkGraphicsSettings
struct USQGameUserSettings_BenchmarkGraphicsSettings_Params
{
};

// Function Squad.SQGameSubsystemInterface.InitializeSubsystem
struct USQGameSubsystemInterface_InitializeSubsystem_Params
{
	class USQGameInstance*                             SquadGameInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.SetServerPassword
struct ASQGameSession_SetServerPassword_Params
{
	struct FString                                     ServerPassword;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.SetPublicQueueLimit
struct ASQGameSession_SetPublicQueueLimit_Params
{
	int                                                PublicQueueLimit;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.SetNumReservedSlots
struct ASQGameSession_SetNumReservedSlots_Params
{
	int                                                NumReserved;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.SetMaxNumPlayers
struct ASQGameSession_SetMaxNumPlayers_Params
{
	int                                                NumPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreRestrictions;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.Logout
struct ASQGameSession_Logout_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.Login
struct ASQGameSession_Login_Params
{
	struct FString                                     LoginName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InPassword;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.IsLoginBusy
struct ASQGameSession_IsLoginBusy_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.IsLoggedIn
struct ASQGameSession_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.GetSquadConfig
struct ASQGameSession_GetSquadConfig_Params
{
	class USQConfig*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameSession.GetLastLoginError
struct ASQGameSession_GetLastLoginError_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.VehicleDestroyed
struct ASQGameMode_VehicleDestroyed_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KilledPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       KilledPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.UnregisterImportantActor
struct ASQGameMode_UnregisterImportantActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.TryToChangePlayersTeam
struct ASQGameMode_TryToChangePlayersTeam_Params
{
	class ASQPlayerController*                         PlayerToChange;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamToChangeTo;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.SetNextMapInRotation
struct ASQGameMode_SetNextMapInRotation_Params
{
};

// Function Squad.SQGameMode.RequestPlaceDeployable
struct ASQGameMode_RequestPlaceDeployable_Params
{
	struct FTransform                                  SpawnLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         PlayerController;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.RegisterRuleSet
struct ASQGameMode_RegisterRuleSet_Params
{
	class ASQGameRuleSet*                              RuleSet;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.RegisterImportantActor
struct ASQGameMode_RegisterImportantActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.PlayerWounded
struct ASQGameMode_PlayerWounded_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KilledPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       KilledPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.PlayerRevived
struct ASQGameMode_PlayerRevived_Params
{
	class AController*                                 Reviver;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 RevivedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.PlayerHealed
struct ASQGameMode_PlayerHealed_Params
{
	class AController*                                 Healer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 HealedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.PlayerDied
struct ASQGameMode_PlayerDied_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KilledPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       KilledPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.PlayerBandaged
struct ASQGameMode_PlayerBandaged_Params
{
	class AController*                                 Bandager;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 BandagedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.OnPlayerChangedTeams
struct ASQGameMode_OnPlayerChangedTeams_Params
{
	class ASQPlayerController*                         PlayerWhoSwitched;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.LogisticsDropOff
struct ASQGameMode_LogisticsDropOff_Params
{
	class AActor*                                      VehicleActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmmoDroppedOff;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstructionDroppedOff;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.IsDeployNow
struct ASQGameMode_IsDeployNow_Params
{
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetTeam
struct ASQGameMode_GetTeam_Params
{
	ESQTeam                                            Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQTeam*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetNextMapDisplayName
struct ASQGameMode_GetNextMapDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetDisplayNameArray
struct ASQGameMode_GetDisplayNameArray_Params
{
	TArray<struct FString>                             OutArray;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetDisplayName
struct ASQGameMode_GetDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetCurrentMapDisplayName
struct ASQGameMode_GetCurrentMapDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.GetConcretePawnClassForController
struct ASQGameMode_GetConcretePawnClassForController_Params
{
	class AController*                                 InController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.BP_InvalidatePlacement
struct ASQGameMode_BP_InvalidatePlacement_Params
{
	class ASQPlayerController*                         PlayerController;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQInvalidPlacementReason                          FailureReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.BP_InitializeDeployableFromEquippable
struct ASQGameMode_BP_InitializeDeployableFromEquippable_Params
{
	class ASQDeployableItem*                           DeployableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQEquipableItem*                            Equippable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.BP_FailPlaceDeployableFromEquippable
struct ASQGameMode_BP_FailPlaceDeployableFromEquippable_Params
{
	class ASQEquipableItem*                            Equippable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameMode.AllowTeamChange
struct ASQGameMode_AllowTeamChange_Params
{
	class ASQPlayerController*                         RequestingPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.VerifyPassword
struct USQGameInstance_VerifyPassword_Params
{
	struct FBlueprintSessionResult                     BlueprintSessionResult;                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     UserPassword;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.StopMusic
struct USQGameInstance_StopMusic_Params
{
};

// Function Squad.SQGameInstance.SendTicketToEAC
struct USQGameInstance_SendTicketToEAC_Params
{
	bool                                               bEncryptedDataAvailable;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResultCode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.QueueForServer
struct USQGameInstance_QueueForServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQServerListItemWidget*                     SessionWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.PlayMusic
struct USQGameInstance_PlayMusic_Params
{
};

// Function Squad.SQGameInstance.IsSteamConnected
struct USQGameInstance_IsSteamConnected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.HostGame
struct USQGameInstance_HostGame_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InTravelURL;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.GotoMainMenu
struct USQGameInstance_GotoMainMenu_Params
{
};

// Function Squad.SQGameInstance.GetSquadUISettings
struct USQGameInstance_GetSquadUISettings_Params
{
	class USQUISettings*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.GetServerURL
struct USQGameInstance_GetServerURL_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     BlueprintSessionResult;                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.GetRandomMapPath
struct USQGameInstance_GetRandomMapPath_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.GetGameInstanceEvents
struct USQGameInstance_GetGameInstanceEvents_Params
{
	class USQGameInstanceEvents*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.GetCurrentMapPath
struct USQGameInstance_GetCurrentMapPath_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameInstance.DisconnectToMenu
struct USQGameInstance_DisconnectToMenu_Params
{
};

// Function Squad.SQGameInstance.CheckConnectionToServer
struct USQGameInstance_CheckConnectionToServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQServerListItemWidget*                     SessionWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameState.SetRemainingTime
struct ASQGameState_SetRemainingTime_Params
{
	int                                                Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameState.RequestFinishAndExitToMainMenu
struct ASQGameState_RequestFinishAndExitToMainMenu_Params
{
};

// Function Squad.SQGameState.RefreshTeamStates
struct ASQGameState_RefreshTeamStates_Params
{
};

// Function Squad.SQGameState.OnRep_ServerStartTimeStamp
struct ASQGameState_OnRep_ServerStartTimeStamp_Params
{
};

// Function Squad.SQGameState.OnRep_ServerName
struct ASQGameState_OnRep_ServerName_Params
{
};

// Function Squad.SQGameState.OnRep_NeutralTeamInfoClass
struct ASQGameState_OnRep_NeutralTeamInfoClass_Params
{
};

// Function Squad.SQGameState.OnRep_MaxPlayers
struct ASQGameState_OnRep_MaxPlayers_Params
{
};

// Function Squad.SQGameState.OnRep_IndexedTeamStates
struct ASQGameState_OnRep_IndexedTeamStates_Params
{
};

// Function Squad.SQGameState.OnRep_GameModeRules
struct ASQGameState_OnRep_GameModeRules_Params
{
};

// Function Squad.SQGameState.GetRemainingTime
struct ASQGameState_GetRemainingTime_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameState.GetMarkerManager
struct ASQGameState_GetMarkerManager_Params
{
	class USQMapMarkerManagerComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGameState.AddGameModeRules
struct ASQGameState_AddGameModeRules_Params
{
	TArray<struct FSQGameModeRules>                    InGameModeRules;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQFriendsBrowserWidget.StartFindFriends
struct USQFriendsBrowserWidget_StartFindFriends_Params
{
};

// Function Squad.SQFriendsBrowserWidget.OnSuccess
struct USQFriendsBrowserWidget_OnSuccess_Params
{
	TArray<struct FSQBlueprintFriend>                  Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQFriendsBrowserWidget.OnFindFriendsCompleted
struct USQFriendsBrowserWidget_OnFindFriendsCompleted_Params
{
	TArray<struct FSQBlueprintFriend>                  Results;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFriendsBrowserWidget.OnFailure
struct USQFriendsBrowserWidget_OnFailure_Params
{
};

// Function Squad.SQFreeLookInterface.SetIsToggleActive
struct USQFreeLookInterface_SetIsToggleActive_Params
{
	bool                                               bNewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookInterface.GetIsUsingFreeLook
struct USQFreeLookInterface_GetIsUsingFreeLook_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookInterface.GetFreeLookComponent
struct USQFreeLookInterface_GetFreeLookComponent_Params
{
	class USQFreeLookComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookInterface.CalculateFreeLookRotation
struct USQFreeLookInterface_CalculateFreeLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetYawLimits
struct USQFreeLookComponent_SetYawLimits_Params
{
	struct FVector2D                                   NewYawLimits;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetRotationSpeed
struct USQFreeLookComponent_SetRotationSpeed_Params
{
	struct FVector2D                                   NewRotationSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetReplicateFreeLookRotation
struct USQFreeLookComponent_SetReplicateFreeLookRotation_Params
{
	bool                                               bNewBool;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetPitchLimits
struct USQFreeLookComponent_SetPitchLimits_Params
{
	struct FVector2D                                   NewPitchLimits;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetIsToggleActive
struct USQFreeLookComponent_SetIsToggleActive_Params
{
	bool                                               bNewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetFreeLookRotation
struct USQFreeLookComponent_SetFreeLookRotation_Params
{
	struct FRotator                                    NewFreeLookRotator;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetFreeLookMode
struct USQFreeLookComponent_SetFreeLookMode_Params
{
	EFreeLookMode                                      NewFreeLookMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetFreelookCanRecenterWeapons
struct USQFreeLookComponent_SetFreelookCanRecenterWeapons_Params
{
	bool                                               bNewBool;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetFreeLookCamera
struct USQFreeLookComponent_SetFreeLookCamera_Params
{
	class UCameraComponent*                            NewCamera;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.SetCanFreelookWhileADS
struct USQFreeLookComponent_SetCanFreelookWhileADS_Params
{
	bool                                               bNewBool;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.ServerSetFreeLookRotation
struct USQFreeLookComponent_ServerSetFreeLookRotation_Params
{
	struct FRotator                                    NewFreeLookRotation;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.ResetFreeLook
struct USQFreeLookComponent_ResetFreeLook_Params
{
};

// Function Squad.SQFreeLookComponent.OnRep_ReplicatedFreeLookRot
struct USQFreeLookComponent_OnRep_ReplicatedFreeLookRot_Params
{
};

// Function Squad.SQFreeLookComponent.GetYawLimits
struct USQFreeLookComponent_GetYawLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetRotationSpeed
struct USQFreeLookComponent_GetRotationSpeed_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetPitchLimits
struct USQFreeLookComponent_GetPitchLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetIsUsingFreeLook
struct USQFreeLookComponent_GetIsUsingFreeLook_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetIsFreeLookComponentActive
struct USQFreeLookComponent_GetIsFreeLookComponentActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetFreelookCanRecenterWeapons
struct USQFreeLookComponent_GetFreelookCanRecenterWeapons_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetFreeLookCamera
struct USQFreeLookComponent_GetFreeLookCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.GetCanFreelookWhileADS
struct USQFreeLookComponent_GetCanFreelookWhileADS_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFreeLookComponent.CalculateFreeLookRotation
struct USQFreeLookComponent_CalculateFreeLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.UpdateState
struct ASQDeployable_UpdateState_Params
{
};

// Function Squad.SQDeployable.SetTeam
struct ASQDeployable_SetTeam_Params
{
	int                                                Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.SetStateUnbuilt
struct ASQDeployable_SetStateUnbuilt_Params
{
};

// Function Squad.SQDeployable.SetStateHalfBuilt
struct ASQDeployable_SetStateHalfBuilt_Params
{
};

// Function Squad.SQDeployable.SetStateCompleted
struct ASQDeployable_SetStateCompleted_Params
{
};

// Function Squad.SQDeployable.RemovedFromPlayersPlacedList
struct ASQDeployable_RemovedFromPlayersPlacedList_Params
{
};

// Function Squad.SQDeployable.PushSoldiersOutOfBounds
struct ASQDeployable_PushSoldiersOutOfBounds_Params
{
};

// Function Squad.SQDeployable.PreModifyHealth
struct ASQDeployable_PreModifyHealth_Params
{
	float                                              DeltaHealth;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 inst;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCausedByDamage;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.PostModifyHealth
struct ASQDeployable_PostModifyHealth_Params
{
	float                                              DeltaHealth;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 inst;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCausedByDamage;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.PlayStateChangeEffects
struct ASQDeployable_PlayStateChangeEffects_Params
{
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.Placed
struct ASQDeployable_Placed_Params
{
};

// Function Squad.SQDeployable.OnStateChangeClient
struct ASQDeployable_OnStateChangeClient_Params
{
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.OnRep_Team
struct ASQDeployable_OnRep_Team_Params
{
};

// Function Squad.SQDeployable.OnRep_BuildState
struct ASQDeployable_OnRep_BuildState_Params
{
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.OnAttachedActorDestroyed
struct ASQDeployable_OnAttachedActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.MulticastPlayDamageEffects
struct ASQDeployable_MulticastPlayDamageEffects_Params
{
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactLocationZeroBased;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      NewBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.MakeGhost
struct ASQDeployable_MakeGhost_Params
{
};

// Function Squad.SQDeployable.IsValidPlacement
struct ASQDeployable_IsValidPlacement_Params
{
	ESQInvalidPlacementReason                          Reason;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.IsGhost
struct ASQDeployable_IsGhost_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.IsDeployableEmpty
struct ASQDeployable_IsDeployableEmpty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.InvalidatePlacement
struct ASQDeployable_InvalidatePlacement_Params
{
};

// Function Squad.SQDeployable.GoToBuildState
struct ASQDeployable_GoToBuildState_Params
{
	ESQBuildState                                      InBuildState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.GetTrackDeployableResult
struct ASQDeployable_GetTrackDeployableResult_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTrackDeployableResult                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.GetNearestFOB
struct ASQDeployable_GetNearestFOB_Params
{
	bool                                               bIsFriendly;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQForwardBase*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.GetFailedSpawnReasonText
struct ASQDeployable_GetFailedSpawnReasonText_Params
{
	ESQInvalidPlacementReason                          Reason;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.GetBuildState
struct ASQDeployable_GetBuildState_Params
{
	ESQBuildState                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.ExtraPlacementRules
struct ASQDeployable_ExtraPlacementRules_Params
{
	ESQInvalidPlacementReason                          Reason;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.Die
struct ASQDeployable_Die_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.ConstructionHit
struct ASQDeployable_ConstructionHit_Params
{
	class ASQSoldier*                                  Activator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 inst;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.CompletedConstruction
struct ASQDeployable_CompletedConstruction_Params
{
};

// Function Squad.SQDeployable.BPOnGhostMade
struct ASQDeployable_BPOnGhostMade_Params
{
};

// Function Squad.SQDeployable.BPOnDie
struct ASQDeployable_BPOnDie_Params
{
	float                                              KillingDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.BP_OnStateChangeClient
struct ASQDeployable_BP_OnStateChangeClient_Params
{
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.BP_OnStateChange
struct ASQDeployable_BP_OnStateChange_Params
{
	ESQBuildState                                      OldBuildState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.BP_ExtraTrackDeployableRules
struct ASQDeployable_BP_ExtraTrackDeployableRules_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTrackDeployableResult                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployable.AttachToUnderlyingActor
struct ASQDeployable_AttachToUnderlyingActor_Params
{
};

// Function Squad.SQForwardBase.TryAcceptPlacement
struct ASQForwardBase_TryAcceptPlacement_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.TrackDeployable
struct ASQForwardBase_TrackDeployable_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.SetSpawnPointsEnabled
struct ASQForwardBase_SetSpawnPointsEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.SetSieged
struct ASQForwardBase_SetSieged_Params
{
	bool                                               bValue;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.SetBleedState
struct ASQForwardBase_SetBleedState_Params
{
	bool                                               bNewIsBleeding;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.Overrun
struct ASQForwardBase_Overrun_Params
{
	bool                                               bFriendly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnTrackedDeployableDestroyed
struct ASQForwardBase_OnTrackedDeployableDestroyed_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnSpawnSiegedStateChanged
struct ASQForwardBase_OnSpawnSiegedStateChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnSpawnPointDestroyed
struct ASQForwardBase_OnSpawnPointDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnSpawningEnabledChanged
struct ASQForwardBase_OnSpawningEnabledChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnRep_TrackedDeployables
struct ASQForwardBase_OnRep_TrackedDeployables_Params
{
};

// Function Squad.SQForwardBase.OnRep_SpawnPointsChanged
struct ASQForwardBase_OnRep_SpawnPointsChanged_Params
{
};

// Function Squad.SQForwardBase.OnRep_SpawningEnabledChanged
struct ASQForwardBase_OnRep_SpawningEnabledChanged_Params
{
};

// Function Squad.SQForwardBase.OnRep_SiegedChanged
struct ASQForwardBase_OnRep_SiegedChanged_Params
{
};

// Function Squad.SQForwardBase.OnRep_IsBleedingChanged
struct ASQForwardBase_OnRep_IsBleedingChanged_Params
{
	bool                                               bPrevIsBleeding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.OnRep_ConstructionPointsChanged
struct ASQForwardBase_OnRep_ConstructionPointsChanged_Params
{
};

// Function Squad.SQForwardBase.OnRep_AmmoChanged
struct ASQForwardBase_OnRep_AmmoChanged_Params
{
};

// Function Squad.SQForwardBase.OnBleedOut
struct ASQForwardBase_OnBleedOut_Params
{
};

// Function Squad.SQForwardBase.HasConstructionPointsFor
struct ASQForwardBase_HasConstructionPointsFor_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.HasAmmoFor
struct ASQForwardBase_HasAmmoFor_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.GetSpawnPointsEnabled
struct ASQForwardBase_GetSpawnPointsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.CreateSpawnPointSeperately
struct ASQForwardBase_CreateSpawnPointSeperately_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQGameSpawn*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.CreateSpawnPointOnFob
struct ASQForwardBase_CreateSpawnPointOnFob_Params
{
	class ASQGameSpawn*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.ConsumeFOBAmmo
struct ASQForwardBase_ConsumeFOBAmmo_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.ConsumeConstructionPoints
struct ASQForwardBase_ConsumeConstructionPoints_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.CheckDeploymentRules
struct ASQForwardBase_CheckDeploymentRules_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.BPPostTicketTick
struct ASQForwardBase_BPPostTicketTick_Params
{
	float                                              Difference;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.BPOverrun
struct ASQForwardBase_BPOverrun_Params
{
	bool                                               bFriendly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQForwardBase.BPOnIsBleedingChanged
struct ASQForwardBase_BPOnIsBleedingChanged_Params
{
};

// Function Squad.SQFoliageBender.GetSoldierLocationAndSpread
struct ASQFoliageBender_GetSoldierLocationAndSpread_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpreadMultiplier;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFlagScoringRuleset.OnFlagTick
struct ASQFlagScoringRuleset_OnFlagTick_Params
{
};

// Function Squad.SQFlagScoringRuleset.OnFlagStateChange
struct ASQFlagScoringRuleset_OnFlagStateChange_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.IsSameServer
struct USQFindSessionsCallbackProxy_IsSameServer_Params
{
	struct FBlueprintSessionResult                     ResultA;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     ResultB;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetSessionFlagStruct
struct USQFindSessionsCallbackProxy_GetSessionFlagStruct_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSQSessionFlagStruct                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetServerName
struct USQFindSessionsCallbackProxy_GetServerName_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetSearchKeywords
struct USQFindSessionsCallbackProxy_GetSearchKeywords_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetPingInMs
struct USQFindSessionsCallbackProxy_GetPingInMs_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetPasswordProtected
struct USQFindSessionsCallbackProxy_GetPasswordProtected_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetMaxPlayers
struct USQFindSessionsCallbackProxy_GetMaxPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetMatchTimeout
struct USQFindSessionsCallbackProxy_GetMatchTimeout_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetMapName
struct USQFindSessionsCallbackProxy_GetMapName_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetLicensedServer
struct USQFindSessionsCallbackProxy_GetLicensedServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetGameVersion
struct USQFindSessionsCallbackProxy_GetGameVersion_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetGameMode
struct USQFindSessionsCallbackProxy_GetGameMode_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetCurrentPlayers
struct USQFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFindSessionsCallbackProxy.GetAnticheatProtected
struct USQFindSessionsCallbackProxy_GetAnticheatProtected_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQFieldDressing.StopBleeding
struct ASQFieldDressing_StopBleeding_Params
{
};

// Function Squad.SQFieldDressing.Revive
struct ASQFieldDressing_Revive_Params
{
};

// Function Squad.SQDrawChatWidget.InitWidget
struct USQDrawChatWidget_InitWidget_Params
{
};

// Function Squad.SQDrawChatWidget.DrawWidget
struct USQDrawChatWidget_DrawWidget_Params
{
	class USQDrawChatWidget*                           ChatWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQRotorsAnimInstance.GetRotationByBoneName
struct USQRotorsAnimInstance_GetRotationByBoneName_Params
{
	struct FName                                       BoneName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQDestroyedVehicle.TransferBurningLastingEffect
struct ASQDestroyedVehicle_TransferBurningLastingEffect_Params
{
	class ASQLastingEffect*                            LastingEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDestroyedVehicle.StopReplication
struct ASQDestroyedVehicle_StopReplication_Params
{
};

// Function Squad.SQDestroyedVehicle.SetInitialMovement
struct ASQDestroyedVehicle_SetInitialMovement_Params
{
	struct FVector                                     InInitialVelocity;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InInitialAngularVelocity;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDestroyedVehicle.OnBeginDestroyedVehicle
struct ASQDestroyedVehicle_OnBeginDestroyedVehicle_Params
{
};

// Function Squad.SQDeployableVehicle.TurnAtRate
struct ASQDeployableVehicle_TurnAtRate_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.Turn
struct ASQDeployableVehicle_Turn_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.ToggleView
struct ASQDeployableVehicle_ToggleView_Params
{
};

// Function Squad.SQDeployableVehicle.MouseWheelScroll
struct ASQDeployableVehicle_MouseWheelScroll_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.LookUpAtRate
struct ASQDeployableVehicle_LookUpAtRate_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.LookUp
struct ASQDeployableVehicle_LookUp_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.IsCurrentWeaponInputEnabled
struct ASQDeployableVehicle_IsCurrentWeaponInputEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableVehicle.GetOwnerDeployable
struct ASQDeployableVehicle_GetOwnerDeployable_Params
{
	class ASQDeployable*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableInteractable.BP_PickedUp
struct ASQDeployableInteractable_BP_PickedUp_Params
{
	class ASQEquipableItem*                            EquippableDeployableInteractable;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableChildActorComponent.OnDeployableStateChange
struct USQDeployableChildActorComponent_OnDeployableStateChange_Params
{
	ESQBuildState                                      BuildState;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDeployableAmmoBag.OnRep_AmmoCount
struct ASQDeployableAmmoBag_OnRep_AmmoCount_Params
{
};

// Function Squad.SQDeployableAmmoBag.BP_PickedUp
struct ASQDeployableAmmoBag_BP_PickedUp_Params
{
	class ASQEquipableItem*                            EquippableAmmoBag;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQDataGatheringComponent.RecordHeatMap
struct USQDataGatheringComponent_RecordHeatMap_Params
{
	float                                              XStepSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YStepSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecordRawValues;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionWaitTime;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCreateSquadButton.SquadNameTextCommit
struct USQCreateSquadButton_SquadNameTextCommit_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextCommit>                           CommitMethodEnum;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCreateSquadButton.SquadNameTextChanged
struct USQCreateSquadButton_SquadNameTextChanged_Params
{
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSquadListWidget.OnListLayoutChanged
struct USQCoreStateSquadListWidget_OnListLayoutChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnVoipChannelChanged
struct USQCoreStateSquadMemberWidget_OnVoipChannelChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnSquadIdChanged
struct USQCoreStateSquadMemberWidget_OnSquadIdChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnPlayerNameChanged
struct USQCoreStateSquadMemberWidget_OnPlayerNameChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsWoundedChanged
struct USQCoreStateSquadMemberWidget_OnIsWoundedChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsSquadLeaderChanged
struct USQCoreStateSquadMemberWidget_OnIsSquadLeaderChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsPossessingPawnChanged
struct USQCoreStateSquadMemberWidget_OnIsPossessingPawnChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsMutedChanged
struct USQCoreStateSquadMemberWidget_OnIsMutedChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsFireTeamLeaderChanged
struct USQCoreStateSquadMemberWidget_OnIsFireTeamLeaderChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsBleedingChanged
struct USQCoreStateSquadMemberWidget_OnIsBleedingChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnIsAliveChanged
struct USQCoreStateSquadMemberWidget_OnIsAliveChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnFireTeamPositionChanged
struct USQCoreStateSquadMemberWidget_OnFireTeamPositionChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnFireTeamIndexChanged
struct USQCoreStateSquadMemberWidget_OnFireTeamIndexChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnDeployRoleChanged
struct USQCoreStateSquadMemberWidget_OnDeployRoleChanged_Params
{
};

// Function Squad.SQCoreStateSquadMemberWidget.OnCurrentVehicleDataChanged
struct USQCoreStateSquadMemberWidget_OnCurrentVehicleDataChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnSquadNameChanged
struct USQCoreStateSquadItemWidget_OnSquadNameChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnSquadIdChanged
struct USQCoreStateSquadItemWidget_OnSquadIdChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnMemberNumChanged
struct USQCoreStateSquadItemWidget_OnMemberNumChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnMaxMembersChanged
struct USQCoreStateSquadItemWidget_OnMaxMembersChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnLeaderNameChanged
struct USQCoreStateSquadItemWidget_OnLeaderNameChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnJoinButtonStateChanged
struct USQCoreStateSquadItemWidget_OnJoinButtonStateChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnIsSelfInSquadChanged
struct USQCoreStateSquadItemWidget_OnIsSelfInSquadChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnIsCommandSquadChanged
struct USQCoreStateSquadItemWidget_OnIsCommandSquadChanged_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.OnBanned
struct USQCoreStateSquadItemWidget_OnBanned_Params
{
	int                                                SquadId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BanDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSquadItemWidget.JoinSquad
struct USQCoreStateSquadItemWidget_JoinSquad_Params
{
};

// Function Squad.SQCoreStateSquadItemWidget.GetMemberRoot
struct USQCoreStateSquadItemWidget_GetMemberRoot_Params
{
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSquadItemWidget.GetCachedSQPlayerController
struct USQCoreStateSquadItemWidget_GetCachedSQPlayerController_Params
{
	class ASQPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSpawnPointsListWidget.SelectSpawnPoint
struct USQCoreStateSpawnPointsListWidget_SelectSpawnPoint_Params
{
};

// Function Squad.SQCoreStateSpawnPointsListWidget.OnSpawnPointTypeChanged
struct USQCoreStateSpawnPointsListWidget_OnSpawnPointTypeChanged_Params
{
};

// Function Squad.SQCoreStateSpawnPointsListWidget.OnSpawnPointLocationChanged
struct USQCoreStateSpawnPointsListWidget_OnSpawnPointLocationChanged_Params
{
};

// Function Squad.SQCoreStateSpawnPointsListWidget.OnIsSelectedChanged
struct USQCoreStateSpawnPointsListWidget_OnIsSelectedChanged_Params
{
};

// Function Squad.SQCoreStateSpawnPointsListWidget.GetSpawnIcon
struct USQCoreStateSpawnPointsListWidget_GetSpawnIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateListener.RefreshVisbility
struct USQCoreStateListener_RefreshVisbility_Params
{
	class APlayerController*                           PC;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateListener.OnDataCreate
struct USQCoreStateListener_OnDataCreate_Params
{
	class USQCoreStateData*                            Data;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateWidgetFactory.UnselectAll
struct USQCoreStateWidgetFactory_UnselectAll_Params
{
	class UObject*                                     SelectionInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateWidgetFactory.ReceiveSelection
struct USQCoreStateWidgetFactory_ReceiveSelection_Params
{
	struct FSQCoreStateId                              ComponentId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQSelectionState                                  SelectionState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SelectionInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSpawnPointsListComponent.SetRootWidgets
struct USQCoreStateSpawnPointsListComponent_SetRootWidgets_Params
{
	class UGridPanel*                                  InBaseRoot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridPanel*                                  InHABRoot;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridPanel*                                  InRallyRoot;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSelectionHUB.UnselectAll
struct USQCoreStateSelectionHUB_UnselectAll_Params
{
	class UObject*                                     SelectionInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateSquadListComponent.SetRootWidgets
struct USQCoreStateSquadListComponent_SetRootWidgets_Params
{
	class UPanelWidget*                                InSquadRoot;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                InUnassignedRoot;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                                InCommanderRoot;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.SetWidgetScale
struct USQCoreStateMapComponent_SetWidgetScale_Params
{
	float                                              UniformScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.SetRootWidget
struct USQCoreStateMapComponent_SetRootWidget_Params
{
	class UPanelWidget*                                Value;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.GetWidgetWorldLocation
struct USQCoreStateMapComponent_GetWidgetWorldLocation_Params
{
	struct FVector                                     OutWorldLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQCoreStateId                              ID;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.GetWidgetScreenPosition
struct USQCoreStateMapComponent_GetWidgetScreenPosition_Params
{
	struct FVector2D                                   OutPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQCoreStateId                              ID;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.GetWaypointWidgets
struct USQCoreStateMapComponent_GetWaypointWidgets_Params
{
	TMap<int, struct FSQCoreStateId>                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.GetWaypointFTWidgets
struct USQCoreStateMapComponent_GetWaypointFTWidgets_Params
{
	TMap<int, struct FSQCoreStateId>                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateMapComponent.GetOrderTargetWidgets
struct USQCoreStateMapComponent_GetOrderTargetWidgets_Params
{
	TMap<int, struct FSQCoreStateId>                   ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateConnection.OnComponentObtainedId
struct USQCoreStateConnection_OnComponentObtainedId_Params
{
	class USQCoreStateComponent*                       Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateComponent.ServerSetIsVisible
struct USQCoreStateComponent_ServerSetIsVisible_Params
{
	bool                                               bValue;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateComponent.ServerConfigure
struct USQCoreStateComponent_ServerConfigure_Params
{
};

// Function Squad.SQCoreStateComponent.OnRep_DataObject
struct USQCoreStateComponent_OnRep_DataObject_Params
{
	class USQCoreStateData*                            PrevDataObject;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateComponent.OnConnectionCreate
struct USQCoreStateComponent_OnConnectionCreate_Params
{
	class USQCoreStateConnection*                      Connection;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCoreStateComponent.GetId
struct USQCoreStateComponent_GetId_Params
{
	struct FSQCoreStateId                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResource.UseResource
struct ASQVehicleResource_UseResource_Params
{
	float                                              ModifyAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResource.ServerEndResourceDropOff
struct ASQVehicleResource_ServerEndResourceDropOff_Params
{
};

// Function Squad.SQVehicleResource.ServerBeginResourceDropOff
struct ASQVehicleResource_ServerBeginResourceDropOff_Params
{
	class ASQForwardBase*                              fob;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Zone;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropRate;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResource.FindValidDropOffs
struct ASQVehicleResource_FindValidDropOffs_Params
{
	class ASQForwardBase*                              fob;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Zone;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQVehicleResource.BeginResourceDropOff
struct ASQVehicleResource_BeginResourceDropOff_Params
{
};

// Function Squad.SQVehicleResource.AtValidResourcePoint
struct ASQVehicleResource_AtValidResourcePoint_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQConnectionCheckBeaconClient.ServerPong
struct ASQConnectionCheckBeaconClient_ServerPong_Params
{
	struct FSQConnectionCheckResponse                  response;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQConnectionCheckBeaconClient.InitConnection
struct ASQConnectionCheckBeaconClient_InitConnection_Params
{
	struct FString                                     ServerURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassPlayer.UpdateState
struct USQCompassPlayer_UpdateState_Params
{
	float                                              InScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthStateIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMedic;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSL;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOwnderMedic;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassPlayer.InitWidget
struct USQCompassPlayer_InitWidget_Params
{
};

// Function Squad.SQCompassMK2.UpdateVisibility
struct USQCompassMK2_UpdateVisibility_Params
{
};

// Function Squad.SQCompassMK2.UpdateSquadMembers
struct USQCompassMK2_UpdateSquadMembers_Params
{
};

// Function Squad.SQCompassMK2.UpdateSquadMarkers
struct USQCompassMK2_UpdateSquadMarkers_Params
{
};

// Function Squad.SQCompassMK2.UpdatePlayerWidgetTransform
struct USQCompassMK2_UpdatePlayerWidgetTransform_Params
{
	bool                                               bShowIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSoldier*                                  SoldierRef;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCompassPlayer*                            WidgetRef;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.UpdateMarkerArrows
struct USQCompassMK2_UpdateMarkerArrows_Params
{
};

// Function Squad.SQCompassMK2.UpdateCompassBearing
struct USQCompassMK2_UpdateCompassBearing_Params
{
};

// Function Squad.SQCompassMK2.SquadChangedHandler
struct USQCompassMK2_SquadChangedHandler_Params
{
	class ASQSquadState*                               NewSquad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSquadState*                               OldSquad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.RemoveMarker
struct USQCompassMK2_RemoveMarker_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.RemoveCompassMarker
struct USQCompassMK2_RemoveCompassMarker_Params
{
	unsigned char                                      ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.PlayerLeftSquad
struct USQCompassMK2_PlayerLeftSquad_Params
{
	class ASQSquadState*                               Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.PlayerJoinedSquad
struct USQCompassMK2_PlayerJoinedSquad_Params
{
	class ASQSquadState*                               Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.InitWidget
struct USQCompassMK2_InitWidget_Params
{
};

// Function Squad.SQCompassMK2.CreateSquadMateWidget
struct USQCompassMK2_CreateSquadMateWidget_Params
{
	class ASQPlayerState*                              SquadMate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.CreateNewMarker
struct USQCompassMK2_CreateNewMarker_Params
{
	int                                                SquadId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQMapMarker*                                Marker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMK2.CreateNewCompassMarker
struct USQCompassMK2_CreateNewCompassMarker_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMarker.UpdateState
struct USQCompassMarker_UpdateState_Params
{
	float                                              InScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCompassMarker.InitWidget
struct USQCompassMarker_InitWidget_Params
{
};

// Function Squad.SQCommanderVotingWidget.UpdateFromData
struct USQCommanderVotingWidget_UpdateFromData_Params
{
};

// Function Squad.SQCommanderVotingWidget.OnVotingTimeChanged
struct USQCommanderVotingWidget_OnVotingTimeChanged_Params
{
	float                                              Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderVotingWidget.OnIsVotingAvailableChanged
struct USQCommanderVotingWidget_OnIsVotingAvailableChanged_Params
{
};

// Function Squad.SQCommanderVotingWidget.OnIsVoteInProgressChanged
struct USQCommanderVotingWidget_OnIsVoteInProgressChanged_Params
{
};

// Function Squad.SQCommanderVotingWidget.Init
struct USQCommanderVotingWidget_Init_Params
{
};

// Function Squad.SQCommanderVotingPlayerItem.OnVoteCountChanged
struct USQCommanderVotingPlayerItem_OnVoteCountChanged_Params
{
};

// Function Squad.SQCommanderVotingPlayerItem.OnNomineeNameChanged
struct USQCommanderVotingPlayerItem_OnNomineeNameChanged_Params
{
};

// Function Squad.SQCommanderVotingPlayerItem.OnIsVotedByPlayerChanged
struct USQCommanderVotingPlayerItem_OnIsVotedByPlayerChanged_Params
{
};

// Function Squad.SQCommanderState.OnRep_VoteInProgressChanged
struct ASQCommanderState_OnRep_VoteInProgressChanged_Params
{
};

// Function Squad.SQCommanderState.OnRep_CurrentCommander
struct ASQCommanderState_OnRep_CurrentCommander_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderState.IsCommanderActionAllowed
struct ASQCommanderState_IsCommanderActionAllowed_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderState.GetCurrentCommander
struct ASQCommanderState_GetCurrentCommander_Params
{
	class ASQPlayerState*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderState.GetCommandActionsById
struct ASQCommanderState_GetCommandActionsById_Params
{
	unsigned char                                      ID;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderState.GetCommandActions
struct ASQCommanderState_GetCommandActions_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderState.GetActionsEnabled
struct ASQCommanderState_GetActionsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.GetInterval
struct USQCommanderManager_GetInterval_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQCommandActionData                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction Squad.SQCommanderManager.CommanderChangedDelegate__DelegateSignature
struct USQCommanderManager_CommanderChangedDelegate__DelegateSignature_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CanUseAction
struct USQCommanderManager_CanUseAction_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateTotalTimeRemaining
struct USQCommanderManager_CalculateTotalTimeRemaining_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateStateTimeRemaining
struct USQCommanderManager_CalculateStateTimeRemaining_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQCommandOptionState                              CommandOptionState;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateStatePercentTimeRemaining
struct USQCommanderManager_CalculateStatePercentTimeRemaining_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQCommandOptionState                              CommandOptionState;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateState
struct USQCommanderManager_CalculateState_Params
{
	class UClass*                                      CommandOption;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQCommandOptionState                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateCategoryPercentRemainingTime
struct USQCommanderManager_CalculateCategoryPercentRemainingTime_Params
{
	unsigned char                                      CommandOptionType;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateCategoryLocked
struct USQCommanderManager_CalculateCategoryLocked_Params
{
	unsigned char                                      CommandOptionType;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderManager.CalculateCategoryCurrentRemainingTime
struct USQCommanderManager_CalculateCategoryCurrentRemainingTime_Params
{
	unsigned char                                      CommandOptionType;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQCommanderState*                           SQCommanderState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeam.TryClaimRole
struct ASQTeam_TryClaimRole_Params
{
	class USQRoleSettings*                             SquadRole;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForDeployment;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeam.ReleaseRole
struct ASQTeam_ReleaseRole_Params
{
	class USQRoleSettings*                             SquadRole;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeam.GetNatoStringOrSquadString
struct ASQTeam_GetNatoStringOrSquadString_Params
{
	int                                                Idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQTeam.ForceRecalcRoleUsage
struct ASQTeam_ForceRecalcRoleUsage_Params
{
};

// Function Squad.SQCommanderInputComponent.VotePlayer
struct USQCommanderInputComponent_VotePlayer_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerVoteForCommander
struct USQCommanderInputComponent_ServerVoteForCommander_Params
{
	class ASQPlayerState*                              Nominee;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerRequestSupportAtLocation
struct USQCommanderInputComponent_ServerRequestSupportAtLocation_Params
{
	struct FVector                                     WorldLocation;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerRequestCreateCommandActor
struct USQCommanderInputComponent_ServerRequestCreateCommandActor_Params
{
	class UClass*                                      CommandOption;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerRequestCommandActorDestroyed
struct USQCommanderInputComponent_ServerRequestCommandActorDestroyed_Params
{
	class UClass*                                      CommandOption;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerMakePlayerCommander
struct USQCommanderInputComponent_ServerMakePlayerCommander_Params
{
	class ASQPlayerState*                              NewCommander;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.ServerDemoteCommander
struct USQCommanderInputComponent_ServerDemoteCommander_Params
{
};

// Function Squad.SQCommanderInputComponent.ServerDebugDisableVoteRequirements
struct USQCommanderInputComponent_ServerDebugDisableVoteRequirements_Params
{
};

// Function Squad.SQCommanderInputComponent.ServerAttemptSetActionsUsableState
struct USQCommanderInputComponent_ServerAttemptSetActionsUsableState_Params
{
	bool                                               bNewActionsEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.RequestSupportAtLocation
struct USQCommanderInputComponent_RequestSupportAtLocation_Params
{
	struct FVector                                     WorldLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.RequestPromoteCommander
struct USQCommanderInputComponent_RequestPromoteCommander_Params
{
};

// Function Squad.SQCommanderInputComponent.RequestDemoteCommander
struct USQCommanderInputComponent_RequestDemoteCommander_Params
{
};

// Function Squad.SQCommanderInputComponent.RequestCreateCommandActor
struct USQCommanderInputComponent_RequestCreateCommandActor_Params
{
	class UClass*                                      CommandOption;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.RequestCommandActorDestroyed
struct USQCommanderInputComponent_RequestCommandActorDestroyed_Params
{
	class UClass*                                      CommandOption;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.DebugVoteForCommander
struct USQCommanderInputComponent_DebugVoteForCommander_Params
{
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommanderInputComponent.DebugDisableVoteRequirements
struct USQCommanderInputComponent_DebugDisableVoteRequirements_Params
{
};

// Function Squad.SQCommanderInputComponent.DebugDemoteCommander
struct USQCommanderInputComponent_DebugDemoteCommander_Params
{
};

// Function Squad.SQCommanderInputComponent.DebugBecomeCommander
struct USQCommanderInputComponent_DebugBecomeCommander_Params
{
};

// Function Squad.SQCommanderInputComponent.AttemptSetActionsUsableState
struct USQCommanderInputComponent_AttemptSetActionsUsableState_Params
{
	bool                                               bNewActionsEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCommandActor.OnRep_Action
struct ASQCommandActor_OnRep_Action_Params
{
};

// Function Squad.SQColorsDataAsset.GetColor
struct USQColorsDataAsset_GetColor_Params
{
	TEnumAsByte<ESQMapWidgetTint>                      TintValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCheatManager.SqDumpPakContents
struct USQCheatManager_SqDumpPakContents_Params
{
	struct FString                                     OutputFilename;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphNodeComponent.RemoveNeighbor
struct USQGraphNodeComponent_RemoveNeighbor_Params
{
	class USQGraphNodeComponent*                       Neighbor;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphNodeComponent.OnNeighborRemoved
struct USQGraphNodeComponent_OnNeighborRemoved_Params
{
	class USQGraphNodeComponent*                       Neighbor;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphNodeComponent.OnNeighborAdded
struct USQGraphNodeComponent_OnNeighborAdded_Params
{
	class USQGraphNodeComponent*                       Neighbor;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphNodeComponent.GetNeighbors
struct USQGraphNodeComponent_GetNeighbors_Params
{
	TArray<class USQGraphNodeComponent*>               InOutNodes;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQGraphNodeComponent.AddNeighbor
struct USQGraphNodeComponent_AddNeighbor_Params
{
	class USQGraphNodeComponent*                       Neighbor;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.UpdateLockState
struct USQCaptureZoneComponent_UpdateLockState_Params
{
};

// Function Squad.SQCaptureZoneComponent.UpdateCaptureState
struct USQCaptureZoneComponent_UpdateCaptureState_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.UpdateCanCaptureState
struct USQCaptureZoneComponent_UpdateCanCaptureState_Params
{
	TArray<class USQCaptureZoneComponent*>             TeamOneDir;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USQCaptureZoneComponent*>             TeamTwoDir;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.UnlockCaptureZone
struct USQCaptureZoneComponent_UnlockCaptureZone_Params
{
};

// Function Squad.SQCaptureZoneComponent.SetTeamCanCapture
struct USQCaptureZoneComponent_SetTeamCanCapture_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanCap;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.OnRep_Uncappable
struct USQCaptureZoneComponent_OnRep_Uncappable_Params
{
};

// Function Squad.SQCaptureZoneComponent.OnRep_TeamCapturabilities
struct USQCaptureZoneComponent_OnRep_TeamCapturabilities_Params
{
};

// Function Squad.SQCaptureZoneComponent.OnRep_OwningTeam
struct USQCaptureZoneComponent_OnRep_OwningTeam_Params
{
};

// Function Squad.SQCaptureZoneComponent.OnRep_CapturingTeam
struct USQCaptureZoneComponent_OnRep_CapturingTeam_Params
{
};

// Function Squad.SQCaptureZoneComponent.OnRep_CapturePercent
struct USQCaptureZoneComponent_OnRep_CapturePercent_Params
{
};

// Function Squad.SQCaptureZoneComponent.OnIndexedTeamStatesReplicated
struct USQCaptureZoneComponent_OnIndexedTeamStatesReplicated_Params
{
};

// Function Squad.SQCaptureZoneComponent.Neutralize
struct USQCaptureZoneComponent_Neutralize_Params
{
};

// Function Squad.SQCaptureZoneComponent.LockCaptureZone
struct USQCaptureZoneComponent_LockCaptureZone_Params
{
};

// Function Squad.SQCaptureZoneComponent.GetPlayersInCaptureZone
struct USQCaptureZoneComponent_GetPlayersInCaptureZone_Params
{
	TArray<class AActor*>                              TeamOne;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              TeamTwo;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.GetCapturezoneDirections
struct USQCaptureZoneComponent_GetCapturezoneDirections_Params
{
	TArray<class USQCaptureZoneComponent*>             TeamOneDir;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USQCaptureZoneComponent*>             TeamTwoDir;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.GetCanTeamCapture
struct USQCaptureZoneComponent_GetCanTeamCapture_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.FullyCap
struct USQCaptureZoneComponent_FullyCap_Params
{
	unsigned char                                      ForTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.FindMainBase
struct USQCaptureZoneComponent_FindMainBase_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQGraphNodeComponent*>               VisitedNodes;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USQGraphNodeComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCaptureZoneComponent.CaptureTick
struct USQCaptureZoneComponent_CaptureTick_Params
{
};

// Function Squad.SQCameraMan.ServerSetFlySpeedTarget
struct ASQCameraMan_ServerSetFlySpeedTarget_Params
{
	float                                              InFlySpeedTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCameraMan.ServerSetDecelerationTarget
struct ASQCameraMan_ServerSetDecelerationTarget_Params
{
	float                                              InDecelerationTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQCameraMan.DrawHUD
struct ASQCameraMan_DrawHUD_Params
{
	class ASQHUD*                                      SquadHUD;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBuffManager.HasBuff
struct USQBuffManager_HasBuff_Params
{
	ESQBuffTypes                                       BuffTypeToCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundaryListener.UnregisterAllBoundaries
struct USQBoundaryListener_UnregisterAllBoundaries_Params
{
};

// Function Squad.SQBoundaryListener.ShouldRegisterToBoundary
struct USQBoundaryListener_ShouldRegisterToBoundary_Params
{
	class ASQBoundary*                                 Boundary;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundaryListener.OnExitBoundary
struct USQBoundaryListener_OnExitBoundary_Params
{
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundaryListener.OnEnterBoundary
struct USQBoundaryListener_OnEnterBoundary_Params
{
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBoundaryListener.GetActor
struct USQBoundaryListener_GetActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.UpdateTextureOnImage
struct USQBlueprintLibrary_UpdateTextureOnImage_Params
{
	class UImage*                                      Image;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                           Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.UpdateSpring3D
struct USQBlueprintLibrary_UpdateSpring3D_Params
{
	struct FSQSpringInterpStruct3D                     Spring;                                                    // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.UpdateDynamicEasing
struct USQBlueprintLibrary_UpdateDynamicEasing_Params
{
	struct FSQDynamicEasingStruct                      Easing;                                                    // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SpawnSoundAttachedWithParameters
struct USQBlueprintLibrary_SpawnSoundAttachedWithParameters_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>                AudioParameters;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<EAttachLocation>                       LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetTextureRenderTarget2DSize
struct USQBlueprintLibrary_SetTextureRenderTarget2DSize_Params
{
	class UTextureRenderTarget2D*                      Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetSkeletalPhysMaterialOverride
struct USQBlueprintLibrary_SetSkeletalPhysMaterialOverride_Params
{
	class USkeletalMeshComponent*                      Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           NewPhysMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetMousePosition
struct USQBlueprintLibrary_SetMousePosition_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetMobility
struct USQBlueprintLibrary_SetMobility_Params
{
	class USceneComponent*                             Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetMasterPoseComponent
struct USQBlueprintLibrary_SetMasterPoseComponent_Params
{
	class USkeletalMeshComponent*                      Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Master;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetDynamicEasingTarget
struct USQBlueprintLibrary_SetDynamicEasingTarget_Params
{
	struct FSQDynamicEasingStruct                      Easing;                                                    // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetComponentTickGroup
struct USQBlueprintLibrary_SetComponentTickGroup_Params
{
	class UActorComponent*                             Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetActorTickGroup
struct USQBlueprintLibrary_SetActorTickGroup_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetActorHiddenInGame
struct USQBlueprintLibrary_SetActorHiddenInGame_Params
{
	class AActor*                                      ActorToAffect;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPropagateToAttachedChildren;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SetActorCollisionInGame
struct USQBlueprintLibrary_SetActorCollisionInGame_Params
{
	class AActor*                                      ActorToAffect;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewCollisionEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPropagateToAttachedChildren;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ServerLicensingNoticeNeeded
struct USQBlueprintLibrary_ServerLicensingNoticeNeeded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ServerHealthEnabled
struct USQBlueprintLibrary_ServerHealthEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.SaveAndForceRebuildingKeyMaps
struct USQBlueprintLibrary_SaveAndForceRebuildingKeyMaps_Params
{
	bool                                               bRestoreDefaults;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.RebindKey
struct USQBlueprintLibrary_RebindKey_Params
{
	struct FName                                       ActionName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        newKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OccuranceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.RebindAxisKey
struct USQBlueprintLibrary_RebindAxisKey_Params
{
	struct FInputAxisKeyMapping                        Mapping;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKey                                        newKey;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.PrintShotInfo
struct USQBlueprintLibrary_PrintShotInfo_Params
{
	struct FSQShotInfo                                 Shot;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.PrintHitResult
struct USQBlueprintLibrary_PrintHitResult_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.PlaySoundAtLocationWithParameters
struct USQBlueprintLibrary_PlaySoundAtLocationWithParameters_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>                AudioParameters;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.PlaySound2DWithParameters
struct USQBlueprintLibrary_PlaySound2DWithParameters_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>                AudioParameters;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.PlaySoldierMovementFoleySound
struct USQBlueprintLibrary_PlaySoldierMovementFoleySound_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetSpeedParameter;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPhysMatParameter;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAttachLocation>                       LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.OWICoreStateVisibleDefined
struct USQBlueprintLibrary_OWICoreStateVisibleDefined_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.OWICoreStateEnabledDefined
struct USQBlueprintLibrary_OWICoreStateEnabledDefined_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.OffsetSpring3D
struct USQBlueprintLibrary_OffsetSpring3D_Params
{
	struct FSQSpringInterpStruct3D                     Spring;                                                    // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PosOffset;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.NormalizeAngle
struct USQBlueprintLibrary_NormalizeAngle_Params
{
	float                                              InAngle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ModdedServersOnTop
struct USQBlueprintLibrary_ModdedServersOnTop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MatchWaitingToStart
struct USQBlueprintLibrary_MatchWaitingToStart_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MatchWaitingAfterCompletion
struct USQBlueprintLibrary_MatchWaitingAfterCompletion_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MatchInProgress
struct USQBlueprintLibrary_MatchInProgress_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MapMarkersEnabledDefined
struct USQBlueprintLibrary_MapMarkersEnabledDefined_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MapIconVisibleDefined
struct USQBlueprintLibrary_MapIconVisibleDefined_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.MapIconEnabledDefined
struct USQBlueprintLibrary_MapIconEnabledDefined_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.LogUnusedProperties
struct USQBlueprintLibrary_LogUnusedProperties_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.LoadCredits
struct USQBlueprintLibrary_LoadCredits_Params
{
	TArray<struct FSQCreditsList>                      OutCreditsList;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsValidKey
struct USQBlueprintLibrary_IsValidKey_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsUnderTerrain
struct USQBlueprintLibrary_IsUnderTerrain_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     StartTrace;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InIgnoreActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceDistance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceMustImpactAboveToBeUnderTerrain;                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsStandaloneOrListenServer
struct USQBlueprintLibrary_IsStandaloneOrListenServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsStandalone
struct USQBlueprintLibrary_IsStandalone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsSimulatingInEditor
struct USQBlueprintLibrary_IsSimulatingInEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsShippingBuild
struct USQBlueprintLibrary_IsShippingBuild_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsQueueEnabled
struct USQBlueprintLibrary_IsQueueEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsLocationWithinDistanceToLocalPlayer
struct USQBlueprintLibrary_IsLocationWithinDistanceToLocalPlayer_Params
{
	ESQReturnBool                                      Branches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OtherLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceInMeters;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsGamepadKey
struct USQBlueprintLibrary_IsGamepadKey_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.IsActorWithinDistanceToLocalPlayer
struct USQBlueprintLibrary_IsActorWithinDistanceToLocalPlayer_Params
{
	ESQReturnBool                                      Branches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceInMeters;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.InMainMenu
struct USQBlueprintLibrary_InMainMenu_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetZoomedFOV
struct USQBlueprintLibrary_GetZoomedFOV_Params
{
	float                                              MagnificationDesired;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultFOV;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetWorldSettings
struct USQBlueprintLibrary_GetWorldSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWorldSettings*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetTextureMemoryStats
struct USQBlueprintLibrary_GetTextureMemoryStats_Params
{
	struct FSQTextureMemoryStats                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetTextSize
struct USQBlueprintLibrary_GetTextSize_Params
{
	struct FSlateFontInfo                              FontInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ScaleUI;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetSquadPhysMat
struct USQBlueprintLibrary_GetSquadPhysMat_Params
{
	class UPhysicalMaterial*                           PhysMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQPhysicalMaterial*                         SquadPhysMat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetSquadGameUserSettings
struct USQBlueprintLibrary_GetSquadGameUserSettings_Params
{
	class USQGameUserSettings*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetSquadGameSession
struct USQBlueprintLibrary_GetSquadGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQGameSession*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetSquadGameInstance
struct USQBlueprintLibrary_GetSquadGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQGameInstance*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetSpringPos3D
struct USQBlueprintLibrary_GetSpringPos3D_Params
{
	struct FSQSpringInterpStruct3D                     Spring;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetServerHealthValues
struct USQBlueprintLibrary_GetServerHealthValues_Params
{
	float                                              ServerHealthLow;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerHealthHigh;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetServerHealthSlateColor
struct USQBlueprintLibrary_GetServerHealthSlateColor_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetPrimaryDisplaySize
struct USQBlueprintLibrary_GetPrimaryDisplaySize_Params
{
	int                                                Width;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetPreviousLODLevel
struct USQBlueprintLibrary_GetPreviousLODLevel_Params
{
	class UStaticMeshComponent*                        Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetOverlapHitInfos
struct USQBlueprintLibrary_GetOverlapHitInfos_Params
{
	class UPrimitiveComponent*                         Target;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNumVertices
struct USQBlueprintLibrary_GetNumVertices_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LOD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNumTriangles
struct USQBlueprintLibrary_GetNumTriangles_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LOD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNumTexCoords
struct USQBlueprintLibrary_GetNumTexCoords_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LOD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNumSections
struct USQBlueprintLibrary_GetNumSections_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LOD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNetMode
struct USQBlueprintLibrary_GetNetMode_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetNatoPhoneticString
struct USQBlueprintLibrary_GetNatoPhoneticString_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetMajorMinorVersion
struct USQBlueprintLibrary_GetMajorMinorVersion_Params
{
	struct FString                                     RawVersion;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetLastRenderTime
struct USQBlueprintLibrary_GetLastRenderTime_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetKeysMappedToActionText
struct USQBlueprintLibrary_GetKeysMappedToActionText_Params
{
	struct FName                                       ActionName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetKeysMappedToAction
struct USQBlueprintLibrary_GetKeysMappedToAction_Params
{
	struct FName                                       ActionName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                Keys;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetKeysMapedToAxis
struct USQBlueprintLibrary_GetKeysMapedToAxis_Params
{
	struct FName                                       AxisName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Negative;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                Keys;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetKeyName
struct USQBlueprintLibrary_GetKeyName_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OutName;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetKeyDisplayName
struct USQBlueprintLibrary_GetKeyDisplayName_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       OutDisplayName;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetIntFromPhysMat
struct USQBlueprintLibrary_GetIntFromPhysMat_Params
{
	class UPhysicalMaterial*                           PhysMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetIntFromFName
struct USQBlueprintLibrary_GetIntFromFName_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetGameVersionInfo
struct USQBlueprintLibrary_GetGameVersionInfo_Params
{
	struct FString                                     Variant;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Major;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minor;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Build;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revision;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetGameVersion
struct USQBlueprintLibrary_GetGameVersion_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetDynamicEasingPosition
struct USQBlueprintLibrary_GetDynamicEasingPosition_Params
{
	struct FSQDynamicEasingStruct                      Easing;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetDefaultObjectFor
struct USQBlueprintLibrary_GetDefaultObjectFor_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetCustomServerSetting
struct USQBlueprintLibrary_GetCustomServerSetting_Params
{
	struct FString                                     PropertyName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutResult;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetCurrentMapName
struct USQBlueprintLibrary_GetCurrentMapName_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetComponentTransform
struct USQBlueprintLibrary_GetComponentTransform_Params
{
	class USceneComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetCanvasSize
struct USQBlueprintLibrary_GetCanvasSize_Params
{
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAudioComponentParamsArrayFromPhysMat
struct USQBlueprintLibrary_GetAudioComponentParamsArrayFromPhysMat_Params
{
	class UPhysicalMaterial*                           PhysMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAudioComponentParamFromPhysMat
struct USQBlueprintLibrary_GetAudioComponentParamFromPhysMat_Params
{
	class UPhysicalMaterial*                           PhysMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAudioComponentParam                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAnnouncement
struct USQBlueprintLibrary_GetAnnouncement_Params
{
	struct FSQAnnouncement                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAlphabetLetterString
struct USQBlueprintLibrary_GetAlphabetLetterString_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAllKeyMappings
struct USQBlueprintLibrary_GetAllKeyMappings_Params
{
	TArray<struct FInputActionKeyMapping>              KeyMappings;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetAllComponentsOfClass
struct USQBlueprintLibrary_GetAllComponentsOfClass_Params
{
	class AActor*                                      WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Components;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetActorHalfHeight
struct USQBlueprintLibrary_GetActorHalfHeight_Params
{
	class AActor*                                      TestActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.GetActionKeyName
struct USQBlueprintLibrary_GetActionKeyName_Params
{
	struct FName                                       ActionName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.FormatTextActionKeys
struct USQBlueprintLibrary_FormatTextActionKeys_Params
{
	struct FText                                       FormatText;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActionKeys;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.FindPlayerByPlayerId
struct USQBlueprintLibrary_FindPlayerByPlayerId_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.FindPlayerByNameOrId
struct USQBlueprintLibrary_FindPlayerByNameOrId_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameOrId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.FileSaveString
struct USQBlueprintLibrary_FileSaveString_Params
{
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InText;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.FileLoadString
struct USQBlueprintLibrary_FileLoadString_Params
{
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutText;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.DumpStaticMeshDrawListStats
struct USQBlueprintLibrary_DumpStaticMeshDrawListStats_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ConvertNumberToGridLetter
struct USQBlueprintLibrary_ConvertNumberToGridLetter_Params
{
	struct FString                                     OutResult;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ComponentIsDamageableFrom
struct USQBlueprintLibrary_ComponentIsDamageableFrom_Params
{
	class UPrimitiveComponent*                         VictimComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      IgnoredActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutHitResult;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ClosestPointOnLine
struct USQBlueprintLibrary_ClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LineEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ClampVector
struct USQBlueprintLibrary_ClampVector_Params
{
	struct FVector                                     Vector;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Min;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Max;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ClampDeltaAngle
struct USQBlueprintLibrary_ClampDeltaAngle_Params
{
	float                                              InDeltaAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAngle;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAngle;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ClampDelta
struct USQBlueprintLibrary_ClampDelta_Params
{
	float                                              InDelta;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Current;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.CenterMousePosition
struct USQBlueprintLibrary_CenterMousePosition_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.CalculateAmmoCostToSwapRole
struct USQBlueprintLibrary_CalculateAmmoCostToSwapRole_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.CalcTimeToMid
struct USQBlueprintLibrary_CalcTimeToMid_Params
{
	float                                              Midpoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToMid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.CalcMidpoint
struct USQBlueprintLibrary_CalcMidpoint_Params
{
	float                                              Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Midpoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.BreakInputAxisKeyMapping
struct USQBlueprintLibrary_BreakInputAxisKeyMapping_Params
{
	struct FInputAxisKeyMapping                        KeyMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ActionName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.BreakInputActionKeyMapping
struct USQBlueprintLibrary_BreakInputActionKeyMapping_Params
{
	struct FInputActionKeyMapping                      KeyMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ActionName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShift;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCtrl;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlt;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCmd;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.BreakFullHitResult
struct USQBlueprintLibrary_BreakFullHitResult_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FName                                       HitBoneName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      HitActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMat;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenetrationDepth;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitItem;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartPenetrating;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceEnd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceStart;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactNormal;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockingHit;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitFaceIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.AssembleSoldierAudioParameters
struct USQBlueprintLibrary_AssembleSoldierAudioParameters_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetSpeedParameter;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetFloorPhysMatParameter;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ApplyRadialDamageWithFalloff
struct USQBlueprintLibrary_ApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillZoneRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyDamageMeshes;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ApplyOppositeAcceleration
struct USQBlueprintLibrary_ApplyOppositeAcceleration_Params
{
	float                                              Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OppositeAcceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVelocity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ApplyHitResultRadialDamageWithFalloff
struct USQBlueprintLibrary_ApplyHitResultRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillZoneRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyDamageMeshes;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ApplyDeceleration
struct USQBlueprintLibrary_ApplyDeceleration_Params
{
	float                                              Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVelocity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ApplyAcceleration
struct USQBlueprintLibrary_ApplyAcceleration_Params
{
	float                                              TimeToMid;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Midpoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVelocity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.AdjustPositionForTextAlignment
struct USQBlueprintLibrary_AdjustPositionForTextAlignment_Params
{
	struct FVector2D                                   OriginalRenderPosition;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextSize;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextHorizontalAlignment                         HorizontalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextVerticalAlignment                           VerticalAlignment;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlueprintLibrary.ActivateReverbEffectFixed
struct USQBlueprintLibrary_ActivateReverbEffectFixed_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReverbEffect*                               ReverbEffect;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TagName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlastComponent.ServerFireBlast
struct USQBlastComponent_ServerFireBlast_Params
{
	struct FVector                                     BlastLocationZeroBased;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BlastAimVector;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQBlastComponent.FireBlast
struct USQBlastComponent_FireBlast_Params
{
};

// Function Squad.SQBaseHudWidget.UpdateActiveState
struct USQBaseHudWidget_UpdateActiveState_Params
{
};

// Function Squad.SQBaseHudWidget.InitWidget
struct USQBaseHudWidget_InitWidget_Params
{
};

// Function Squad.SQBaseGameSubsystem.TickSubsystem
struct USQBaseGameSubsystem_TickSubsystem_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQApprovalQueueWidget.Init
struct USQApprovalQueueWidget_Init_Params
{
};

// Function Squad.SQAnnouncementNotifier.AnnouncementChangedHandler
struct USQAnnouncementNotifier_AnnouncementChangedHandler_Params
{
};

// Function Squad.SQAnimInstanceSoldier.UpdateVehicleAim
struct USQAnimInstanceSoldier_UpdateVehicleAim_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier.UpdateVehicle
struct USQAnimInstanceSoldier_UpdateVehicle_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier.UpdateSteeringWheelVariables
struct USQAnimInstanceSoldier_UpdateSteeringWheelVariables_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier.UpdateLean
struct USQAnimInstanceSoldier_UpdateLean_Params
{
};

// Function Squad.SQAnimInstanceSoldier.UpdateFastPathTransitionVariables
struct USQAnimInstanceSoldier_UpdateFastPathTransitionVariables_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier.UpdateDragging
struct USQAnimInstanceSoldier_UpdateDragging_Params
{
};

// Function Squad.SQAnimInstanceSoldier.OnVaultClimbStop
struct USQAnimInstanceSoldier_OnVaultClimbStop_Params
{
};

// Function Squad.SQAnimInstanceSoldier.AlignWithGround
struct USQAnimInstanceSoldier_AlignWithGround_Params
{
	struct FVector                                     FloorNormal;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateTurnChar
struct USQAnimInstanceSoldier3P_UpdateTurnChar_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateStopMoveAlpha
struct USQAnimInstanceSoldier3P_UpdateStopMoveAlpha_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateSprintStopCachedSpeed
struct USQAnimInstanceSoldier3P_UpdateSprintStopCachedSpeed_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateSmoothVelocity
struct USQAnimInstanceSoldier3P_UpdateSmoothVelocity_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateLeanYawOffset
struct USQAnimInstanceSoldier3P_UpdateLeanYawOffset_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateLandingVel
struct USQAnimInstanceSoldier3P_UpdateLandingVel_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateIkFootOrientation
struct USQAnimInstanceSoldier3P_UpdateIkFootOrientation_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateIkFeetRootRelRot
struct USQAnimInstanceSoldier3P_UpdateIkFeetRootRelRot_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateFastPathVariables
struct USQAnimInstanceSoldier3P_UpdateFastPathVariables_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateDirection
struct USQAnimInstanceSoldier3P_UpdateDirection_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateAimRotation
struct USQAnimInstanceSoldier3P_UpdateAimRotation_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.UpdateAimOffset
struct USQAnimInstanceSoldier3P_UpdateAimOffset_Params
{
};

// Function Squad.SQAnimInstanceSoldier3P.Update3pCurrentFloor
struct USQAnimInstanceSoldier3P_Update3pCurrentFloor_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateWasCrouchedBeforeProne
struct USQAnimInstanceSoldier1P_UpdateWasCrouchedBeforeProne_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateTurnSpring
struct USQAnimInstanceSoldier1P_UpdateTurnSpring_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateSwitchedProne
struct USQAnimInstanceSoldier1P_UpdateSwitchedProne_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateSway
struct USQAnimInstanceSoldier1P_UpdateSway_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateStrafeSpring
struct USQAnimInstanceSoldier1P_UpdateStrafeSpring_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateSprintSpeedBlend
struct USQAnimInstanceSoldier1P_UpdateSprintSpeedBlend_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateRecoilAndFire
struct USQAnimInstanceSoldier1P_UpdateRecoilAndFire_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdatePitch
struct USQAnimInstanceSoldier1P_UpdatePitch_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateLofSuppression
struct USQAnimInstanceSoldier1P_UpdateLofSuppression_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateIsFallingPlayRate
struct USQAnimInstanceSoldier1P_UpdateIsFallingPlayRate_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateFastPath
struct USQAnimInstanceSoldier1P_UpdateFastPath_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateDeviationVisuFb
struct USQAnimInstanceSoldier1P_UpdateDeviationVisuFb_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateDeviation
struct USQAnimInstanceSoldier1P_UpdateDeviation_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateBobbingsPlayrate
struct USQAnimInstanceSoldier1P_UpdateBobbingsPlayrate_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAnimInstanceSoldier1P.UpdateAccuracyParameters
struct USQAnimInstanceSoldier1P_UpdateAccuracyParameters_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.Update1pCurrentFloor
struct USQAnimInstanceSoldier1P_Update1pCurrentFloor_Params
{
};

// Function Squad.SQAnimInstanceSoldier1P.LineOfFire
struct USQAnimInstanceSoldier1P_LineOfFire_Params
{
};

// Function Squad.SQAmmoWidget.UpdateState
struct USQAmmoWidget_UpdateState_Params
{
};

// Function Squad.SQAmmoWidget.UpdateShowingStatus
struct USQAmmoWidget_UpdateShowingStatus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAmmoWidget.UpdateMags
struct USQAmmoWidget_UpdateMags_Params
{
	class ASQEquipableItem*                            CurrentItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAmmoWidget.UpdateFiremode
struct USQAmmoWidget_UpdateFiremode_Params
{
	class ASQEquipableItem*                            CurrentItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAmmoWidget.UpdateCurrentWeapon
struct USQAmmoWidget_UpdateCurrentWeapon_Params
{
};

// Function Squad.SQAmmoWidget.OnShowResourceAmounts
struct USQAmmoWidget_OnShowResourceAmounts_Params
{
};

// Function Squad.SQAmmoWidget.OnShowCurrentWeapon
struct USQAmmoWidget_OnShowCurrentWeapon_Params
{
};

// Function Squad.SQAmmoWidget.OnCurrentWeaponChanged
struct USQAmmoWidget_OnCurrentWeaponChanged_Params
{
};

// Function Squad.SQAmmoWidget.InitWidget
struct USQAmmoWidget_InitWidget_Params
{
};

// Function Squad.SQAmbientAndReverbComponent.OnOverlapEnd
struct USQAmbientAndReverbComponent_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAmbientAndReverbComponent.OnOverlapBegin
struct USQAmbientAndReverbComponent_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQAIController.SpawnBots
struct ASQAIController_SpawnBots_Params
{
	int                                                NumberOfBotsToSpawn;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAIController.ShootEnemy
struct ASQAIController_ShootEnemy_Params
{
};

// Function Squad.SQAIController.IsEnemy
struct ASQAIController_IsEnemy_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAIController.FindClosestEnemyWithLOS
struct ASQAIController_FindClosestEnemyWithLOS_Params
{
	class ASQSoldier*                                  ExcludeEnemy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAIController.FindClosestEnemy
struct ASQAIController_FindClosestEnemy_Params
{
};

// Function Squad.SQPlayerController.UnmuteSquad
struct ASQPlayerController_UnmuteSquad_Params
{
	class ASQSquadState*                               MuteSquadState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.UnmuteAllPlayersExceptSquad
struct ASQPlayerController_UnmuteAllPlayersExceptSquad_Params
{
};

// Function Squad.SQPlayerController.TryClaimVehicle
struct ASQPlayerController_TryClaimVehicle_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ToggleMutePlayer
struct ASQPlayerController_ToggleMutePlayer_Params
{
	class ASQPlayerState*                              MutePlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.TimeUntilCanSpawn
struct ASQPlayerController_TimeUntilCanSpawn_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.StopMusic
struct ASQPlayerController_StopMusic_Params
{
};

// Function Squad.SQPlayerController.SQSM_SetServerUpdateRate
struct ASQPlayerController_SQSM_SetServerUpdateRate_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SQSM_SetNonRenderedUpdateRate
struct ASQPlayerController_SQSM_SetNonRenderedUpdateRate_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SQSM_SetDistanceFactorThesholds
struct ASQPlayerController_SQSM_SetDistanceFactorThesholds_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SQSM_RemoveDistanceFactorThesholds
struct ASQPlayerController_SQSM_RemoveDistanceFactorThesholds_Params
{
	int                                                srcIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SQSM_PrintDistanceFactorThesholds
struct ASQPlayerController_SQSM_PrintDistanceFactorThesholds_Params
{
};

// Function Squad.SQPlayerController.SQSM_InsertDistanceFactorThesholds
struct ASQPlayerController_SQSM_InsertDistanceFactorThesholds_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SQBugit
struct ASQPlayerController_SQBugit_Params
{
	struct FString                                     ScreenShotDescription;                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SimulateInputKey
struct ASQPlayerController_SimulateInputKey_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ShowToast
struct ASQPlayerController_ShowToast_Params
{
	struct FText                                       ToastText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSlate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ShowNextMap
struct ASQPlayerController_ShowNextMap_Params
{
};

// Function Squad.SQPlayerController.ShouldSkipPassword
struct ASQPlayerController_ShouldSkipPassword_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ShouldDirectSpawn
struct ASQPlayerController_ShouldDirectSpawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ShareRallyPoint
struct ASQPlayerController_ShareRallyPoint_Params
{
	int                                                SquadId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SetWorldOrigin
struct ASQPlayerController_SetWorldOrigin_Params
{
	struct FIntVector                                  NewOrigin;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SetSelectionMode
struct ASQPlayerController_SetSelectionMode_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SetRoamingMapOpen
struct ASQPlayerController_SetRoamingMapOpen_Params
{
	bool                                               bOpen;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SetOutOfMapBoundsKillTimestamp
struct ASQPlayerController_SetOutOfMapBoundsKillTimestamp_Params
{
	float                                              Timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SetIgnoreWeaponInput
struct ASQPlayerController_SetIgnoreWeaponInput_Params
{
	bool                                               bNewClickInput;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerUnmuteSquad
struct ASQPlayerController_ServerUnmuteSquad_Params
{
	class ASQSquadState*                               MuteSquadState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerTryClaimVehicle
struct ASQPlayerController_ServerTryClaimVehicle_Params
{
	class ASQVehicle*                                  VehicleToClaim;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerTryApproveVehicleClaim
struct ASQPlayerController_ServerTryApproveVehicleClaim_Params
{
};

// Function Squad.SQPlayerController.ServerSwitchSeat
struct ASQPlayerController_ServerSwitchSeat_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerSuicide
struct ASQPlayerController_ServerSuicide_Params
{
	bool                                               bLeavingServer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerStartHealing
struct ASQPlayerController_ServerStartHealing_Params
{
	class ASQSoldier*                                  HealedSoldier;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerSLInviteMember
struct ASQPlayerController_ServerSLInviteMember_Params
{
	class ASQPlayerState*                              PlayerToInvite;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerShowNextMap
struct ASQPlayerController_ServerShowNextMap_Params
{
};

// Function Squad.SQPlayerController.ServerShareRallyPoint
struct ASQPlayerController_ServerShareRallyPoint_Params
{
	int                                                SquadId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerSetVoipHandAnim
struct ASQPlayerController_ServerSetVoipHandAnim_Params
{
	ESQVoiceChannel                                    VoiceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerSetMuteAllPlayersExceptSquad
struct ASQPlayerController_ServerSetMuteAllPlayersExceptSquad_Params
{
	bool                                               bMute;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerSay
struct ASQPlayerController_ServerSay_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerRequestRestartPlayer
struct ASQPlayerController_ServerRequestRestartPlayer_Params
{
	class ASQGameSpawn*                                Spawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerRequestPlaceDeployable
struct ASQPlayerController_ServerRequestPlaceDeployable_Params
{
	struct FVector                                     DeployableLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    DeployableRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DeployableScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerRequestDeployRole_Actual
struct ASQPlayerController_ServerRequestDeployRole_Actual_Params
{
};

// Function Squad.SQPlayerController.ServerRequestDeployRole
struct ASQPlayerController_ServerRequestDeployRole_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerRemoveVehicleOverlayWidget
struct ASQPlayerController_ServerRemoveVehicleOverlayWidget_Params
{
};

// Function Squad.SQPlayerController.ServerRearmWeapons
struct ASQPlayerController_ServerRearmWeapons_Params
{
	class UObject*                                     RearmObject;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQRearmWeaponRequest>               RearmRequest;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerProcessApprovalEntry
struct ASQPlayerController_ServerProcessApprovalEntry_Params
{
	unsigned char                                      Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           VerifyKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerPlayEmoteAnim
struct ASQPlayerController_ServerPlayEmoteAnim_Params
{
	ESQEmotes                                          Emote;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerPlayCustomEmote
struct ASQPlayerController_ServerPlayCustomEmote_Params
{
	struct FName                                       CustomName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerOnPlayerToggleVoice_Editor
struct ASQPlayerController_ServerOnPlayerToggleVoice_Editor_Params
{
	struct FUniqueNetIdRepl                            TalkingPlayerId;                                           // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQVoiceChannel                                    VoiceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerNotifyExplosiveHit
struct ASQPlayerController_ServerNotifyExplosiveHit_Params
{
	struct FSQShotInfo                                 ShotInfoZeroBased;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSQPenetrationTrace>                 TargetsZeroBased;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FArmorPenetration                           CachedPenetration;                                         // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSQWeaponData                               WeaponConfig;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerMuteSquad
struct ASQPlayerController_ServerMuteSquad_Params
{
	class ASQSquadState*                               MuteSquadState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerMovePlayerToFireTeam
struct ASQPlayerController_ServerMovePlayerToFireTeam_Params
{
	class ASQPlayerState*                              TargetPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerLeaveSquad
struct ASQPlayerController_ServerLeaveSquad_Params
{
};

// Function Squad.SQPlayerController.ServerKickPlayerFromSquad
struct ASQPlayerController_ServerKickPlayerFromSquad_Params
{
	class ASQPlayerState*                              ToKick;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerJoinSquad
struct ASQPlayerController_ServerJoinSquad_Params
{
	class ASQSquadStatePrivateToTeam*                  ToJoin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerGiveUp
struct ASQPlayerController_ServerGiveUp_Params
{
};

// Function Squad.SQPlayerController.ServerGiveSquadLeader
struct ASQPlayerController_ServerGiveSquadLeader_Params
{
	class ASQPlayerState*                              NewLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerGiveFireTeamLeader
struct ASQPlayerController_ServerGiveFireTeamLeader_Params
{
	class ASQPlayerState*                              NewLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerGameplayUnmutePlayer
struct ASQPlayerController_ServerGameplayUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            MutePlayerId;                                              // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerGameplayMutePlayer
struct ASQPlayerController_ServerGameplayMutePlayer_Params
{
	struct FUniqueNetIdRepl                            MutePlayerId;                                              // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerGameCommandFromRemotePlayer
struct ASQPlayerController_ServerGameCommandFromRemotePlayer_Params
{
	struct FString                                     Cmd;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerFinishSeatProgress
struct ASQPlayerController_ServerFinishSeatProgress_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerEndHealing
struct ASQPlayerController_ServerEndHealing_Params
{
};

// Function Squad.SQPlayerController.ServerEmergencyTeleport
struct ASQPlayerController_ServerEmergencyTeleport_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawDegrees;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDisbandSquad
struct ASQPlayerController_ServerDisbandSquad_Params
{
};

// Function Squad.SQPlayerController.ServerDisbandFireTeam
struct ASQPlayerController_ServerDisbandFireTeam_Params
{
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugToggleForceNoCommanderCooldowns
struct ASQPlayerController_ServerDebugToggleForceNoCommanderCooldowns_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugToggleForceAllowCommanderActions
struct ASQPlayerController_ServerDebugToggleForceAllowCommanderActions_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugSetServerTickRate
struct ASQPlayerController_ServerDebugSetServerTickRate_Params
{
	float                                              NewTickRate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugSetServerSecondsNonSeamlessForced
struct ASQPlayerController_ServerDebugSetServerSecondsNonSeamlessForced_Params
{
	float                                              Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugRemoveSteamTestItem
struct ASQPlayerController_ServerDebugRemoveSteamTestItem_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerDebugAssignSteamTestItem
struct ASQPlayerController_ServerDebugAssignSteamTestItem_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerCreateVehicleOverlayWidget
struct ASQPlayerController_ServerCreateVehicleOverlayWidget_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerCreateSquad
struct ASQPlayerController_ServerCreateSquad_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerCreateRallyPoint
struct ASQPlayerController_ServerCreateRallyPoint_Params
{
};

// Function Squad.SQPlayerController.ServerChat
struct ASQPlayerController_ServerChat_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            ChatType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerChangeSquadLock
struct ASQPlayerController_ServerChangeSquadLock_Params
{
	class ASQSquadState*                               Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerChangeRoleFromDeployable
struct ASQPlayerController_ServerChangeRoleFromDeployable_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerChangeRole
struct ASQPlayerController_ServerChangeRole_Params
{
	bool                                               bGivePartialAmmo;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeavingSquad;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ServerCancelRestartPlayer
struct ASQPlayerController_ServerCancelRestartPlayer_Params
{
};

// Function Squad.SQPlayerController.ServerAddApprovalEntry
struct ASQPlayerController_ServerAddApprovalEntry_Params
{
	struct FSQApprovalEntryRequest                     Entry;                                                     // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	EApprovalRequestChannels                           Filter;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.SelectSpawn
struct ASQPlayerController_SelectSpawn_Params
{
	class ASQGameSpawn*                                Spawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.Say
struct ASQPlayerController_Say_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.Respawn
struct ASQPlayerController_Respawn_Params
{
};

// Function Squad.SQPlayerController.RequestPlaceDeployable
struct ASQPlayerController_RequestPlaceDeployable_Params
{
};

// Function Squad.SQPlayerController.ProcessApprovalEntry
struct ASQPlayerController_ProcessApprovalEntry_Params
{
	unsigned char                                      Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.PrintWeaponHashes
struct ASQPlayerController_PrintWeaponHashes_Params
{
};

// Function Squad.SQPlayerController.PlayMusic
struct ASQPlayerController_PlayMusic_Params
{
};

// Function Squad.SQPlayerController.PlayEmoteAnim
struct ASQPlayerController_PlayEmoteAnim_Params
{
	ESQEmotes                                          Emote;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnSpawningEnabledStateChanged
struct ASQPlayerController_OnSpawningEnabledStateChanged_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnSelectedSpawnSiegedStateChanged
struct ASQPlayerController_OnSelectedSpawnSiegedStateChanged_Params
{
	bool                                               bSieged;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnSelectedSpawnerDestroyed
struct ASQPlayerController_OnSelectedSpawnerDestroyed_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnRep_TeamState
struct ASQPlayerController_OnRep_TeamState_Params
{
};

// Function Squad.SQPlayerController.OnRep_SquadState
struct ASQPlayerController_OnRep_SquadState_Params
{
	class ASQSquadState*                               OldSquadState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnRep_OutOfMapBoundsKillTimestamp
struct ASQPlayerController_OnRep_OutOfMapBoundsKillTimestamp_Params
{
};

// Function Squad.SQPlayerController.OnRep_CurrentSeat
struct ASQPlayerController_OnRep_CurrentSeat_Params
{
};

// Function Squad.SQPlayerController.OnReceiveChat
struct ASQPlayerController_OnReceiveChat_Params
{
	class ASQPlayerState*                              Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnOutOfMapBoundsChanged
struct ASQPlayerController_OnOutOfMapBoundsChanged_Params
{
	float                                              KillTimestamp;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOutOfBounds;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnFireWeaponOverride
struct ASQPlayerController_OnFireWeaponOverride_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnExitBoundary
struct ASQPlayerController_OnExitBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnEnterBoundary
struct ASQPlayerController_OnEnterBoundary_Params
{
	class USQBoundaryListener*                         Listener;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQBoundary*                                 Boundary;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.OnDelayedSpawnCallback
struct ASQPlayerController_OnDelayedSpawnCallback_Params
{
};

// Function Squad.SQPlayerController.OnAltFireWeaponOverride
struct ASQPlayerController_OnAltFireWeaponOverride_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.MuteSquad
struct ASQPlayerController_MuteSquad_Params
{
	class ASQSquadState*                               MuteSquadState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.MuteAllPlayersExceptSquad
struct ASQPlayerController_MuteAllPlayersExceptSquad_Params
{
};

// Function Squad.SQPlayerController.MovePlayerToFireTeam
struct ASQPlayerController_MovePlayerToFireTeam_Params
{
	class ASQPlayerState*                              TargetPlayerState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.LeaveSquad
struct ASQPlayerController_LeaveSquad_Params
{
};

// Function Squad.SQPlayerController.KickPlayerFromSquad
struct ASQPlayerController_KickPlayerFromSquad_Params
{
	class ASQPlayerState*                              ToKick;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.JoinSquadWithName
struct ASQPlayerController_JoinSquadWithName_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.JoinSquadWithId
struct ASQPlayerController_JoinSquadWithId_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsWeaponInputIgnored
struct ASQPlayerController_IsWeaponInputIgnored_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsUsingFreeLook
struct ASQPlayerController_IsUsingFreeLook_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsSquadLeader
struct ASQPlayerController_IsSquadLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsShowingSpawnMenu
struct ASQPlayerController_IsShowingSpawnMenu_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsRoamingMapOpen
struct ASQPlayerController_IsRoamingMapOpen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsQA
struct ASQPlayerController_IsQA_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsPlayer
struct ASQPlayerController_IsPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsOutOfMapBounds
struct ASQPlayerController_IsOutOfMapBounds_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsMember
struct ASQPlayerController_IsMember_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsInVehicle
struct ASQPlayerController_IsInVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsInactive
struct ASQPlayerController_IsInactive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsEntryMap
struct ASQPlayerController_IsEntryMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsDev
struct ASQPlayerController_IsDev_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsCommander
struct ASQPlayerController_IsCommander_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsCameraMan
struct ASQPlayerController_IsCameraMan_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsAdminCamera
struct ASQPlayerController_IsAdminCamera_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.IsAdmin
struct ASQPlayerController_IsAdmin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GiveUp
struct ASQPlayerController_GiveUp_Params
{
};

// Function Squad.SQPlayerController.GiveSquadLeader
struct ASQPlayerController_GiveSquadLeader_Params
{
	class ASQPlayerState*                              NewLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GiveFireTeamLeader
struct ASQPlayerController_GiveFireTeamLeader_Params
{
	class ASQPlayerState*                              NewLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetYawInputScale
struct ASQPlayerController_GetYawInputScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetTeam
struct ASQPlayerController_GetTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetSelectedSpawn
struct ASQPlayerController_GetSelectedSpawn_Params
{
	class ASQGameSpawn*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetPitchInputScale
struct ASQPlayerController_GetPitchInputScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetOutOfMapBoundsKillTimestamp
struct ASQPlayerController_GetOutOfMapBoundsKillTimestamp_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetLastDeathTime
struct ASQPlayerController_GetLastDeathTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetDeployRole
struct ASQPlayerController_GetDeployRole_Params
{
	class USQRoleSettings*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetCurrentVehicle
struct ASQPlayerController_GetCurrentVehicle_Params
{
	class ASQVehicle*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetCurrentSeatPawn
struct ASQPlayerController_GetCurrentSeatPawn_Params
{
	class ASQVehicleSeat*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetCurrentSeat
struct ASQPlayerController_GetCurrentSeat_Params
{
	class USQVehicleSeatComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.GetCurrentRole
struct ASQPlayerController_GetCurrentRole_Params
{
	class USQRoleSettings*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DisplayFailedDeployReason
struct ASQPlayerController_DisplayFailedDeployReason_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQInvalidPlacementReason                          Reason;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DisbandSquad
struct ASQPlayerController_DisbandSquad_Params
{
};

// Function Squad.SQPlayerController.DisbandFireTeam
struct ASQPlayerController_DisbandFireTeam_Params
{
	int                                                FireTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DisapproveQueue
struct ASQPlayerController_DisapproveQueue_Params
{
};

// Function Squad.SQPlayerController.DebugToggleForceNoCommanderCooldowns
struct ASQPlayerController_DebugToggleForceNoCommanderCooldowns_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DebugToggleForceAllowCommanderActions
struct ASQPlayerController_DebugToggleForceAllowCommanderActions_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DebugToggleCenterDot
struct ASQPlayerController_DebugToggleCenterDot_Params
{
};

// Function Squad.SQPlayerController.DebugSetServerTickRate
struct ASQPlayerController_DebugSetServerTickRate_Params
{
	float                                              NewTickRate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DebugSetServerSecondsNonSeamlessForced
struct ASQPlayerController_DebugSetServerSecondsNonSeamlessForced_Params
{
	float                                              Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DebugRemoveSteamTestItem
struct ASQPlayerController_DebugRemoveSteamTestItem_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.DebugForceOriginRebase
struct ASQPlayerController_DebugForceOriginRebase_Params
{
};

// Function Squad.SQPlayerController.DebugAssignSteamTestItem
struct ASQPlayerController_DebugAssignSteamTestItem_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.CreateSquad
struct ASQPlayerController_CreateSquad_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.CreateRallyPoint
struct ASQPlayerController_CreateRallyPoint_Params
{
};

// Function Squad.SQPlayerController.CreateMarker
struct ASQPlayerController_CreateMarker_Params
{
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeT;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MyOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.CoreStateRefreshVisibility
struct ASQPlayerController_CoreStateRefreshVisibility_Params
{
};

// Function Squad.SQPlayerController.CommitSpawn
struct ASQPlayerController_CommitSpawn_Params
{
};

// Function Squad.SQPlayerController.CloseConsole
struct ASQPlayerController_CloseConsole_Params
{
};

// Function Squad.SQPlayerController.ClientWasKickedFromSquad
struct ASQPlayerController_ClientWasKickedFromSquad_Params
{
	struct FText                                       KickReason;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                SquadId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationOfBan;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientSystemMessage
struct ASQPlayerController_ClientSystemMessage_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetime;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientStartSeatProgressBar
struct ASQPlayerController_ClientStartSeatProgressBar_Params
{
	float                                              Timer;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESeatProgressMenuMode                              MenuMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientStartOnlineGame
struct ASQPlayerController_ClientStartOnlineGame_Params
{
};

// Function Squad.SQPlayerController.ClientStartingNewPlayer
struct ASQPlayerController_ClientStartingNewPlayer_Params
{
};

// Function Squad.SQPlayerController.ClientShowVehicleInventory
struct ASQPlayerController_ClientShowVehicleInventory_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESeatProgressMenuMode                              MenuMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientShowToast
struct ASQPlayerController_ClientShowToast_Params
{
	struct FText                                       ToastText;                                                 // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientSetSpectatorCamera
struct ASQPlayerController_ClientSetSpectatorCamera_Params
{
	struct FVector                                     CameraLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CameraRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientSendRoundEndEvent
struct ASQPlayerController_ClientSendRoundEndEvent_Params
{
	int                                                WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LosingTeam;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinnerTickets;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoserTickets;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientSendLineToConsole
struct ASQPlayerController_ClientSendLineToConsole_Params
{
	struct FString                                     Line;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientResetInventoryWeaponIndex
struct ASQPlayerController_ClientResetInventoryWeaponIndex_Params
{
};

// Function Squad.SQPlayerController.ClientRemoveVehicleOverlayWidget
struct ASQPlayerController_ClientRemoveVehicleOverlayWidget_Params
{
};

// Function Squad.SQPlayerController.ClientPushApprovalMessage
struct ASQPlayerController_ClientPushApprovalMessage_Params
{
	uint32_t                                           Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApprovalMessage;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IconIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientOpenDeployableInteractableMenu
struct ASQPlayerController_ClientOpenDeployableInteractableMenu_Params
{
	class ASQDeployableInteractable*                   DeployableInteractable;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientOpenAmmoBag
struct ASQPlayerController_ClientOpenAmmoBag_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientOnPlayerToggleVoice_Editor
struct ASQPlayerController_ClientOnPlayerToggleVoice_Editor_Params
{
	struct FUniqueNetIdRepl                            TalkingPlayerId;                                           // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQVoiceChannel                                    VoiceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientNotifyPlayerWounded
struct ASQPlayerController_ClientNotifyPlayerWounded_Params
{
	class ASQPlayerController*                         WoundedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientNotifyPlayerDestroyedVehicle
struct ASQPlayerController_ClientNotifyPlayerDestroyedVehicle_Params
{
	class ASQVehicle*                                  Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientIgnoreWeaponInput
struct ASQPlayerController_ClientIgnoreWeaponInput_Params
{
	bool                                               bIgnore;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientHideVehicleRadial
struct ASQPlayerController_ClientHideVehicleRadial_Params
{
};

// Function Squad.SQPlayerController.ClientGameStarted
struct ASQPlayerController_ClientGameStarted_Params
{
};

// Function Squad.SQPlayerController.ClientEndOnlineGame
struct ASQPlayerController_ClientEndOnlineGame_Params
{
};

// Function Squad.SQPlayerController.ClientEndHealing
struct ASQPlayerController_ClientEndHealing_Params
{
};

// Function Squad.SQPlayerController.ClientCreateVehicleOverlayWidget
struct ASQPlayerController_ClientCreateVehicleOverlayWidget_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientCloseDeployableInteractableMenu
struct ASQPlayerController_ClientCloseDeployableInteractableMenu_Params
{
	class ASQDeployableInteractable*                   DeployableInteractable;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientCloseAmmoBag
struct ASQPlayerController_ClientCloseAmmoBag_Params
{
	class ASQDeployableAmmoBag*                        ammobag;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ClientChat
struct ASQPlayerController_ClientChat_Params
{
	class ASQPlayerState*                              Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQNotificationTypes                               NotificationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.CheckValidGhost
struct ASQPlayerController_CheckValidGhost_Params
{
};

// Function Squad.SQPlayerController.CheckForAdmin
struct ASQPlayerController_CheckForAdmin_Params
{
};

// Function Squad.SQPlayerController.ChatToTeam
struct ASQPlayerController_ChatToTeam_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ChatToSquad
struct ASQPlayerController_ChatToSquad_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ChatToAll
struct ASQPlayerController_ChatToAll_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.Chat
struct ASQPlayerController_Chat_Params
{
	struct FString                                     Msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQChat                                            ChatType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ChangeTeamsWithId
struct ASQPlayerController_ChangeTeamsWithId_Params
{
	int                                                NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ChangeTeams
struct ASQPlayerController_ChangeTeams_Params
{
};

// Function Squad.SQPlayerController.ChangeRoleFromDeployable
struct ASQPlayerController_ChangeRoleFromDeployable_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQDeployable*                               Deployable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ChangeRole
struct ASQPlayerController_ChangeRole_Params
{
	class USQRoleSettings*                             NewRole;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGivePartialAmmo;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeavingSquad;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.CancelGhost
struct ASQPlayerController_CancelGhost_Params
{
};

// Function Squad.SQPlayerController.BPTraceMarkerLocation
struct ASQPlayerController_BPTraceMarkerLocation_Params
{
	class UClass*                                      MarkerClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.BPServerRearmWeapons
struct ASQPlayerController_BPServerRearmWeapons_Params
{
	TScriptInterface<class USQRearmSource>             RearmSource;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSQRearmWeaponRequest>               RearmRequest;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.BPHasAccessLevel
struct ASQPlayerController_BPHasAccessLevel_Params
{
	ESQAdminAccessLevels                               RequestedLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.BlueprintPlayerSpawned
struct ASQPlayerController_BlueprintPlayerSpawned_Params
{
};

// Function Squad.SQPlayerController.BlueprintPlayerDied
struct ASQPlayerController_BlueprintPlayerDied_Params
{
};

// Function Squad.SQPlayerController.BlueprintOnMatchEnded
struct ASQPlayerController_BlueprintOnMatchEnded_Params
{
	int                                                WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LosingTeam;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinnerTickets;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoserTickets;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.BeginGhost
struct ASQPlayerController_BeginGhost_Params
{
	class UClass*                                      DeployableType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.AttempPlaceDeployable
struct ASQPlayerController_AttempPlaceDeployable_Params
{
};

// Function Squad.SQPlayerController.ApproveVehicleClaim
struct ASQPlayerController_ApproveVehicleClaim_Params
{
};

// Function Squad.SQPlayerController.ApproveQueue
struct ASQPlayerController_ApproveQueue_Params
{
};

// Function Squad.SQPlayerController.ApprovalEntryExpireOnServer
struct ASQPlayerController_ApprovalEntryExpireOnServer_Params
{
	uint32_t                                           Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQPlayerController.ApprovalEntryExpireOnClient
struct ASQPlayerController_ApprovalEntryExpireOnClient_Params
{
	uint32_t                                           Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASRuleset.LatticeUpdated
struct ASQAASRuleset_LatticeUpdated_Params
{
};

// Function Squad.SQUndirectedGraph.RemoveNode
struct ASQUndirectedGraph_RemoveNode_Params
{
	class USQGraphNodeComponent*                       Node;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUndirectedGraph.RemoveLink
struct ASQUndirectedGraph_RemoveLink_Params
{
	struct FSQGraphLink                                Link;                                                      // (Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUndirectedGraph.OnRep_Nodes
struct ASQUndirectedGraph_OnRep_Nodes_Params
{
};

// Function Squad.SQUndirectedGraph.GetNodes
struct ASQUndirectedGraph_GetNodes_Params
{
	TArray<class USQGraphNodeComponent*>               InOutNodes;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQUndirectedGraph.GetLinks
struct ASQUndirectedGraph_GetLinks_Params
{
	TArray<struct FSQGraphLink>                        InOutLinks;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQUndirectedGraph.ClearNodesAndLinks
struct ASQUndirectedGraph_ClearNodesAndLinks_Params
{
};

// Function Squad.SQUndirectedGraph.AddNode
struct ASQUndirectedGraph_AddNode_Params
{
	class USQGraphNodeComponent*                       Node;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQUndirectedGraph.AddLink
struct ASQUndirectedGraph_AddLink_Params
{
	struct FSQGraphLink                                Link;                                                      // (Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASGraph.RemoveSourceNode
struct ASQAASGraph_RemoveSourceNode_Params
{
	class USQGraphNodeComponent*                       Node;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASGraph.PostNodeOwnerChanged
struct ASQAASGraph_PostNodeOwnerChanged_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASGraph.GetTeamSourceNodes
struct ASQAASGraph_GetTeamSourceNodes_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQGraphNodeComponent*>               InOutNodes;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASGraph.GetSourceNodes
struct ASQAASGraph_GetSourceNodes_Params
{
	TArray<class USQGraphNodeComponent*>               InOutNodes;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Squad.SQAASGraph.AddSourceNode
struct ASQAASGraph_AddSourceNode_Params
{
	class USQGraphNodeComponent*                       Node;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.CoreSerializeItemSetCallbackProxy.SerializeItemSet
struct UCoreSerializeItemSetCallbackProxy_SerializeItemSet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlueprintOnlineItem>                Items;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UCoreSerializeItemSetCallbackProxy*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.CoreInventoryBlueprintLibrary.GetItemName
struct UCoreInventoryBlueprintLibrary_GetItemName_Params
{
	struct FBlueprintOnlineItem                        Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.CoreInventoryBlueprintLibrary.GetItemId
struct UCoreInventoryBlueprintLibrary_GetItemId_Params
{
	struct FBlueprintOnlineItem                        Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.CoreInventoryBlueprintLibrary.GetItemCount
struct UCoreInventoryBlueprintLibrary_GetItemCount_Params
{
	struct FBlueprintOnlineItem                        Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Squad.CoreGetAllItemsCallbackProxy.GetAllItems
struct UCoreGetAllItemsCallbackProxy_GetAllItems_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreGetAllItemsCallbackProxy*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
