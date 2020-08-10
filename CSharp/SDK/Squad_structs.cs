// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Squad.ESQAnimState
public enum ESQAnimState : byte
{
	ESQAnimState__Out              = 0,
	ESQAnimState__Entered          = 1,
	ESQAnimState__FullWeight       = 2,
	ESQAnimState__Left             = 3,
	ESQAnimState__ESQAnimState_MAX = 4
}

// Enum Squad.ESQDrivenDestinationMode
public enum ESQDrivenDestinationMode : byte
{
	ESQDrivenDestinationMode__Bone = 0,
	ESQDrivenDestinationMode__MorphTarget = 1,
	ESQDrivenDestinationMode__MaterialParameter = 2,
	ESQDrivenDestinationMode__ESQDrivenDestinationMode_MAX = 3
}

// Enum Squad.ESQDrivenBoneModificationMode
public enum ESQDrivenBoneModificationMode : byte
{
	ESQDrivenBoneModificationMode__AddToInput = 0,
	ESQDrivenBoneModificationMode__ReplaceComponent = 1,
	ESQDrivenBoneModificationMode__AddToRefPose = 2,
	ESQDrivenBoneModificationMode__ESQDrivenBoneModificationMode_MAX = 3
}

// Enum Squad.ESQComponentType
public enum ESQComponentType : byte
{
	ESQComponentType__None         = 0,
	ESQComponentType__TranslationX = 1,
	ESQComponentType__TranslationY = 2,
	ESQComponentType__TranslationZ = 3,
	ESQComponentType__RotationX    = 4,
	ESQComponentType__RotationY    = 5,
	ESQComponentType__RotationZ    = 6,
	ESQComponentType__Scale        = 7,
	ESQComponentType__ScaleX       = 8,
	ESQComponentType__ScaleY       = 9,
	ESQComponentType__ScaleZ       = 10,
	ESQComponentType__ESQComponentType_MAX = 11
}

// Enum Squad.EApprovalRequestChannels
public enum EApprovalRequestChannels : byte
{
	EApprovalRequestChannels__Undefined = 0,
	EApprovalRequestChannels__SquadLeader = 1,
	EApprovalRequestChannels__SinglePlayer = 2,
	EApprovalRequestChannels__EApprovalRequestChannels_MAX = 3
}

// Enum Squad.EApprovalRequestTypes
public enum EApprovalRequestTypes : byte
{
	EApprovalRequestTypes__Undefined = 0,
	EApprovalRequestTypes__VehicleClaim = 1,
	EApprovalRequestTypes__RequestToJoinSquad = 2,
	EApprovalRequestTypes__EApprovalRequestTypes_MAX = 3
}

// Enum Squad.ESQReturnBool
public enum ESQReturnBool : byte
{
	ESQReturnBool__IsTrue          = 0,
	ESQReturnBool__IsFalse         = 1,
	ESQReturnBool__ESQReturnBool_MAX = 2
}

// Enum Squad.ESQBuffTypes
public enum ESQBuffTypes : byte
{
	ESQBuffTypes__ProtectionZone   = 0,
	ESQBuffTypes__PendingDeath     = 1,
	ESQBuffTypes__NoFallDamage     = 2,
	ESQBuffTypes__StagingPhase     = 3,
	ESQBuffTypes__Max              = 4
}

// Enum Squad.ESQConsoleMessageType
public enum ESQConsoleMessageType : byte
{
	ESQConsoleMessageType__Normal  = 0,
	ESQConsoleMessageType__Warning = 1,
	ESQConsoleMessageType__Error   = 2,
	ESQConsoleMessageType__ESQConsoleMessageType_MAX = 3
}

// Enum Squad.ESQConsoleVariableViewerState
public enum ESQConsoleVariableViewerState : byte
{
	ESQConsoleVariableViewerState__None = 0,
	ESQConsoleVariableViewerState__Soldier = 1,
	ESQConsoleVariableViewerState__Driver = 2,
	ESQConsoleVariableViewerState__Passenger = 3,
	ESQConsoleVariableViewerState__Spectator = 4,
	ESQConsoleVariableViewerState__MAX = 5
}

// Enum Squad.ESQConsoleVariableRange
public enum ESQConsoleVariableRange : byte
{
	ESQConsoleVariableRange__Self  = 0,
	ESQConsoleVariableRange__Meters = 1,
	ESQConsoleVariableRange__Meters01 = 2,
	ESQConsoleVariableRange__Meters02 = 3,
	ESQConsoleVariableRange__Meters03 = 4,
	ESQConsoleVariableRange__Meters04 = 5,
	ESQConsoleVariableRange__Meters05 = 6,
	ESQConsoleVariableRange__Meters06 = 7,
	ESQConsoleVariableRange__Meters07 = 8,
	ESQConsoleVariableRange__Meters08 = 9,
	ESQConsoleVariableRange__Meters09 = 10,
	ESQConsoleVariableRange__Meters10 = 11,
	ESQConsoleVariableRange__Meters11 = 12,
	ESQConsoleVariableRange__Meters12 = 13,
	ESQConsoleVariableRange__MAX   = 14
}

// Enum Squad.EListLayout
public enum EListLayout : byte
{
	EListLayout__SquadList         = 0,
	EListLayout__RoleList          = 1,
	EListLayout__InviteList        = 2,
	EListLayout__EListLayout_MAX   = 3
}

// Enum Squad.ESQSelectionState
public enum ESQSelectionState : byte
{
	ESQSelectionState__None        = 0,
	ESQSelectionState__Highlighted = 1,
	ESQSelectionState__Selected    = 2,
	ESQSelectionState__ESQSelectionState_MAX = 3
}

// Enum Squad.EJoinButtonState
public enum EJoinButtonState : byte
{
	EJoinButtonState__None         = 0,
	EJoinButtonState__Join         = 1,
	EJoinButtonState__Full         = 2,
	EJoinButtonState__Locked       = 3,
	EJoinButtonState__EJoinButtonState_MAX = 4
}

// Enum Squad.ESQAuthorityTypes
public enum ESQAuthorityTypes : byte
{
	ESQAuthorityTypes__None        = 0,
	ESQAuthorityTypes__FireteamLeader = 1,
	ESQAuthorityTypes__SquadLeader = 2,
	ESQAuthorityTypes__Commander   = 3,
	ESQAuthorityTypes__ESQAuthorityTypes_MAX = 4
}

// Enum Squad.ESQAxis
public enum ESQAxis : byte
{
	ESQAxis__None                  = 0,
	ESQAxis__X                     = 1,
	ESQAxis__Y                     = 2,
	ESQAxis__Z                     = 3,
	ESQAxis__ESQAxis_MAX           = 4
}

// Enum Squad.EFreeLookMode
public enum EFreeLookMode : byte
{
	EFreeLookMode__NeverFreeLook   = 0,
	EFreeLookMode__ToggleFreeLook  = 1,
	EFreeLookMode__AlwaysFreeLook  = 2,
	EFreeLookMode__EFreeLookMode_MAX = 3
}

// Enum Squad.ESQSpawnPointType
public enum ESQSpawnPointType : byte
{
	ESQSpawnPointType__None        = 0,
	ESQSpawnPointType__BaseSpawn   = 1,
	ESQSpawnPointType__HABSpawn    = 2,
	ESQSpawnPointType__RallySpawn  = 3,
	ESQSpawnPointType__CacheSpawn  = 4,
	ESQSpawnPointType__ESQSpawnPointType_MAX = 5
}

// Enum Squad.ESQContestingState
public enum ESQContestingState : byte
{
	ESQContestingState__None       = 0,
	ESQContestingState__Attackable = 1,
	ESQContestingState__Defendable = 2,
	ESQContestingState__ESQContestingState_MAX = 3
}

// Enum Squad.ESQMoveSerializationMode
public enum ESQMoveSerializationMode : byte
{
	ESQMoveSerializationMode__OldMove = 0,
	ESQMoveSerializationMode__DualFirstMove = 1,
	ESQMoveSerializationMode__DualSecondMove = 2,
	ESQMoveSerializationMode__SingleMove = 3,
	ESQMoveSerializationMode__ESQMoveSerializationMode_MAX = 4
}

// Enum Squad.EClassRepNodeMapping
public enum EClassRepNodeMapping : byte
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__AllwaysRelevantTeamOnly = 2,
	EClassRepNodeMapping__Spatialize_Static = 3,
	EClassRepNodeMapping__Spatialize_Dynamic = 4,
	EClassRepNodeMapping__Spatialize_Dormancy = 5,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 6
}

// Enum Squad.ESQRotationMovementState
public enum ESQRotationMovementState : byte
{
	ESQRotationMovementState__Idle = 0,
	ESQRotationMovementState__Starting = 1,
	ESQRotationMovementState__Moving = 2,
	ESQRotationMovementState__Stopping = 3,
	ESQRotationMovementState__ESQRotationMovementState_MAX = 4
}

// Enum Squad.ESQRotorRunningState
public enum ESQRotorRunningState : byte
{
	ESQRotorRunningState__Accelerating = 0,
	ESQRotorRunningState__Idling   = 1,
	ESQRotorRunningState__Locked   = 2,
	ESQRotorRunningState__ESQRotorRunningState_MAX = 3
}

// Enum Squad.ESQRotorState
public enum ESQRotorState : byte
{
	ESQRotorState__None            = 0,
	ESQRotorState__Starting        = 1,
	ESQRotorState__Running         = 2,
	ESQRotorState__Stopping        = 3,
	ESQRotorState__Stopped         = 4,
	ESQRotorState__ESQRotorState_MAX = 5
}

// Enum Squad.ESQRotorType
public enum ESQRotorType : byte
{
	ESQRotorType__Main             = 0,
	ESQRotorType__Lateral          = 1,
	ESQRotorType__ESQRotorType_MAX = 2
}

// Enum Squad.ESQShockwaveEffectType
public enum ESQShockwaveEffectType : byte
{
	ESQShockwaveEffectType__Explosion = 0,
	ESQShockwaveEffectType__Blast  = 1,
	ESQShockwaveEffectType__ESQShockwaveEffectType_MAX = 2
}

// Enum Squad.ECustomMovementMode
public enum ECustomMovementMode : byte
{
	ECustomMovementMode__MOVE_Bipod = 0,
	ECustomMovementMode__MOVE_Climbing = 1,
	ECustomMovementMode__MOVE_MAX  = 2
}

// Enum Squad.ESQSoundNodeFlyByState
public enum ESQSoundNodeFlyByState : byte
{
	ESQSoundNodeFlyByState__Idle   = 0,
	ESQSoundNodeFlyByState__ComingTowardsNotPlaying = 1,
	ESQSoundNodeFlyByState__Playing = 2,
	ESQSoundNodeFlyByState__MovingAwayNotPlaying = 3,
	ESQSoundNodeFlyByState__ESQSoundNodeFlyByState_MAX = 4
}

// Enum Squad.EVehicleClaimCheckResults
public enum EVehicleClaimCheckResults : byte
{
	EVehicleClaimCheckResults__OK  = 0,
	EVehicleClaimCheckResults__NullPtr = 1,
	EVehicleClaimCheckResults__EmptyRole = 2,
	EVehicleClaimCheckResults__EVehicleClaimCheckResults_MAX = 3
}

// Enum Squad.ESquadMemberUIAction
public enum ESquadMemberUIAction : byte
{
	ESquadMemberUIAction__MenuOpen = 0,
	ESquadMemberUIAction__PromoteToSL = 1,
	ESquadMemberUIAction__Kick     = 2,
	ESquadMemberUIAction__SLInvite = 3,
	ESquadMemberUIAction__ESquadMemberUIAction_MAX = 4
}

// Enum Squad.ESquadMemberUIViewMode
public enum ESquadMemberUIViewMode : byte
{
	ESquadMemberUIViewMode__SquadMembers = 0,
	ESquadMemberUIViewMode__UnassignedMembers = 1,
	ESquadMemberUIViewMode__ESquadMemberUIViewMode_MAX = 2
}

// Enum Squad.ESeatProgressMenuMode
public enum ESeatProgressMenuMode : byte
{
	ESeatProgressMenuMode__InventoryOnly = 0,
	ESeatProgressMenuMode__Entering = 1,
	ESeatProgressMenuMode__Switching = 2,
	ESeatProgressMenuMode__Exiting = 3,
	ESeatProgressMenuMode__ESeatProgressMenuMode_MAX = 4
}

// Enum Squad.ESQVehicleClaimStatus
public enum ESQVehicleClaimStatus : byte
{
	ESQVehicleClaimStatus__Active  = 0,
	ESQVehicleClaimStatus__DroppedOff = 1,
	ESQVehicleClaimStatus__Abandoned = 2,
	ESQVehicleClaimStatus__Destroyed = 3,
	ESQVehicleClaimStatus__ESQVehicleClaimStatus_MAX = 4
}

// Enum Squad.ESQInventoryModificationType
public enum ESQInventoryModificationType : byte
{
	ESQInventoryModificationType__AddToInventory = 0,
	ESQInventoryModificationType__RemoveFromInventory = 1,
	ESQInventoryModificationType__UpdateInventory = 2,
	ESQInventoryModificationType__ESQInventoryModificationType_MAX = 3
}

// Enum Squad.EWeaponType
public enum EWeaponType : byte
{
	EWeaponType__Backpack          = 0,
	EWeaponType__Primary           = 1,
	EWeaponType__Secondary         = 2,
	EWeaponType__Special           = 3,
	EWeaponType__EWeaponType_MAX   = 4
}

// Enum Squad.ESQCreditsLineType
public enum ESQCreditsLineType : byte
{
	ESQCreditsLineType__None       = 0,
	ESQCreditsLineType__Header     = 1,
	ESQCreditsLineType__LineBreak  = 2,
	ESQCreditsLineType__Names      = 3,
	ESQCreditsLineType__ESQCreditsLineType_MAX = 4
}

// Enum Squad.ESQKillReportChannel
public enum ESQKillReportChannel : byte
{
	ESQKillReportChannel__None     = 0,
	ESQKillReportChannel__Admin    = 1,
	ESQKillReportChannel__Team     = 2,
	ESQKillReportChannel__TeamAndAdmin = 3,
	ESQKillReportChannel__Public   = 4,
	ESQKillReportChannel__ESQKillReportChannel_MAX = 5
}

// Enum Squad.ESQRepairSource
public enum ESQRepairSource : byte
{
	ESQRepairSource__REPAIR_STATION = 0,
	ESQRepairSource__REPAIR_TOOL   = 1,
	ESQRepairSource__REPAIR_MAX    = 2
}

// Enum Squad.ESQSpawnInventoryReason
public enum ESQSpawnInventoryReason : byte
{
	ESQSpawnInventoryReason__SpawningIn = 0,
	ESQSpawnInventoryReason__SwappingRoles = 1,
	ESQSpawnInventoryReason__SwappingRolesPartialAmmo = 2,
	ESQSpawnInventoryReason__ESQSpawnInventoryReason_MAX = 3
}

// Enum Squad.ESQSoldierRagdollReason
public enum ESQSoldierRagdollReason : byte
{
	ESQSoldierRagdollReason__NotInRagdoll = 0,
	ESQSoldierRagdollReason__NotReplicated = 1,
	ESQSoldierRagdollReason__Replicated = 2,
	ESQSoldierRagdollReason__ReplicatedAutoGetUp = 3,
	ESQSoldierRagdollReason__ESQSoldierRagdollReason_MAX = 4
}

// Enum Squad.ESQVehicleRoleAbility
public enum ESQVehicleRoleAbility : byte
{
	ESQVehicleRoleAbility__LightVehicle = 0,
	ESQVehicleRoleAbility__HeavyVehicle = 1,
	ESQVehicleRoleAbility__FlyingVehicle = 2,
	ESQVehicleRoleAbility__ESQVehicleRoleAbility_MAX = 3
}

// Enum Squad.ESQRearmType
public enum ESQRearmType : byte
{
	ESQRearmType__MainOrEnvironment = 0,
	ESQRearmType__ForwardBase      = 1,
	ESQRearmType__Vehicle          = 2,
	ESQRearmType__AmmoBag          = 3,
	ESQRearmType__ESQRearmType_MAX = 4
}

// Enum Squad.ESQGrenadeState
public enum ESQGrenadeState : byte
{
	ESQGrenadeState__Idle          = 0,
	ESQGrenadeState__PreparingOverhandThrow = 1,
	ESQGrenadeState__PreparingUnderhandThrow = 2,
	ESQGrenadeState__ThrowingOverhand = 3,
	ESQGrenadeState__ThrowingUnderhand = 4,
	ESQGrenadeState__Reloading     = 5,
	ESQGrenadeState__ESQGrenadeState_MAX = 6
}

// Enum Squad.ESQEquippableState
public enum ESQEquippableState : byte
{
	ESQEquippableState__None       = 0,
	ESQEquippableState__Unequipped = 1,
	ESQEquippableState__Equipping  = 2,
	ESQEquippableState__Equipped   = 3,
	ESQEquippableState__Unequipping = 4,
	ESQEquippableState__ESQEquippableState_MAX = 5
}

// Enum Squad.ESQVehicleDifferential4W
public enum ESQVehicleDifferential4W : byte
{
	ESQVehicleDifferential4W__LimitedSlip_4W = 0,
	ESQVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	ESQVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	ESQVehicleDifferential4W__Open_4W = 3,
	ESQVehicleDifferential4W__Open_FrontDrive = 4,
	ESQVehicleDifferential4W__Open_RearDrive = 5,
	ESQVehicleDifferential4W__ESQVehicleDifferential4W_MAX = 6
}

// Enum Squad.ESQDeadState
public enum ESQDeadState : byte
{
	ESQDeadState__GameNotStarted   = 0,
	ESQDeadState__SpawningIn       = 1,
	ESQDeadState__SelectingSpawn   = 2,
	ESQDeadState__SelectingRole    = 3,
	ESQDeadState__WaitingToSpawn   = 4,
	ESQDeadState__InCap            = 5,
	ESQDeadState__ESQDeadState_MAX = 6
}

// Enum Squad.ESQTileCount
public enum ESQTileCount : byte
{
	ESQTileCount__COUNT            = 0,
	ESQTileCount__COUNT01          = 1,
	ESQTileCount__COUNT02          = 2,
	ESQTileCount__COUNT03          = 3,
	ESQTileCount__COUNT04          = 4,
	ESQTileCount__COUNT05          = 5,
	ESQTileCount__COUNT_MAX        = 6
}

// Enum Squad.ESQTileResolution
public enum ESQTileResolution : byte
{
	ESQTileResolution__SIZE        = 0,
	ESQTileResolution__SIZE01      = 1,
	ESQTileResolution__SIZE02      = 2,
	ESQTileResolution__SIZE03      = 3,
	ESQTileResolution__SIZE_MAX    = 4
}

// Enum Squad.ESQSoldierLeanDirection
public enum ESQSoldierLeanDirection : byte
{
	ESQSoldierLeanDirection__LeftLean = 0,
	ESQSoldierLeanDirection__NoLean = 1,
	ESQSoldierLeanDirection__RightLean = 2,
	ESQSoldierLeanDirection__ESQSoldierLeanDirection_MAX = 3
}

// Enum Squad.ESQFOBRallyPointDisplayMode
public enum ESQFOBRallyPointDisplayMode : byte
{
	ESQFOBRallyPointDisplayMode__None = 0,
	ESQFOBRallyPointDisplayMode__FOB = 1,
	ESQFOBRallyPointDisplayMode__RallyPoint = 2,
	ESQFOBRallyPointDisplayMode__Both = 3,
	ESQFOBRallyPointDisplayMode__ESQFOBRallyPointDisplayMode_MAX = 4
}

// Enum Squad.ESQHUDView
public enum ESQHUDView : byte
{
	ESQHUDView__None               = 0,
	ESQHUDView__AllPawns           = 1,
	ESQHUDView__SameTeam           = 2,
	ESQHUDView__OnlyEnemy          = 3,
	ESQHUDView__ESQHUDView_MAX     = 4
}

// Enum Squad.ESQCameraMode
public enum ESQCameraMode : byte
{
	ESQCameraMode__FlySpeed        = 0,
	ESQCameraMode__Deceleration    = 1,
	ESQCameraMode__FOV             = 2,
	ESQCameraMode__ESQCameraMode_MAX = 3
}

// Enum Squad.ESQExplosiveType
public enum ESQExplosiveType : byte
{
	ESQExplosiveType__None         = 0,
	ESQExplosiveType__RemoteExplosive = 1,
	ESQExplosiveType__Mine         = 2,
	ESQExplosiveType__ESQExplosiveType_MAX = 3
}

// Enum Squad.ESQDeployableSize
public enum ESQDeployableSize : byte
{
	ESQDeployableSize__Very_Small  = 0,
	ESQDeployableSize__Small       = 1,
	ESQDeployableSize__Medium      = 2,
	ESQDeployableSize__Large       = 3,
	ESQDeployableSize__Very_Large  = 4,
	ESQDeployableSize__ESQDeployableSize_MAX = 5
}

// Enum Squad.ESQInvalidPlacementReason
public enum ESQInvalidPlacementReason : byte
{
	ESQInvalidPlacementReason__NOREASONGIVEN = 0,
	ESQInvalidPlacementReason__VALID = 1,
	ESQInvalidPlacementReason__BAD_GROUND = 2,
	ESQInvalidPlacementReason__NO_FOB = 3,
	ESQInvalidPlacementReason__IN_FOB = 4,
	ESQInvalidPlacementReason__NOT_FRIENDLY_FOB = 5,
	ESQInvalidPlacementReason__NO_RESOURCES = 6,
	ESQInvalidPlacementReason__OVERLAP = 7,
	ESQInvalidPlacementReason__NO_DEPLOY_ZONE = 8,
	ESQInvalidPlacementReason__EXCLUSION_ZONE = 9,
	ESQInvalidPlacementReason__CUSTOM1 = 10,
	ESQInvalidPlacementReason__CUSTOM2 = 11,
	ESQInvalidPlacementReason__CUSTOM3 = 12,
	ESQInvalidPlacementReason__CUSTOM4 = 13,
	ESQInvalidPlacementReason__ExtraPlacementRules = 14,
	ESQInvalidPlacementReason__MAX_DEPLOY_TYPE_REACHED = 15,
	ESQInvalidPlacementReason__TrackedDeployableLimitation = 16,
	ESQInvalidPlacementReason__ESQInvalidPlacementReason_MAX = 17
}

// Enum Squad.ESQRandomizeMapRotation
public enum ESQRandomizeMapRotation : byte
{
	ESQRandomizeMapRotation__Always = 0,
	ESQRandomizeMapRotation__FirstMap = 1,
	ESQRandomizeMapRotation__None  = 2,
	ESQRandomizeMapRotation__ESQRandomizeMapRotation_MAX = 3
}

// Enum Squad.ESQWeaponAnimType
public enum ESQWeaponAnimType : byte
{
	ESQWeaponAnimType__Rifle       = 0,
	ESQWeaponAnimType__Grenade     = 1,
	ESQWeaponAnimType__Equippable  = 2,
	ESQWeaponAnimType__ESQWeaponAnimType_MAX = 3
}

// Enum Squad.ESQEquippableActionState
public enum ESQEquippableActionState : byte
{
	ESQEquippableActionState__Idle = 0,
	ESQEquippableActionState__Use  = 1,
	ESQEquippableActionState__AltUse = 2,
	ESQEquippableActionState__Custom1 = 3,
	ESQEquippableActionState__Custom2 = 4,
	ESQEquippableActionState__Custom3 = 5,
	ESQEquippableActionState__PreUse = 6,
	ESQEquippableActionState__PostUse = 7,
	ESQEquippableActionState__PreAltUse = 8,
	ESQEquippableActionState__PostAltUse = 9,
	ESQEquippableActionState__ESQEquippableActionState_MAX = 10
}

// Enum Squad.ESQWeaponState
public enum ESQWeaponState : byte
{
	ESQWeaponState__Idle           = 0,
	ESQWeaponState__Firing         = 1,
	ESQWeaponState__Reloading      = 2,
	ESQWeaponState__Melee          = 3,
	ESQWeaponState__ProcessingAttachment = 4,
	ESQWeaponState__ESQWeaponState_MAX = 5
}

// Enum Squad.ESQHitDetectionFailReason
public enum ESQHitDetectionFailReason : byte
{
	ESQHitDetectionFailReason__None = 0,
	ESQHitDetectionFailReason__NoAmmo = 1,
	ESQHitDetectionFailReason__NoOwner = 2,
	ESQHitDetectionFailReason__NoShot = 3,
	ESQHitDetectionFailReason__InvalidViewAngle = 4,
	ESQHitDetectionFailReason__Blocked = 5,
	ESQHitDetectionFailReason__Reloading = 6,
	ESQHitDetectionFailReason__Sprinting = 7,
	ESQHitDetectionFailReason__UnableToFire = 8,
	ESQHitDetectionFailReason__ESQHitDetectionFailReason_MAX = 9
}

// Enum Squad.ESQReadyToEndMatch
public enum ESQReadyToEndMatch : byte
{
	ESQReadyToEndMatch__Unhandled  = 0,
	ESQReadyToEndMatch__ReadyToEndMatch = 1,
	ESQReadyToEndMatch__DoNotEndMatch = 2,
	ESQReadyToEndMatch__ESQReadyToEndMatch_MAX = 3
}

// Enum Squad.ESQRoleTypeEnum
public enum ESQRoleTypeEnum : byte
{
	ESQRoleTypeEnum__RoleType_Standard = 0,
	ESQRoleTypeEnum__RoleType_Specialist = 1,
	ESQRoleTypeEnum__RoleType_Support = 2,
	ESQRoleTypeEnum__RoleType_FireSupport = 3,
	ESQRoleTypeEnum__RoleType_MAX  = 4
}

// Enum Squad.ESQDialogType
public enum ESQDialogType : byte
{
	ESQDialogType__None            = 0,
	ESQDialogType__Generic         = 1,
	ESQDialogType__ControllerDisconnected = 2,
	ESQDialogType__ESQDialogType_MAX = 3
}

// Enum Squad.ESQRadialWidgetSizeEnum
public enum ESQRadialWidgetSizeEnum : byte
{
	ESQRadialWidgetSizeEnum__Small = 0,
	ESQRadialWidgetSizeEnum__Medium = 1,
	ESQRadialWidgetSizeEnum__Large = 2,
	ESQRadialWidgetSizeEnum__ESQRadialWidgetSizeEnum_MAX = 3
}

// Enum Squad.ESQHudPosition
public enum ESQHudPosition : byte
{
	ESQHudPosition__Left           = 0,
	ESQHudPosition__FrontLeft      = 1,
	ESQHudPosition__Front          = 2,
	ESQHudPosition__FrontRight     = 3,
	ESQHudPosition__Right          = 4,
	ESQHudPosition__BackRight      = 5,
	ESQHudPosition__Back           = 6,
	ESQHudPosition__BackLeft       = 7,
	ESQHudPosition__ESQHudPosition_MAX = 8
}

// Enum Squad.ESQCrosshairDirection
public enum ESQCrosshairDirection : byte
{
	ESQCrosshairDirection__Left    = 0,
	ESQCrosshairDirection__Right   = 1,
	ESQCrosshairDirection__Top     = 2,
	ESQCrosshairDirection__Bottom  = 3,
	ESQCrosshairDirection__Center  = 4,
	ESQCrosshairDirection__ESQCrosshairDirection_MAX = 5
}

// Enum Squad.ESQAudioVolumeType
public enum ESQAudioVolumeType : byte
{
	ESQAudioVolumeType__Default    = 0,
	ESQAudioVolumeType__FieldOpen  = 1,
	ESQAudioVolumeType__FieldClosed = 2,
	ESQAudioVolumeType__Valley     = 3,
	ESQAudioVolumeType__ForestLarge = 4,
	ESQAudioVolumeType__ForestSmall = 5,
	ESQAudioVolumeType__UrbanLarge = 6,
	ESQAudioVolumeType__UrbanSmall = 7,
	ESQAudioVolumeType__RoomLarge  = 8,
	ESQAudioVolumeType__RoomMedium = 9,
	ESQAudioVolumeType__RoomSmall  = 10,
	ESQAudioVolumeType__RoomHollowLarge = 11,
	ESQAudioVolumeType__RoomHollowMedium = 12,
	ESQAudioVolumeType__RoomHollowSmall = 13,
	ESQAudioVolumeType__ESQAudioVolumeType_MAX = 14
}

// Enum Squad.ESQLeftSquadWeaponBehaviour
public enum ESQLeftSquadWeaponBehaviour : byte
{
	ESQLeftSquadWeaponBehaviour__DoNotKeep = 0,
	ESQLeftSquadWeaponBehaviour__KeepWithMagsAndLoadedAmmo = 1,
	ESQLeftSquadWeaponBehaviour__KeepWithOnlyLoadedAmmo = 2,
	ESQLeftSquadWeaponBehaviour__OverWriteMagsAndKeepLoadedAmmo = 3,
	ESQLeftSquadWeaponBehaviour__OverWriteWithOnlyLoadedAmmo = 4,
	ESQLeftSquadWeaponBehaviour__ESQLeftSquadWeaponBehaviour_MAX = 5
}

// Enum Squad.ESQAdminAccessLevels
public enum ESQAdminAccessLevels : byte
{
	ESQAdminAccessLevels__Level_Public = 0,
	ESQAdminAccessLevels__Level_StartVote = 1,
	ESQAdminAccessLevels__Level_ChangeMap = 2,
	ESQAdminAccessLevels__Level_Pause = 3,
	ESQAdminAccessLevels__Level_Cheat = 4,
	ESQAdminAccessLevels__Level_Private = 5,
	ESQAdminAccessLevels__Level_Balance = 6,
	ESQAdminAccessLevels__Level_Chat = 7,
	ESQAdminAccessLevels__Level_Mute = 8,
	ESQAdminAccessLevels__Level_Kick = 9,
	ESQAdminAccessLevels__Level_Ban = 10,
	ESQAdminAccessLevels__Level_Config = 11,
	ESQAdminAccessLevels__Level_Immune = 12,
	ESQAdminAccessLevels__Level_Server = 13,
	ESQAdminAccessLevels__Level_CameraMan = 14,
	ESQAdminAccessLevels__Level_Add = 15,
	ESQAdminAccessLevels__Level_FeatureTest = 16,
	ESQAdminAccessLevels__Level_Debug = 17,
	ESQAdminAccessLevels__Level_Demos = 18,
	ESQAdminAccessLevels__Level_Reserve = 19,
	ESQAdminAccessLevels__Level_TeamChange = 20,
	ESQAdminAccessLevels__Level_Developer = 21,
	ESQAdminAccessLevels__Level_ForceTeamChange = 22,
	ESQAdminAccessLevels__Level_CanSeeAdminChat = 23,
	ESQAdminAccessLevels__Level_QA = 24,
	ESQAdminAccessLevels__Level_MAX = 25
}

// Enum Squad.ESQSortStates
public enum ESQSortStates : byte
{
	ESQSortStates__Unsorted        = 0,
	ESQSortStates__Ascending       = 1,
	ESQSortStates__Descending      = 2,
	ESQSortStates__ESQSortStates_MAX = 3
}

// Enum Squad.ESQSortLevels
public enum ESQSortLevels : byte
{
	ESQSortLevels__ServerName      = 0,
	ESQSortLevels__MapName         = 1,
	ESQSortLevels__GameMode        = 2,
	ESQSortLevels__Ping            = 3,
	ESQSortLevels__NumPlayers      = 4,
	ESQSortLevels__ESQSortLevels_MAX = 5
}

// Enum Squad.ESQTrackDeployableResult
public enum ESQTrackDeployableResult : byte
{
	ESQTrackDeployableResult__Allow = 0,
	ESQTrackDeployableResult__AllowButRemoveAllOthers = 1,
	ESQTrackDeployableResult__AllowButRemoveFirst = 2,
	ESQTrackDeployableResult__AllowButRemoveLast = 3,
	ESQTrackDeployableResult__DoNotAllow = 4,
	ESQTrackDeployableResult__ESQTrackDeployableResult_MAX = 5
}

// Enum Squad.ESQVehicleType
public enum ESQVehicleType : byte
{
	ESQVehicleType__None           = 0,
	ESQVehicleType__Motorcycle     = 1,
	ESQVehicleType__Jeep           = 2,
	ESQVehicleType__JeepTransport  = 3,
	ESQVehicleType__JeepLogistics  = 4,
	ESQVehicleType__JeepAntiTank   = 5,
	ESQVehicleType__JeepArtillery  = 6,
	ESQVehicleType__TruckTransport = 7,
	ESQVehicleType__TruckLogistics = 8,
	ESQVehicleType__TruckAntiAir   = 9,
	ESQVehicleType__APC            = 10,
	ESQVehicleType__APCTracked     = 11,
	ESQVehicleType__AntiAirTracked = 12,
	ESQVehicleType__IFV            = 13,
	ESQVehicleType__IFVTracked     = 14,
	ESQVehicleType__Tank           = 15,
	ESQVehicleType__HelicopterTransport = 16,
	ESQVehicleType__HelicopterAttack = 17,
	ESQVehicleType__Boat           = 18,
	ESQVehicleType__MAX            = 19
}

// Enum Squad.ESQVehicleComponentStates
public enum ESQVehicleComponentStates : byte
{
	ESQVehicleComponentStates__FullyRepaired = 0,
	ESQVehicleComponentStates__RepairedFromDestruction = 1,
	ESQVehicleComponentStates__Destroyed = 2,
	ESQVehicleComponentStates__ESQVehicleComponentStates_MAX = 3
}

// Enum Squad.ESQTeamType
public enum ESQTeamType : byte
{
	ESQTeamType__Attacker          = 0,
	ESQTeamType__Defender          = 1,
	ESQTeamType__ESQTeamType_MAX   = 2
}

// Enum Squad.ESQBuildState
public enum ESQBuildState : byte
{
	ESQBuildState__Completed       = 0,
	ESQBuildState__HalfBuilt       = 1,
	ESQBuildState__Unbuilt         = 2,
	ESQBuildState__ESQBuildState_MAX = 3
}

// Enum Squad.ESQSoldierSeatState
public enum ESQSoldierSeatState : byte
{
	ESQSoldierSeatState__Locked    = 0,
	ESQSoldierSeatState__LockedWithWeapon = 1,
	ESQSoldierSeatState__Hidden    = 2,
	ESQSoldierSeatState__None      = 3,
	ESQSoldierSeatState__ESQSoldierSeatState_MAX = 4
}

// Enum Squad.ESQListenerType
public enum ESQListenerType : byte
{
	ESQListenerType__Default       = 0,
	ESQListenerType__Soldier       = 1,
	ESQListenerType__TurretOpenAir = 2,
	ESQListenerType__TurretLight   = 3,
	ESQListenerType__TurretHeavy   = 4,
	ESQListenerType__TurretArmored = 5,
	ESQListenerType__VehicleOpenAir = 6,
	ESQListenerType__VehicleLight  = 7,
	ESQListenerType__VehicleHeavy  = 8,
	ESQListenerType__VehicleArmored = 9,
	ESQListenerType__ESQListenerType_MAX = 10
}

// Enum Squad.ESQInteractVisibility
public enum ESQInteractVisibility : byte
{
	ESQInteractVisibility__Invisible = 0,
	ESQInteractVisibility__Team    = 1,
	ESQInteractVisibility__AlwaysVisible = 2,
	ESQInteractVisibility__ESQInteractVisibility_MAX = 3
}

// Enum Squad.ESQEmotes
public enum ESQEmotes : byte
{
	ESQEmotes__None                = 0,
	ESQEmotes__HandSignalAttack    = 1,
	ESQEmotes__HandSignalBuild     = 2,
	ESQEmotes__HandSignalDefend    = 3,
	ESQEmotes__HandSignalMove      = 4,
	ESQEmotes__HandSignalRally     = 5,
	ESQEmotes__HandSignalObserve   = 6,
	ESQEmotes__HandActionRearm     = 7,
	ESQEmotes__HandActionLoadup    = 8,
	ESQEmotes__HandActionUnload    = 9,
	ESQEmotes__MAX_Visible         = 10,
	ESQEmotes__Custom              = 11,
	ESQEmotes__MAX                 = 12
}

// Enum Squad.EClimbState
public enum EClimbState : byte
{
	EClimbState__Interpolating     = 0,
	EClimbState__RequiredOutro     = 1,
	EClimbState__Outro             = 2,
	EClimbState__End               = 3,
	EClimbState__None              = 4,
	EClimbState__EClimbState_MAX   = 5
}

// Enum Squad.EClimbType
public enum EClimbType : byte
{
	EClimbType__None               = 0,
	EClimbType__OverLow            = 1,
	EClimbType__OverMid            = 2,
	EClimbType__OntoLow            = 3,
	EClimbType__OntoMid            = 4,
	EClimbType__OntoHigh           = 5,
	EClimbType__MAX                = 6
}

// Enum Squad.ESQTeam
public enum ESQTeam : byte
{
	ESQTeam__Team_Neutral          = 0,
	ESQTeam__Team_One              = 1,
	ESQTeam__Team_Two              = 2,
	ESQTeam__Team_MAX              = 3
}

// Enum Squad.ESQCommandOptionState
public enum ESQCommandOptionState : byte
{
	ESQCommandOptionState__Ready   = 0,
	ESQCommandOptionState__Enroute = 1,
	ESQCommandOptionState__Active  = 2,
	ESQCommandOptionState__Cooldown = 3,
	ESQCommandOptionState__None    = 4,
	ESQCommandOptionState__ESQCommandOptionState_MAX = 5
}

// Enum Squad.ESQNotificationTypes
public enum ESQNotificationTypes : byte
{
	ESQNotificationTypes__None     = 0,
	ESQNotificationTypes__Error    = 1,
	ESQNotificationTypes__Warning  = 2,
	ESQNotificationTypes__Message  = 3,
	ESQNotificationTypes__Negative = 4,
	ESQNotificationTypes__Positive = 5,
	ESQNotificationTypes__Commander = 6,
	ESQNotificationTypes__Team     = 7,
	ESQNotificationTypes__Squad    = 8,
	ESQNotificationTypes__Fireteam = 9,
	ESQNotificationTypes__GameMode = 10,
	ESQNotificationTypes__MAX      = 11
}

// Enum Squad.ESQChat
public enum ESQChat : byte
{
	ESQChat__Unknown               = 0,
	ESQChat__All                   = 1,
	ESQChat__Team                  = 2,
	ESQChat__Squad                 = 3,
	ESQChat__GameNotification      = 4,
	ESQChat__GameNotificationTeam  = 5,
	ESQChat__GameChat              = 6,
	ESQChat__AdminBroadcast        = 7,
	ESQChat__AdminChat             = 8,
	ESQChat__AdminNotification     = 9,
	ESQChat__PlayerNotification    = 10,
	ESQChat__ServerMessage         = 11,
	ESQChat__System                = 12,
	ESQChat__ESQChat_MAX           = 13
}

// Enum Squad.ESQTextVerticalAlignment
public enum ESQTextVerticalAlignment : byte
{
	ESQTextVerticalAlignment__Top  = 0,
	ESQTextVerticalAlignment__Center = 1,
	ESQTextVerticalAlignment__Bottom = 2,
	ESQTextVerticalAlignment__ESQTextVerticalAlignment_MAX = 3
}

// Enum Squad.ESQTextHorizontalAlignment
public enum ESQTextHorizontalAlignment : byte
{
	ESQTextHorizontalAlignment__Left = 0,
	ESQTextHorizontalAlignment__Center = 1,
	ESQTextHorizontalAlignment__Right = 2,
	ESQTextHorizontalAlignment__ESQTextHorizontalAlignment_MAX = 3
}

// Enum Squad.ESQMapItemDrawMode
public enum ESQMapItemDrawMode : byte
{
	ESQMapItemDrawMode__ZoomedOut  = 0,
	ESQMapItemDrawMode__ZoomedIn   = 1,
	ESQMapItemDrawMode__Absolute   = 2,
	ESQMapItemDrawMode__Meters     = 3,
	ESQMapItemDrawMode__ESQMapItemDrawMode_MAX = 4
}

// Enum Squad.ESQMapItemType
public enum ESQMapItemType : byte
{
	ESQMapItemType__Map            = 0,
	ESQMapItemType__Default        = 1,
	ESQMapItemType__Player         = 2,
	ESQMapItemType__Spawn          = 3,
	ESQMapItemType__LocalPlayer    = 4,
	ESQMapItemType__Gameplay       = 5,
	ESQMapItemType__ESQMapItemType_MAX = 6
}

// Enum Squad.ESQMapMarkerVisibleTo
public enum ESQMapMarkerVisibleTo : byte
{
	ESQMapMarkerVisibleTo__None    = 0,
	ESQMapMarkerVisibleTo__All     = 1,
	ESQMapMarkerVisibleTo__Team    = 2,
	ESQMapMarkerVisibleTo__Squad   = 3,
	ESQMapMarkerVisibleTo__FireTeam = 4,
	ESQMapMarkerVisibleTo__Self    = 5,
	ESQMapMarkerVisibleTo__FireTeamLeader = 6,
	ESQMapMarkerVisibleTo__SquadLeader = 7,
	ESQMapMarkerVisibleTo__SquadAndSLs = 8,
	ESQMapMarkerVisibleTo__Commander = 9,
	ESQMapMarkerVisibleTo__Admin   = 10,
	ESQMapMarkerVisibleTo__ESQMapMarkerVisibleTo_MAX = 11
}

// Enum Squad.ESQMapWidgetTint
public enum ESQMapWidgetTint : byte
{
	ESQMapWidgetTint__Neutral      = 0,
	ESQMapWidgetTint__Self         = 1,
	ESQMapWidgetTint__Squad        = 2,
	ESQMapWidgetTint__Team         = 3,
	ESQMapWidgetTint__SquadLeader  = 4,
	ESQMapWidgetTint__AllCommand   = 5,
	ESQMapWidgetTint__Enemy        = 6,
	ESQMapWidgetTint__FireTeam     = 7,
	ESQMapWidgetTint__MAX          = 8
}

// Enum Squad.ESQMapMarkerType
public enum ESQMapMarkerType : byte
{
	ESQMapMarkerType__Action       = 0,
	ESQMapMarkerType__Spot         = 1,
	ESQMapMarkerType__POI          = 2,
	ESQMapMarkerType__Fireteam     = 3,
	ESQMapMarkerType__Request      = 4,
	ESQMapMarkerType__Arrow        = 5,
	ESQMapMarkerType__Frontline    = 6,
	ESQMapMarkerType__CommanderOrder = 7,
	ESQMapMarkerType__MAX          = 8
}

// Enum Squad.ESQMapIconSelectionGroup
public enum ESQMapIconSelectionGroup : byte
{
	ESQMapIconSelectionGroup__None = 0,
	ESQMapIconSelectionGroup__Spawns = 1,
	ESQMapIconSelectionGroup__Players = 2,
	ESQMapIconSelectionGroup__ESQMapIconSelectionGroup_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Squad.BlueprintOnlineItem
// 0x0010
public class FBlueprintOnlineItem : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FBlueprintOnlineItem() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQLedColorScheme
// 0x0078
public class FSQLedColorScheme : ExternalClass
{
	#region Offsets
	private ExternalOffset<FColor>                             _offDefaultColor                                               = new ExternalOffset<FColor>(0x0000, false);                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offBgColor                                                    = new ExternalOffset<FColor>(0x0004, false);                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offDeadColor                                                  = new ExternalOffset<FColor>(0x0008, false);                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offInjuredColor                                               = new ExternalOffset<FColor>(0x000C, false);                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FColor>                  _offControlsColors                                             = new ExternalOffset<TMap<FColor>>(0x0010, false);             // 0x0010(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUpdateFrequency                                            = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLowAmmoTreshold                                            = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLowStaminaTreshold                                         = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FColor                                              DefaultColor                                                   => _offDefaultColor.GetValue();
	public FColor                                              BgColor                                                        => _offBgColor.GetValue();
	public FColor                                              DeadColor                                                      => _offDeadColor.GetValue();
	public FColor                                              InjuredColor                                                   => _offInjuredColor.GetValue();
	public float                                               UpdateFrequency                                                => _offUpdateFrequency.GetValue();
	public float                                               LowAmmoTreshold                                                => _offLowAmmoTreshold.GetValue();
	public float                                               LowStaminaTreshold                                             => _offLowStaminaTreshold.GetValue();
	#endregion

	public FSQLedColorScheme(FColor c_DefaultColor, FColor c_BgColor, FColor c_DeadColor, FColor c_InjuredColor, float c_UpdateFrequency, float c_LowAmmoTreshold, float c_LowStaminaTreshold) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultColor.SetValue(c_DefaultColor);
		_offBgColor.SetValue(c_BgColor);
		_offDeadColor.SetValue(c_DeadColor);
		_offInjuredColor.SetValue(c_InjuredColor);
		_offUpdateFrequency.SetValue(c_UpdateFrequency);
		_offLowAmmoTreshold.SetValue(c_LowAmmoTreshold);
		_offLowStaminaTreshold.SetValue(c_LowStaminaTreshold);
	}
}
// ScriptStruct Squad.SQFireTeam
// 0x0018
public class FSQFireTeam : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<ASQPlayerController>>        _offPlayers                                                    = new ExternalOffset<TArray<ASQPlayerController>>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<ASQPlayerController>                         Players                                                        => _offPlayers.GetValue();
	#endregion

	public FSQFireTeam(TArray<ASQPlayerController> c_Players) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayers.SetValue(c_Players);
	}
}
// ScriptStruct Squad.SQBlueprintLoginResult
// 0x0010
public class FSQBlueprintLoginResult : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQBlueprintLoginResult() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQGraphLink
// 0x0010
public class FSQGraphLink : ExternalClass
{
	#region Offsets
	private ExternalOffset<USQGraphNodeComponent>              _offNodeA                                                      = new ExternalOffset<USQGraphNodeComponent>(0x0000, true);     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USQGraphNodeComponent>              _offNodeB                                                      = new ExternalOffset<USQGraphNodeComponent>(0x0008, true);     // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQGraphNodeComponent                               NodeA                                                          => _offNodeA.GetValue();
	public USQGraphNodeComponent                               NodeB                                                          => _offNodeB.GetValue();
	#endregion

	public FSQGraphLink(USQGraphNodeComponent c_NodeA, USQGraphNodeComponent c_NodeB) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNodeA.SetValue(c_NodeA);
		_offNodeB.SetValue(c_NodeB);
	}
}
// ScriptStruct Squad.SQLatticeLine
// 0x002C
public class FSQLatticeLine : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offStartWorldLocation                                         = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offEndWorldLocation                                           = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0018, false);             // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEdgeWidth                                                  = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             StartWorldLocation                                             => _offStartWorldLocation.GetValue();
	public FVector                                             EndWorldLocation                                               => _offEndWorldLocation.GetValue();
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public float                                               EdgeWidth                                                      => _offEdgeWidth.GetValue();
	#endregion

	public FSQLatticeLine(FVector c_StartWorldLocation, FVector c_EndWorldLocation, FLinearColor c_Color, float c_EdgeWidth) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStartWorldLocation.SetValue(c_StartWorldLocation);
		_offEndWorldLocation.SetValue(c_EndWorldLocation);
		_offColor.SetValue(c_Color);
		_offEdgeWidth.SetValue(c_EdgeWidth);
	}
}
// ScriptStruct Squad.SQScoreEvent
// 0x0028
public class FSQScoreEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offPoints                                                     = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offReason                                                     = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offScoreGroup                                                 = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimestamp                                                  = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Points                                                         => _offPoints.GetValue();
	public FString                                             Reason                                                         => _offReason.GetValue();
	public FName                                               ScoreGroup                                                     => _offScoreGroup.GetValue();
	public float                                               Timestamp                                                      => _offTimestamp.GetValue();
	#endregion

	public FSQScoreEvent(float c_Points, FString c_Reason, FName c_ScoreGroup, float c_Timestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offReason.SetValue(c_Reason);
		_offScoreGroup.SetValue(c_ScoreGroup);
		_offTimestamp.SetValue(c_Timestamp);
	}
}
// ScriptStruct Squad.SQInventoryData
// 0x0018
public class FSQInventoryData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offEquipableItem                                              = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxAllowedInInventory                                      = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinimumCountOnSpawn                                        = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCannotRearm                                               = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EWeaponType>                        _offWeaponType                                                 = new ExternalOffset<EWeaponType>(0x0014, false);              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              EquipableItem                                                  => _offEquipableItem.GetValue();
	public int                                                 MaxAllowedInInventory                                          => _offMaxAllowedInInventory.GetValue();
	public int                                                 MinimumCountOnSpawn                                            => _offMinimumCountOnSpawn.GetValue();
	public EWeaponType                                         WeaponType                                                     => _offWeaponType.GetValue();
	#endregion

	public FSQInventoryData(UClass c_EquipableItem, int c_MaxAllowedInInventory, int c_MinimumCountOnSpawn, EWeaponType c_WeaponType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEquipableItem.SetValue(c_EquipableItem);
		_offMaxAllowedInInventory.SetValue(c_MaxAllowedInInventory);
		_offMinimumCountOnSpawn.SetValue(c_MinimumCountOnSpawn);
		_offWeaponType.SetValue(c_WeaponType);
	}
}
// ScriptStruct Squad.SQInventoryMod
// 0x0038
public class FSQInventoryMod : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbClearAllInventoryFirst                                    = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQInventoryData>                   _offInventoryData                                              = new ExternalOffset<FSQInventoryData>(0x0008, false);         // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQInventoryModificationType>       _offInventoryModificationType                                  = new ExternalOffset<ESQInventoryModificationType>(0x0020, false); // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSlot                                                       = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offOffset                                                     = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTeam>                            _offTeam                                                       = new ExternalOffset<ESQTeam>(0x002C, false);                  // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USQRoleSettings>                    _offRole                                                       = new ExternalOffset<USQRoleSettings>(0x0030, true);           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQInventoryData                                    InventoryData                                                  => _offInventoryData.GetValue();
	public ESQInventoryModificationType                        InventoryModificationType                                      => _offInventoryModificationType.GetValue();
	public int                                                 Slot                                                           => _offSlot.GetValue();
	public int                                                 Offset                                                         => _offOffset.GetValue();
	public ESQTeam                                             Team                                                           => _offTeam.GetValue();
	public USQRoleSettings                                     Role                                                           => _offRole.GetValue();
	#endregion

	public FSQInventoryMod(FSQInventoryData c_InventoryData, ESQInventoryModificationType c_InventoryModificationType, int c_Slot, int c_Offset, ESQTeam c_Team, USQRoleSettings c_Role) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInventoryData.SetValue(c_InventoryData);
		_offInventoryModificationType.SetValue(c_InventoryModificationType);
		_offSlot.SetValue(c_Slot);
		_offOffset.SetValue(c_Offset);
		_offTeam.SetValue(c_Team);
		_offRole.SetValue(c_Role);
	}
}
// ScriptStruct Squad.SQGameModeRules
// 0x0018
public class FSQGameModeRules : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQTeam>                            _offTeam                                                       = new ExternalOffset<ESQTeam>(0x0000, false);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FText>>                      _offRules                                                      = new ExternalOffset<TArray<FText>>(0x0008, false);            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQTeam                                             Team                                                           => _offTeam.GetValue();
	public TArray<FText>                                       Rules                                                          => _offRules.GetValue();
	#endregion

	public FSQGameModeRules(ESQTeam c_Team, TArray<FText> c_Rules) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTeam.SetValue(c_Team);
		_offRules.SetValue(c_Rules);
	}
}
// ScriptStruct Squad.SQSystemHUDMessage
// 0x0028
public class FSQSystemHUDMessage : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMessage                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0010, false);             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMessageLifetime                                            = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Message                                                        => _offMessage.GetValue();
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public float                                               MessageLifetime                                                => _offMessageLifetime.GetValue();
	#endregion

	public FSQSystemHUDMessage(FString c_Message, FLinearColor c_Color, float c_MessageLifetime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMessage.SetValue(c_Message);
		_offColor.SetValue(c_Color);
		_offMessageLifetime.SetValue(c_MessageLifetime);
	}
}
// ScriptStruct Squad.SQApprovalEntryRequest
// 0x0040
public class FSQApprovalEntryRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<EApprovalRequestTypes>              _offRequestType                                                = new ExternalOffset<EApprovalRequestTypes>(0x0000, false);    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<UObject>                            _offPtrParams[0x4]                                             = new ExternalOffset<UObject>(0x0008, true);                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offCombinedMessage                                            = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExpireIn                                                   = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimestamp                                                  = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EApprovalRequestTypes                               RequestType                                                    => _offRequestType.GetValue();
	public FString                                             CombinedMessage                                                => _offCombinedMessage.GetValue();
	public float                                               ExpireIn                                                       => _offExpireIn.GetValue();
	public float                                               Timestamp                                                      => _offTimestamp.GetValue();
	#endregion

	public FSQApprovalEntryRequest(EApprovalRequestTypes c_RequestType, FString c_CombinedMessage, float c_ExpireIn, float c_Timestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequestType.SetValue(c_RequestType);
		_offCombinedMessage.SetValue(c_CombinedMessage);
		_offExpireIn.SetValue(c_ExpireIn);
		_offTimestamp.SetValue(c_Timestamp);
	}
}
// ScriptStruct Squad.SQApprovalEntryClientDesc
// 0x0008
public class FSQApprovalEntryClientDesc : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offExpireIn                                                   = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimestamp                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ExpireIn                                                       => _offExpireIn.GetValue();
	public float                                               Timestamp                                                      => _offTimestamp.GetValue();
	#endregion

	public FSQApprovalEntryClientDesc(float c_ExpireIn, float c_Timestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offExpireIn.SetValue(c_ExpireIn);
		_offTimestamp.SetValue(c_Timestamp);
	}
}
// ScriptStruct Squad.SQRearmWeaponRequest
// 0x0010
public class FSQRearmWeaponRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQEquipableItem>                   _offWeapon                                                     = new ExternalOffset<ASQEquipableItem>(0x0000, true);          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMagsToRearm                                                = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQEquipableItem                                    Weapon                                                         => _offWeapon.GetValue();
	public int                                                 MagsToRearm                                                    => _offMagsToRearm.GetValue();
	#endregion

	public FSQRearmWeaponRequest(ASQEquipableItem c_Weapon, int c_MagsToRearm) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeapon.SetValue(c_Weapon);
		_offMagsToRearm.SetValue(c_MagsToRearm);
	}
}
// ScriptStruct Squad.SQShotInfo
// 0x002C
public class FSQShotInfo : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offShotCounter                                                = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWorldTime                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantize10>              _offOrigin                                                     = new ExternalOffset<FVector_NetQuantize10>(0x0008, false);    // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantizeNormal>          _offShootDir                                                   = new ExternalOffset<FVector_NetQuantizeNormal>(0x0014, false); // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsTracer                                                  = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPenetrationDamageMultiplier                                = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offArmorDamageMultiplier                                      = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               WorldTime                                                      => _offWorldTime.GetValue();
	public FVector_NetQuantize10                               Origin                                                         => _offOrigin.GetValue();
	public FVector_NetQuantizeNormal                           ShootDir                                                       => _offShootDir.GetValue();
	public byte/*(bool)*/                                      bIsTracer                                                      => _offbIsTracer.GetValue();
	public float                                               PenetrationDamageMultiplier                                    => _offPenetrationDamageMultiplier.GetValue();
	public float                                               ArmorDamageMultiplier                                          => _offArmorDamageMultiplier.GetValue();
	#endregion

	public FSQShotInfo(float c_WorldTime, FVector_NetQuantize10 c_Origin, FVector_NetQuantizeNormal c_ShootDir, byte/*(bool)*/ c_bIsTracer, float c_PenetrationDamageMultiplier, float c_ArmorDamageMultiplier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWorldTime.SetValue(c_WorldTime);
		_offOrigin.SetValue(c_Origin);
		_offShootDir.SetValue(c_ShootDir);
		_offbIsTracer.SetValue(c_bIsTracer);
		_offPenetrationDamageMultiplier.SetValue(c_PenetrationDamageMultiplier);
		_offArmorDamageMultiplier.SetValue(c_ArmorDamageMultiplier);
	}
}
// ScriptStruct Squad.SQPenetrationTrace
// 0x00AC
public class FSQPenetrationTrace : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbIsActor                                                   = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbHasValidReverseImpact                                     = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FHitResult>                         _offHitResult                                                  = new ExternalOffset<FHitResult>(0x0004, false);               // 0x0004(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offReverseAngleImpactLocation                                 = new ExternalOffset<FVector>(0x008C, false);                  // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantizeNormal>          _offReverseAngleImpactNormal                                   = new ExternalOffset<FVector_NetQuantizeNormal>(0x0098, false); // 0x0098(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offReverseAngleBoneName                                       = new ExternalOffset<FName>(0x00A4, false);                    // 0x00A4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FHitResult                                          HitResult                                                      => _offHitResult.GetValue();
	public FVector                                             ReverseAngleImpactLocation                                     => _offReverseAngleImpactLocation.GetValue();
	public FVector_NetQuantizeNormal                           ReverseAngleImpactNormal                                       => _offReverseAngleImpactNormal.GetValue();
	public FName                                               ReverseAngleBoneName                                           => _offReverseAngleBoneName.GetValue();
	#endregion

	public FSQPenetrationTrace(FHitResult c_HitResult, FVector c_ReverseAngleImpactLocation, FVector_NetQuantizeNormal c_ReverseAngleImpactNormal, FName c_ReverseAngleBoneName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHitResult.SetValue(c_HitResult);
		_offReverseAngleImpactLocation.SetValue(c_ReverseAngleImpactLocation);
		_offReverseAngleImpactNormal.SetValue(c_ReverseAngleImpactNormal);
		_offReverseAngleBoneName.SetValue(c_ReverseAngleBoneName);
	}
}
// ScriptStruct Squad.ArmorPenetration
// 0x0028
public class FArmorPenetration : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FArmorPenetration() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.BlueprintOnlineItemDefinition
// 0x0010
public class FBlueprintOnlineItemDefinition : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FBlueprintOnlineItemDefinition() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.HeatMapRecording
// 0x0088
public class FHeatMapRecording : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FHeatMapRecording() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.HeatMapRecordingSample
// 0x0020
public class FHeatMapRecordingSample : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FHeatMapRecordingSample() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQWeaponData
// 0x00C0
public class FSQWeaponData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbInfiniteAmmo                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbInfiniteMags                                              = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxMags                                                    = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRoundsPerMag                                               = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowRoundInChamber                                       = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offFiremodes                                                  = new ExternalOffset<TArray<int>>(0x0010, false);              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimeBetweenShots                                           = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimeBetweenSingleShots                                     = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCanReloadWhenEquipping                                    = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCreateProjectileOnServer                                  = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTacticalReloadDuration                                     = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDryReloadDuration                                          = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTacticalReloadBipodDuration                                = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReloadDryBipodDuration                                     = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offZoomDuration                                               = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offADSPostTransitionRatio                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowZoom                                                 = new ExternalOffset<byte/*(bool)*/>(0x0044);                  // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAverageFireRate                                           = new ExternalOffset<byte/*(bool)*/>(0x0045);                  // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbResetBurstOnTriggerRelease                                = new ExternalOffset<byte/*(bool)*/>(0x0046);                  // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offProjectileClass                                            = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRoundsBetweenTracer                                        = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offTracerProjectileClass                                      = new ExternalOffset<UClass>(0x0058, true);                    // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMuzzleVelocity                                             = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDamageToApply                                           = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimeToStartDamageFallOff                                   = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDistanceToStartDamageFallOff                               = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDamageFallOffRate                                          = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinDamageToApply                                           = new ExternalOffset<float>(0x0074);                           // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offDamageFalloffCurve                                         = new ExternalOffset<UCurveFloat>(0x0078, true);               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsBarrelSocketOnSoldier                                   = new ExternalOffset<byte/*(bool)*/>(0x0080);                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offBarrelSocketName                                           = new ExternalOffset<FName>(0x0084, false);                    // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMOA                                                        = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaximumTraceDistance                                       = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWallHackCheckTraceDistance                                 = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offProjectileCameraRelativeOffsetMultiplier                   = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMagMustBeEmptyForVehicleRearm                             = new ExternalOffset<byte/*(bool)*/>(0x009C);                  // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRearmOnlyIfCurrentMagazineIsEmpty                         = new ExternalOffset<byte/*(bool)*/>(0x009D);                  // 0x009D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRearmCanFillCurrentMagazine                               = new ExternalOffset<byte/*(bool)*/>(0x009E);                  // 0x009E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinimumTimeBetweenRearms                                   = new ExternalOffset<float>(0x00A0);                           // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRearmOnlyOneMagazine                                      = new ExternalOffset<byte/*(bool)*/>(0x00A4);                  // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRearmOnlyXRoundsOfAmmo                                    = new ExternalOffset<byte/*(bool)*/>(0x00A5);                  // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRearmRoundsOfAmmoPerRearm                                  = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offArmorPenetrationDepthMillimeters                           = new ExternalOffset<int>(0x00AC);                             // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offArmorPenetrationDepthCurve                                 = new ExternalOffset<UCurveFloat>(0x00B0, true);               // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTraceDistanceAfterPenetrationMeters                        = new ExternalOffset<float>(0x00B8);                           // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bInfiniteAmmo                                                  => _offbInfiniteAmmo.GetValue();
	public byte/*(bool)*/                                      bInfiniteMags                                                  => _offbInfiniteMags.GetValue();
	public int                                                 MaxMags                                                        => _offMaxMags.GetValue();
	public int                                                 RoundsPerMag                                                   => _offRoundsPerMag.GetValue();
	public byte/*(bool)*/                                      bAllowRoundInChamber                                           => _offbAllowRoundInChamber.GetValue();
	public TArray<int>                                         Firemodes                                                      => _offFiremodes.GetValue();
	public float                                               TimeBetweenShots                                               => _offTimeBetweenShots.GetValue();
	public float                                               TimeBetweenSingleShots                                         => _offTimeBetweenSingleShots.GetValue();
	public byte/*(bool)*/                                      bCanReloadWhenEquipping                                        => _offbCanReloadWhenEquipping.GetValue();
	public byte/*(bool)*/                                      bCreateProjectileOnServer                                      => _offbCreateProjectileOnServer.GetValue();
	public float                                               TacticalReloadDuration                                         => _offTacticalReloadDuration.GetValue();
	public float                                               DryReloadDuration                                              => _offDryReloadDuration.GetValue();
	public float                                               TacticalReloadBipodDuration                                    => _offTacticalReloadBipodDuration.GetValue();
	public float                                               ReloadDryBipodDuration                                         => _offReloadDryBipodDuration.GetValue();
	public float                                               ZoomDuration                                                   => _offZoomDuration.GetValue();
	public float                                               ADSPostTransitionRatio                                         => _offADSPostTransitionRatio.GetValue();
	public byte/*(bool)*/                                      bAllowZoom                                                     => _offbAllowZoom.GetValue();
	public byte/*(bool)*/                                      bAverageFireRate                                               => _offbAverageFireRate.GetValue();
	public byte/*(bool)*/                                      bResetBurstOnTriggerRelease                                    => _offbResetBurstOnTriggerRelease.GetValue();
	public UClass                                              ProjectileClass                                                => _offProjectileClass.GetValue();
	public int                                                 RoundsBetweenTracer                                            => _offRoundsBetweenTracer.GetValue();
	public UClass                                              TracerProjectileClass                                          => _offTracerProjectileClass.GetValue();
	public float                                               MuzzleVelocity                                                 => _offMuzzleVelocity.GetValue();
	public float                                               MaxDamageToApply                                               => _offMaxDamageToApply.GetValue();
	public float                                               TimeToStartDamageFallOff                                       => _offTimeToStartDamageFallOff.GetValue();
	public float                                               DistanceToStartDamageFallOff                                   => _offDistanceToStartDamageFallOff.GetValue();
	public float                                               DamageFallOffRate                                              => _offDamageFallOffRate.GetValue();
	public float                                               MinDamageToApply                                               => _offMinDamageToApply.GetValue();
	public UCurveFloat                                         DamageFalloffCurve                                             => _offDamageFalloffCurve.GetValue();
	public byte/*(bool)*/                                      bIsBarrelSocketOnSoldier                                       => _offbIsBarrelSocketOnSoldier.GetValue();
	public FName                                               BarrelSocketName                                               => _offBarrelSocketName.GetValue();
	public float                                               MOA                                                            => _offMOA.GetValue();
	public float                                               MaximumTraceDistance                                           => _offMaximumTraceDistance.GetValue();
	public float                                               WallHackCheckTraceDistance                                     => _offWallHackCheckTraceDistance.GetValue();
	public float                                               ProjectileCameraRelativeOffsetMultiplier                       => _offProjectileCameraRelativeOffsetMultiplier.GetValue();
	public byte/*(bool)*/                                      bMagMustBeEmptyForVehicleRearm                                 => _offbMagMustBeEmptyForVehicleRearm.GetValue();
	public byte/*(bool)*/                                      bRearmOnlyIfCurrentMagazineIsEmpty                             => _offbRearmOnlyIfCurrentMagazineIsEmpty.GetValue();
	public byte/*(bool)*/                                      bRearmCanFillCurrentMagazine                                   => _offbRearmCanFillCurrentMagazine.GetValue();
	public float                                               MinimumTimeBetweenRearms                                       => _offMinimumTimeBetweenRearms.GetValue();
	public byte/*(bool)*/                                      bRearmOnlyOneMagazine                                          => _offbRearmOnlyOneMagazine.GetValue();
	public byte/*(bool)*/                                      bRearmOnlyXRoundsOfAmmo                                        => _offbRearmOnlyXRoundsOfAmmo.GetValue();
	public int                                                 RearmRoundsOfAmmoPerRearm                                      => _offRearmRoundsOfAmmoPerRearm.GetValue();
	public int                                                 ArmorPenetrationDepthMillimeters                               => _offArmorPenetrationDepthMillimeters.GetValue();
	public UCurveFloat                                         ArmorPenetrationDepthCurve                                     => _offArmorPenetrationDepthCurve.GetValue();
	public float                                               TraceDistanceAfterPenetrationMeters                            => _offTraceDistanceAfterPenetrationMeters.GetValue();
	#endregion

	public FSQWeaponData(byte/*(bool)*/ c_bInfiniteAmmo, byte/*(bool)*/ c_bInfiniteMags, int c_MaxMags, int c_RoundsPerMag, byte/*(bool)*/ c_bAllowRoundInChamber, TArray<int> c_Firemodes, float c_TimeBetweenShots, float c_TimeBetweenSingleShots, byte/*(bool)*/ c_bCanReloadWhenEquipping, byte/*(bool)*/ c_bCreateProjectileOnServer, float c_TacticalReloadDuration, float c_DryReloadDuration, float c_TacticalReloadBipodDuration, float c_ReloadDryBipodDuration, float c_ZoomDuration, float c_ADSPostTransitionRatio, byte/*(bool)*/ c_bAllowZoom, byte/*(bool)*/ c_bAverageFireRate, byte/*(bool)*/ c_bResetBurstOnTriggerRelease, UClass c_ProjectileClass, int c_RoundsBetweenTracer, UClass c_TracerProjectileClass, float c_MuzzleVelocity, float c_MaxDamageToApply, float c_TimeToStartDamageFallOff, float c_DistanceToStartDamageFallOff, float c_DamageFallOffRate, float c_MinDamageToApply, UCurveFloat c_DamageFalloffCurve, byte/*(bool)*/ c_bIsBarrelSocketOnSoldier, FName c_BarrelSocketName, float c_MOA, float c_MaximumTraceDistance, float c_WallHackCheckTraceDistance, float c_ProjectileCameraRelativeOffsetMultiplier, byte/*(bool)*/ c_bMagMustBeEmptyForVehicleRearm, byte/*(bool)*/ c_bRearmOnlyIfCurrentMagazineIsEmpty, byte/*(bool)*/ c_bRearmCanFillCurrentMagazine, float c_MinimumTimeBetweenRearms, byte/*(bool)*/ c_bRearmOnlyOneMagazine, byte/*(bool)*/ c_bRearmOnlyXRoundsOfAmmo, int c_RearmRoundsOfAmmoPerRearm, int c_ArmorPenetrationDepthMillimeters, UCurveFloat c_ArmorPenetrationDepthCurve, float c_TraceDistanceAfterPenetrationMeters) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbInfiniteAmmo.SetValue(c_bInfiniteAmmo);
		_offbInfiniteMags.SetValue(c_bInfiniteMags);
		_offMaxMags.SetValue(c_MaxMags);
		_offRoundsPerMag.SetValue(c_RoundsPerMag);
		_offbAllowRoundInChamber.SetValue(c_bAllowRoundInChamber);
		_offFiremodes.SetValue(c_Firemodes);
		_offTimeBetweenShots.SetValue(c_TimeBetweenShots);
		_offTimeBetweenSingleShots.SetValue(c_TimeBetweenSingleShots);
		_offbCanReloadWhenEquipping.SetValue(c_bCanReloadWhenEquipping);
		_offbCreateProjectileOnServer.SetValue(c_bCreateProjectileOnServer);
		_offTacticalReloadDuration.SetValue(c_TacticalReloadDuration);
		_offDryReloadDuration.SetValue(c_DryReloadDuration);
		_offTacticalReloadBipodDuration.SetValue(c_TacticalReloadBipodDuration);
		_offReloadDryBipodDuration.SetValue(c_ReloadDryBipodDuration);
		_offZoomDuration.SetValue(c_ZoomDuration);
		_offADSPostTransitionRatio.SetValue(c_ADSPostTransitionRatio);
		_offbAllowZoom.SetValue(c_bAllowZoom);
		_offbAverageFireRate.SetValue(c_bAverageFireRate);
		_offbResetBurstOnTriggerRelease.SetValue(c_bResetBurstOnTriggerRelease);
		_offProjectileClass.SetValue(c_ProjectileClass);
		_offRoundsBetweenTracer.SetValue(c_RoundsBetweenTracer);
		_offTracerProjectileClass.SetValue(c_TracerProjectileClass);
		_offMuzzleVelocity.SetValue(c_MuzzleVelocity);
		_offMaxDamageToApply.SetValue(c_MaxDamageToApply);
		_offTimeToStartDamageFallOff.SetValue(c_TimeToStartDamageFallOff);
		_offDistanceToStartDamageFallOff.SetValue(c_DistanceToStartDamageFallOff);
		_offDamageFallOffRate.SetValue(c_DamageFallOffRate);
		_offMinDamageToApply.SetValue(c_MinDamageToApply);
		_offDamageFalloffCurve.SetValue(c_DamageFalloffCurve);
		_offbIsBarrelSocketOnSoldier.SetValue(c_bIsBarrelSocketOnSoldier);
		_offBarrelSocketName.SetValue(c_BarrelSocketName);
		_offMOA.SetValue(c_MOA);
		_offMaximumTraceDistance.SetValue(c_MaximumTraceDistance);
		_offWallHackCheckTraceDistance.SetValue(c_WallHackCheckTraceDistance);
		_offProjectileCameraRelativeOffsetMultiplier.SetValue(c_ProjectileCameraRelativeOffsetMultiplier);
		_offbMagMustBeEmptyForVehicleRearm.SetValue(c_bMagMustBeEmptyForVehicleRearm);
		_offbRearmOnlyIfCurrentMagazineIsEmpty.SetValue(c_bRearmOnlyIfCurrentMagazineIsEmpty);
		_offbRearmCanFillCurrentMagazine.SetValue(c_bRearmCanFillCurrentMagazine);
		_offMinimumTimeBetweenRearms.SetValue(c_MinimumTimeBetweenRearms);
		_offbRearmOnlyOneMagazine.SetValue(c_bRearmOnlyOneMagazine);
		_offbRearmOnlyXRoundsOfAmmo.SetValue(c_bRearmOnlyXRoundsOfAmmo);
		_offRearmRoundsOfAmmoPerRearm.SetValue(c_RearmRoundsOfAmmoPerRearm);
		_offArmorPenetrationDepthMillimeters.SetValue(c_ArmorPenetrationDepthMillimeters);
		_offArmorPenetrationDepthCurve.SetValue(c_ArmorPenetrationDepthCurve);
		_offTraceDistanceAfterPenetrationMeters.SetValue(c_TraceDistanceAfterPenetrationMeters);
	}
}
// ScriptStruct Squad.SQMarkerReference
// 0x0028
public class FSQMarkerReference : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offMarkerType                                                 = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSquadOnly                                                 = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USQ_HexMenu_BaseAction>>     _offMarkers                                                    = new ExternalOffset<TArray<USQ_HexMenu_BaseAction>>(0x0010, false); // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offConcurrentMarkersLimit                                     = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              MarkerType                                                     => _offMarkerType.GetValue();
	public byte/*(bool)*/                                      bSquadOnly                                                     => _offbSquadOnly.GetValue();
	public TArray<USQ_HexMenu_BaseAction>                      Markers                                                        => _offMarkers.GetValue();
	public int                                                 ConcurrentMarkersLimit                                         => _offConcurrentMarkersLimit.GetValue();
	#endregion

	public FSQMarkerReference(UClass c_MarkerType, byte/*(bool)*/ c_bSquadOnly, TArray<USQ_HexMenu_BaseAction> c_Markers, int c_ConcurrentMarkersLimit) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMarkerType.SetValue(c_MarkerType);
		_offbSquadOnly.SetValue(c_bSquadOnly);
		_offMarkers.SetValue(c_Markers);
		_offConcurrentMarkersLimit.SetValue(c_ConcurrentMarkersLimit);
	}
}
// ScriptStruct Squad.SQReverbVolumeEffect
// 0x0020
public class FSQReverbVolumeEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<UReverbEffect>                      _offReverbEffect                                               = new ExternalOffset<UReverbEffect>(0x0000, true);             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offEffectName                                                 = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEffectVolume                                               = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEffectFadeTime                                             = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEffectPriority                                             = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UReverbEffect                                       ReverbEffect                                                   => _offReverbEffect.GetValue();
	public FName                                               EffectName                                                     => _offEffectName.GetValue();
	public float                                               EffectVolume                                                   => _offEffectVolume.GetValue();
	public float                                               EffectFadeTime                                                 => _offEffectFadeTime.GetValue();
	public float                                               EffectPriority                                                 => _offEffectPriority.GetValue();
	#endregion

	public FSQReverbVolumeEffect(UReverbEffect c_ReverbEffect, FName c_EffectName, float c_EffectVolume, float c_EffectFadeTime, float c_EffectPriority) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offReverbEffect.SetValue(c_ReverbEffect);
		_offEffectName.SetValue(c_EffectName);
		_offEffectVolume.SetValue(c_EffectVolume);
		_offEffectFadeTime.SetValue(c_EffectFadeTime);
		_offEffectPriority.SetValue(c_EffectPriority);
	}
}
// ScriptStruct Squad.SQCachedTransitionData
// 0x0024
public class FSQCachedTransitionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offStateMachineName                                           = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offFromStateName                                              = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offToStateName                                                = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               StateMachineName                                               => _offStateMachineName.GetValue();
	public FName                                               FromStateName                                                  => _offFromStateName.GetValue();
	public FName                                               ToStateName                                                    => _offToStateName.GetValue();
	#endregion

	public FSQCachedTransitionData(FName c_StateMachineName, FName c_FromStateName, FName c_ToStateName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStateMachineName.SetValue(c_StateMachineName);
		_offFromStateName.SetValue(c_FromStateName);
		_offToStateName.SetValue(c_ToStateName);
	}
}
// ScriptStruct Squad.SQCachedRelevantAnimData
// 0x001C
public class FSQCachedRelevantAnimData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offStateMachineName                                           = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offStateName                                                  = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               StateMachineName                                               => _offStateMachineName.GetValue();
	public FName                                               StateName                                                      => _offStateName.GetValue();
	#endregion

	public FSQCachedRelevantAnimData(FName c_StateMachineName, FName c_StateName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStateMachineName.SetValue(c_StateMachineName);
		_offStateName.SetValue(c_StateName);
	}
}
// ScriptStruct Squad.SQCachedAssetPlayerData
// 0x0020
public class FSQCachedAssetPlayerData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offStateMachineName                                           = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offStateName                                                  = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offInstanceName                                               = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               StateMachineName                                               => _offStateMachineName.GetValue();
	public FName                                               StateName                                                      => _offStateName.GetValue();
	public FName                                               InstanceName                                                   => _offInstanceName.GetValue();
	#endregion

	public FSQCachedAssetPlayerData(FName c_StateMachineName, FName c_StateName, FName c_InstanceName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStateMachineName.SetValue(c_StateMachineName);
		_offStateName.SetValue(c_StateName);
		_offInstanceName.SetValue(c_InstanceName);
	}
}
// ScriptStruct Squad.SQCachedStateData
// 0x001C
public class FSQCachedStateData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offStateMachineName                                           = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offStateName                                                  = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               StateMachineName                                               => _offStateMachineName.GetValue();
	public FName                                               StateName                                                      => _offStateName.GetValue();
	#endregion

	public FSQCachedStateData(FName c_StateMachineName, FName c_StateName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStateMachineName.SetValue(c_StateMachineName);
		_offStateName.SetValue(c_StateName);
	}
}
// ScriptStruct Squad.SQCachedStateArray
// 0x0018
public class FSQCachedStateArray : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQCachedStateData>>         _offStates                                                     = new ExternalOffset<TArray<FSQCachedStateData>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQCachedStateData>                          States                                                         => _offStates.GetValue();
	#endregion

	public FSQCachedStateArray(TArray<FSQCachedStateData> c_States) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStates.SetValue(c_States);
	}
}
// ScriptStruct Squad.SQEmoteAnims
// 0x0028
public class FSQEmoteAnims : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbForceIfCantPlay                                           = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offFirstPersonAnim                                            = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offThirdPersonAnim                                            = new ExternalOffset<UAnimMontage>(0x0010, true);              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offFirstPersonEndAnim                                         = new ExternalOffset<UAnimMontage>(0x0018, true);              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offThirdPersonEndAnim                                         = new ExternalOffset<UAnimMontage>(0x0020, true);              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bForceIfCantPlay                                               => _offbForceIfCantPlay.GetValue();
	public UAnimMontage                                        FirstPersonAnim                                                => _offFirstPersonAnim.GetValue();
	public UAnimMontage                                        ThirdPersonAnim                                                => _offThirdPersonAnim.GetValue();
	public UAnimMontage                                        FirstPersonEndAnim                                             => _offFirstPersonEndAnim.GetValue();
	public UAnimMontage                                        ThirdPersonEndAnim                                             => _offThirdPersonEndAnim.GetValue();
	#endregion

	public FSQEmoteAnims(byte/*(bool)*/ c_bForceIfCantPlay, UAnimMontage c_FirstPersonAnim, UAnimMontage c_ThirdPersonAnim, UAnimMontage c_FirstPersonEndAnim, UAnimMontage c_ThirdPersonEndAnim) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbForceIfCantPlay.SetValue(c_bForceIfCantPlay);
		_offFirstPersonAnim.SetValue(c_FirstPersonAnim);
		_offThirdPersonAnim.SetValue(c_ThirdPersonAnim);
		_offFirstPersonEndAnim.SetValue(c_FirstPersonEndAnim);
		_offThirdPersonEndAnim.SetValue(c_ThirdPersonEndAnim);
	}
}
// ScriptStruct Squad.SQAnimNode_BoneDrivenController
// 0x0060 (0x0128 - 0x00C8)
public class FSQAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESQComponentType>>      _offSourceComponent                                            = new ExternalOffset<TEnumAsByte<ESQComponentType>>(0x00D8, false); // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offDrivingCurve                                               = new ExternalOffset<UCurveFloat>(0x00E0, true);               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMultiplier                                                 = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseRange                                                  = new ExternalOffset<byte/*(bool)*/>(0x00EC);                  // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRangeMin                                                   = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRangeMax                                                   = new ExternalOffset<float>(0x00F4);                           // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMin                                                = new ExternalOffset<float>(0x00F8);                           // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMax                                                = new ExternalOffset<float>(0x00FC);                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQDrivenDestinationMode>           _offDestinationMode                                            = new ExternalOffset<ESQDrivenDestinationMode>(0x0100, false); // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0104, false);                    // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x010C, false);           // 0x010C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offTargetComponentSpace                                       = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x011C, false); // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESQComponentType>>      _offTargetComponent                                            = new ExternalOffset<TEnumAsByte<ESQComponentType>>(0x011D, false); // 0x011D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationX                                  = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationY                                  = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationZ                                  = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationX                                     = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationY                                     = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationZ                                     = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleX                                        = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleY                                        = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleZ                                        = new ExternalOffset<char>(0x0121, false);                     // 0x0121(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQDrivenBoneModificationMode>      _offModificationMode                                           = new ExternalOffset<ESQDrivenBoneModificationMode>(0x0124, false); // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public TEnumAsByte<ESQComponentType>                       SourceComponent                                                => _offSourceComponent.GetValue();
	public UCurveFloat                                         DrivingCurve                                                   => _offDrivingCurve.GetValue();
	public float                                               Multiplier                                                     => _offMultiplier.GetValue();
	public byte/*(bool)*/                                      bUseRange                                                      => _offbUseRange.GetValue();
	public float                                               RangeMin                                                       => _offRangeMin.GetValue();
	public float                                               RangeMax                                                       => _offRangeMax.GetValue();
	public float                                               RemappedMin                                                    => _offRemappedMin.GetValue();
	public float                                               RemappedMax                                                    => _offRemappedMax.GetValue();
	public ESQDrivenDestinationMode                            DestinationMode                                                => _offDestinationMode.GetValue();
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      TargetComponentSpace                                           => _offTargetComponentSpace.GetValue();
	public TEnumAsByte<ESQComponentType>                       TargetComponent                                                => _offTargetComponent.GetValue();
	public ESQDrivenBoneModificationMode                       ModificationMode                                               => _offModificationMode.GetValue();
	#endregion

	public FSQAnimNode_BoneDrivenController(FBoneReference c_SourceBone, TEnumAsByte<ESQComponentType> c_SourceComponent, UCurveFloat c_DrivingCurve, float c_Multiplier, byte/*(bool)*/ c_bUseRange, float c_RangeMin, float c_RangeMax, float c_RemappedMin, float c_RemappedMax, ESQDrivenDestinationMode c_DestinationMode, FName c_ParameterName, FBoneReference c_TargetBone, TEnumAsByte<EBoneControlSpace> c_TargetComponentSpace, TEnumAsByte<ESQComponentType> c_TargetComponent, ESQDrivenBoneModificationMode c_ModificationMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceBone.SetValue(c_SourceBone);
		_offSourceComponent.SetValue(c_SourceComponent);
		_offDrivingCurve.SetValue(c_DrivingCurve);
		_offMultiplier.SetValue(c_Multiplier);
		_offbUseRange.SetValue(c_bUseRange);
		_offRangeMin.SetValue(c_RangeMin);
		_offRangeMax.SetValue(c_RangeMax);
		_offRemappedMin.SetValue(c_RemappedMin);
		_offRemappedMax.SetValue(c_RemappedMax);
		_offDestinationMode.SetValue(c_DestinationMode);
		_offParameterName.SetValue(c_ParameterName);
		_offTargetBone.SetValue(c_TargetBone);
		_offTargetComponentSpace.SetValue(c_TargetComponentSpace);
		_offTargetComponent.SetValue(c_TargetComponent);
		_offModificationMode.SetValue(c_ModificationMode);
	}
}
// ScriptStruct Squad.SQAnimNode_WheelHandler
// 0x0030 (0x00F8 - 0x00C8)
public class FSQAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<float>                              _offSmoothing                                                  = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                    _offPreviousWheelLocations                                     = new ExternalOffset<TArray<FVector>>(0x00E8, false);          // 0x00E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                               Smoothing                                                      => _offSmoothing.GetValue();
	public TArray<FVector>                                     PreviousWheelLocations                                         => _offPreviousWheelLocations.GetValue();
	#endregion

	public FSQAnimNode_WheelHandler(float c_Smoothing, TArray<FVector> c_PreviousWheelLocations) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSmoothing.SetValue(c_Smoothing);
		_offPreviousWheelLocations.SetValue(c_PreviousWheelLocations);
	}
}
// ScriptStruct Squad.SQButtonStyle
// 0x0080
public class FSQButtonStyle : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUseStyling                                                = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseImageStyling                                           = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offNormalImage                                                = new ExternalOffset<UTexture2D>(0x0008, true);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offHoveredImage                                               = new ExternalOffset<UTexture2D>(0x0010, true);                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offPressedImage                                               = new ExternalOffset<UTexture2D>(0x0018, true);                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offDisabledImage                                              = new ExternalOffset<UTexture2D>(0x0020, true);                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseTintStyling                                            = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseColorBlending                                          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offNormalTint                                                 = new ExternalOffset<FLinearColor>(0x002C, false);             // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offHoveredTint                                                = new ExternalOffset<FLinearColor>(0x003C, false);             // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offPressedTint                                                = new ExternalOffset<FLinearColor>(0x004C, false);             // 0x004C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offDisabledTint                                               = new ExternalOffset<FLinearColor>(0x005C, false);             // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offPressedSoundCue                                            = new ExternalOffset<USoundCue>(0x0070, true);                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offHoveredSoundCue                                            = new ExternalOffset<USoundCue>(0x0078, true);                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUseStyling                                                    => _offbUseStyling.GetValue();
	public byte/*(bool)*/                                      bUseImageStyling                                               => _offbUseImageStyling.GetValue();
	public UTexture2D                                          NormalImage                                                    => _offNormalImage.GetValue();
	public UTexture2D                                          HoveredImage                                                   => _offHoveredImage.GetValue();
	public UTexture2D                                          PressedImage                                                   => _offPressedImage.GetValue();
	public UTexture2D                                          DisabledImage                                                  => _offDisabledImage.GetValue();
	public byte/*(bool)*/                                      bUseTintStyling                                                => _offbUseTintStyling.GetValue();
	public byte/*(bool)*/                                      bUseColorBlending                                              => _offbUseColorBlending.GetValue();
	public FLinearColor                                        NormalTint                                                     => _offNormalTint.GetValue();
	public FLinearColor                                        HoveredTint                                                    => _offHoveredTint.GetValue();
	public FLinearColor                                        PressedTint                                                    => _offPressedTint.GetValue();
	public FLinearColor                                        DisabledTint                                                   => _offDisabledTint.GetValue();
	public USoundCue                                           PressedSoundCue                                                => _offPressedSoundCue.GetValue();
	public USoundCue                                           HoveredSoundCue                                                => _offHoveredSoundCue.GetValue();
	#endregion

	public FSQButtonStyle(byte/*(bool)*/ c_bUseStyling, byte/*(bool)*/ c_bUseImageStyling, UTexture2D c_NormalImage, UTexture2D c_HoveredImage, UTexture2D c_PressedImage, UTexture2D c_DisabledImage, byte/*(bool)*/ c_bUseTintStyling, byte/*(bool)*/ c_bUseColorBlending, FLinearColor c_NormalTint, FLinearColor c_HoveredTint, FLinearColor c_PressedTint, FLinearColor c_DisabledTint, USoundCue c_PressedSoundCue, USoundCue c_HoveredSoundCue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUseStyling.SetValue(c_bUseStyling);
		_offbUseImageStyling.SetValue(c_bUseImageStyling);
		_offNormalImage.SetValue(c_NormalImage);
		_offHoveredImage.SetValue(c_HoveredImage);
		_offPressedImage.SetValue(c_PressedImage);
		_offDisabledImage.SetValue(c_DisabledImage);
		_offbUseTintStyling.SetValue(c_bUseTintStyling);
		_offbUseColorBlending.SetValue(c_bUseColorBlending);
		_offNormalTint.SetValue(c_NormalTint);
		_offHoveredTint.SetValue(c_HoveredTint);
		_offPressedTint.SetValue(c_PressedTint);
		_offDisabledTint.SetValue(c_DisabledTint);
		_offPressedSoundCue.SetValue(c_PressedSoundCue);
		_offHoveredSoundCue.SetValue(c_HoveredSoundCue);
	}
}
// ScriptStruct Squad.SQBoundaryListenerData
// 0x0014
public class FSQBoundaryListenerData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbInsideBoundary                                            = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCheckTime                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEntryTime                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExitTime                                                   = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bInsideBoundary                                                => _offbInsideBoundary.GetValue();
	public float                                               CheckTime                                                      => _offCheckTime.GetValue();
	public float                                               EntryTime                                                      => _offEntryTime.GetValue();
	public float                                               ExitTime                                                       => _offExitTime.GetValue();
	#endregion

	public FSQBoundaryListenerData(byte/*(bool)*/ c_bInsideBoundary, float c_CheckTime, float c_EntryTime, float c_ExitTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbInsideBoundary.SetValue(c_bInsideBoundary);
		_offCheckTime.SetValue(c_CheckTime);
		_offEntryTime.SetValue(c_EntryTime);
		_offExitTime.SetValue(c_ExitTime);
	}
}
// ScriptStruct Squad.SQBuffDesc
// 0x0008
public class FSQBuffDesc : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQBuffDesc() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQChatStyle
// 0x08F8 (0x0900 - 0x0008)
public class FSQChatStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FEditableTextBoxStyle>              _offTextEntryStyle                                             = new ExternalOffset<FEditableTextBoxStyle>(0x0008, false);    // 0x0008(0x07F0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackingBrush                                               = new ExternalOffset<FSlateBrush>(0x07F8, false);              // 0x07F8(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offBoxBorderColor                                             = new ExternalOffset<FSlateColor>(0x0880, false);              // 0x0880(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offTextColor                                                  = new ExternalOffset<FSlateColor>(0x08A8, false);              // 0x08A8(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offRxMessgeSound                                              = new ExternalOffset<FSlateSound>(0x08D0, false);              // 0x08D0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offTxMessgeSound                                              = new ExternalOffset<FSlateSound>(0x08E8, false);              // 0x08E8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEditableTextBoxStyle                               TextEntryStyle                                                 => _offTextEntryStyle.GetValue();
	public FSlateBrush                                         BackingBrush                                                   => _offBackingBrush.GetValue();
	public FSlateColor                                         BoxBorderColor                                                 => _offBoxBorderColor.GetValue();
	public FSlateColor                                         TextColor                                                      => _offTextColor.GetValue();
	public FSlateSound                                         RxMessgeSound                                                  => _offRxMessgeSound.GetValue();
	public FSlateSound                                         TxMessgeSound                                                  => _offTxMessgeSound.GetValue();
	#endregion

	public FSQChatStyle(FEditableTextBoxStyle c_TextEntryStyle, FSlateBrush c_BackingBrush, FSlateColor c_BoxBorderColor, FSlateColor c_TextColor, FSlateSound c_RxMessgeSound, FSlateSound c_TxMessgeSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTextEntryStyle.SetValue(c_TextEntryStyle);
		_offBackingBrush.SetValue(c_BackingBrush);
		_offBoxBorderColor.SetValue(c_BoxBorderColor);
		_offTextColor.SetValue(c_TextColor);
		_offRxMessgeSound.SetValue(c_RxMessgeSound);
		_offTxMessgeSound.SetValue(c_TxMessgeSound);
	}
}
// ScriptStruct Squad.SQChunkDependency
// 0x0020
public class FSQChunkDependency : ExternalClass
{
	#region Offsets
	private ExternalOffset<FInt32Range>                        _offChunkIDs                                                   = new ExternalOffset<FInt32Range>(0x0000, false);              // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offParentChunkIDs                                             = new ExternalOffset<TArray<int>>(0x0010, false);              // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FInt32Range                                         ChunkIDs                                                       => _offChunkIDs.GetValue();
	public TArray<int>                                         ParentChunkIDs                                                 => _offParentChunkIDs.GetValue();
	#endregion

	public FSQChunkDependency(FInt32Range c_ChunkIDs, TArray<int> c_ParentChunkIDs) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offChunkIDs.SetValue(c_ChunkIDs);
		_offParentChunkIDs.SetValue(c_ParentChunkIDs);
	}
}
// ScriptStruct Squad.ServerAnalyticsData
// 0x0048
public class FServerAnalyticsData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGameVersion                                                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offMapName                                                    = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offtick_Min                                                   = new ExternalOffset<char>(0x0020, false);                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offtick_Max                                                   = new ExternalOffset<char>(0x0021, false);                     // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offtick_q1                                                    = new ExternalOffset<char>(0x0022, false);                     // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offtick_Mean                                                  = new ExternalOffset<char>(0x0023, false);                     // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offtick_q3                                                    = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offpop_Mean                                                   = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offpop_Max                                                    = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offsamplesTaken                                               = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GameVersion                                                    => _offGameVersion.GetValue();
	public FString                                             MapName                                                        => _offMapName.GetValue();
	public int                                                 pop_Mean                                                       => _offpop_Mean.GetValue();
	public int                                                 pop_Max                                                        => _offpop_Max.GetValue();
	public int                                                 samplesTaken                                                   => _offsamplesTaken.GetValue();
	#endregion

	public FServerAnalyticsData(FString c_GameVersion, FString c_MapName, int c_pop_Mean, int c_pop_Max, int c_samplesTaken) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameVersion.SetValue(c_GameVersion);
		_offMapName.SetValue(c_MapName);
		_offpop_Mean.SetValue(c_pop_Mean);
		_offpop_Max.SetValue(c_pop_Max);
		_offsamplesTaken.SetValue(c_samplesTaken);
	}
}
// ScriptStruct Squad.SQTeamCommands
// 0x0018 (0x0020 - 0x0008)
public class FSQTeamCommands : FTableRowBase
{
	#region Offsets
	private ExternalOffset<UClass>                             _offCommandData                                                = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offTeam                                                       = new ExternalOffset<TArray<FString>>(0x0010, false);          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              CommandData                                                    => _offCommandData.GetValue();
	public TArray<FString>                                     Team                                                           => _offTeam.GetValue();
	#endregion

	public FSQTeamCommands(UClass c_CommandData, TArray<FString> c_Team) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCommandData.SetValue(c_CommandData);
		_offTeam.SetValue(c_Team);
	}
}
// ScriptStruct Squad.SQCommandActionData
// 0x0018
public class FSQCommandActionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offCommandActionData                                          = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGameTimeAtCreation                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCooldownTimeRemaining                                      = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offIsDestroyedDuringActive                                    = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              CommandActionData                                              => _offCommandActionData.GetValue();
	public float                                               GameTimeAtCreation                                             => _offGameTimeAtCreation.GetValue();
	public float                                               CooldownTimeRemaining                                          => _offCooldownTimeRemaining.GetValue();
	public byte/*(bool)*/                                      IsDestroyedDuringActive                                        => _offIsDestroyedDuringActive.GetValue();
	#endregion

	public FSQCommandActionData(UClass c_CommandActionData, float c_GameTimeAtCreation, float c_CooldownTimeRemaining, byte/*(bool)*/ c_IsDestroyedDuringActive) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCommandActionData.SetValue(c_CommandActionData);
		_offGameTimeAtCreation.SetValue(c_GameTimeAtCreation);
		_offCooldownTimeRemaining.SetValue(c_CooldownTimeRemaining);
		_offIsDestroyedDuringActive.SetValue(c_IsDestroyedDuringActive);
	}
}
// ScriptStruct Squad.SQCommandActionDataFASItem
// 0x001C (0x0028 - 0x000C)
public class FSQCommandActionDataFASItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FSQCommandActionData>               _offContent                                                    = new ExternalOffset<FSQCommandActionData>(0x0010, false);     // 0x0010(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQCommandActionData                                Content                                                        => _offContent.GetValue();
	#endregion

	public FSQCommandActionDataFASItem(FSQCommandActionData c_Content) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offContent.SetValue(c_Content);
	}
}
// ScriptStruct Squad.SQCommanderActionDataArray
// 0x0010 (0x0118 - 0x0108)
public class FSQCommanderActionDataArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FSQCommandActionDataFASItem>> _offItems                                                      = new ExternalOffset<TArray<FSQCommandActionDataFASItem>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQCommandActionDataFASItem>                 Items                                                          => _offItems.GetValue();
	#endregion

	public FSQCommanderActionDataArray(TArray<FSQCommandActionDataFASItem> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.SQCommanderActionSounds
// 0x00A0
public class FSQCommanderActionSounds : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQCommanderActionSounds() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.CommanderVoteNominee
// 0x0014 (0x0020 - 0x000C)
public class FCommanderVoteNominee : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<ASQPlayerState>                     _offNomineeState                                               = new ExternalOffset<ASQPlayerState>(0x0010, true);            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offVoteCount                                                  = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQPlayerState                                      NomineeState                                                   => _offNomineeState.GetValue();
	public int                                                 VoteCount                                                      => _offVoteCount.GetValue();
	#endregion

	public FCommanderVoteNominee(ASQPlayerState c_NomineeState, int c_VoteCount) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNomineeState.SetValue(c_NomineeState);
		_offVoteCount.SetValue(c_VoteCount);
	}
}
// ScriptStruct Squad.CommanderNomineeArray
// 0x0010 (0x0118 - 0x0108)
public class FCommanderNomineeArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FCommanderVoteNominee>>      _offItems                                                      = new ExternalOffset<TArray<FCommanderVoteNominee>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FCommanderVoteNominee>                       Items                                                          => _offItems.GetValue();
	#endregion

	public FCommanderNomineeArray(TArray<FCommanderVoteNominee> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.SQRemoteServerConfig
// 0x0001
public class FSQRemoteServerConfig : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRemoteServerConfig() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQRemoteGameConfig
// 0x0010
public class FSQRemoteGameConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbLicensingEnabled                                          = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbServerHealthEnabled                                       = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offServerHealthHigh                                           = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offServerHealthLow                                            = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbModdedServersOnTop                                        = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bLicensingEnabled                                              => _offbLicensingEnabled.GetValue();
	public byte/*(bool)*/                                      bServerHealthEnabled                                           => _offbServerHealthEnabled.GetValue();
	public float                                               ServerHealthHigh                                               => _offServerHealthHigh.GetValue();
	public float                                               ServerHealthLow                                                => _offServerHealthLow.GetValue();
	public byte/*(bool)*/                                      bModdedServersOnTop                                            => _offbModdedServersOnTop.GetValue();
	#endregion

	public FSQRemoteGameConfig(byte/*(bool)*/ c_bLicensingEnabled, byte/*(bool)*/ c_bServerHealthEnabled, float c_ServerHealthHigh, float c_ServerHealthLow, byte/*(bool)*/ c_bModdedServersOnTop) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbLicensingEnabled.SetValue(c_bLicensingEnabled);
		_offbServerHealthEnabled.SetValue(c_bServerHealthEnabled);
		_offServerHealthHigh.SetValue(c_ServerHealthHigh);
		_offServerHealthLow.SetValue(c_ServerHealthLow);
		_offbModdedServersOnTop.SetValue(c_bModdedServersOnTop);
	}
}
// ScriptStruct Squad.SQServerSettings
// 0x0078
public class FSQServerSettings : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQServerSettings() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQConfigValueLoader
// 0x0008
public class FSQConfigValueLoader : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQConfigValueLoader() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQConfigMappedValueLoader
// 0x0050 (0x0058 - 0x0008)
public class FSQConfigMappedValueLoader : FSQConfigValueLoader
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQConfigMappedValueLoader() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQConsoleCommand
// 0x0038 (0x0060 - 0x0028)
public class FSQConsoleCommand : FAutoCompleteCommand
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQConsoleCommand() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQCoreStateId
// 0x0002
public class FSQCoreStateId : ExternalClass
{
	#region Offsets
	private ExternalOffset<ushort>                             _offRaw                                                        = new ExternalOffset<ushort>(0x0000);                          // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ushort                                              Raw                                                            => _offRaw.GetValue();
	#endregion

	public FSQCoreStateId(ushort c_Raw) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRaw.SetValue(c_Raw);
	}
}
// ScriptStruct Squad.SQCoreStateDataToIdMap
// 0x0050
public class FSQCoreStateDataToIdMap : ExternalClass
{
	#region Offsets
//	private TMap<class USQCoreStateData*, struct FSQCoreStateId> _offRaw                                                        = new ExternalOffset<TMap<FSQCoreStateId>>(0x0000, false);     // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FSQCoreStateDataToIdMap() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.CoreStateDataTickFunction
// 0x0008 (0x0058 - 0x0050)
public class FCoreStateDataTickFunction : FTickFunction
{
	#region Offsets
	private ExternalOffset<USQCoreStateData>                   _offTarget                                                     = new ExternalOffset<USQCoreStateData>(0x0050, true);          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQCoreStateData                                    Target                                                         => _offTarget.GetValue();
	#endregion

	public FCoreStateDataTickFunction(USQCoreStateData c_Target) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTarget.SetValue(c_Target);
	}
}
// ScriptStruct Squad.SQCoreStateDataList
// 0x0010
public class FSQCoreStateDataList : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<USQCoreStateData>>           _offRaw                                                        = new ExternalOffset<TArray<USQCoreStateData>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<USQCoreStateData>                            Raw                                                            => _offRaw.GetValue();
	#endregion

	public FSQCoreStateDataList(TArray<USQCoreStateData> c_Raw) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRaw.SetValue(c_Raw);
	}
}
// ScriptStruct Squad.SQSoldierInfo
// 0x0028
public class FSQSoldierInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offSquadId                                                    = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFireTeamId                                                 = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQAuthorityTypes>                  _offLeaderState                                                = new ExternalOffset<ESQAuthorityTypes>(0x0008, false);        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USQRoleSettings>                    _offCurrentRole                                                = new ExternalOffset<USQRoleSettings>(0x0010, true);           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offPlayerName                                                 = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 SquadId                                                        => _offSquadId.GetValue();
	public int                                                 FireTeamId                                                     => _offFireTeamId.GetValue();
	public ESQAuthorityTypes                                   LeaderState                                                    => _offLeaderState.GetValue();
	public USQRoleSettings                                     CurrentRole                                                    => _offCurrentRole.GetValue();
	public FString                                             PlayerName                                                     => _offPlayerName.GetValue();
	#endregion

	public FSQSoldierInfo(int c_SquadId, int c_FireTeamId, ESQAuthorityTypes c_LeaderState, USQRoleSettings c_CurrentRole, FString c_PlayerName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSquadId.SetValue(c_SquadId);
		_offFireTeamId.SetValue(c_FireTeamId);
		_offLeaderState.SetValue(c_LeaderState);
		_offCurrentRole.SetValue(c_CurrentRole);
		_offPlayerName.SetValue(c_PlayerName);
	}
}
// ScriptStruct Squad.SQVehicleOccupantInfo
// 0x0010 (0x0038 - 0x0028)
public class FSQVehicleOccupantInfo : FSQSoldierInfo
{
	#region Offsets
//	private ExternalOffset<char>                               _offbIsOccupied                                                = new ExternalOffset<char>(0x0028, false);                     // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ASQPlayerState>                     _offPlayerState                                                = new ExternalOffset<ASQPlayerState>(0x0030, true);            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQPlayerState                                      PlayerState                                                    => _offPlayerState.GetValue();
	#endregion

	public FSQVehicleOccupantInfo(ASQPlayerState c_PlayerState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayerState.SetValue(c_PlayerState);
	}
}
// ScriptStruct Squad.WidgetGroup
// 0x0010
public class FWidgetGroup : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<USQCoreStateWidget>>         _offList                                                       = new ExternalOffset<TArray<USQCoreStateWidget>>(0x0000, false); // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<USQCoreStateWidget>                          List                                                           => _offList.GetValue();
	#endregion

	public FWidgetGroup(TArray<USQCoreStateWidget> c_List) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offList.SetValue(c_List);
	}
}
// ScriptStruct Squad.SQEffectParticleSound
// 0x0018
public class FSQEffectParticleSound : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offLastingEffectClass                                         = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offParticleEffect                                             = new ExternalOffset<UParticleSystem>(0x0008, true);           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundBase>                         _offSoundEffect                                                = new ExternalOffset<USoundBase>(0x0010, true);                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              LastingEffectClass                                             => _offLastingEffectClass.GetValue();
	public UParticleSystem                                     ParticleEffect                                                 => _offParticleEffect.GetValue();
	public USoundBase                                          SoundEffect                                                    => _offSoundEffect.GetValue();
	#endregion

	public FSQEffectParticleSound(UClass c_LastingEffectClass, UParticleSystem c_ParticleEffect, USoundBase c_SoundEffect) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLastingEffectClass.SetValue(c_LastingEffectClass);
		_offParticleEffect.SetValue(c_ParticleEffect);
		_offSoundEffect.SetValue(c_SoundEffect);
	}
}
// ScriptStruct Squad.SQDamageEffect
// 0x0018
public class FSQDamageEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offDamageTypeClass                                            = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQEffectParticleSound>>     _offEffects                                                    = new ExternalOffset<TArray<FSQEffectParticleSound>>(0x0008, false); // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              DamageTypeClass                                                => _offDamageTypeClass.GetValue();
	public TArray<FSQEffectParticleSound>                      Effects                                                        => _offEffects.GetValue();
	#endregion

	public FSQDamageEffect(UClass c_DamageTypeClass, TArray<FSQEffectParticleSound> c_Effects) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDamageTypeClass.SetValue(c_DamageTypeClass);
		_offEffects.SetValue(c_Effects);
	}
}
// ScriptStruct Squad.SQDamageTypeEffects
// 0x0028
public class FSQDamageTypeEffects : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSQDamageEffect>                    _offDefaultDamageEffect                                        = new ExternalOffset<FSQDamageEffect>(0x0000, false);          // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQDamageEffect>>            _offDamageEffects                                              = new ExternalOffset<TArray<FSQDamageEffect>>(0x0018, false);  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQDamageEffect                                     DefaultDamageEffect                                            => _offDefaultDamageEffect.GetValue();
	public TArray<FSQDamageEffect>                             DamageEffects                                                  => _offDamageEffects.GetValue();
	#endregion

	public FSQDamageTypeEffects(FSQDamageEffect c_DefaultDamageEffect, TArray<FSQDamageEffect> c_DamageEffects) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultDamageEffect.SetValue(c_DefaultDamageEffect);
		_offDamageEffects.SetValue(c_DamageEffects);
	}
}
// ScriptStruct Squad.SQDamageModifier
// 0x0028
public class FSQDamageModifier : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offDamageTypeClass                                            = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offModifier                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForwardDamageToSoldier                                    = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offForwardDamageToSoldierModifier                             = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForwardDeathToSoldier                                     = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncapSoldierOnDeath                                       = new ExternalOffset<byte/*(bool)*/>(0x0015);                  // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOnlyPassDamageIfDirectHit                                 = new ExternalOffset<byte/*(bool)*/>(0x0016);                  // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDirectHitDamageMultiplier                                  = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offIndirectHitDamageMultiplier                                = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDirectHitRadialDamageMultiplier                            = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              DamageTypeClass                                                => _offDamageTypeClass.GetValue();
	public float                                               Modifier                                                       => _offModifier.GetValue();
	public byte/*(bool)*/                                      bForwardDamageToSoldier                                        => _offbForwardDamageToSoldier.GetValue();
	public float                                               ForwardDamageToSoldierModifier                                 => _offForwardDamageToSoldierModifier.GetValue();
	public byte/*(bool)*/                                      bForwardDeathToSoldier                                         => _offbForwardDeathToSoldier.GetValue();
	public byte/*(bool)*/                                      bIncapSoldierOnDeath                                           => _offbIncapSoldierOnDeath.GetValue();
	public byte/*(bool)*/                                      bOnlyPassDamageIfDirectHit                                     => _offbOnlyPassDamageIfDirectHit.GetValue();
	public float                                               DirectHitDamageMultiplier                                      => _offDirectHitDamageMultiplier.GetValue();
	public float                                               IndirectHitDamageMultiplier                                    => _offIndirectHitDamageMultiplier.GetValue();
	public float                                               DirectHitRadialDamageMultiplier                                => _offDirectHitRadialDamageMultiplier.GetValue();
	#endregion

	public FSQDamageModifier(UClass c_DamageTypeClass, float c_Modifier, byte/*(bool)*/ c_bForwardDamageToSoldier, float c_ForwardDamageToSoldierModifier, byte/*(bool)*/ c_bForwardDeathToSoldier, byte/*(bool)*/ c_bIncapSoldierOnDeath, byte/*(bool)*/ c_bOnlyPassDamageIfDirectHit, float c_DirectHitDamageMultiplier, float c_IndirectHitDamageMultiplier, float c_DirectHitRadialDamageMultiplier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDamageTypeClass.SetValue(c_DamageTypeClass);
		_offModifier.SetValue(c_Modifier);
		_offbForwardDamageToSoldier.SetValue(c_bForwardDamageToSoldier);
		_offForwardDamageToSoldierModifier.SetValue(c_ForwardDamageToSoldierModifier);
		_offbForwardDeathToSoldier.SetValue(c_bForwardDeathToSoldier);
		_offbIncapSoldierOnDeath.SetValue(c_bIncapSoldierOnDeath);
		_offbOnlyPassDamageIfDirectHit.SetValue(c_bOnlyPassDamageIfDirectHit);
		_offDirectHitDamageMultiplier.SetValue(c_DirectHitDamageMultiplier);
		_offIndirectHitDamageMultiplier.SetValue(c_IndirectHitDamageMultiplier);
		_offDirectHitRadialDamageMultiplier.SetValue(c_DirectHitRadialDamageMultiplier);
	}
}
// ScriptStruct Squad.SQDeployableChangeStateEffect
// 0x0020
public class FSQDeployableChangeStateEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQBuildState>                      _offOldBuildState                                              = new ExternalOffset<ESQBuildState>(0x0000, false);            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQBuildState>                      _offNewBuildState                                              = new ExternalOffset<ESQBuildState>(0x0001, false);            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCullingDistanceInMeters                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQEffectParticleSound>             _offEffect                                                     = new ExternalOffset<FSQEffectParticleSound>(0x0008, false);   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQBuildState                                       OldBuildState                                                  => _offOldBuildState.GetValue();
	public ESQBuildState                                       NewBuildState                                                  => _offNewBuildState.GetValue();
	public float                                               CullingDistanceInMeters                                        => _offCullingDistanceInMeters.GetValue();
	public FSQEffectParticleSound                              Effect                                                         => _offEffect.GetValue();
	#endregion

	public FSQDeployableChangeStateEffect(ESQBuildState c_OldBuildState, ESQBuildState c_NewBuildState, float c_CullingDistanceInMeters, FSQEffectParticleSound c_Effect) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOldBuildState.SetValue(c_OldBuildState);
		_offNewBuildState.SetValue(c_NewBuildState);
		_offCullingDistanceInMeters.SetValue(c_CullingDistanceInMeters);
		_offEffect.SetValue(c_Effect);
	}
}
// ScriptStruct Squad.SQDeployableStateDamageEffect
// 0x0018
public class FSQDeployableStateDamageEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQBuildState>                      _offOldBuildState                                              = new ExternalOffset<ESQBuildState>(0x0000, false);            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQBuildState>                      _offNewBuildState                                              = new ExternalOffset<ESQBuildState>(0x0001, false);            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCullingDistanceInMeters                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQDamageEffect>>            _offDamageEffects                                              = new ExternalOffset<TArray<FSQDamageEffect>>(0x0008, false);  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQBuildState                                       OldBuildState                                                  => _offOldBuildState.GetValue();
	public ESQBuildState                                       NewBuildState                                                  => _offNewBuildState.GetValue();
	public float                                               CullingDistanceInMeters                                        => _offCullingDistanceInMeters.GetValue();
	public TArray<FSQDamageEffect>                             DamageEffects                                                  => _offDamageEffects.GetValue();
	#endregion

	public FSQDeployableStateDamageEffect(ESQBuildState c_OldBuildState, ESQBuildState c_NewBuildState, float c_CullingDistanceInMeters, TArray<FSQDamageEffect> c_DamageEffects) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOldBuildState.SetValue(c_OldBuildState);
		_offNewBuildState.SetValue(c_NewBuildState);
		_offCullingDistanceInMeters.SetValue(c_CullingDistanceInMeters);
		_offDamageEffects.SetValue(c_DamageEffects);
	}
}
// ScriptStruct Squad.SQHUDMessage
// 0x0030
public class FSQHUDMessage : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMessage                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0010, false);             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offScale                                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offExpireTime                                                 = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offFadeTime                                                   = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                             Message                                                        => _offMessage.GetValue();
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public float                                               Scale                                                          => _offScale.GetValue();
	public float                                               ExpireTime                                                     => _offExpireTime.GetValue();
	public float                                               FadeTime                                                       => _offFadeTime.GetValue();
	#endregion

	public FSQHUDMessage(FString c_Message, FLinearColor c_Color, float c_Scale, float c_ExpireTime, float c_FadeTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMessage.SetValue(c_Message);
		_offColor.SetValue(c_Color);
		_offScale.SetValue(c_Scale);
		_offExpireTime.SetValue(c_ExpireTime);
		_offFadeTime.SetValue(c_FadeTime);
	}
}
// ScriptStruct Squad.SQMessageBoxInfo
// 0x0078
public class FSQMessageBoxInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSlateFontInfo>                     _offFontInfo                                                   = new ExternalOffset<FSlateFontInfo>(0x0000, false);           // 0x0000(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQHUDMessage>>              _offMessages                                                   = new ExternalOffset<TArray<FSQHUDMessage>>(0x0050, false);    // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offMessageBoxLocation                                         = new ExternalOffset<FVector2D>(0x0060, false);                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxNumberOfMessagesToShow                                  = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMessagesLifetime                                           = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMessagesFadeTime                                           = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTextHorizontalAlignment>         _offMessageHorizontalAlignment                                 = new ExternalOffset<ESQTextHorizontalAlignment>(0x0074, false); // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTextVerticalAlignment>           _offMessageVerticalAlignment                                   = new ExternalOffset<ESQTextVerticalAlignment>(0x0075, false); // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbScrollUp                                                  = new ExternalOffset<byte/*(bool)*/>(0x0076);                  // 0x0076(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateFontInfo                                      FontInfo                                                       => _offFontInfo.GetValue();
	public TArray<FSQHUDMessage>                               Messages                                                       => _offMessages.GetValue();
	public FVector2D                                           MessageBoxLocation                                             => _offMessageBoxLocation.GetValue();
	public int                                                 MaxNumberOfMessagesToShow                                      => _offMaxNumberOfMessagesToShow.GetValue();
	public float                                               MessagesLifetime                                               => _offMessagesLifetime.GetValue();
	public float                                               MessagesFadeTime                                               => _offMessagesFadeTime.GetValue();
	public ESQTextHorizontalAlignment                          MessageHorizontalAlignment                                     => _offMessageHorizontalAlignment.GetValue();
	public ESQTextVerticalAlignment                            MessageVerticalAlignment                                       => _offMessageVerticalAlignment.GetValue();
	public byte/*(bool)*/                                      bScrollUp                                                      => _offbScrollUp.GetValue();
	#endregion

	public FSQMessageBoxInfo(FSlateFontInfo c_FontInfo, TArray<FSQHUDMessage> c_Messages, FVector2D c_MessageBoxLocation, int c_MaxNumberOfMessagesToShow, float c_MessagesLifetime, float c_MessagesFadeTime, ESQTextHorizontalAlignment c_MessageHorizontalAlignment, ESQTextVerticalAlignment c_MessageVerticalAlignment, byte/*(bool)*/ c_bScrollUp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFontInfo.SetValue(c_FontInfo);
		_offMessages.SetValue(c_Messages);
		_offMessageBoxLocation.SetValue(c_MessageBoxLocation);
		_offMaxNumberOfMessagesToShow.SetValue(c_MaxNumberOfMessagesToShow);
		_offMessagesLifetime.SetValue(c_MessagesLifetime);
		_offMessagesFadeTime.SetValue(c_MessagesFadeTime);
		_offMessageHorizontalAlignment.SetValue(c_MessageHorizontalAlignment);
		_offMessageVerticalAlignment.SetValue(c_MessageVerticalAlignment);
		_offbScrollUp.SetValue(c_bScrollUp);
	}
}
// ScriptStruct Squad.SQDrawChatStruct
// 0x00B0
public class FSQDrawChatStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offRenderPosition                                             = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                              _offText                                                       = new ExternalOffset<FText>(0x0008, false);                    // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0020, false);             // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQMessageBoxInfo>                  _offInfo                                                       = new ExternalOffset<FSQMessageBoxInfo>(0x0030, false);        // 0x0030(0x0078) (NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offIndex                                                      = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           RenderPosition                                                 => _offRenderPosition.GetValue();
	public FText                                               Text                                                           => _offText.GetValue();
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public FSQMessageBoxInfo                                   Info                                                           => _offInfo.GetValue();
	public int                                                 Index                                                          => _offIndex.GetValue();
	#endregion

	public FSQDrawChatStruct(FVector2D c_RenderPosition, FText c_Text, FLinearColor c_Color, FSQMessageBoxInfo c_Info, int c_Index) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRenderPosition.SetValue(c_RenderPosition);
		_offText.SetValue(c_Text);
		_offColor.SetValue(c_Color);
		_offInfo.SetValue(c_Info);
		_offIndex.SetValue(c_Index);
	}
}
// ScriptStruct Squad.SQAudioComponentPool
// 0x0020
public class FSQAudioComponentPool : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UAudioComponent>>            _offAudioComponentPool                                         = new ExternalOffset<TArray<UAudioComponent>>(0x0000, false);  // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<USceneComponent>                    _offAttachToComponent                                          = new ExternalOffset<USceneComponent>(0x0010, true);           // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAttachPointName                                            = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UAudioComponent>                             AudioComponentPool                                             => _offAudioComponentPool.GetValue();
	public USceneComponent                                     AttachToComponent                                              => _offAttachToComponent.GetValue();
	public FName                                               AttachPointName                                                => _offAttachPointName.GetValue();
	#endregion

	public FSQAudioComponentPool(TArray<UAudioComponent> c_AudioComponentPool, USceneComponent c_AttachToComponent, FName c_AttachPointName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAudioComponentPool.SetValue(c_AudioComponentPool);
		_offAttachToComponent.SetValue(c_AttachToComponent);
		_offAttachPointName.SetValue(c_AttachPointName);
	}
}
// ScriptStruct Squad.SQAnimPlayTime
// 0x000C
public class FSQAnimPlayTime : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offWeaponPlayTime                                             = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSoldier1pPlayTime                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSoldier3pPlayTime                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               WeaponPlayTime                                                 => _offWeaponPlayTime.GetValue();
	public float                                               Soldier1pPlayTime                                              => _offSoldier1pPlayTime.GetValue();
	public float                                               Soldier3pPlayTime                                              => _offSoldier3pPlayTime.GetValue();
	#endregion

	public FSQAnimPlayTime(float c_WeaponPlayTime, float c_Soldier1pPlayTime, float c_Soldier3pPlayTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeaponPlayTime.SetValue(c_WeaponPlayTime);
		_offSoldier1pPlayTime.SetValue(c_Soldier1pPlayTime);
		_offSoldier3pPlayTime.SetValue(c_Soldier3pPlayTime);
	}
}
// ScriptStruct Squad.SQBlueprintFriend
// 0x0060
public class FSQBlueprintFriend : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offDisplayName                                                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offRealName                                                   = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offStatusString                                               = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsOnline                                                  = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsPlaying                                                 = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsPlayingThisGame                                         = new ExternalOffset<byte/*(bool)*/>(0x0032);                  // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsJoinable                                                = new ExternalOffset<byte/*(bool)*/>(0x0033);                  // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             DisplayName                                                    => _offDisplayName.GetValue();
	public FString                                             RealName                                                       => _offRealName.GetValue();
	public FString                                             StatusString                                                   => _offStatusString.GetValue();
	public byte/*(bool)*/                                      bIsOnline                                                      => _offbIsOnline.GetValue();
	public byte/*(bool)*/                                      bIsPlaying                                                     => _offbIsPlaying.GetValue();
	public byte/*(bool)*/                                      bIsPlayingThisGame                                             => _offbIsPlayingThisGame.GetValue();
	public byte/*(bool)*/                                      bIsJoinable                                                    => _offbIsJoinable.GetValue();
	#endregion

	public FSQBlueprintFriend(FString c_DisplayName, FString c_RealName, FString c_StatusString, byte/*(bool)*/ c_bIsOnline, byte/*(bool)*/ c_bIsPlaying, byte/*(bool)*/ c_bIsPlayingThisGame, byte/*(bool)*/ c_bIsJoinable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDisplayName.SetValue(c_DisplayName);
		_offRealName.SetValue(c_RealName);
		_offStatusString.SetValue(c_StatusString);
		_offbIsOnline.SetValue(c_bIsOnline);
		_offbIsPlaying.SetValue(c_bIsPlaying);
		_offbIsPlayingThisGame.SetValue(c_bIsPlayingThisGame);
		_offbIsJoinable.SetValue(c_bIsJoinable);
	}
}
// ScriptStruct Squad.SQFlagScoreInfo
// 0x001C
public class FSQFlagScoreInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offScoreForFlagNeutralize                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offScoreForCapture                                            = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offScoreForDefense                                            = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offScoreOnCaptureTick                                         = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offScoreOnDefenseTick                                         = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offCaptureReportChannel                                       = new ExternalOffset<ESQKillReportChannel>(0x0014, false);     // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offNeutralizeReportChannel                                    = new ExternalOffset<ESQKillReportChannel>(0x0015, false);     // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offDefenseReportChannel                                       = new ExternalOffset<ESQKillReportChannel>(0x0016, false);     // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNotifyPlayerOnNeutral                                     = new ExternalOffset<byte/*(bool)*/>(0x0017);                  // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNotifyPlayerOnCapture                                     = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNotifyPlayerOnDefense                                     = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNotifyPlayerOnTick                                        = new ExternalOffset<byte/*(bool)*/>(0x001A);                  // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ScoreForFlagNeutralize                                         => _offScoreForFlagNeutralize.GetValue();
	public int                                                 ScoreForCapture                                                => _offScoreForCapture.GetValue();
	public int                                                 ScoreForDefense                                                => _offScoreForDefense.GetValue();
	public int                                                 ScoreOnCaptureTick                                             => _offScoreOnCaptureTick.GetValue();
	public int                                                 ScoreOnDefenseTick                                             => _offScoreOnDefenseTick.GetValue();
	public ESQKillReportChannel                                CaptureReportChannel                                           => _offCaptureReportChannel.GetValue();
	public ESQKillReportChannel                                NeutralizeReportChannel                                        => _offNeutralizeReportChannel.GetValue();
	public ESQKillReportChannel                                DefenseReportChannel                                           => _offDefenseReportChannel.GetValue();
	public byte/*(bool)*/                                      bNotifyPlayerOnNeutral                                         => _offbNotifyPlayerOnNeutral.GetValue();
	public byte/*(bool)*/                                      bNotifyPlayerOnCapture                                         => _offbNotifyPlayerOnCapture.GetValue();
	public byte/*(bool)*/                                      bNotifyPlayerOnDefense                                         => _offbNotifyPlayerOnDefense.GetValue();
	public byte/*(bool)*/                                      bNotifyPlayerOnTick                                            => _offbNotifyPlayerOnTick.GetValue();
	#endregion

	public FSQFlagScoreInfo(int c_ScoreForFlagNeutralize, int c_ScoreForCapture, int c_ScoreForDefense, int c_ScoreOnCaptureTick, int c_ScoreOnDefenseTick, ESQKillReportChannel c_CaptureReportChannel, ESQKillReportChannel c_NeutralizeReportChannel, ESQKillReportChannel c_DefenseReportChannel, byte/*(bool)*/ c_bNotifyPlayerOnNeutral, byte/*(bool)*/ c_bNotifyPlayerOnCapture, byte/*(bool)*/ c_bNotifyPlayerOnDefense, byte/*(bool)*/ c_bNotifyPlayerOnTick) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScoreForFlagNeutralize.SetValue(c_ScoreForFlagNeutralize);
		_offScoreForCapture.SetValue(c_ScoreForCapture);
		_offScoreForDefense.SetValue(c_ScoreForDefense);
		_offScoreOnCaptureTick.SetValue(c_ScoreOnCaptureTick);
		_offScoreOnDefenseTick.SetValue(c_ScoreOnDefenseTick);
		_offCaptureReportChannel.SetValue(c_CaptureReportChannel);
		_offNeutralizeReportChannel.SetValue(c_NeutralizeReportChannel);
		_offDefenseReportChannel.SetValue(c_DefenseReportChannel);
		_offbNotifyPlayerOnNeutral.SetValue(c_bNotifyPlayerOnNeutral);
		_offbNotifyPlayerOnCapture.SetValue(c_bNotifyPlayerOnCapture);
		_offbNotifyPlayerOnDefense.SetValue(c_bNotifyPlayerOnDefense);
		_offbNotifyPlayerOnTick.SetValue(c_bNotifyPlayerOnTick);
	}
}
// ScriptStruct Squad.SQGameSubsystemObject
// 0x0018
public class FSQGameSubsystemObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offSubsystemClass                                             = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRunOnServer                                               = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRunOnClient                                               = new ExternalOffset<byte/*(bool)*/>(0x0011);                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             SubsystemClass                                                 => _offSubsystemClass.GetValue();
	public byte/*(bool)*/                                      bRunOnServer                                                   => _offbRunOnServer.GetValue();
	public byte/*(bool)*/                                      bRunOnClient                                                   => _offbRunOnClient.GetValue();
	#endregion

	public FSQGameSubsystemObject(FString c_SubsystemClass, byte/*(bool)*/ c_bRunOnServer, byte/*(bool)*/ c_bRunOnClient) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSubsystemClass.SetValue(c_SubsystemClass);
		_offbRunOnServer.SetValue(c_bRunOnServer);
		_offbRunOnClient.SetValue(c_bRunOnClient);
	}
}
// ScriptStruct Squad.SQDesignLink
// 0x0010
public class FSQDesignLink : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offNodeA                                                      = new ExternalOffset<AActor>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offNodeB                                                      = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              NodeA                                                          => _offNodeA.GetValue();
	public AActor                                              NodeB                                                          => _offNodeB.GetValue();
	#endregion

	public FSQDesignLink(AActor c_NodeA, AActor c_NodeB) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNodeA.SetValue(c_NodeA);
		_offNodeB.SetValue(c_NodeB);
	}
}
// ScriptStruct Squad.SQRoute
// 0x0020
public class FSQRoute : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQGraphLink>>               _offLinks                                                      = new ExternalOffset<TArray<FSQGraphLink>>(0x0000, false);     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<USQCaptureZoneComponent>            _offSource                                                     = new ExternalOffset<USQCaptureZoneComponent>(0x0010, true);   // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USQCaptureZoneComponent>            _offDestination                                                = new ExternalOffset<USQCaptureZoneComponent>(0x0018, true);   // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQGraphLink>                                Links                                                          => _offLinks.GetValue();
	public USQCaptureZoneComponent                             Source                                                         => _offSource.GetValue();
	public USQCaptureZoneComponent                             Destination                                                    => _offDestination.GetValue();
	#endregion

	public FSQRoute(TArray<FSQGraphLink> c_Links, USQCaptureZoneComponent c_Source, USQCaptureZoneComponent c_Destination) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLinks.SetValue(c_Links);
		_offSource.SetValue(c_Source);
		_offDestination.SetValue(c_Destination);
	}
}
// ScriptStruct Squad.SQRoute2
// 0x0050
public class FSQRoute2 : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRoute2() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQGrenadeData
// 0x0048
public class FSQGrenadeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbInfiniteAmmo                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offInitialAmmo                                                = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxAmmo                                                    = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOverhandThrowVelocity                                      = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUnderhandThrowVelocity                                     = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offThrowReadyTime                                             = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOverhandThrowTime                                          = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUnderhandThrowTime                                         = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOverhandThrowDuration                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUnderhandThrowDuration                                     = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offThrowModeTransitionTime                                    = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFuseTimeMin                                                = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFuseTimeMax                                                = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReloadTime                                                 = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offProjectileClass                                            = new ExternalOffset<UClass>(0x0038, true);                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offProjectileOriginSocketName                                 = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bInfiniteAmmo                                                  => _offbInfiniteAmmo.GetValue();
	public int                                                 InitialAmmo                                                    => _offInitialAmmo.GetValue();
	public int                                                 MaxAmmo                                                        => _offMaxAmmo.GetValue();
	public float                                               OverhandThrowVelocity                                          => _offOverhandThrowVelocity.GetValue();
	public float                                               UnderhandThrowVelocity                                         => _offUnderhandThrowVelocity.GetValue();
	public float                                               ThrowReadyTime                                                 => _offThrowReadyTime.GetValue();
	public float                                               OverhandThrowTime                                              => _offOverhandThrowTime.GetValue();
	public float                                               UnderhandThrowTime                                             => _offUnderhandThrowTime.GetValue();
	public float                                               OverhandThrowDuration                                          => _offOverhandThrowDuration.GetValue();
	public float                                               UnderhandThrowDuration                                         => _offUnderhandThrowDuration.GetValue();
	public float                                               ThrowModeTransitionTime                                        => _offThrowModeTransitionTime.GetValue();
	public float                                               FuseTimeMin                                                    => _offFuseTimeMin.GetValue();
	public float                                               FuseTimeMax                                                    => _offFuseTimeMax.GetValue();
	public float                                               ReloadTime                                                     => _offReloadTime.GetValue();
	public UClass                                              ProjectileClass                                                => _offProjectileClass.GetValue();
	public FName                                               ProjectileOriginSocketName                                     => _offProjectileOriginSocketName.GetValue();
	#endregion

	public FSQGrenadeData(byte/*(bool)*/ c_bInfiniteAmmo, int c_InitialAmmo, int c_MaxAmmo, float c_OverhandThrowVelocity, float c_UnderhandThrowVelocity, float c_ThrowReadyTime, float c_OverhandThrowTime, float c_UnderhandThrowTime, float c_OverhandThrowDuration, float c_UnderhandThrowDuration, float c_ThrowModeTransitionTime, float c_FuseTimeMin, float c_FuseTimeMax, float c_ReloadTime, UClass c_ProjectileClass, FName c_ProjectileOriginSocketName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbInfiniteAmmo.SetValue(c_bInfiniteAmmo);
		_offInitialAmmo.SetValue(c_InitialAmmo);
		_offMaxAmmo.SetValue(c_MaxAmmo);
		_offOverhandThrowVelocity.SetValue(c_OverhandThrowVelocity);
		_offUnderhandThrowVelocity.SetValue(c_UnderhandThrowVelocity);
		_offThrowReadyTime.SetValue(c_ThrowReadyTime);
		_offOverhandThrowTime.SetValue(c_OverhandThrowTime);
		_offUnderhandThrowTime.SetValue(c_UnderhandThrowTime);
		_offOverhandThrowDuration.SetValue(c_OverhandThrowDuration);
		_offUnderhandThrowDuration.SetValue(c_UnderhandThrowDuration);
		_offThrowModeTransitionTime.SetValue(c_ThrowModeTransitionTime);
		_offFuseTimeMin.SetValue(c_FuseTimeMin);
		_offFuseTimeMax.SetValue(c_FuseTimeMax);
		_offReloadTime.SetValue(c_ReloadTime);
		_offProjectileClass.SetValue(c_ProjectileClass);
		_offProjectileOriginSocketName.SetValue(c_ProjectileOriginSocketName);
	}
}
// ScriptStruct Squad.SQGroundVehicleWheelParameters
// 0x0040
public class FSQGroundVehicleWheelParameters : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offWheelsInAir                                                = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRPM                                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLongSlip                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLatSlip                                                    = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAsphalt                                                    = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDirt                                                       = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGrass                                                      = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGravel                                                     = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMetal                                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMud                                                        = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSand                                                       = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSnow                                                       = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSnowWet                                                    = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTallGrass                                                  = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWater                                                      = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWood                                                       = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               WheelsInAir                                                    => _offWheelsInAir.GetValue();
	public float                                               RPM                                                            => _offRPM.GetValue();
	public float                                               LongSlip                                                       => _offLongSlip.GetValue();
	public float                                               LatSlip                                                        => _offLatSlip.GetValue();
	public float                                               Asphalt                                                        => _offAsphalt.GetValue();
	public float                                               Dirt                                                           => _offDirt.GetValue();
	public float                                               Grass                                                          => _offGrass.GetValue();
	public float                                               Gravel                                                         => _offGravel.GetValue();
	public float                                               Metal                                                          => _offMetal.GetValue();
	public float                                               Mud                                                            => _offMud.GetValue();
	public float                                               Sand                                                           => _offSand.GetValue();
	public float                                               Snow                                                           => _offSnow.GetValue();
	public float                                               SnowWet                                                        => _offSnowWet.GetValue();
	public float                                               TallGrass                                                      => _offTallGrass.GetValue();
	public float                                               Water                                                          => _offWater.GetValue();
	public float                                               Wood                                                           => _offWood.GetValue();
	#endregion

	public FSQGroundVehicleWheelParameters(float c_WheelsInAir, float c_RPM, float c_LongSlip, float c_LatSlip, float c_Asphalt, float c_Dirt, float c_Grass, float c_Gravel, float c_Metal, float c_Mud, float c_Sand, float c_Snow, float c_SnowWet, float c_TallGrass, float c_Water, float c_Wood) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWheelsInAir.SetValue(c_WheelsInAir);
		_offRPM.SetValue(c_RPM);
		_offLongSlip.SetValue(c_LongSlip);
		_offLatSlip.SetValue(c_LatSlip);
		_offAsphalt.SetValue(c_Asphalt);
		_offDirt.SetValue(c_Dirt);
		_offGrass.SetValue(c_Grass);
		_offGravel.SetValue(c_Gravel);
		_offMetal.SetValue(c_Metal);
		_offMud.SetValue(c_Mud);
		_offSand.SetValue(c_Sand);
		_offSnow.SetValue(c_Snow);
		_offSnowWet.SetValue(c_SnowWet);
		_offTallGrass.SetValue(c_TallGrass);
		_offWater.SetValue(c_Water);
		_offWood.SetValue(c_Wood);
	}
}
// ScriptStruct Squad.SQVehicleEffectsQualitySetting
// 0x0008
public class FSQVehicleEffectsQualitySetting : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCullingDistance                                            = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	public float                                               CullingDistance                                                => _offCullingDistance.GetValue();
	#endregion

	public FSQVehicleEffectsQualitySetting(byte/*(bool)*/ c_bEnabled, float c_CullingDistance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbEnabled.SetValue(c_bEnabled);
		_offCullingDistance.SetValue(c_CullingDistance);
	}
}
// ScriptStruct Squad.SQVehicleEffectConfig
// 0x0030
public class FSQVehicleEffectConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<UParticleSystem>                    _offParticleSystemTemplate                                     = new ExternalOffset<UParticleSystem>(0x0000, true);           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystemComponent>           _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0008, true);  // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableSounds                                              = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offWheelBoneName                                              = new ExternalOffset<FName>(0x0014, false);                    // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UVehicleWheel>>      _offVehicleWheel                                               = new ExternalOffset<TWeakObjectPtr<UVehicleWheel>>(0x001C, false); // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<USQPhysicalMaterial>> _offPhysMaterial                                               = new ExternalOffset<TWeakObjectPtr<USQPhysicalMaterial>>(0x0024, false); // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UParticleSystem                                     ParticleSystemTemplate                                         => _offParticleSystemTemplate.GetValue();
	public UParticleSystemComponent                            ParticleSystem                                                 => _offParticleSystem.GetValue();
	public byte/*(bool)*/                                      bEnableSounds                                                  => _offbEnableSounds.GetValue();
	public FName                                               WheelBoneName                                                  => _offWheelBoneName.GetValue();
	public TWeakObjectPtr<UVehicleWheel>                       VehicleWheel                                                   => _offVehicleWheel.GetValue();
	public TWeakObjectPtr<USQPhysicalMaterial>                 PhysMaterial                                                   => _offPhysMaterial.GetValue();
	#endregion

	public FSQVehicleEffectConfig(UParticleSystem c_ParticleSystemTemplate, UParticleSystemComponent c_ParticleSystem, byte/*(bool)*/ c_bEnableSounds, FName c_WheelBoneName, TWeakObjectPtr<UVehicleWheel> c_VehicleWheel, TWeakObjectPtr<USQPhysicalMaterial> c_PhysMaterial) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParticleSystemTemplate.SetValue(c_ParticleSystemTemplate);
		_offParticleSystem.SetValue(c_ParticleSystem);
		_offbEnableSounds.SetValue(c_bEnableSounds);
		_offWheelBoneName.SetValue(c_WheelBoneName);
		_offVehicleWheel.SetValue(c_VehicleWheel);
		_offPhysMaterial.SetValue(c_PhysMaterial);
	}
}
// ScriptStruct Squad.SQBoredMontageSet
// 0x0018
public class FSQBoredMontageSet : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offBoredWeaponMontage                                         = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offBored1pMontage                                             = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offBored3pMontage                                             = new ExternalOffset<UAnimMontage>(0x0010, true);              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        BoredWeaponMontage                                             => _offBoredWeaponMontage.GetValue();
	public UAnimMontage                                        Bored1pMontage                                                 => _offBored1pMontage.GetValue();
	public UAnimMontage                                        Bored3pMontage                                                 => _offBored3pMontage.GetValue();
	#endregion

	public FSQBoredMontageSet(UAnimMontage c_BoredWeaponMontage, UAnimMontage c_Bored1pMontage, UAnimMontage c_Bored3pMontage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoredWeaponMontage.SetValue(c_BoredWeaponMontage);
		_offBored1pMontage.SetValue(c_Bored1pMontage);
		_offBored3pMontage.SetValue(c_Bored3pMontage);
	}
}
// ScriptStruct Squad.SQMutualWeapon
// 0x00D0
public class FSQMutualWeapon : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offWeapon                                                     = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCheckCurrentMagazineForEquip                              = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offCheckCurrentMagazineForUnequip                             = new ExternalOffset<byte/*(bool)*/>(0x0009);                  // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCheckPreviousMagazineForEquip                             = new ExternalOffset<byte/*(bool)*/>(0x000A);                  // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offBothEmptyWeaponEquipMontage                                = new ExternalOffset<UAnimMontage>(0x0010, true);              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offBothEmpty1pEquipMontage                                    = new ExternalOffset<UAnimMontage>(0x0018, true);              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offBothEmpty3pEquipMontage                                    = new ExternalOffset<UAnimMontage>(0x0020, true);              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBothEmptyEquipDuration                                     = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offPreviousEmptyOrIgnoreCurrentWeaponEquipMontage             = new ExternalOffset<UAnimMontage>(0x0030, true);              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offPreviousEmptyOrIgnoreCurrent1pEquipMontage                 = new ExternalOffset<UAnimMontage>(0x0038, true);              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offPreviousEmptyOrIgnoreCurrent3pEquipMontage                 = new ExternalOffset<UAnimMontage>(0x0040, true);              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPreviousEmptyOrIgnoreCurrentEquipDuration                  = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmptyOrIgnorePreviousWeaponEquipMontage             = new ExternalOffset<UAnimMontage>(0x0050, true);              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmptyOrIgnorePrevious1pEquipMontage                 = new ExternalOffset<UAnimMontage>(0x0058, true);              // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmptyOrIgnorePrevious3pEquipMontage                 = new ExternalOffset<UAnimMontage>(0x0060, true);              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCurrentEmptyOrIgnorePreviousEquipDuration                  = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneEmptyOrIgnoreBothWeaponEquipMontage                    = new ExternalOffset<UAnimMontage>(0x0070, true);              // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneEmptyOrIgnoreBoth1pEquipMontage                        = new ExternalOffset<UAnimMontage>(0x0078, true);              // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneEmptyOrIgnoreBoth3pEquipMontage                        = new ExternalOffset<UAnimMontage>(0x0080, true);              // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNoneEmptyOrIgnoreBothEquipDuration                         = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmptyWeaponUnequipMontage                           = new ExternalOffset<UAnimMontage>(0x0090, true);              // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmpty1pUnequipMontage                               = new ExternalOffset<UAnimMontage>(0x0098, true);              // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offCurrentEmpty3pUnequipMontage                               = new ExternalOffset<UAnimMontage>(0x00A0, true);              // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCurrentEmptyUnequipDuration                                = new ExternalOffset<float>(0x00A8);                           // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneOrIgnoreCurrentWeaponUnequipMontage                    = new ExternalOffset<UAnimMontage>(0x00B0, true);              // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneOrIgnoreCurrent1pUnequipMontage                        = new ExternalOffset<UAnimMontage>(0x00B8, true);              // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offNoneOrIgnoreCurrent3pUnequipMontage                        = new ExternalOffset<UAnimMontage>(0x00C0, true);              // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNoneOrIgnoreCurrentUnequipDuration                         = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              Weapon                                                         => _offWeapon.GetValue();
	public byte/*(bool)*/                                      bCheckCurrentMagazineForEquip                                  => _offbCheckCurrentMagazineForEquip.GetValue();
	public byte/*(bool)*/                                      CheckCurrentMagazineForUnequip                                 => _offCheckCurrentMagazineForUnequip.GetValue();
	public byte/*(bool)*/                                      bCheckPreviousMagazineForEquip                                 => _offbCheckPreviousMagazineForEquip.GetValue();
	public UAnimMontage                                        BothEmptyWeaponEquipMontage                                    => _offBothEmptyWeaponEquipMontage.GetValue();
	public UAnimMontage                                        BothEmpty1pEquipMontage                                        => _offBothEmpty1pEquipMontage.GetValue();
	public UAnimMontage                                        BothEmpty3pEquipMontage                                        => _offBothEmpty3pEquipMontage.GetValue();
	public float                                               BothEmptyEquipDuration                                         => _offBothEmptyEquipDuration.GetValue();
	public UAnimMontage                                        PreviousEmptyOrIgnoreCurrentWeaponEquipMontage                 => _offPreviousEmptyOrIgnoreCurrentWeaponEquipMontage.GetValue();
	public UAnimMontage                                        PreviousEmptyOrIgnoreCurrent1pEquipMontage                     => _offPreviousEmptyOrIgnoreCurrent1pEquipMontage.GetValue();
	public UAnimMontage                                        PreviousEmptyOrIgnoreCurrent3pEquipMontage                     => _offPreviousEmptyOrIgnoreCurrent3pEquipMontage.GetValue();
	public float                                               PreviousEmptyOrIgnoreCurrentEquipDuration                      => _offPreviousEmptyOrIgnoreCurrentEquipDuration.GetValue();
	public UAnimMontage                                        CurrentEmptyOrIgnorePreviousWeaponEquipMontage                 => _offCurrentEmptyOrIgnorePreviousWeaponEquipMontage.GetValue();
	public UAnimMontage                                        CurrentEmptyOrIgnorePrevious1pEquipMontage                     => _offCurrentEmptyOrIgnorePrevious1pEquipMontage.GetValue();
	public UAnimMontage                                        CurrentEmptyOrIgnorePrevious3pEquipMontage                     => _offCurrentEmptyOrIgnorePrevious3pEquipMontage.GetValue();
	public float                                               CurrentEmptyOrIgnorePreviousEquipDuration                      => _offCurrentEmptyOrIgnorePreviousEquipDuration.GetValue();
	public UAnimMontage                                        NoneEmptyOrIgnoreBothWeaponEquipMontage                        => _offNoneEmptyOrIgnoreBothWeaponEquipMontage.GetValue();
	public UAnimMontage                                        NoneEmptyOrIgnoreBoth1pEquipMontage                            => _offNoneEmptyOrIgnoreBoth1pEquipMontage.GetValue();
	public UAnimMontage                                        NoneEmptyOrIgnoreBoth3pEquipMontage                            => _offNoneEmptyOrIgnoreBoth3pEquipMontage.GetValue();
	public float                                               NoneEmptyOrIgnoreBothEquipDuration                             => _offNoneEmptyOrIgnoreBothEquipDuration.GetValue();
	public UAnimMontage                                        CurrentEmptyWeaponUnequipMontage                               => _offCurrentEmptyWeaponUnequipMontage.GetValue();
	public UAnimMontage                                        CurrentEmpty1pUnequipMontage                                   => _offCurrentEmpty1pUnequipMontage.GetValue();
	public UAnimMontage                                        CurrentEmpty3pUnequipMontage                                   => _offCurrentEmpty3pUnequipMontage.GetValue();
	public float                                               CurrentEmptyUnequipDuration                                    => _offCurrentEmptyUnequipDuration.GetValue();
	public UAnimMontage                                        NoneOrIgnoreCurrentWeaponUnequipMontage                        => _offNoneOrIgnoreCurrentWeaponUnequipMontage.GetValue();
	public UAnimMontage                                        NoneOrIgnoreCurrent1pUnequipMontage                            => _offNoneOrIgnoreCurrent1pUnequipMontage.GetValue();
	public UAnimMontage                                        NoneOrIgnoreCurrent3pUnequipMontage                            => _offNoneOrIgnoreCurrent3pUnequipMontage.GetValue();
	public float                                               NoneOrIgnoreCurrentUnequipDuration                             => _offNoneOrIgnoreCurrentUnequipDuration.GetValue();
	#endregion

	public FSQMutualWeapon(UClass c_Weapon, byte/*(bool)*/ c_bCheckCurrentMagazineForEquip, byte/*(bool)*/ c_CheckCurrentMagazineForUnequip, byte/*(bool)*/ c_bCheckPreviousMagazineForEquip, UAnimMontage c_BothEmptyWeaponEquipMontage, UAnimMontage c_BothEmpty1pEquipMontage, UAnimMontage c_BothEmpty3pEquipMontage, float c_BothEmptyEquipDuration, UAnimMontage c_PreviousEmptyOrIgnoreCurrentWeaponEquipMontage, UAnimMontage c_PreviousEmptyOrIgnoreCurrent1pEquipMontage, UAnimMontage c_PreviousEmptyOrIgnoreCurrent3pEquipMontage, float c_PreviousEmptyOrIgnoreCurrentEquipDuration, UAnimMontage c_CurrentEmptyOrIgnorePreviousWeaponEquipMontage, UAnimMontage c_CurrentEmptyOrIgnorePrevious1pEquipMontage, UAnimMontage c_CurrentEmptyOrIgnorePrevious3pEquipMontage, float c_CurrentEmptyOrIgnorePreviousEquipDuration, UAnimMontage c_NoneEmptyOrIgnoreBothWeaponEquipMontage, UAnimMontage c_NoneEmptyOrIgnoreBoth1pEquipMontage, UAnimMontage c_NoneEmptyOrIgnoreBoth3pEquipMontage, float c_NoneEmptyOrIgnoreBothEquipDuration, UAnimMontage c_CurrentEmptyWeaponUnequipMontage, UAnimMontage c_CurrentEmpty1pUnequipMontage, UAnimMontage c_CurrentEmpty3pUnequipMontage, float c_CurrentEmptyUnequipDuration, UAnimMontage c_NoneOrIgnoreCurrentWeaponUnequipMontage, UAnimMontage c_NoneOrIgnoreCurrent1pUnequipMontage, UAnimMontage c_NoneOrIgnoreCurrent3pUnequipMontage, float c_NoneOrIgnoreCurrentUnequipDuration) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeapon.SetValue(c_Weapon);
		_offbCheckCurrentMagazineForEquip.SetValue(c_bCheckCurrentMagazineForEquip);
		_offCheckCurrentMagazineForUnequip.SetValue(c_CheckCurrentMagazineForUnequip);
		_offbCheckPreviousMagazineForEquip.SetValue(c_bCheckPreviousMagazineForEquip);
		_offBothEmptyWeaponEquipMontage.SetValue(c_BothEmptyWeaponEquipMontage);
		_offBothEmpty1pEquipMontage.SetValue(c_BothEmpty1pEquipMontage);
		_offBothEmpty3pEquipMontage.SetValue(c_BothEmpty3pEquipMontage);
		_offBothEmptyEquipDuration.SetValue(c_BothEmptyEquipDuration);
		_offPreviousEmptyOrIgnoreCurrentWeaponEquipMontage.SetValue(c_PreviousEmptyOrIgnoreCurrentWeaponEquipMontage);
		_offPreviousEmptyOrIgnoreCurrent1pEquipMontage.SetValue(c_PreviousEmptyOrIgnoreCurrent1pEquipMontage);
		_offPreviousEmptyOrIgnoreCurrent3pEquipMontage.SetValue(c_PreviousEmptyOrIgnoreCurrent3pEquipMontage);
		_offPreviousEmptyOrIgnoreCurrentEquipDuration.SetValue(c_PreviousEmptyOrIgnoreCurrentEquipDuration);
		_offCurrentEmptyOrIgnorePreviousWeaponEquipMontage.SetValue(c_CurrentEmptyOrIgnorePreviousWeaponEquipMontage);
		_offCurrentEmptyOrIgnorePrevious1pEquipMontage.SetValue(c_CurrentEmptyOrIgnorePrevious1pEquipMontage);
		_offCurrentEmptyOrIgnorePrevious3pEquipMontage.SetValue(c_CurrentEmptyOrIgnorePrevious3pEquipMontage);
		_offCurrentEmptyOrIgnorePreviousEquipDuration.SetValue(c_CurrentEmptyOrIgnorePreviousEquipDuration);
		_offNoneEmptyOrIgnoreBothWeaponEquipMontage.SetValue(c_NoneEmptyOrIgnoreBothWeaponEquipMontage);
		_offNoneEmptyOrIgnoreBoth1pEquipMontage.SetValue(c_NoneEmptyOrIgnoreBoth1pEquipMontage);
		_offNoneEmptyOrIgnoreBoth3pEquipMontage.SetValue(c_NoneEmptyOrIgnoreBoth3pEquipMontage);
		_offNoneEmptyOrIgnoreBothEquipDuration.SetValue(c_NoneEmptyOrIgnoreBothEquipDuration);
		_offCurrentEmptyWeaponUnequipMontage.SetValue(c_CurrentEmptyWeaponUnequipMontage);
		_offCurrentEmpty1pUnequipMontage.SetValue(c_CurrentEmpty1pUnequipMontage);
		_offCurrentEmpty3pUnequipMontage.SetValue(c_CurrentEmpty3pUnequipMontage);
		_offCurrentEmptyUnequipDuration.SetValue(c_CurrentEmptyUnequipDuration);
		_offNoneOrIgnoreCurrentWeaponUnequipMontage.SetValue(c_NoneOrIgnoreCurrentWeaponUnequipMontage);
		_offNoneOrIgnoreCurrent1pUnequipMontage.SetValue(c_NoneOrIgnoreCurrent1pUnequipMontage);
		_offNoneOrIgnoreCurrent3pUnequipMontage.SetValue(c_NoneOrIgnoreCurrent3pUnequipMontage);
		_offNoneOrIgnoreCurrentUnequipDuration.SetValue(c_NoneOrIgnoreCurrentUnequipDuration);
	}
}
// ScriptStruct Squad.SQHealSettings
// 0x0024
public class FSQHealSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offTicketsLostOnRevive                                        = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnHeal                                          = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnSelfHeal                                      = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForHeal                                              = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForSelfHeal                                          = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForRevive                                        = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForHeal                                          = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForSelfHeal                                      = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelayHealScore                                             = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelaySelfHealScore                                         = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 TicketsLostOnRevive                                            => _offTicketsLostOnRevive.GetValue();
	public int                                                 TicketsLostOnHeal                                              => _offTicketsLostOnHeal.GetValue();
	public int                                                 TicketsLostOnSelfHeal                                          => _offTicketsLostOnSelfHeal.GetValue();
	public float                                               PointsForHeal                                                  => _offPointsForHeal.GetValue();
	public float                                               PointsForSelfHeal                                              => _offPointsForSelfHeal.GetValue();
	public float                                               TeamPointsForRevive                                            => _offTeamPointsForRevive.GetValue();
	public float                                               TeamPointsForHeal                                              => _offTeamPointsForHeal.GetValue();
	public float                                               TeamPointsForSelfHeal                                          => _offTeamPointsForSelfHeal.GetValue();
	public byte/*(bool)*/                                      DelayHealScore                                                 => _offDelayHealScore.GetValue();
	public byte/*(bool)*/                                      DelaySelfHealScore                                             => _offDelaySelfHealScore.GetValue();
	#endregion

	public FSQHealSettings(int c_TicketsLostOnRevive, int c_TicketsLostOnHeal, int c_TicketsLostOnSelfHeal, float c_PointsForHeal, float c_PointsForSelfHeal, float c_TeamPointsForRevive, float c_TeamPointsForHeal, float c_TeamPointsForSelfHeal, byte/*(bool)*/ c_DelayHealScore, byte/*(bool)*/ c_DelaySelfHealScore) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTicketsLostOnRevive.SetValue(c_TicketsLostOnRevive);
		_offTicketsLostOnHeal.SetValue(c_TicketsLostOnHeal);
		_offTicketsLostOnSelfHeal.SetValue(c_TicketsLostOnSelfHeal);
		_offPointsForHeal.SetValue(c_PointsForHeal);
		_offPointsForSelfHeal.SetValue(c_PointsForSelfHeal);
		_offTeamPointsForRevive.SetValue(c_TeamPointsForRevive);
		_offTeamPointsForHeal.SetValue(c_TeamPointsForHeal);
		_offTeamPointsForSelfHeal.SetValue(c_TeamPointsForSelfHeal);
		_offDelayHealScore.SetValue(c_DelayHealScore);
		_offDelaySelfHealScore.SetValue(c_DelaySelfHealScore);
	}
}
// ScriptStruct Squad.SQVehicleDeathTicket
// 0x0038
public class FSQVehicleDeathTicket : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offTicketsLostOnVehicleDestroy                                = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForVehicleDestroy                                    = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelayVehicleDestroyScore                                   = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 TicketsLostOnVehicleDestroy                                    => _offTicketsLostOnVehicleDestroy.GetValue();
	public float                                               PointsForVehicleDestroy                                        => _offPointsForVehicleDestroy.GetValue();
	public byte/*(bool)*/                                      DelayVehicleDestroyScore                                       => _offDelayVehicleDestroyScore.GetValue();
	#endregion

	public FSQVehicleDeathTicket(int c_TicketsLostOnVehicleDestroy, float c_PointsForVehicleDestroy, byte/*(bool)*/ c_DelayVehicleDestroyScore) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTicketsLostOnVehicleDestroy.SetValue(c_TicketsLostOnVehicleDestroy);
		_offPointsForVehicleDestroy.SetValue(c_PointsForVehicleDestroy);
		_offDelayVehicleDestroyScore.SetValue(c_DelayVehicleDestroyScore);
	}
}
// ScriptStruct Squad.SQKillDeathSettings
// 0x0050
public class FSQKillDeathSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQVehicleDeathTicket>>      _offVehicleSettings                                            = new ExternalOffset<TArray<FSQVehicleDeathTicket>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnKill                                          = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnSuicide                                       = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnTeamkill                                      = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTicketsLostOnKillCommander                                 = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offKillChannel                                                = new ExternalOffset<ESQKillReportChannel>(0x0020, false);     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offSuicideChannel                                             = new ExternalOffset<ESQKillReportChannel>(0x0021, false);     // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQKillReportChannel>               _offTeamkillChannel                                            = new ExternalOffset<ESQKillReportChannel>(0x0022, false);     // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForKill                                              = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForWounded                                           = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForSuicide                                           = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForTeamkill                                          = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPointsForDeath                                             = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForKill                                          = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForSuicide                                       = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForTeamkill                                      = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamPointsForDeath                                         = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offNotifyKillerOnKill                                         = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offNotifyKillerOnTeamkill                                     = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelayKillScore                                             = new ExternalOffset<byte/*(bool)*/>(0x004A);                  // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelayTeamkillScore                                         = new ExternalOffset<byte/*(bool)*/>(0x004B);                  // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDelayDeathScore                                            = new ExternalOffset<byte/*(bool)*/>(0x004C);                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQVehicleDeathTicket>                       VehicleSettings                                                => _offVehicleSettings.GetValue();
	public int                                                 TicketsLostOnKill                                              => _offTicketsLostOnKill.GetValue();
	public int                                                 TicketsLostOnSuicide                                           => _offTicketsLostOnSuicide.GetValue();
	public int                                                 TicketsLostOnTeamkill                                          => _offTicketsLostOnTeamkill.GetValue();
	public int                                                 TicketsLostOnKillCommander                                     => _offTicketsLostOnKillCommander.GetValue();
	public ESQKillReportChannel                                KillChannel                                                    => _offKillChannel.GetValue();
	public ESQKillReportChannel                                SuicideChannel                                                 => _offSuicideChannel.GetValue();
	public ESQKillReportChannel                                TeamkillChannel                                                => _offTeamkillChannel.GetValue();
	public float                                               PointsForKill                                                  => _offPointsForKill.GetValue();
	public float                                               PointsForWounded                                               => _offPointsForWounded.GetValue();
	public float                                               PointsForSuicide                                               => _offPointsForSuicide.GetValue();
	public float                                               PointsForTeamkill                                              => _offPointsForTeamkill.GetValue();
	public float                                               PointsForDeath                                                 => _offPointsForDeath.GetValue();
	public float                                               TeamPointsForKill                                              => _offTeamPointsForKill.GetValue();
	public float                                               TeamPointsForSuicide                                           => _offTeamPointsForSuicide.GetValue();
	public float                                               TeamPointsForTeamkill                                          => _offTeamPointsForTeamkill.GetValue();
	public float                                               TeamPointsForDeath                                             => _offTeamPointsForDeath.GetValue();
	public byte/*(bool)*/                                      NotifyKillerOnKill                                             => _offNotifyKillerOnKill.GetValue();
	public byte/*(bool)*/                                      NotifyKillerOnTeamkill                                         => _offNotifyKillerOnTeamkill.GetValue();
	public byte/*(bool)*/                                      DelayKillScore                                                 => _offDelayKillScore.GetValue();
	public byte/*(bool)*/                                      DelayTeamkillScore                                             => _offDelayTeamkillScore.GetValue();
	public byte/*(bool)*/                                      DelayDeathScore                                                => _offDelayDeathScore.GetValue();
	#endregion

	public FSQKillDeathSettings(TArray<FSQVehicleDeathTicket> c_VehicleSettings, int c_TicketsLostOnKill, int c_TicketsLostOnSuicide, int c_TicketsLostOnTeamkill, int c_TicketsLostOnKillCommander, ESQKillReportChannel c_KillChannel, ESQKillReportChannel c_SuicideChannel, ESQKillReportChannel c_TeamkillChannel, float c_PointsForKill, float c_PointsForWounded, float c_PointsForSuicide, float c_PointsForTeamkill, float c_PointsForDeath, float c_TeamPointsForKill, float c_TeamPointsForSuicide, float c_TeamPointsForTeamkill, float c_TeamPointsForDeath, byte/*(bool)*/ c_NotifyKillerOnKill, byte/*(bool)*/ c_NotifyKillerOnTeamkill, byte/*(bool)*/ c_DelayKillScore, byte/*(bool)*/ c_DelayTeamkillScore, byte/*(bool)*/ c_DelayDeathScore) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVehicleSettings.SetValue(c_VehicleSettings);
		_offTicketsLostOnKill.SetValue(c_TicketsLostOnKill);
		_offTicketsLostOnSuicide.SetValue(c_TicketsLostOnSuicide);
		_offTicketsLostOnTeamkill.SetValue(c_TicketsLostOnTeamkill);
		_offTicketsLostOnKillCommander.SetValue(c_TicketsLostOnKillCommander);
		_offKillChannel.SetValue(c_KillChannel);
		_offSuicideChannel.SetValue(c_SuicideChannel);
		_offTeamkillChannel.SetValue(c_TeamkillChannel);
		_offPointsForKill.SetValue(c_PointsForKill);
		_offPointsForWounded.SetValue(c_PointsForWounded);
		_offPointsForSuicide.SetValue(c_PointsForSuicide);
		_offPointsForTeamkill.SetValue(c_PointsForTeamkill);
		_offPointsForDeath.SetValue(c_PointsForDeath);
		_offTeamPointsForKill.SetValue(c_TeamPointsForKill);
		_offTeamPointsForSuicide.SetValue(c_TeamPointsForSuicide);
		_offTeamPointsForTeamkill.SetValue(c_TeamPointsForTeamkill);
		_offTeamPointsForDeath.SetValue(c_TeamPointsForDeath);
		_offNotifyKillerOnKill.SetValue(c_NotifyKillerOnKill);
		_offNotifyKillerOnTeamkill.SetValue(c_NotifyKillerOnTeamkill);
		_offDelayKillScore.SetValue(c_DelayKillScore);
		_offDelayTeamkillScore.SetValue(c_DelayTeamkillScore);
		_offDelayDeathScore.SetValue(c_DelayDeathScore);
	}
}
// ScriptStruct Squad.SQRejectedLicenseInfo
// 0x0018
public class FSQRejectedLicenseInfo : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRejectedLicenseInfo() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQLogisticsSettings
// 0x000C
public class FSQLogisticsSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offAmmoToScore                                                = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offConstructionToScore                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPassengerPercent                                           = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               AmmoToScore                                                    => _offAmmoToScore.GetValue();
	public float                                               ConstructionToScore                                            => _offConstructionToScore.GetValue();
	public float                                               PassengerPercent                                               => _offPassengerPercent.GetValue();
	#endregion

	public FSQLogisticsSettings(float c_AmmoToScore, float c_ConstructionToScore, float c_PassengerPercent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAmmoToScore.SetValue(c_AmmoToScore);
		_offConstructionToScore.SetValue(c_ConstructionToScore);
		_offPassengerPercent.SetValue(c_PassengerPercent);
	}
}
// ScriptStruct Squad.SQMapListItem
// 0x0060
public class FSQMapListItem : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offDisplayName                                                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             DisplayName                                                    => _offDisplayName.GetValue();
	#endregion

	public FSQMapListItem(FString c_DisplayName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDisplayName.SetValue(c_DisplayName);
	}
}
// ScriptStruct Squad.TeamSquadFireteamIdKey
// 0x000C
public class FTeamSquadFireteamIdKey : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTeamSquadFireteamIdKey() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMarkerLimiterTeam
// 0x00A0
public class FSQMarkerLimiterTeam : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQMarkerLimiterTeam() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMarkerLimiterSquad
// 0x00A0
public class FSQMarkerLimiterSquad : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQMarkerLimiterSquad() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMarkerLimiterFireTeam
// 0x0050
public class FSQMarkerLimiterFireTeam : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQMarkerLimiterFireTeam() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMapMarkerGameplayData
// 0x0038
public class FSQMapMarkerGameplayData : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offSquadId                                                    = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTeam>                            _offTeamId                                                     = new ExternalOffset<ESQTeam>(0x0004, false);                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFireTeamId                                                 = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantize>                _offLocationVector                                             = new ExternalOffset<FVector_NetQuantize>(0x000C, false);      // 0x000C(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantize>                _offDistanceRotationVector                                     = new ExternalOffset<FVector_NetQuantize>(0x0018, false);      // 0x0018(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USQMapMarkerDataAsset>              _offMapMarkerDataAsset                                         = new ExternalOffset<USQMapMarkerDataAsset>(0x0028, true);     // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offUniqueID                                                   = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCreationTime                                               = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 SquadId                                                        => _offSquadId.GetValue();
	public ESQTeam                                             TeamId                                                         => _offTeamId.GetValue();
	public int                                                 FireTeamId                                                     => _offFireTeamId.GetValue();
	public FVector_NetQuantize                                 LocationVector                                                 => _offLocationVector.GetValue();
	public FVector_NetQuantize                                 DistanceRotationVector                                         => _offDistanceRotationVector.GetValue();
	public USQMapMarkerDataAsset                               MapMarkerDataAsset                                             => _offMapMarkerDataAsset.GetValue();
	public float                                               CreationTime                                                   => _offCreationTime.GetValue();
	#endregion

	public FSQMapMarkerGameplayData(int c_SquadId, ESQTeam c_TeamId, int c_FireTeamId, FVector_NetQuantize c_LocationVector, FVector_NetQuantize c_DistanceRotationVector, USQMapMarkerDataAsset c_MapMarkerDataAsset, float c_CreationTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSquadId.SetValue(c_SquadId);
		_offTeamId.SetValue(c_TeamId);
		_offFireTeamId.SetValue(c_FireTeamId);
		_offLocationVector.SetValue(c_LocationVector);
		_offDistanceRotationVector.SetValue(c_DistanceRotationVector);
		_offMapMarkerDataAsset.SetValue(c_MapMarkerDataAsset);
		_offCreationTime.SetValue(c_CreationTime);
	}
}
// ScriptStruct Squad.SQMarkerTimestamps
// 0x0008
public class FSQMarkerTimestamps : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQMarkerTimestamps() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMapMarkerFastArraySerializerItem
// 0x0044 (0x0050 - 0x000C)
public class FSQMapMarkerFastArraySerializerItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FSQMapMarkerGameplayData>           _offMarkerGameplayData                                         = new ExternalOffset<FSQMapMarkerGameplayData>(0x0010, false); // 0x0010(0x0038) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQMarkerTimestamps>                _offAssignedTimestamp                                          = new ExternalOffset<FSQMarkerTimestamps>(0x0048, false);      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQMapMarkerGameplayData                            MarkerGameplayData                                             => _offMarkerGameplayData.GetValue();
	public FSQMarkerTimestamps                                 AssignedTimestamp                                              => _offAssignedTimestamp.GetValue();
	#endregion

	public FSQMapMarkerFastArraySerializerItem(FSQMapMarkerGameplayData c_MarkerGameplayData, FSQMarkerTimestamps c_AssignedTimestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMarkerGameplayData.SetValue(c_MarkerGameplayData);
		_offAssignedTimestamp.SetValue(c_AssignedTimestamp);
	}
}
// ScriptStruct Squad.SQStaticMapMarkerArray
// 0x0040 (0x0148 - 0x0108)
public class FSQStaticMapMarkerArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FSQMapMarkerFastArraySerializerItem>> _offItems                                                      = new ExternalOffset<TArray<FSQMapMarkerFastArraySerializerItem>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offModifiedMarkerIndices                                      = new ExternalOffset<TArray<int>>(0x0118, false);              // 0x0118(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>           _offMapMarkerCreatedEvent                                      = new ExternalOffset<FScriptMulticastDelegate>(0x0128, false); // 0x0128(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>           _offMapMarkerDeletedEvent                                      = new ExternalOffset<FScriptMulticastDelegate>(0x0138, false); // 0x0138(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQMapMarkerFastArraySerializerItem>         Items                                                          => _offItems.GetValue();
	public TArray<int>                                         ModifiedMarkerIndices                                          => _offModifiedMarkerIndices.GetValue();
	public FScriptMulticastDelegate                            MapMarkerCreatedEvent                                          => _offMapMarkerCreatedEvent.GetValue();
	public FScriptMulticastDelegate                            MapMarkerDeletedEvent                                          => _offMapMarkerDeletedEvent.GetValue();
	#endregion

	public FSQStaticMapMarkerArray(TArray<FSQMapMarkerFastArraySerializerItem> c_Items, TArray<int> c_ModifiedMarkerIndices, FScriptMulticastDelegate c_MapMarkerCreatedEvent, FScriptMulticastDelegate c_MapMarkerDeletedEvent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
		_offModifiedMarkerIndices.SetValue(c_ModifiedMarkerIndices);
		_offMapMarkerCreatedEvent.SetValue(c_MapMarkerCreatedEvent);
		_offMapMarkerDeletedEvent.SetValue(c_MapMarkerDeletedEvent);
	}
}
// ScriptStruct Squad.SQMenuItemStyle
// 0x0198 (0x01A0 - 0x0008)
public class FSQMenuItemStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offBackgroundBrush                                            = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offLeftArrowImage                                             = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offRightArrowImage                                            = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         BackgroundBrush                                                => _offBackgroundBrush.GetValue();
	public FSlateBrush                                         LeftArrowImage                                                 => _offLeftArrowImage.GetValue();
	public FSlateBrush                                         RightArrowImage                                                => _offRightArrowImage.GetValue();
	#endregion

	public FSQMenuItemStyle(FSlateBrush c_BackgroundBrush, FSlateBrush c_LeftArrowImage, FSlateBrush c_RightArrowImage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBackgroundBrush.SetValue(c_BackgroundBrush);
		_offLeftArrowImage.SetValue(c_LeftArrowImage);
		_offRightArrowImage.SetValue(c_RightArrowImage);
	}
}
// ScriptStruct Squad.SQMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
public class FSQMenuSoundsStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateSound>                        _offStartGameSound                                             = new ExternalOffset<FSlateSound>(0x0008, false);              // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offExitGameSound                                              = new ExternalOffset<FSlateSound>(0x0020, false);              // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateSound                                         StartGameSound                                                 => _offStartGameSound.GetValue();
	public FSlateSound                                         ExitGameSound                                                  => _offExitGameSound.GetValue();
	#endregion

	public FSQMenuSoundsStyle(FSlateSound c_StartGameSound, FSlateSound c_ExitGameSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStartGameSound.SetValue(c_StartGameSound);
		_offExitGameSound.SetValue(c_ExitGameSound);
	}
}
// ScriptStruct Squad.SQMenuStyle
// 0x01F8 (0x0200 - 0x0008)
public class FSQMenuStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offHeaderBackgroundBrush                                      = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offLeftBackgroundBrush                                        = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offRightBackgroundBrush                                       = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offMenuEnterSound                                             = new ExternalOffset<FSlateSound>(0x01A0, false);              // 0x01A0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offMenuBackSound                                              = new ExternalOffset<FSlateSound>(0x01B8, false);              // 0x01B8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offOptionChangeSound                                          = new ExternalOffset<FSlateSound>(0x01D0, false);              // 0x01D0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offMenuItemChangeSound                                        = new ExternalOffset<FSlateSound>(0x01E8, false);              // 0x01E8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         HeaderBackgroundBrush                                          => _offHeaderBackgroundBrush.GetValue();
	public FSlateBrush                                         LeftBackgroundBrush                                            => _offLeftBackgroundBrush.GetValue();
	public FSlateBrush                                         RightBackgroundBrush                                           => _offRightBackgroundBrush.GetValue();
	public FSlateSound                                         MenuEnterSound                                                 => _offMenuEnterSound.GetValue();
	public FSlateSound                                         MenuBackSound                                                  => _offMenuBackSound.GetValue();
	public FSlateSound                                         OptionChangeSound                                              => _offOptionChangeSound.GetValue();
	public FSlateSound                                         MenuItemChangeSound                                            => _offMenuItemChangeSound.GetValue();
	#endregion

	public FSQMenuStyle(FSlateBrush c_HeaderBackgroundBrush, FSlateBrush c_LeftBackgroundBrush, FSlateBrush c_RightBackgroundBrush, FSlateSound c_MenuEnterSound, FSlateSound c_MenuBackSound, FSlateSound c_OptionChangeSound, FSlateSound c_MenuItemChangeSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHeaderBackgroundBrush.SetValue(c_HeaderBackgroundBrush);
		_offLeftBackgroundBrush.SetValue(c_LeftBackgroundBrush);
		_offRightBackgroundBrush.SetValue(c_RightBackgroundBrush);
		_offMenuEnterSound.SetValue(c_MenuEnterSound);
		_offMenuBackSound.SetValue(c_MenuBackSound);
		_offOptionChangeSound.SetValue(c_OptionChangeSound);
		_offMenuItemChangeSound.SetValue(c_MenuItemChangeSound);
	}
}
// ScriptStruct Squad.SQRepMovement
// 0x0040
public class FSQRepMovement : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocationZeroBased                                          = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x0014, false);                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x0020, false);                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offRotationalVelocity                                         = new ExternalOffset<FVector>(0x002C, false);                  // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offServerTimestamp                                            = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             LocationZeroBased                                              => _offLocationZeroBased.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FVector                                             RotationalVelocity                                             => _offRotationalVelocity.GetValue();
	public float                                               ServerTimestamp                                                => _offServerTimestamp.GetValue();
	#endregion

	public FSQRepMovement(FVector c_LocationZeroBased, FVector c_Velocity, FRotator c_Rotation, FVector c_RotationalVelocity, float c_ServerTimestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocationZeroBased.SetValue(c_LocationZeroBased);
		_offVelocity.SetValue(c_Velocity);
		_offRotation.SetValue(c_Rotation);
		_offRotationalVelocity.SetValue(c_RotationalVelocity);
		_offServerTimestamp.SetValue(c_ServerTimestamp);
	}
}
// ScriptStruct Squad.MovePacket
// 0x0038
public class FMovePacket : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offUniqueID                                                   = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                       _offOldMove                                                    = new ExternalOffset<TArray<char>>(0x0008, false);             // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                       _offNewMove                                                    = new ExternalOffset<TArray<char>>(0x0018, false);             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                       _offPendingMove                                                = new ExternalOffset<TArray<char>>(0x0028, false);             // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public uint                                                UniqueID                                                       => _offUniqueID.GetValue();
	public TArray<char>                                        OldMove                                                        => _offOldMove.GetValue();
	public TArray<char>                                        NewMove                                                        => _offNewMove.GetValue();
	public TArray<char>                                        PendingMove                                                    => _offPendingMove.GetValue();
	#endregion

	public FMovePacket(uint c_UniqueID, TArray<char> c_OldMove, TArray<char> c_NewMove, TArray<char> c_PendingMove) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUniqueID.SetValue(c_UniqueID);
		_offOldMove.SetValue(c_OldMove);
		_offNewMove.SetValue(c_NewMove);
		_offPendingMove.SetValue(c_PendingMove);
	}
}
// ScriptStruct Squad.SQMontageSectionNames
// 0x0028
public class FSQMontageSectionNames : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offBeginSection                                               = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offLoopSection1                                               = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offLoopSection2                                               = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offEndSection                                                 = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offMidEndSection                                              = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               BeginSection                                                   => _offBeginSection.GetValue();
	public FName                                               LoopSection1                                                   => _offLoopSection1.GetValue();
	public FName                                               LoopSection2                                                   => _offLoopSection2.GetValue();
	public FName                                               EndSection                                                     => _offEndSection.GetValue();
	public FName                                               MidEndSection                                                  => _offMidEndSection.GetValue();
	#endregion

	public FSQMontageSectionNames(FName c_BeginSection, FName c_LoopSection1, FName c_LoopSection2, FName c_EndSection, FName c_MidEndSection) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBeginSection.SetValue(c_BeginSection);
		_offLoopSection1.SetValue(c_LoopSection1);
		_offLoopSection2.SetValue(c_LoopSection2);
		_offEndSection.SetValue(c_EndSection);
		_offMidEndSection.SetValue(c_MidEndSection);
	}
}
// ScriptStruct Squad.AdjustPositionAndRotationPacket
// 0x0030
public class FAdjustPositionAndRotationPacket : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offUniqueID                                                   = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimestamp                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offIsAcknowledge                                              = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offHasPosition                                                = new ExternalOffset<byte/*(bool)*/>(0x0009);                  // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offHasRotation                                                = new ExternalOffset<byte/*(bool)*/>(0x000A);                  // 0x000A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offHasRotationVelocity                                        = new ExternalOffset<byte/*(bool)*/>(0x000B);                  // 0x000B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocationZeroBased                                          = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x0024, false);                 // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public uint                                                UniqueID                                                       => _offUniqueID.GetValue();
	public float                                               Timestamp                                                      => _offTimestamp.GetValue();
	public byte/*(bool)*/                                      IsAcknowledge                                                  => _offIsAcknowledge.GetValue();
	public byte/*(bool)*/                                      HasPosition                                                    => _offHasPosition.GetValue();
	public byte/*(bool)*/                                      HasRotation                                                    => _offHasRotation.GetValue();
	public byte/*(bool)*/                                      HasRotationVelocity                                            => _offHasRotationVelocity.GetValue();
	public FVector                                             LocationZeroBased                                              => _offLocationZeroBased.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	#endregion

	public FAdjustPositionAndRotationPacket(uint c_UniqueID, float c_Timestamp, byte/*(bool)*/ c_IsAcknowledge, byte/*(bool)*/ c_HasPosition, byte/*(bool)*/ c_HasRotation, byte/*(bool)*/ c_HasRotationVelocity, FVector c_LocationZeroBased, FVector c_Velocity, FRotator c_Rotation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUniqueID.SetValue(c_UniqueID);
		_offTimestamp.SetValue(c_Timestamp);
		_offIsAcknowledge.SetValue(c_IsAcknowledge);
		_offHasPosition.SetValue(c_HasPosition);
		_offHasRotation.SetValue(c_HasRotation);
		_offHasRotationVelocity.SetValue(c_HasRotationVelocity);
		_offLocationZeroBased.SetValue(c_LocationZeroBased);
		_offVelocity.SetValue(c_Velocity);
		_offRotation.SetValue(c_Rotation);
	}
}
// ScriptStruct Squad.SQRotationConstraints
// 0x001C
public class FSQRotationConstraints : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offPitchInterval                                              = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offYawInterval                                                = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offRollInterval                                               = new ExternalOffset<FVector2D>(0x0010, false);                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLockPitch                                                 = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLockYaw                                                   = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLockRoll                                                  = new ExternalOffset<byte/*(bool)*/>(0x001A);                  // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           PitchInterval                                                  => _offPitchInterval.GetValue();
	public FVector2D                                           YawInterval                                                    => _offYawInterval.GetValue();
	public FVector2D                                           RollInterval                                                   => _offRollInterval.GetValue();
	public byte/*(bool)*/                                      bLockPitch                                                     => _offbLockPitch.GetValue();
	public byte/*(bool)*/                                      bLockYaw                                                       => _offbLockYaw.GetValue();
	public byte/*(bool)*/                                      bLockRoll                                                      => _offbLockRoll.GetValue();
	#endregion

	public FSQRotationConstraints(FVector2D c_PitchInterval, FVector2D c_YawInterval, FVector2D c_RollInterval, byte/*(bool)*/ c_bLockPitch, byte/*(bool)*/ c_bLockYaw, byte/*(bool)*/ c_bLockRoll) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPitchInterval.SetValue(c_PitchInterval);
		_offYawInterval.SetValue(c_YawInterval);
		_offRollInterval.SetValue(c_RollInterval);
		_offbLockPitch.SetValue(c_bLockPitch);
		_offbLockYaw.SetValue(c_bLockYaw);
		_offbLockRoll.SetValue(c_bLockRoll);
	}
}
// ScriptStruct Squad.SQNotificationLayout
// 0x0030
public class FSQNotificationLayout : ExternalClass
{
	#region Offsets
	private ExternalOffset<UTexture2D>                         _offIcon                                                       = new ExternalOffset<UTexture2D>(0x0000, true);                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offIconColor                                                  = new ExternalOffset<FLinearColor>(0x0008, false);             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offTextColor                                                  = new ExternalOffset<FLinearColor>(0x0018, false);             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDisplayTime                                                = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture2D                                          Icon                                                           => _offIcon.GetValue();
	public FLinearColor                                        IconColor                                                      => _offIconColor.GetValue();
	public FLinearColor                                        TextColor                                                      => _offTextColor.GetValue();
	public float                                               DisplayTime                                                    => _offDisplayTime.GetValue();
	#endregion

	public FSQNotificationLayout(UTexture2D c_Icon, FLinearColor c_IconColor, FLinearColor c_TextColor, float c_DisplayTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIcon.SetValue(c_Icon);
		_offIconColor.SetValue(c_IconColor);
		_offTextColor.SetValue(c_TextColor);
		_offDisplayTime.SetValue(c_DisplayTime);
	}
}
// ScriptStruct Squad.SQOptionsStyle
// 0x0030 (0x0038 - 0x0008)
public class FSQOptionsStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateSound>                        _offAcceptChangesSound                                         = new ExternalOffset<FSlateSound>(0x0008, false);              // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offDiscardChangesSound                                        = new ExternalOffset<FSlateSound>(0x0020, false);              // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateSound                                         AcceptChangesSound                                             => _offAcceptChangesSound.GetValue();
	public FSlateSound                                         DiscardChangesSound                                            => _offDiscardChangesSound.GetValue();
	#endregion

	public FSQOptionsStyle(FSlateSound c_AcceptChangesSound, FSlateSound c_DiscardChangesSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAcceptChangesSound.SetValue(c_AcceptChangesSound);
		_offDiscardChangesSound.SetValue(c_DiscardChangesSound);
	}
}
// ScriptStruct Squad.SQWeaponGroupData
// 0x001C (0x0028 - 0x000C)
public class FSQWeaponGroupData : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<TArray<ASQEquipableItem>>           _offWeapons                                                    = new ExternalOffset<TArray<ASQEquipableItem>>(0x0010, false); // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offIndex                                                      = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSelectedWeaponOffset                                       = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<ASQEquipableItem>                            Weapons                                                        => _offWeapons.GetValue();
	public int                                                 Index                                                          => _offIndex.GetValue();
	public int                                                 SelectedWeaponOffset                                           => _offSelectedWeaponOffset.GetValue();
	#endregion

	public FSQWeaponGroupData(TArray<ASQEquipableItem> c_Weapons, int c_Index, int c_SelectedWeaponOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeapons.SetValue(c_Weapons);
		_offIndex.SetValue(c_Index);
		_offSelectedWeaponOffset.SetValue(c_SelectedWeaponOffset);
	}
}
// ScriptStruct Squad.SQWeaponGroupDataArray
// 0x0010 (0x0118 - 0x0108)
public class FSQWeaponGroupDataArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FSQWeaponGroupData>>         _offItems                                                      = new ExternalOffset<TArray<FSQWeaponGroupData>>(0x0108, false); // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQWeaponGroupData>                          Items                                                          => _offItems.GetValue();
	#endregion

	public FSQWeaponGroupDataArray(TArray<FSQWeaponGroupData> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.SQMovePostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
public class FSQMovePostPhysicsTickFunction : FTickFunction
{
	#region Offsets
	private ExternalOffset<USQPawnMovementComponent>           _offTarget                                                     = new ExternalOffset<USQPawnMovementComponent>(0x0050, true);  // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQPawnMovementComponent                            Target                                                         => _offTarget.GetValue();
	#endregion

	public FSQMovePostPhysicsTickFunction(USQPawnMovementComponent c_Target) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTarget.SetValue(c_Target);
	}
}
// ScriptStruct Squad.SQSoldierEffect
// 0x0038
public class FSQSoldierEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<UCurveFloat>                        _offSoldierInclineMovementSpeedCurve                           = new ExternalOffset<UCurveFloat>(0x0000, true);               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPlayFootstepEffectWhenMovementInteractionTriggered        = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offFootstepEffect                                             = new ExternalOffset<UParticleSystem>(0x0010, true);           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offFootstepSound                                              = new ExternalOffset<USoundCue>(0x0018, true);                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offMovementInteractionParticleEffect                          = new ExternalOffset<UParticleSystem>(0x0020, true);           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offMovementInteractionSound                                   = new ExternalOffset<USoundCue>(0x0028, true);                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offLandedSound                                                = new ExternalOffset<USoundCue>(0x0030, true);                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCurveFloat                                         SoldierInclineMovementSpeedCurve                               => _offSoldierInclineMovementSpeedCurve.GetValue();
	public byte/*(bool)*/                                      bPlayFootstepEffectWhenMovementInteractionTriggered            => _offbPlayFootstepEffectWhenMovementInteractionTriggered.GetValue();
	public UParticleSystem                                     FootstepEffect                                                 => _offFootstepEffect.GetValue();
	public USoundCue                                           FootstepSound                                                  => _offFootstepSound.GetValue();
	public UParticleSystem                                     MovementInteractionParticleEffect                              => _offMovementInteractionParticleEffect.GetValue();
	public USoundCue                                           MovementInteractionSound                                       => _offMovementInteractionSound.GetValue();
	public USoundCue                                           LandedSound                                                    => _offLandedSound.GetValue();
	#endregion

	public FSQSoldierEffect(UCurveFloat c_SoldierInclineMovementSpeedCurve, byte/*(bool)*/ c_bPlayFootstepEffectWhenMovementInteractionTriggered, UParticleSystem c_FootstepEffect, USoundCue c_FootstepSound, UParticleSystem c_MovementInteractionParticleEffect, USoundCue c_MovementInteractionSound, USoundCue c_LandedSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSoldierInclineMovementSpeedCurve.SetValue(c_SoldierInclineMovementSpeedCurve);
		_offbPlayFootstepEffectWhenMovementInteractionTriggered.SetValue(c_bPlayFootstepEffectWhenMovementInteractionTriggered);
		_offFootstepEffect.SetValue(c_FootstepEffect);
		_offFootstepSound.SetValue(c_FootstepSound);
		_offMovementInteractionParticleEffect.SetValue(c_MovementInteractionParticleEffect);
		_offMovementInteractionSound.SetValue(c_MovementInteractionSound);
		_offLandedSound.SetValue(c_LandedSound);
	}
}
// ScriptStruct Squad.SQPhysMatVehicleFXData
// 0x0064
public class FSQPhysMatVehicleFXData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offAsphalt                                                    = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDirt                                                       = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGrass                                                      = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGravel                                                     = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMetal                                                      = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMud                                                        = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSand                                                       = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSnow                                                       = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSnowWet                                                    = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTallGrass                                                  = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWater                                                      = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWood                                                       = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offDustColor                                                  = new ExternalOffset<FLinearColor>(0x0030, false);             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDustLifetime                                               = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offDustSize                                                   = new ExternalOffset<FVector>(0x0044, false);                  // 0x0044(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offDebrisColor                                                = new ExternalOffset<FLinearColor>(0x0050, false);             // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDebrisSpawnRate                                            = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Asphalt                                                        => _offAsphalt.GetValue();
	public float                                               Dirt                                                           => _offDirt.GetValue();
	public float                                               Grass                                                          => _offGrass.GetValue();
	public float                                               Gravel                                                         => _offGravel.GetValue();
	public float                                               Metal                                                          => _offMetal.GetValue();
	public float                                               Mud                                                            => _offMud.GetValue();
	public float                                               Sand                                                           => _offSand.GetValue();
	public float                                               Snow                                                           => _offSnow.GetValue();
	public float                                               SnowWet                                                        => _offSnowWet.GetValue();
	public float                                               TallGrass                                                      => _offTallGrass.GetValue();
	public float                                               Water                                                          => _offWater.GetValue();
	public float                                               Wood                                                           => _offWood.GetValue();
	public FLinearColor                                        DustColor                                                      => _offDustColor.GetValue();
	public float                                               DustLifetime                                                   => _offDustLifetime.GetValue();
	public FVector                                             DustSize                                                       => _offDustSize.GetValue();
	public FLinearColor                                        DebrisColor                                                    => _offDebrisColor.GetValue();
	public float                                               DebrisSpawnRate                                                => _offDebrisSpawnRate.GetValue();
	#endregion

	public FSQPhysMatVehicleFXData(float c_Asphalt, float c_Dirt, float c_Grass, float c_Gravel, float c_Metal, float c_Mud, float c_Sand, float c_Snow, float c_SnowWet, float c_TallGrass, float c_Water, float c_Wood, FLinearColor c_DustColor, float c_DustLifetime, FVector c_DustSize, FLinearColor c_DebrisColor, float c_DebrisSpawnRate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAsphalt.SetValue(c_Asphalt);
		_offDirt.SetValue(c_Dirt);
		_offGrass.SetValue(c_Grass);
		_offGravel.SetValue(c_Gravel);
		_offMetal.SetValue(c_Metal);
		_offMud.SetValue(c_Mud);
		_offSand.SetValue(c_Sand);
		_offSnow.SetValue(c_Snow);
		_offSnowWet.SetValue(c_SnowWet);
		_offTallGrass.SetValue(c_TallGrass);
		_offWater.SetValue(c_Water);
		_offWood.SetValue(c_Wood);
		_offDustColor.SetValue(c_DustColor);
		_offDustLifetime.SetValue(c_DustLifetime);
		_offDustSize.SetValue(c_DustSize);
		_offDebrisColor.SetValue(c_DebrisColor);
		_offDebrisSpawnRate.SetValue(c_DebrisSpawnRate);
	}
}
// ScriptStruct Squad.SQVehicleEffect
// 0x0090
public class FSQVehicleEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSQPhysMatVehicleFXData>            _offVehicleFXData                                              = new ExternalOffset<FSQPhysMatVehicleFXData>(0x0000, false);  // 0x0000(0x0064) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offVehicleLightImpactSound                                    = new ExternalOffset<USoundCue>(0x0068, true);                 // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offVehicleLightImpactEffect                                   = new ExternalOffset<UParticleSystem>(0x0070, true);           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offVehicleImpactSound                                         = new ExternalOffset<USoundCue>(0x0078, true);                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offVehicleImpactEffect                                        = new ExternalOffset<UParticleSystem>(0x0080, true);           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDoVehicleParticlesUseRotation                             = new ExternalOffset<byte/*(bool)*/>(0x0088);                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQPhysMatVehicleFXData                             VehicleFXData                                                  => _offVehicleFXData.GetValue();
	public USoundCue                                           VehicleLightImpactSound                                        => _offVehicleLightImpactSound.GetValue();
	public UParticleSystem                                     VehicleLightImpactEffect                                       => _offVehicleLightImpactEffect.GetValue();
	public USoundCue                                           VehicleImpactSound                                             => _offVehicleImpactSound.GetValue();
	public UParticleSystem                                     VehicleImpactEffect                                            => _offVehicleImpactEffect.GetValue();
	public byte/*(bool)*/                                      bDoVehicleParticlesUseRotation                                 => _offbDoVehicleParticlesUseRotation.GetValue();
	#endregion

	public FSQVehicleEffect(FSQPhysMatVehicleFXData c_VehicleFXData, USoundCue c_VehicleLightImpactSound, UParticleSystem c_VehicleLightImpactEffect, USoundCue c_VehicleImpactSound, UParticleSystem c_VehicleImpactEffect, byte/*(bool)*/ c_bDoVehicleParticlesUseRotation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVehicleFXData.SetValue(c_VehicleFXData);
		_offVehicleLightImpactSound.SetValue(c_VehicleLightImpactSound);
		_offVehicleLightImpactEffect.SetValue(c_VehicleLightImpactEffect);
		_offVehicleImpactSound.SetValue(c_VehicleImpactSound);
		_offVehicleImpactEffect.SetValue(c_VehicleImpactEffect);
		_offbDoVehicleParticlesUseRotation.SetValue(c_bDoVehicleParticlesUseRotation);
	}
}
// ScriptStruct Squad.SQProjectileImpactEffect
// 0x0088
public class FSQProjectileImpactEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UParticleSystem>>            _offParticles                                                  = new ExternalOffset<TArray<UParticleSystem>>(0x0000, false);  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offShockwave                                                  = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USoundCue>>                  _offSounds                                                     = new ExternalOffset<TArray<USoundCue>>(0x0018, false);        // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USoundCue>>                  _offFirstPersonSounds                                          = new ExternalOffset<TArray<USoundCue>>(0x0028, false);        // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USoundCue>>                  _offRicochetSounds                                             = new ExternalOffset<TArray<USoundCue>>(0x0038, false);        // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USoundCue>>                  _offRicochetFirstPersonSounds                                  = new ExternalOffset<TArray<USoundCue>>(0x0048, false);        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>         _offdecals                                                     = new ExternalOffset<TArray<UMaterialInterface>>(0x0058, false); // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDoParticlesUseRotation                                    = new ExternalOffset<char>(0x0068, false);                     // 0x0068(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinDecalSize                                               = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDecalSize                                               = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSkewDecalSize                                             = new ExternalOffset<byte/*(bool)*/>(0x0074);                  // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecalDepth                                                 = new ExternalOffset<float>(0x0078);                           // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecalLifeSpan                                              = new ExternalOffset<float>(0x007C);                           // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRandomizeDecalRotation                                    = new ExternalOffset<byte/*(bool)*/>(0x0080);                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UParticleSystem>                             Particles                                                      => _offParticles.GetValue();
	public UClass                                              Shockwave                                                      => _offShockwave.GetValue();
	public TArray<USoundCue>                                   Sounds                                                         => _offSounds.GetValue();
	public TArray<USoundCue>                                   FirstPersonSounds                                              => _offFirstPersonSounds.GetValue();
	public TArray<USoundCue>                                   RicochetSounds                                                 => _offRicochetSounds.GetValue();
	public TArray<USoundCue>                                   RicochetFirstPersonSounds                                      => _offRicochetFirstPersonSounds.GetValue();
	public TArray<UMaterialInterface>                          decals                                                         => _offdecals.GetValue();
	public float                                               MinDecalSize                                                   => _offMinDecalSize.GetValue();
	public float                                               MaxDecalSize                                                   => _offMaxDecalSize.GetValue();
	public byte/*(bool)*/                                      bSkewDecalSize                                                 => _offbSkewDecalSize.GetValue();
	public float                                               DecalDepth                                                     => _offDecalDepth.GetValue();
	public float                                               DecalLifeSpan                                                  => _offDecalLifeSpan.GetValue();
	public byte/*(bool)*/                                      bRandomizeDecalRotation                                        => _offbRandomizeDecalRotation.GetValue();
	#endregion

	public FSQProjectileImpactEffect(TArray<UParticleSystem> c_Particles, UClass c_Shockwave, TArray<USoundCue> c_Sounds, TArray<USoundCue> c_FirstPersonSounds, TArray<USoundCue> c_RicochetSounds, TArray<USoundCue> c_RicochetFirstPersonSounds, TArray<UMaterialInterface> c_decals, float c_MinDecalSize, float c_MaxDecalSize, byte/*(bool)*/ c_bSkewDecalSize, float c_DecalDepth, float c_DecalLifeSpan, byte/*(bool)*/ c_bRandomizeDecalRotation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParticles.SetValue(c_Particles);
		_offShockwave.SetValue(c_Shockwave);
		_offSounds.SetValue(c_Sounds);
		_offFirstPersonSounds.SetValue(c_FirstPersonSounds);
		_offRicochetSounds.SetValue(c_RicochetSounds);
		_offRicochetFirstPersonSounds.SetValue(c_RicochetFirstPersonSounds);
		_offdecals.SetValue(c_decals);
		_offMinDecalSize.SetValue(c_MinDecalSize);
		_offMaxDecalSize.SetValue(c_MaxDecalSize);
		_offbSkewDecalSize.SetValue(c_bSkewDecalSize);
		_offDecalDepth.SetValue(c_DecalDepth);
		_offDecalLifeSpan.SetValue(c_DecalLifeSpan);
		_offbRandomizeDecalRotation.SetValue(c_bRandomizeDecalRotation);
	}
}
// ScriptStruct Squad.SQExplosionEffect
// 0x0020 (0x00A8 - 0x0088)
public class FSQExplosionEffect : FSQProjectileImpactEffect
{
	#region Offsets
	private ExternalOffset<UParticleSystem>                    _offShockwaveParticleEffect                                    = new ExternalOffset<UParticleSystem>(0x0088, true);           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offShockwaveSound                                             = new ExternalOffset<USoundCue>(0x0090, true);                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offShockwaveDecalMaterial                                     = new ExternalOffset<UMaterialInterface>(0x0098, true);        // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offDebrisSound                                                = new ExternalOffset<USoundCue>(0x00A0, true);                 // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UParticleSystem                                     ShockwaveParticleEffect                                        => _offShockwaveParticleEffect.GetValue();
	public USoundCue                                           ShockwaveSound                                                 => _offShockwaveSound.GetValue();
	public UMaterialInterface                                  ShockwaveDecalMaterial                                         => _offShockwaveDecalMaterial.GetValue();
	public USoundCue                                           DebrisSound                                                    => _offDebrisSound.GetValue();
	#endregion

	public FSQExplosionEffect(UParticleSystem c_ShockwaveParticleEffect, USoundCue c_ShockwaveSound, UMaterialInterface c_ShockwaveDecalMaterial, USoundCue c_DebrisSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offShockwaveParticleEffect.SetValue(c_ShockwaveParticleEffect);
		_offShockwaveSound.SetValue(c_ShockwaveSound);
		_offShockwaveDecalMaterial.SetValue(c_ShockwaveDecalMaterial);
		_offDebrisSound.SetValue(c_DebrisSound);
	}
}
// ScriptStruct Squad.SQEffectsSet
// 0x0248
public class FSQEffectsSet : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSQProjectileImpactEffect>          _offImpactEffects                                              = new ExternalOffset<FSQProjectileImpactEffect>(0x0000, false); // 0x0000(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQProjectileImpactEffect>          _offThrowableEffects                                           = new ExternalOffset<FSQProjectileImpactEffect>(0x0088, false); // 0x0088(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQExplosionEffect>                 _offExplosionEffects                                           = new ExternalOffset<FSQExplosionEffect>(0x0110, false);       // 0x0110(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQProjectileImpactEffect>          _offBlastEffects                                               = new ExternalOffset<FSQProjectileImpactEffect>(0x01B8, false); // 0x01B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOverlapsThrowableProjectiles                              = new ExternalOffset<byte/*(bool)*/>(0x0240);                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQProjectileImpactEffect                           ImpactEffects                                                  => _offImpactEffects.GetValue();
	public FSQProjectileImpactEffect                           ThrowableEffects                                               => _offThrowableEffects.GetValue();
	public FSQExplosionEffect                                  ExplosionEffects                                               => _offExplosionEffects.GetValue();
	public FSQProjectileImpactEffect                           BlastEffects                                                   => _offBlastEffects.GetValue();
	public byte/*(bool)*/                                      bOverlapsThrowableProjectiles                                  => _offbOverlapsThrowableProjectiles.GetValue();
	#endregion

	public FSQEffectsSet(FSQProjectileImpactEffect c_ImpactEffects, FSQProjectileImpactEffect c_ThrowableEffects, FSQExplosionEffect c_ExplosionEffects, FSQProjectileImpactEffect c_BlastEffects, byte/*(bool)*/ c_bOverlapsThrowableProjectiles) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offImpactEffects.SetValue(c_ImpactEffects);
		_offThrowableEffects.SetValue(c_ThrowableEffects);
		_offExplosionEffects.SetValue(c_ExplosionEffects);
		_offBlastEffects.SetValue(c_BlastEffects);
		_offbOverlapsThrowableProjectiles.SetValue(c_bOverlapsThrowableProjectiles);
	}
}
// ScriptStruct Squad.DeployableItem
// 0x000C (0x0018 - 0x000C)
public class FDeployableItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<ASQDeployable>                      _offDeployable                                                 = new ExternalOffset<ASQDeployable>(0x0010, true);             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQDeployable                                       Deployable                                                     => _offDeployable.GetValue();
	#endregion

	public FDeployableItem(ASQDeployable c_Deployable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDeployable.SetValue(c_Deployable);
	}
}
// ScriptStruct Squad.DeployableItemsArray
// 0x0010 (0x0118 - 0x0108)
public class FDeployableItemsArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FDeployableItem>>            _offItems                                                      = new ExternalOffset<TArray<FDeployableItem>>(0x0108, false);  // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FDeployableItem>                             Items                                                          => _offItems.GetValue();
	#endregion

	public FDeployableItemsArray(TArray<FDeployableItem> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.PlayerStateDataObject
// 0x0060
public class FPlayerStateDataObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offLives                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumKills                                                   = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumDeaths                                                  = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumWoundeds                                                = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumWounds                                                  = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumTeamkills                                               = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offHealPoints                                                 = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRevivedPoints                                              = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTeamWorkScore                                              = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offObjectiveScore                                             = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAdmin                                                     = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDev                                                       = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbQA                                                        = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMember                                                    = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCommander                                                 = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFireTeamIndex                                              = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFireTeamPosition                                           = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offPlayerNamePrefix                                           = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture>                           _offSupporterPatch                                             = new ExternalOffset<UTexture>(0x0048, true);                  // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offReplicationKey                                             = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ASQPlayerState>                     _offOwner                                                      = new ExternalOffset<ASQPlayerState>(0x0058, true);            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Lives                                                          => _offLives.GetValue();
	public int                                                 NumKills                                                       => _offNumKills.GetValue();
	public int                                                 NumDeaths                                                      => _offNumDeaths.GetValue();
	public int                                                 NumWoundeds                                                    => _offNumWoundeds.GetValue();
	public int                                                 NumWounds                                                      => _offNumWounds.GetValue();
	public int                                                 NumTeamkills                                                   => _offNumTeamkills.GetValue();
	public float                                               HealPoints                                                     => _offHealPoints.GetValue();
	public float                                               RevivedPoints                                                  => _offRevivedPoints.GetValue();
	public float                                               TeamWorkScore                                                  => _offTeamWorkScore.GetValue();
	public float                                               ObjectiveScore                                                 => _offObjectiveScore.GetValue();
	public byte/*(bool)*/                                      bAdmin                                                         => _offbAdmin.GetValue();
	public byte/*(bool)*/                                      bDev                                                           => _offbDev.GetValue();
	public byte/*(bool)*/                                      bQA                                                            => _offbQA.GetValue();
	public byte/*(bool)*/                                      bMember                                                        => _offbMember.GetValue();
	public byte/*(bool)*/                                      bCommander                                                     => _offbCommander.GetValue();
	public int                                                 FireTeamIndex                                                  => _offFireTeamIndex.GetValue();
	public int                                                 FireTeamPosition                                               => _offFireTeamPosition.GetValue();
	public FString                                             PlayerNamePrefix                                               => _offPlayerNamePrefix.GetValue();
	public UTexture                                            SupporterPatch                                                 => _offSupporterPatch.GetValue();
	public int                                                 ReplicationKey                                                 => _offReplicationKey.GetValue();
	public ASQPlayerState                                      Owner                                                          => _offOwner.GetValue();
	#endregion

	public FPlayerStateDataObject(int c_Lives, int c_NumKills, int c_NumDeaths, int c_NumWoundeds, int c_NumWounds, int c_NumTeamkills, float c_HealPoints, float c_RevivedPoints, float c_TeamWorkScore, float c_ObjectiveScore, byte/*(bool)*/ c_bAdmin, byte/*(bool)*/ c_bDev, byte/*(bool)*/ c_bQA, byte/*(bool)*/ c_bMember, byte/*(bool)*/ c_bCommander, int c_FireTeamIndex, int c_FireTeamPosition, FString c_PlayerNamePrefix, UTexture c_SupporterPatch, int c_ReplicationKey, ASQPlayerState c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLives.SetValue(c_Lives);
		_offNumKills.SetValue(c_NumKills);
		_offNumDeaths.SetValue(c_NumDeaths);
		_offNumWoundeds.SetValue(c_NumWoundeds);
		_offNumWounds.SetValue(c_NumWounds);
		_offNumTeamkills.SetValue(c_NumTeamkills);
		_offHealPoints.SetValue(c_HealPoints);
		_offRevivedPoints.SetValue(c_RevivedPoints);
		_offTeamWorkScore.SetValue(c_TeamWorkScore);
		_offObjectiveScore.SetValue(c_ObjectiveScore);
		_offbAdmin.SetValue(c_bAdmin);
		_offbDev.SetValue(c_bDev);
		_offbQA.SetValue(c_bQA);
		_offbMember.SetValue(c_bMember);
		_offbCommander.SetValue(c_bCommander);
		_offFireTeamIndex.SetValue(c_FireTeamIndex);
		_offFireTeamPosition.SetValue(c_FireTeamPosition);
		_offPlayerNamePrefix.SetValue(c_PlayerNamePrefix);
		_offSupporterPatch.SetValue(c_SupporterPatch);
		_offReplicationKey.SetValue(c_ReplicationKey);
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct Squad.TeamSquadId
// 0x0008
public class FTeamSquadId : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTeamSquadId() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQRoleKitIconLookup
// 0x0008 (0x0010 - 0x0008)
public class FSQRoleKitIconLookup : FTableRowBase
{
	#region Offsets
	private ExternalOffset<USQRoleSettings>                    _offRoleSetting                                                = new ExternalOffset<USQRoleSettings>(0x0008, true);           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQRoleSettings                                     RoleSetting                                                    => _offRoleSetting.GetValue();
	#endregion

	public FSQRoleKitIconLookup(USQRoleSettings c_RoleSetting) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRoleSetting.SetValue(c_RoleSetting);
	}
}
// ScriptStruct Squad.SQRotationRepMovement
// 0x0000 (0x0040 - 0x0040)
public class FSQRotationRepMovement : FSQRepMovement
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRotationRepMovement() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.PlayerWidgetPair
// 0x0010
public class FPlayerWidgetPair : ExternalClass
{
	#region Offsets
	private ExternalOffset<USQScoreboardPlayer>                _offPlayerWidget                                               = new ExternalOffset<USQScoreboardPlayer>(0x0000, true);       // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ASQPlayerState>                     _offPlayerState                                                = new ExternalOffset<ASQPlayerState>(0x0008, true);            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQScoreboardPlayer                                 PlayerWidget                                                   => _offPlayerWidget.GetValue();
	public ASQPlayerState                                      PlayerState                                                    => _offPlayerState.GetValue();
	#endregion

	public FPlayerWidgetPair(USQScoreboardPlayer c_PlayerWidget, ASQPlayerState c_PlayerState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayerWidget.SetValue(c_PlayerWidget);
		_offPlayerState.SetValue(c_PlayerState);
	}
}
// ScriptStruct Squad.SquadWidgetPair
// 0x0010
public class FSquadWidgetPair : ExternalClass
{
	#region Offsets
	private ExternalOffset<USQScoreboardSquad>                 _offSquadWidget                                                = new ExternalOffset<USQScoreboardSquad>(0x0000, true);        // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ASQSquadState>                      _offSquadState                                                 = new ExternalOffset<ASQSquadState>(0x0008, true);             // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQScoreboardSquad                                  SquadWidget                                                    => _offSquadWidget.GetValue();
	public ASQSquadState                                       SquadState                                                     => _offSquadState.GetValue();
	#endregion

	public FSquadWidgetPair(USQScoreboardSquad c_SquadWidget, ASQSquadState c_SquadState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSquadWidget.SetValue(c_SquadWidget);
		_offSquadState.SetValue(c_SquadState);
	}
}
// ScriptStruct Squad.SQScoreboardStyle
// 0x0100 (0x0108 - 0x0008)
public class FSQScoreboardStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offItemBorderBrush                                            = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offKillStatColor                                              = new ExternalOffset<FSlateColor>(0x0090, false);              // 0x0090(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offDeathStatColor                                             = new ExternalOffset<FSlateColor>(0x00B8, false);              // 0x00B8(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offScoreStatColor                                             = new ExternalOffset<FSlateColor>(0x00E0, false);              // 0x00E0(0x0028) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         ItemBorderBrush                                                => _offItemBorderBrush.GetValue();
	public FSlateColor                                         KillStatColor                                                  => _offKillStatColor.GetValue();
	public FSlateColor                                         DeathStatColor                                                 => _offDeathStatColor.GetValue();
	public FSlateColor                                         ScoreStatColor                                                 => _offScoreStatColor.GetValue();
	#endregion

	public FSQScoreboardStyle(FSlateBrush c_ItemBorderBrush, FSlateColor c_KillStatColor, FSlateColor c_DeathStatColor, FSlateColor c_ScoreStatColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItemBorderBrush.SetValue(c_ItemBorderBrush);
		_offKillStatColor.SetValue(c_KillStatColor);
		_offDeathStatColor.SetValue(c_DeathStatColor);
		_offScoreStatColor.SetValue(c_ScoreStatColor);
	}
}
// ScriptStruct Squad.SQRotator_NetQuantizeShorts
// 0x0000 (0x000C - 0x000C)
public class FSQRotator_NetQuantizeShorts : FRotator
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRotator_NetQuantizeShorts() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQRotator_NetQuantizeBytes
// 0x0000 (0x000C - 0x000C)
public class FSQRotator_NetQuantizeBytes : FRotator
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRotator_NetQuantizeBytes() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQClimbTraceHitResults
// 0x002C
public class FSQClimbTraceHitResults : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offEndingPoint1                                               = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbBlockingHit                                               = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offClimbFrontNormal                                           = new ExternalOffset<FRotator>(0x0010, false);                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offClimbDistanceFromWall                                      = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offClimbTraceHit2                                             = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             EndingPoint1                                                   => _offEndingPoint1.GetValue();
	public byte/*(bool)*/                                      bBlockingHit                                                   => _offbBlockingHit.GetValue();
	public FRotator                                            ClimbFrontNormal                                               => _offClimbFrontNormal.GetValue();
	public float                                               ClimbDistanceFromWall                                          => _offClimbDistanceFromWall.GetValue();
	public FVector                                             ClimbTraceHit2                                                 => _offClimbTraceHit2.GetValue();
	#endregion

	public FSQClimbTraceHitResults(FVector c_EndingPoint1, byte/*(bool)*/ c_bBlockingHit, FRotator c_ClimbFrontNormal, float c_ClimbDistanceFromWall, FVector c_ClimbTraceHit2) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEndingPoint1.SetValue(c_EndingPoint1);
		_offbBlockingHit.SetValue(c_bBlockingHit);
		_offClimbFrontNormal.SetValue(c_ClimbFrontNormal);
		_offClimbDistanceFromWall.SetValue(c_ClimbDistanceFromWall);
		_offClimbTraceHit2.SetValue(c_ClimbTraceHit2);
	}
}
// ScriptStruct Squad.SQVaultTraceHitResults
// 0x00AC
public class FSQVaultTraceHitResults : ExternalClass
{
	#region Offsets
	private ExternalOffset<FHitResult>                         _offbVaultLineTrace1Hit                                        = new ExternalOffset<FHitResult>(0x0000, false);               // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVaultOppSideWallHit                                        = new ExternalOffset<FVector>(0x0088, false);                  // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offVaultDistanceFromOppSideWall                               = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVaultEndingPointLineTraceImpact                            = new ExternalOffset<FVector>(0x0098, false);                  // 0x0098(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbVaultLineTrace2Hit                                        = new ExternalOffset<byte/*(bool)*/>(0x00A4);                  // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDistanceToNewLocation                                      = new ExternalOffset<float>(0x00A8);                           // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FHitResult                                          bVaultLineTrace1Hit                                            => _offbVaultLineTrace1Hit.GetValue();
	public FVector                                             VaultOppSideWallHit                                            => _offVaultOppSideWallHit.GetValue();
	public float                                               VaultDistanceFromOppSideWall                                   => _offVaultDistanceFromOppSideWall.GetValue();
	public FVector                                             VaultEndingPointLineTraceImpact                                => _offVaultEndingPointLineTraceImpact.GetValue();
	public byte/*(bool)*/                                      bVaultLineTrace2Hit                                            => _offbVaultLineTrace2Hit.GetValue();
	public float                                               DistanceToNewLocation                                          => _offDistanceToNewLocation.GetValue();
	#endregion

	public FSQVaultTraceHitResults(FHitResult c_bVaultLineTrace1Hit, FVector c_VaultOppSideWallHit, float c_VaultDistanceFromOppSideWall, FVector c_VaultEndingPointLineTraceImpact, byte/*(bool)*/ c_bVaultLineTrace2Hit, float c_DistanceToNewLocation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbVaultLineTrace1Hit.SetValue(c_bVaultLineTrace1Hit);
		_offVaultOppSideWallHit.SetValue(c_VaultOppSideWallHit);
		_offVaultDistanceFromOppSideWall.SetValue(c_VaultDistanceFromOppSideWall);
		_offVaultEndingPointLineTraceImpact.SetValue(c_VaultEndingPointLineTraceImpact);
		_offbVaultLineTrace2Hit.SetValue(c_bVaultLineTrace2Hit);
		_offDistanceToNewLocation.SetValue(c_DistanceToNewLocation);
	}
}
// ScriptStruct Squad.SQDistanceDatum
// 0x0014
public class FSQDistanceDatum : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offFadeInDistanceStart                                        = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeInDistanceEnd                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeOutDistanceStart                                       = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeOutDistanceEnd                                         = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offVolume                                                     = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               FadeInDistanceStart                                            => _offFadeInDistanceStart.GetValue();
	public float                                               FadeInDistanceEnd                                              => _offFadeInDistanceEnd.GetValue();
	public float                                               FadeOutDistanceStart                                           => _offFadeOutDistanceStart.GetValue();
	public float                                               FadeOutDistanceEnd                                             => _offFadeOutDistanceEnd.GetValue();
	public float                                               Volume                                                         => _offVolume.GetValue();
	#endregion

	public FSQDistanceDatum(float c_FadeInDistanceStart, float c_FadeInDistanceEnd, float c_FadeOutDistanceStart, float c_FadeOutDistanceEnd, float c_Volume) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFadeInDistanceStart.SetValue(c_FadeInDistanceStart);
		_offFadeInDistanceEnd.SetValue(c_FadeInDistanceEnd);
		_offFadeOutDistanceStart.SetValue(c_FadeOutDistanceStart);
		_offFadeOutDistanceEnd.SetValue(c_FadeOutDistanceEnd);
		_offVolume.SetValue(c_Volume);
	}
}
// ScriptStruct Squad.SQSoundWeight
// 0x0010
public class FSQSoundWeight : ExternalClass
{
	#region Offsets
	private ExternalOffset<USoundWave>                         _offSound                                                      = new ExternalOffset<USoundWave>(0x0000, true);                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWeight                                                     = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasBeenUsed                                               = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USoundWave                                          Sound                                                          => _offSound.GetValue();
	public float                                               Weight                                                         => _offWeight.GetValue();
	public byte/*(bool)*/                                      bHasBeenUsed                                                   => _offbHasBeenUsed.GetValue();
	#endregion

	public FSQSoundWeight(USoundWave c_Sound, float c_Weight, byte/*(bool)*/ c_bHasBeenUsed) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSound.SetValue(c_Sound);
		_offWeight.SetValue(c_Weight);
		_offbHasBeenUsed.SetValue(c_bHasBeenUsed);
	}
}
// ScriptStruct Squad.SQWaypoint
// 0x0030
public class FSQWaypoint : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offWorldPosition                                              = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offMapPosition                                                = new ExternalOffset<FVector2D>(0x000C, false);                // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector2D>>                  _offPathPoints                                                 = new ExternalOffset<TArray<FVector2D>>(0x0018, false);        // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offIconTexture                                                = new ExternalOffset<UTexture2D>(0x0028, true);                // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             WorldPosition                                                  => _offWorldPosition.GetValue();
	public FVector2D                                           MapPosition                                                    => _offMapPosition.GetValue();
	public TArray<FVector2D>                                   PathPoints                                                     => _offPathPoints.GetValue();
	public UTexture2D                                          IconTexture                                                    => _offIconTexture.GetValue();
	#endregion

	public FSQWaypoint(FVector c_WorldPosition, FVector2D c_MapPosition, TArray<FVector2D> c_PathPoints, UTexture2D c_IconTexture) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWorldPosition.SetValue(c_WorldPosition);
		_offMapPosition.SetValue(c_MapPosition);
		_offPathPoints.SetValue(c_PathPoints);
		_offIconTexture.SetValue(c_IconTexture);
	}
}
// ScriptStruct Squad.VehicleOccupantsItem
// 0x0044 (0x0050 - 0x000C)
public class FVehicleOccupantsItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FSQVehicleOccupantInfo>             _offVehicleOccupantInfo                                        = new ExternalOffset<FSQVehicleOccupantInfo>(0x0010, false);   // 0x0010(0x0038) (NativeAccessSpecifierPublic)
	private ExternalOffset<sbyte>                              _offSeatId                                                     = new ExternalOffset<sbyte>(0x0048);                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offDirtyCount                                                 = new ExternalOffset<char>(0x0049, false);                     // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQVehicleOccupantInfo                              VehicleOccupantInfo                                            => _offVehicleOccupantInfo.GetValue();
	public sbyte                                               SeatId                                                         => _offSeatId.GetValue();
	#endregion

	public FVehicleOccupantsItem(FSQVehicleOccupantInfo c_VehicleOccupantInfo, sbyte c_SeatId) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVehicleOccupantInfo.SetValue(c_VehicleOccupantInfo);
		_offSeatId.SetValue(c_SeatId);
	}
}
// ScriptStruct Squad.VehicleOccupantsArray
// 0x0010 (0x0118 - 0x0108)
public class FVehicleOccupantsArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FVehicleOccupantsItem>>      _offItems                                                      = new ExternalOffset<TArray<FVehicleOccupantsItem>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FVehicleOccupantsItem>                       Items                                                          => _offItems.GetValue();
	#endregion

	public FVehicleOccupantsArray(TArray<FVehicleOccupantsItem> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.SQMedicCalls
// 0x0078
public class FSQMedicCalls : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQMedicCalls() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQTeamEventSounds
// 0x00C8
public class FSQTeamEventSounds : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQTeamEventSounds() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQCommanderSounds
// 0x0140
public class FSQCommanderSounds : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQCommanderSounds() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQObjectiveSounds
// 0x00A0
public class FSQObjectiveSounds : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQObjectiveSounds() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQRoleGroupLimit
// 0x0014
public class FSQRoleGroupLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQRoleTypeEnum>                    _offRoleGroup                                                  = new ExternalOffset<ESQRoleTypeEnum>(0x0000, false);          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLimit                                                   = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxLimit                                                   = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSquadMembersPerSlotIncrease                                = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSlotsPerIncrease                                           = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQRoleTypeEnum                                     RoleGroup                                                      => _offRoleGroup.GetValue();
	public int                                                 MinLimit                                                       => _offMinLimit.GetValue();
	public int                                                 MaxLimit                                                       => _offMaxLimit.GetValue();
	public int                                                 SquadMembersPerSlotIncrease                                    => _offSquadMembersPerSlotIncrease.GetValue();
	public int                                                 SlotsPerIncrease                                               => _offSlotsPerIncrease.GetValue();
	#endregion

	public FSQRoleGroupLimit(ESQRoleTypeEnum c_RoleGroup, int c_MinLimit, int c_MaxLimit, int c_SquadMembersPerSlotIncrease, int c_SlotsPerIncrease) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRoleGroup.SetValue(c_RoleGroup);
		_offMinLimit.SetValue(c_MinLimit);
		_offMaxLimit.SetValue(c_MaxLimit);
		_offSquadMembersPerSlotIncrease.SetValue(c_SquadMembersPerSlotIncrease);
		_offSlotsPerIncrease.SetValue(c_SlotsPerIncrease);
	}
}
// ScriptStruct Squad.SQRoleLimit
// 0x0024
public class FSQRoleLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMinPerTeam                                                 = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinPerSquad                                                = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSquadMembersToUnlockNextKit                                = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offUnlocksAtSquadSize                                         = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStopScalingAtSquadSize                                     = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTeamMembersToUnlockNextKit                                 = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offUnlocksAtTeamSize                                          = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStopScalingAtTeamSize                                      = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSquadLeaderOnly                                           = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNonDeployable                                             = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MinPerTeam                                                     => _offMinPerTeam.GetValue();
	public int                                                 MinPerSquad                                                    => _offMinPerSquad.GetValue();
	public int                                                 SquadMembersToUnlockNextKit                                    => _offSquadMembersToUnlockNextKit.GetValue();
	public int                                                 UnlocksAtSquadSize                                             => _offUnlocksAtSquadSize.GetValue();
	public int                                                 StopScalingAtSquadSize                                         => _offStopScalingAtSquadSize.GetValue();
	public int                                                 TeamMembersToUnlockNextKit                                     => _offTeamMembersToUnlockNextKit.GetValue();
	public int                                                 UnlocksAtTeamSize                                              => _offUnlocksAtTeamSize.GetValue();
	public int                                                 StopScalingAtTeamSize                                          => _offStopScalingAtTeamSize.GetValue();
	public byte/*(bool)*/                                      bSquadLeaderOnly                                               => _offbSquadLeaderOnly.GetValue();
	public byte/*(bool)*/                                      bNonDeployable                                                 => _offbNonDeployable.GetValue();
	#endregion

	public FSQRoleLimit(int c_MinPerTeam, int c_MinPerSquad, int c_SquadMembersToUnlockNextKit, int c_UnlocksAtSquadSize, int c_StopScalingAtSquadSize, int c_TeamMembersToUnlockNextKit, int c_UnlocksAtTeamSize, int c_StopScalingAtTeamSize, byte/*(bool)*/ c_bSquadLeaderOnly, byte/*(bool)*/ c_bNonDeployable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinPerTeam.SetValue(c_MinPerTeam);
		_offMinPerSquad.SetValue(c_MinPerSquad);
		_offSquadMembersToUnlockNextKit.SetValue(c_SquadMembersToUnlockNextKit);
		_offUnlocksAtSquadSize.SetValue(c_UnlocksAtSquadSize);
		_offStopScalingAtSquadSize.SetValue(c_StopScalingAtSquadSize);
		_offTeamMembersToUnlockNextKit.SetValue(c_TeamMembersToUnlockNextKit);
		_offUnlocksAtTeamSize.SetValue(c_UnlocksAtTeamSize);
		_offStopScalingAtTeamSize.SetValue(c_StopScalingAtTeamSize);
		_offbSquadLeaderOnly.SetValue(c_bSquadLeaderOnly);
		_offbNonDeployable.SetValue(c_bNonDeployable);
	}
}
// ScriptStruct Squad.SQRoleLimitFASItem
// 0x0024 (0x0030 - 0x000C)
public class FSQRoleLimitFASItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FSQRoleLimit>                       _offContent                                                    = new ExternalOffset<FSQRoleLimit>(0x000C, false);             // 0x000C(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQRoleLimit                                        Content                                                        => _offContent.GetValue();
	#endregion

	public FSQRoleLimitFASItem(FSQRoleLimit c_Content) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offContent.SetValue(c_Content);
	}
}
// ScriptStruct Squad.SQRoleLimitArray
// 0x0010 (0x0118 - 0x0108)
public class FSQRoleLimitArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FSQRoleLimitFASItem>>        _offItems                                                      = new ExternalOffset<TArray<FSQRoleLimitFASItem>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQRoleLimitFASItem>                         Items                                                          => _offItems.GetValue();
	#endregion

	public FSQRoleLimitArray(TArray<FSQRoleLimitFASItem> c_Items) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
	}
}
// ScriptStruct Squad.SQSettingsRestriction
// 0x0018
public class FSQSettingsRestriction : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offSetting                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMin                                                        = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMax                                                        = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Setting                                                        => _offSetting.GetValue();
	public float                                               Min                                                            => _offMin.GetValue();
	public float                                               Max                                                            => _offMax.GetValue();
	#endregion

	public FSQSettingsRestriction(FString c_Setting, float c_Min, float c_Max) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSetting.SetValue(c_Setting);
		_offMin.SetValue(c_Min);
		_offMax.SetValue(c_Max);
	}
}
// ScriptStruct Squad.SQServerSlot
// 0x0028
public class FSQServerSlot : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQJoinBeaconClient>                _offClientBeacon                                               = new ExternalOffset<ASQJoinBeaconClient>(0x0020, true);       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQJoinBeaconClient                                 ClientBeacon                                                   => _offClientBeacon.GetValue();
	#endregion

	public FSQServerSlot(ASQJoinBeaconClient c_ClientBeacon) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offClientBeacon.SetValue(c_ClientBeacon);
	}
}
// ScriptStruct Squad.SQConnectionCheckResponse
// 0x0008
public class FSQConnectionCheckResponse : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbCanQueue                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offCurrentTotalPlayers                                        = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRoundTripRPCTimeMS                                         = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               RoundTripRPCTimeMS                                             => _offRoundTripRPCTimeMS.GetValue();
	#endregion

	public FSQConnectionCheckResponse(float c_RoundTripRPCTimeMS) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRoundTripRPCTimeMS.SetValue(c_RoundTripRPCTimeMS);
	}
}
// ScriptStruct Squad.SQVehicleDestroyedConfig
// 0x0010
public class FSQVehicleDestroyedConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offDamageType                                                 = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offDestroyedVehicleClass                                      = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              DamageType                                                     => _offDamageType.GetValue();
	public UClass                                              DestroyedVehicleClass                                          => _offDestroyedVehicleClass.GetValue();
	#endregion

	public FSQVehicleDestroyedConfig(UClass c_DamageType, UClass c_DestroyedVehicleClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDamageType.SetValue(c_DamageType);
		_offDestroyedVehicleClass.SetValue(c_DestroyedVehicleClass);
	}
}
// ScriptStruct Squad.SQVehicleDestroyEffectConfig
// 0x0010
public class FSQVehicleDestroyEffectConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<UParticleSystem>                    _offParticleSystemTemplate                                     = new ExternalOffset<UParticleSystem>(0x0000, true);           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offDamageType                                                 = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UParticleSystem                                     ParticleSystemTemplate                                         => _offParticleSystemTemplate.GetValue();
	public UClass                                              DamageType                                                     => _offDamageType.GetValue();
	#endregion

	public FSQVehicleDestroyEffectConfig(UParticleSystem c_ParticleSystemTemplate, UClass c_DamageType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParticleSystemTemplate.SetValue(c_ParticleSystemTemplate);
		_offDamageType.SetValue(c_DamageType);
	}
}
// ScriptStruct Squad.SQDeployableLimit
// 0x0010
public class FSQDeployableLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offDeployableClass                                            = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offMaxPerFob                                                  = new ExternalOffset<char>(0x0008, false);                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              DeployableClass                                                => _offDeployableClass.GetValue();
	#endregion

	public FSQDeployableLimit(UClass c_DeployableClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDeployableClass.SetValue(c_DeployableClass);
	}
}
// ScriptStruct Squad.SQVehicleSeatAnimationState
// 0x0058
public class FSQVehicleSeatAnimationState : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offPawnAnimation                                              = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offSeatAnimation                                              = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offBaseAnimation                                              = new ExternalOffset<UAnimSequence>(0x0010, true);             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlendSpace>                        _offAimOffsets                                                 = new ExternalOffset<UBlendSpace>(0x0018, true);               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseWheelBlendSpace1D                                      = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlendSpace1D>                      _offWheelBlendSpace1D                                          = new ExternalOffset<UBlendSpace1D>(0x0028, true);             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseHandIK                                                 = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseWeaponForHandIK                                        = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLeftHandIKAlpha                                            = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offLeftHandIKSocketName                                       = new ExternalOffset<FName>(0x0038, false);                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRightHandIKAlpha                                           = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offRightHandIKSocketName                                      = new ExternalOffset<FName>(0x0044, false);                    // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offSteeringWheelSingleFrameAnimSequence                       = new ExternalOffset<UAnimSequence>(0x0050, true);             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        PawnAnimation                                                  => _offPawnAnimation.GetValue();
	public UAnimMontage                                        SeatAnimation                                                  => _offSeatAnimation.GetValue();
	public UAnimSequence                                       BaseAnimation                                                  => _offBaseAnimation.GetValue();
	public UBlendSpace                                         AimOffsets                                                     => _offAimOffsets.GetValue();
	public byte/*(bool)*/                                      bUseWheelBlendSpace1D                                          => _offbUseWheelBlendSpace1D.GetValue();
	public UBlendSpace1D                                       WheelBlendSpace1D                                              => _offWheelBlendSpace1D.GetValue();
	public byte/*(bool)*/                                      bUseHandIK                                                     => _offbUseHandIK.GetValue();
	public byte/*(bool)*/                                      bUseWeaponForHandIK                                            => _offbUseWeaponForHandIK.GetValue();
	public float                                               LeftHandIKAlpha                                                => _offLeftHandIKAlpha.GetValue();
	public FName                                               LeftHandIKSocketName                                           => _offLeftHandIKSocketName.GetValue();
	public float                                               RightHandIKAlpha                                               => _offRightHandIKAlpha.GetValue();
	public FName                                               RightHandIKSocketName                                          => _offRightHandIKSocketName.GetValue();
	public UAnimSequence                                       SteeringWheelSingleFrameAnimSequence                           => _offSteeringWheelSingleFrameAnimSequence.GetValue();
	#endregion

	public FSQVehicleSeatAnimationState(UAnimMontage c_PawnAnimation, UAnimMontage c_SeatAnimation, UAnimSequence c_BaseAnimation, UBlendSpace c_AimOffsets, byte/*(bool)*/ c_bUseWheelBlendSpace1D, UBlendSpace1D c_WheelBlendSpace1D, byte/*(bool)*/ c_bUseHandIK, byte/*(bool)*/ c_bUseWeaponForHandIK, float c_LeftHandIKAlpha, FName c_LeftHandIKSocketName, float c_RightHandIKAlpha, FName c_RightHandIKSocketName, UAnimSequence c_SteeringWheelSingleFrameAnimSequence) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPawnAnimation.SetValue(c_PawnAnimation);
		_offSeatAnimation.SetValue(c_SeatAnimation);
		_offBaseAnimation.SetValue(c_BaseAnimation);
		_offAimOffsets.SetValue(c_AimOffsets);
		_offbUseWheelBlendSpace1D.SetValue(c_bUseWheelBlendSpace1D);
		_offWheelBlendSpace1D.SetValue(c_WheelBlendSpace1D);
		_offbUseHandIK.SetValue(c_bUseHandIK);
		_offbUseWeaponForHandIK.SetValue(c_bUseWeaponForHandIK);
		_offLeftHandIKAlpha.SetValue(c_LeftHandIKAlpha);
		_offLeftHandIKSocketName.SetValue(c_LeftHandIKSocketName);
		_offRightHandIKAlpha.SetValue(c_RightHandIKAlpha);
		_offRightHandIKSocketName.SetValue(c_RightHandIKSocketName);
		_offSteeringWheelSingleFrameAnimSequence.SetValue(c_SteeringWheelSingleFrameAnimSequence);
	}
}
// ScriptStruct Squad.SQVehicleSeatTransitionState
// 0x0020
public class FSQVehicleSeatTransitionState : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQSoldierSeatState>                _offSoldierSeatState                                           = new ExternalOffset<ESQSoldierSeatState>(0x0000, false);      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCollisionDamageMultipler                                   = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSoldierCanTakeDirectRadialDamage                          = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowDetachSoldier                                        = new ExternalOffset<byte/*(bool)*/>(0x0009);                  // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEjectDeadSoldier                                          = new ExternalOffset<byte/*(bool)*/>(0x000A);                  // 0x000A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEjectIncappedSoldier                                      = new ExternalOffset<byte/*(bool)*/>(0x000B);                  // 0x000B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSeatIsInTheOpen                                           = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOnlyPlayExteriorVehicleSounds                             = new ExternalOffset<byte/*(bool)*/>(0x000D);                  // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundMix>                          _offSoundMix                                                   = new ExternalOffset<USoundMix>(0x0010, true);                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQListenerType>                    _offListenerTypeOverride                                       = new ExternalOffset<ESQListenerType>(0x0018, false);          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQSoldierSeatState                                 SoldierSeatState                                               => _offSoldierSeatState.GetValue();
	public float                                               CollisionDamageMultipler                                       => _offCollisionDamageMultipler.GetValue();
	public byte/*(bool)*/                                      bSoldierCanTakeDirectRadialDamage                              => _offbSoldierCanTakeDirectRadialDamage.GetValue();
	public byte/*(bool)*/                                      bAllowDetachSoldier                                            => _offbAllowDetachSoldier.GetValue();
	public byte/*(bool)*/                                      bEjectDeadSoldier                                              => _offbEjectDeadSoldier.GetValue();
	public byte/*(bool)*/                                      bEjectIncappedSoldier                                          => _offbEjectIncappedSoldier.GetValue();
	public byte/*(bool)*/                                      bSeatIsInTheOpen                                               => _offbSeatIsInTheOpen.GetValue();
	public byte/*(bool)*/                                      bOnlyPlayExteriorVehicleSounds                                 => _offbOnlyPlayExteriorVehicleSounds.GetValue();
	public USoundMix                                           SoundMix                                                       => _offSoundMix.GetValue();
	public ESQListenerType                                     ListenerTypeOverride                                           => _offListenerTypeOverride.GetValue();
	#endregion

	public FSQVehicleSeatTransitionState(ESQSoldierSeatState c_SoldierSeatState, float c_CollisionDamageMultipler, byte/*(bool)*/ c_bSoldierCanTakeDirectRadialDamage, byte/*(bool)*/ c_bAllowDetachSoldier, byte/*(bool)*/ c_bEjectDeadSoldier, byte/*(bool)*/ c_bEjectIncappedSoldier, byte/*(bool)*/ c_bSeatIsInTheOpen, byte/*(bool)*/ c_bOnlyPlayExteriorVehicleSounds, USoundMix c_SoundMix, ESQListenerType c_ListenerTypeOverride) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSoldierSeatState.SetValue(c_SoldierSeatState);
		_offCollisionDamageMultipler.SetValue(c_CollisionDamageMultipler);
		_offbSoldierCanTakeDirectRadialDamage.SetValue(c_bSoldierCanTakeDirectRadialDamage);
		_offbAllowDetachSoldier.SetValue(c_bAllowDetachSoldier);
		_offbEjectDeadSoldier.SetValue(c_bEjectDeadSoldier);
		_offbEjectIncappedSoldier.SetValue(c_bEjectIncappedSoldier);
		_offbSeatIsInTheOpen.SetValue(c_bSeatIsInTheOpen);
		_offbOnlyPlayExteriorVehicleSounds.SetValue(c_bOnlyPlayExteriorVehicleSounds);
		_offSoundMix.SetValue(c_SoundMix);
		_offListenerTypeOverride.SetValue(c_ListenerTypeOverride);
	}
}
// ScriptStruct Squad.SQVehicleSeatState
// 0x0078
public class FSQVehicleSeatState : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSQVehicleSeatAnimationState>       _offAnimationState                                             = new ExternalOffset<FSQVehicleSeatAnimationState>(0x0000, false); // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQVehicleSeatTransitionState>      _offTransitionState                                            = new ExternalOffset<FSQVehicleSeatTransitionState>(0x0058, false); // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQVehicleSeatAnimationState                        AnimationState                                                 => _offAnimationState.GetValue();
	public FSQVehicleSeatTransitionState                       TransitionState                                                => _offTransitionState.GetValue();
	#endregion

	public FSQVehicleSeatState(FSQVehicleSeatAnimationState c_AnimationState, FSQVehicleSeatTransitionState c_TransitionState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimationState.SetValue(c_AnimationState);
		_offTransitionState.SetValue(c_TransitionState);
	}
}
// ScriptStruct Squad.SQVehicleSeatConfig
// 0x0050
public class FSQVehicleSeatConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQVehicleRoleAbility>              _offSeatAbilityRequirement                                     = new ExternalOffset<ESQVehicleRoleAbility>(0x0000, false);    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowDetachSoldier                                        = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSeatHealth                                                 = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxRepairToolLimit                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPassDamageToVehicle                                       = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCollisionDamageMultipler                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPassPointDamageToVehicle                                  = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSoldierCanTakeDirectRadialDamage                          = new ExternalOffset<byte/*(bool)*/>(0x0015);                  // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPassRadialDamageToVehicle                                 = new ExternalOffset<byte/*(bool)*/>(0x0016);                  // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSeatAttachSocket                                           = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSoldierAttachSocket                                        = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offSeatPawn                                                   = new ExternalOffset<UClass>(0x0028, true);                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offInitialState                                               = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQVehicleSeatState>>        _offSeatStates                                                 = new ExternalOffset<TArray<FSQVehicleSeatState>>(0x0038, false); // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldAlwaysStayRegistered                                = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSoldierInSeatCanCapture                                   = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseRotationComponentForControlRotation                    = new ExternalOffset<byte/*(bool)*/>(0x004A);                  // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayerEnterDuration                                        = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQVehicleRoleAbility                               SeatAbilityRequirement                                         => _offSeatAbilityRequirement.GetValue();
	public byte/*(bool)*/                                      bAllowDetachSoldier                                            => _offbAllowDetachSoldier.GetValue();
	public float                                               SeatHealth                                                     => _offSeatHealth.GetValue();
	public float                                               MaxRepairToolLimit                                             => _offMaxRepairToolLimit.GetValue();
	public byte/*(bool)*/                                      bPassDamageToVehicle                                           => _offbPassDamageToVehicle.GetValue();
	public float                                               CollisionDamageMultipler                                       => _offCollisionDamageMultipler.GetValue();
	public byte/*(bool)*/                                      bPassPointDamageToVehicle                                      => _offbPassPointDamageToVehicle.GetValue();
	public byte/*(bool)*/                                      bSoldierCanTakeDirectRadialDamage                              => _offbSoldierCanTakeDirectRadialDamage.GetValue();
	public byte/*(bool)*/                                      bPassRadialDamageToVehicle                                     => _offbPassRadialDamageToVehicle.GetValue();
	public FName                                               SeatAttachSocket                                               => _offSeatAttachSocket.GetValue();
	public FName                                               SoldierAttachSocket                                            => _offSoldierAttachSocket.GetValue();
	public UClass                                              SeatPawn                                                       => _offSeatPawn.GetValue();
	public int                                                 InitialState                                                   => _offInitialState.GetValue();
	public TArray<FSQVehicleSeatState>                         SeatStates                                                     => _offSeatStates.GetValue();
	public byte/*(bool)*/                                      bShouldAlwaysStayRegistered                                    => _offbShouldAlwaysStayRegistered.GetValue();
	public byte/*(bool)*/                                      bSoldierInSeatCanCapture                                       => _offbSoldierInSeatCanCapture.GetValue();
	public byte/*(bool)*/                                      bUseRotationComponentForControlRotation                        => _offbUseRotationComponentForControlRotation.GetValue();
	public float                                               PlayerEnterDuration                                            => _offPlayerEnterDuration.GetValue();
	#endregion

	public FSQVehicleSeatConfig(ESQVehicleRoleAbility c_SeatAbilityRequirement, byte/*(bool)*/ c_bAllowDetachSoldier, float c_SeatHealth, float c_MaxRepairToolLimit, byte/*(bool)*/ c_bPassDamageToVehicle, float c_CollisionDamageMultipler, byte/*(bool)*/ c_bPassPointDamageToVehicle, byte/*(bool)*/ c_bSoldierCanTakeDirectRadialDamage, byte/*(bool)*/ c_bPassRadialDamageToVehicle, FName c_SeatAttachSocket, FName c_SoldierAttachSocket, UClass c_SeatPawn, int c_InitialState, TArray<FSQVehicleSeatState> c_SeatStates, byte/*(bool)*/ c_bShouldAlwaysStayRegistered, byte/*(bool)*/ c_bSoldierInSeatCanCapture, byte/*(bool)*/ c_bUseRotationComponentForControlRotation, float c_PlayerEnterDuration) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSeatAbilityRequirement.SetValue(c_SeatAbilityRequirement);
		_offbAllowDetachSoldier.SetValue(c_bAllowDetachSoldier);
		_offSeatHealth.SetValue(c_SeatHealth);
		_offMaxRepairToolLimit.SetValue(c_MaxRepairToolLimit);
		_offbPassDamageToVehicle.SetValue(c_bPassDamageToVehicle);
		_offCollisionDamageMultipler.SetValue(c_CollisionDamageMultipler);
		_offbPassPointDamageToVehicle.SetValue(c_bPassPointDamageToVehicle);
		_offbSoldierCanTakeDirectRadialDamage.SetValue(c_bSoldierCanTakeDirectRadialDamage);
		_offbPassRadialDamageToVehicle.SetValue(c_bPassRadialDamageToVehicle);
		_offSeatAttachSocket.SetValue(c_SeatAttachSocket);
		_offSoldierAttachSocket.SetValue(c_SoldierAttachSocket);
		_offSeatPawn.SetValue(c_SeatPawn);
		_offInitialState.SetValue(c_InitialState);
		_offSeatStates.SetValue(c_SeatStates);
		_offbShouldAlwaysStayRegistered.SetValue(c_bShouldAlwaysStayRegistered);
		_offbSoldierInSeatCanCapture.SetValue(c_bSoldierInSeatCanCapture);
		_offbUseRotationComponentForControlRotation.SetValue(c_bUseRotationComponentForControlRotation);
		_offPlayerEnterDuration.SetValue(c_PlayerEnterDuration);
	}
}
// ScriptStruct Squad.SQOnlineInventorySetting
// 0x0008
public class FSQOnlineInventorySetting : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offItemId                                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ItemId                                                         => _offItemId.GetValue();
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	#endregion

	public FSQOnlineInventorySetting(int c_ItemId, byte/*(bool)*/ c_bEnabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItemId.SetValue(c_ItemId);
		_offbEnabled.SetValue(c_bEnabled);
	}
}
// ScriptStruct Squad.SQShockwaveQualitySetting
// 0x0010
public class FSQShockwaveQualitySetting : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offVerticalSteps                                              = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHorizontalSteps                                            = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCullingDistance                                            = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	public int                                                 VerticalSteps                                                  => _offVerticalSteps.GetValue();
	public int                                                 HorizontalSteps                                                => _offHorizontalSteps.GetValue();
	public float                                               CullingDistance                                                => _offCullingDistance.GetValue();
	#endregion

	public FSQShockwaveQualitySetting(byte/*(bool)*/ c_bEnabled, int c_VerticalSteps, int c_HorizontalSteps, float c_CullingDistance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbEnabled.SetValue(c_bEnabled);
		_offVerticalSteps.SetValue(c_VerticalSteps);
		_offHorizontalSteps.SetValue(c_HorizontalSteps);
		_offCullingDistance.SetValue(c_CullingDistance);
	}
}
// ScriptStruct Squad.SQTextureMemoryStats
// 0x001C
public class FSQTextureMemoryStats : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offDedicatedVideoMemory                                       = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDedicatedSystemMemory                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSharedSystemMemory                                         = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTotalGraphicsMemory                                        = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAllocatedMemorySize                                        = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTexturePoolSize                                            = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPendingMemoryAdjustment                                    = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 DedicatedVideoMemory                                           => _offDedicatedVideoMemory.GetValue();
	public int                                                 DedicatedSystemMemory                                          => _offDedicatedSystemMemory.GetValue();
	public int                                                 SharedSystemMemory                                             => _offSharedSystemMemory.GetValue();
	public int                                                 TotalGraphicsMemory                                            => _offTotalGraphicsMemory.GetValue();
	public int                                                 AllocatedMemorySize                                            => _offAllocatedMemorySize.GetValue();
	public int                                                 TexturePoolSize                                                => _offTexturePoolSize.GetValue();
	public int                                                 PendingMemoryAdjustment                                        => _offPendingMemoryAdjustment.GetValue();
	#endregion

	public FSQTextureMemoryStats(int c_DedicatedVideoMemory, int c_DedicatedSystemMemory, int c_SharedSystemMemory, int c_TotalGraphicsMemory, int c_AllocatedMemorySize, int c_TexturePoolSize, int c_PendingMemoryAdjustment) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDedicatedVideoMemory.SetValue(c_DedicatedVideoMemory);
		_offDedicatedSystemMemory.SetValue(c_DedicatedSystemMemory);
		_offSharedSystemMemory.SetValue(c_SharedSystemMemory);
		_offTotalGraphicsMemory.SetValue(c_TotalGraphicsMemory);
		_offAllocatedMemorySize.SetValue(c_AllocatedMemorySize);
		_offTexturePoolSize.SetValue(c_TexturePoolSize);
		_offPendingMemoryAdjustment.SetValue(c_PendingMemoryAdjustment);
	}
}
// ScriptStruct Squad.SQAnnouncement
// 0x0030
public class FSQAnnouncement : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offTitle                                                      = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offLink                                                       = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offBody                                                       = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Title                                                          => _offTitle.GetValue();
	public FString                                             Link                                                           => _offLink.GetValue();
	public FString                                             Body                                                           => _offBody.GetValue();
	#endregion

	public FSQAnnouncement(FString c_Title, FString c_Link, FString c_Body) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTitle.SetValue(c_Title);
		_offLink.SetValue(c_Link);
		_offBody.SetValue(c_Body);
	}
}
// ScriptStruct Squad.SQCreditsList
// 0x0028
public class FSQCreditsList : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQCreditsLineType>                 _offLineType                                                   = new ExternalOffset<ESQCreditsLineType>(0x0000, false);       // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offColumns                                                    = new ExternalOffset<TArray<FString>>(0x0018, false);          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQCreditsLineType                                  LineType                                                       => _offLineType.GetValue();
	public FString                                             Name                                                           => _offName.GetValue();
	public TArray<FString>                                     Columns                                                        => _offColumns.GetValue();
	#endregion

	public FSQCreditsList(ESQCreditsLineType c_LineType, FString c_Name, TArray<FString> c_Columns) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLineType.SetValue(c_LineType);
		_offName.SetValue(c_Name);
		_offColumns.SetValue(c_Columns);
	}
}
// ScriptStruct Squad.SQPlayerLimiter
// 0x0008
public class FSQPlayerLimiter : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offNumberOfPlayers                                            = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offValue                                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 NumberOfPlayers                                                => _offNumberOfPlayers.GetValue();
	public int                                                 Value                                                          => _offValue.GetValue();
	#endregion

	public FSQPlayerLimiter(int c_NumberOfPlayers, int c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumberOfPlayers.SetValue(c_NumberOfPlayers);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct Squad.SQFontInfo
// 0x0060
public class FSQFontInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UFont>                              _offFont                                                       = new ExternalOffset<UFont>(0x0000, true);                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0008, false);             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offScale                                                      = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offOffset                                                     = new ExternalOffset<FVector2D>(0x001C, false);                // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTextHorizontalAlignment>         _offHorizontalAlignment                                        = new ExternalOffset<ESQTextHorizontalAlignment>(0x0024, false); // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTextVerticalAlignment>           _offVerticalAlignment                                          = new ExternalOffset<ESQTextVerticalAlignment>(0x0025, false); // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDrawShadow                                                = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offShadowDirection                                            = new ExternalOffset<FVector2D>(0x0030, false);                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offShadowColor                                                = new ExternalOffset<FLinearColor>(0x0038, false);             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDrawOutline                                               = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offOutlineColor                                               = new ExternalOffset<FLinearColor>(0x004C, false);             // 0x004C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFont                                               Font                                                           => _offFont.GetValue();
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public float                                               Scale                                                          => _offScale.GetValue();
	public FVector2D                                           Offset                                                         => _offOffset.GetValue();
	public ESQTextHorizontalAlignment                          HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public ESQTextVerticalAlignment                            VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public byte/*(bool)*/                                      bDrawShadow                                                    => _offbDrawShadow.GetValue();
	public FVector2D                                           ShadowDirection                                                => _offShadowDirection.GetValue();
	public FLinearColor                                        ShadowColor                                                    => _offShadowColor.GetValue();
	public byte/*(bool)*/                                      bDrawOutline                                                   => _offbDrawOutline.GetValue();
	public FLinearColor                                        OutlineColor                                                   => _offOutlineColor.GetValue();
	#endregion

	public FSQFontInfo(UFont c_Font, FLinearColor c_Color, float c_Scale, FVector2D c_Offset, ESQTextHorizontalAlignment c_HorizontalAlignment, ESQTextVerticalAlignment c_VerticalAlignment, float c_Alpha, byte/*(bool)*/ c_bDrawShadow, FVector2D c_ShadowDirection, FLinearColor c_ShadowColor, byte/*(bool)*/ c_bDrawOutline, FLinearColor c_OutlineColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFont.SetValue(c_Font);
		_offColor.SetValue(c_Color);
		_offScale.SetValue(c_Scale);
		_offOffset.SetValue(c_Offset);
		_offHorizontalAlignment.SetValue(c_HorizontalAlignment);
		_offVerticalAlignment.SetValue(c_VerticalAlignment);
		_offAlpha.SetValue(c_Alpha);
		_offbDrawShadow.SetValue(c_bDrawShadow);
		_offShadowDirection.SetValue(c_ShadowDirection);
		_offShadowColor.SetValue(c_ShadowColor);
		_offbDrawOutline.SetValue(c_bDrawOutline);
		_offOutlineColor.SetValue(c_OutlineColor);
	}
}
// ScriptStruct Squad.SQPersistedAmmoCount
// 0x0008
public class FSQPersistedAmmoCount : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offAmmoCount                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offItemCount                                                  = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 AmmoCount                                                      => _offAmmoCount.GetValue();
	public int                                                 ItemCount                                                      => _offItemCount.GetValue();
	#endregion

	public FSQPersistedAmmoCount(int c_AmmoCount, int c_ItemCount) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAmmoCount.SetValue(c_AmmoCount);
		_offItemCount.SetValue(c_ItemCount);
	}
}
// ScriptStruct Squad.SQPersistedAmmoGroup
// 0x0010
public class FSQPersistedAmmoGroup : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQPersistedAmmoCount>>      _offAmmoCounts                                                 = new ExternalOffset<TArray<FSQPersistedAmmoCount>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQPersistedAmmoCount>                       AmmoCounts                                                     => _offAmmoCounts.GetValue();
	#endregion

	public FSQPersistedAmmoGroup(TArray<FSQPersistedAmmoCount> c_AmmoCounts) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAmmoCounts.SetValue(c_AmmoCounts);
	}
}
// ScriptStruct Squad.SQPersistedAmmoState
// 0x0018
public class FSQPersistedAmmoState : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQPersistedAmmoGroup>>      _offAmmoGroups                                                 = new ExternalOffset<TArray<FSQPersistedAmmoGroup>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<USQRoleSettings>                    _offPersistedRole                                              = new ExternalOffset<USQRoleSettings>(0x0010, true);           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQPersistedAmmoGroup>                       AmmoGroups                                                     => _offAmmoGroups.GetValue();
	public USQRoleSettings                                     PersistedRole                                                  => _offPersistedRole.GetValue();
	#endregion

	public FSQPersistedAmmoState(TArray<FSQPersistedAmmoGroup> c_AmmoGroups, USQRoleSettings c_PersistedRole) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAmmoGroups.SetValue(c_AmmoGroups);
		_offPersistedRole.SetValue(c_PersistedRole);
	}
}
// ScriptStruct Squad.SQInventoryWeaponGroupData
// 0x0010
public class FSQInventoryWeaponGroupData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQInventoryData>>           _offWeaponItems                                                = new ExternalOffset<TArray<FSQInventoryData>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQInventoryData>                            WeaponItems                                                    => _offWeaponItems.GetValue();
	#endregion

	public FSQInventoryWeaponGroupData(TArray<FSQInventoryData> c_WeaponItems) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeaponItems.SetValue(c_WeaponItems);
	}
}
// ScriptStruct Squad.SQTestInventoryData
// 0x0010
public class FSQTestInventoryData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQInventoryWeaponGroupData>> _offGroupItems                                                 = new ExternalOffset<TArray<FSQInventoryWeaponGroupData>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQInventoryWeaponGroupData>                 GroupItems                                                     => _offGroupItems.GetValue();
	#endregion

	public FSQTestInventoryData(TArray<FSQInventoryWeaponGroupData> c_GroupItems) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupItems.SetValue(c_GroupItems);
	}
}
// ScriptStruct Squad.SQSpringInterpStruct3D
// 0x0030
public class FSQSpringInterpStruct3D : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offPosition                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offDamping                                                    = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offMinLimits                                                  = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offMaxLimits                                                  = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Position                                                       => _offPosition.GetValue();
	public FVector                                             Damping                                                        => _offDamping.GetValue();
	public FVector                                             MinLimits                                                      => _offMinLimits.GetValue();
	public FVector                                             MaxLimits                                                      => _offMaxLimits.GetValue();
	#endregion

	public FSQSpringInterpStruct3D(FVector c_Position, FVector c_Damping, FVector c_MinLimits, FVector c_MaxLimits) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPosition.SetValue(c_Position);
		_offDamping.SetValue(c_Damping);
		_offMinLimits.SetValue(c_MinLimits);
		_offMaxLimits.SetValue(c_MaxLimits);
	}
}
// ScriptStruct Squad.SQDynamicEasingStruct
// 0x0014
public class FSQDynamicEasingStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offTarget                                                     = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPosition                                                   = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offVelocity                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAcceleration                                               = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOppositeAcceleration                                       = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Target                                                         => _offTarget.GetValue();
	public float                                               Position                                                       => _offPosition.GetValue();
	public float                                               Velocity                                                       => _offVelocity.GetValue();
	public float                                               Acceleration                                                   => _offAcceleration.GetValue();
	public float                                               OppositeAcceleration                                           => _offOppositeAcceleration.GetValue();
	#endregion

	public FSQDynamicEasingStruct(float c_Target, float c_Position, float c_Velocity, float c_Acceleration, float c_OppositeAcceleration) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTarget.SetValue(c_Target);
		_offPosition.SetValue(c_Position);
		_offVelocity.SetValue(c_Velocity);
		_offAcceleration.SetValue(c_Acceleration);
		_offOppositeAcceleration.SetValue(c_OppositeAcceleration);
	}
}
// ScriptStruct Squad.SQCameraShake
// 0x0020
public class FSQCameraShake : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offShake                                                      = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInnerRadius                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOuterRadius                                                = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFalloff                                                    = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOrientShakeTowardsEpicenter                               = new ExternalOffset<byte/*(bool)*/>(0x001C);                  // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              Shake                                                          => _offShake.GetValue();
	public float                                               InnerRadius                                                    => _offInnerRadius.GetValue();
	public float                                               OuterRadius                                                    => _offOuterRadius.GetValue();
	public float                                               Falloff                                                        => _offFalloff.GetValue();
	public byte/*(bool)*/                                      bOrientShakeTowardsEpicenter                                   => _offbOrientShakeTowardsEpicenter.GetValue();
	#endregion

	public FSQCameraShake(UClass c_Shake, float c_InnerRadius, float c_OuterRadius, float c_Falloff, byte/*(bool)*/ c_bOrientShakeTowardsEpicenter) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offShake.SetValue(c_Shake);
		_offInnerRadius.SetValue(c_InnerRadius);
		_offOuterRadius.SetValue(c_OuterRadius);
		_offFalloff.SetValue(c_Falloff);
		_offbOrientShakeTowardsEpicenter.SetValue(c_bOrientShakeTowardsEpicenter);
	}
}
// ScriptStruct Squad.SQSoliderNetPriorityObject
// 0x000C
public class FSQSoliderNetPriorityObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offdistance                                                   = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNetPriority                                                = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNetPriorityWhenBehind                                      = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               distance                                                       => _offdistance.GetValue();
	public float                                               NetPriority                                                    => _offNetPriority.GetValue();
	public float                                               NetPriorityWhenBehind                                          => _offNetPriorityWhenBehind.GetValue();
	#endregion

	public FSQSoliderNetPriorityObject(float c_distance, float c_NetPriority, float c_NetPriorityWhenBehind) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offdistance.SetValue(c_distance);
		_offNetPriority.SetValue(c_NetPriority);
		_offNetPriorityWhenBehind.SetValue(c_NetPriorityWhenBehind);
	}
}
// ScriptStruct Squad.SQMapData
// 0x0040
public class FSQMapData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offShortName                                                  = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offLoadingScreenTexturePath                                   = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offMapPaths                                                   = new ExternalOffset<TArray<FString>>(0x0020, false);          // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ShortName                                                      => _offShortName.GetValue();
	public FString                                             LoadingScreenTexturePath                                       => _offLoadingScreenTexturePath.GetValue();
	public TArray<FString>                                     MapPaths                                                       => _offMapPaths.GetValue();
	#endregion

	public FSQMapData(FString c_ShortName, FString c_LoadingScreenTexturePath, TArray<FString> c_MapPaths) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offShortName.SetValue(c_ShortName);
		_offLoadingScreenTexturePath.SetValue(c_LoadingScreenTexturePath);
		_offMapPaths.SetValue(c_MapPaths);
	}
}
// ScriptStruct Squad.SQExplosiveShotInfo
// 0x000C (0x0038 - 0x002C)
public class FSQExplosiveShotInfo : FSQShotInfo
{
	#region Offsets
	private ExternalOffset<UClass>                             _offProjectileClass                                            = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              ProjectileClass                                                => _offProjectileClass.GetValue();
	#endregion

	public FSQExplosiveShotInfo(UClass c_ProjectileClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offProjectileClass.SetValue(c_ProjectileClass);
	}
}
// ScriptStruct Squad.SQSessionFlagStruct
// 0x0008
public class FSQSessionFlagStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offServerHealth                                               = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbIsAnticheatProtected                                      = new ExternalOffset<char>(0x0004, false);                     // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ServerHealth                                                   => _offServerHealth.GetValue();
	#endregion

	public FSQSessionFlagStruct(int c_ServerHealth) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offServerHealth.SetValue(c_ServerHealth);
	}
}
// ScriptStruct Squad.SQFTEText
// 0x0030
public class FSQFTEText : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offFTEText                                                    = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offActionKeys                                                 = new ExternalOffset<TArray<FName>>(0x0018, false);            // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLifetime                                                   = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               FTEText                                                        => _offFTEText.GetValue();
	public TArray<FName>                                       ActionKeys                                                     => _offActionKeys.GetValue();
	public float                                               Lifetime                                                       => _offLifetime.GetValue();
	#endregion

	public FSQFTEText(FText c_FTEText, TArray<FName> c_ActionKeys, float c_Lifetime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFTEText.SetValue(c_FTEText);
		_offActionKeys.SetValue(c_ActionKeys);
		_offLifetime.SetValue(c_Lifetime);
	}
}
// ScriptStruct Squad.SQRadialDamageEvent
// 0x0090 (0x00D0 - 0x0040)
public class FSQRadialDamageEvent : FRadialDamageEvent
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbDirectHit                                                 = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FHitResult>                         _offHitResult                                                  = new ExternalOffset<FHitResult>(0x0044, false);               // 0x0044(0x0088) (Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bDirectHit                                                     => _offbDirectHit.GetValue();
	public FHitResult                                          HitResult                                                      => _offHitResult.GetValue();
	#endregion

	public FSQRadialDamageEvent(byte/*(bool)*/ c_bDirectHit, FHitResult c_HitResult) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbDirectHit.SetValue(c_bDirectHit);
		_offHitResult.SetValue(c_HitResult);
	}
}
// ScriptStruct Squad.SQVehicleQueueEntry
// 0x0020
public class FSQVehicleQueueEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQPlayerController>                _offPlayer                                                     = new ExternalOffset<ASQPlayerController>(0x0008, true);       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQPlayerController                                 Player                                                         => _offPlayer.GetValue();
	#endregion

	public FSQVehicleQueueEntry(ASQPlayerController c_Player) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayer.SetValue(c_Player);
	}
}
// ScriptStruct Squad.SQEngineMovementSoundObject
// 0x0028
public class FSQEngineMovementSoundObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<USoundCue>                          _offEngineSound                                                = new ExternalOffset<USoundCue>(0x0000, true);                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offGear                                                       = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsAcceleratingSound                                       = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAttachBoneName                                             = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeOutTime                                                = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeOutEndVolume                                           = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAudioComponent>                    _offAudioComponent                                             = new ExternalOffset<UAudioComponent>(0x0020, true);           // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USoundCue                                           EngineSound                                                    => _offEngineSound.GetValue();
	public int                                                 Gear                                                           => _offGear.GetValue();
	public byte/*(bool)*/                                      bIsAcceleratingSound                                           => _offbIsAcceleratingSound.GetValue();
	public FName                                               AttachBoneName                                                 => _offAttachBoneName.GetValue();
	public float                                               FadeOutTime                                                    => _offFadeOutTime.GetValue();
	public float                                               FadeOutEndVolume                                               => _offFadeOutEndVolume.GetValue();
	public UAudioComponent                                     AudioComponent                                                 => _offAudioComponent.GetValue();
	#endregion

	public FSQEngineMovementSoundObject(USoundCue c_EngineSound, int c_Gear, byte/*(bool)*/ c_bIsAcceleratingSound, FName c_AttachBoneName, float c_FadeOutTime, float c_FadeOutEndVolume, UAudioComponent c_AudioComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEngineSound.SetValue(c_EngineSound);
		_offGear.SetValue(c_Gear);
		_offbIsAcceleratingSound.SetValue(c_bIsAcceleratingSound);
		_offAttachBoneName.SetValue(c_AttachBoneName);
		_offFadeOutTime.SetValue(c_FadeOutTime);
		_offFadeOutEndVolume.SetValue(c_FadeOutEndVolume);
		_offAudioComponent.SetValue(c_AudioComponent);
	}
}
// ScriptStruct Squad.SQVehicleWeaponConfig
// 0x0008
public class FSQVehicleWeaponConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offWeaponClass                                                = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              WeaponClass                                                    => _offWeaponClass.GetValue();
	#endregion

	public FSQVehicleWeaponConfig(UClass c_WeaponClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeaponClass.SetValue(c_WeaponClass);
	}
}
// ScriptStruct Squad.SQVehicleRecoil
// 0x000C
public class FSQVehicleRecoil : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offRecoilFactor                                               = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offRepeatAmount                                               = new ExternalOffset<char>(0x0008, false);                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           RecoilFactor                                                   => _offRecoilFactor.GetValue();
	#endregion

	public FSQVehicleRecoil(FVector2D c_RecoilFactor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRecoilFactor.SetValue(c_RecoilFactor);
	}
}
// ScriptStruct Squad.SQRotationVelocityRepMovement
// 0x0010 (0x0050 - 0x0040)
public class FSQRotationVelocityRepMovement : FSQRepMovement
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQRotationVelocityRepMovement() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQRangeConstraints
// 0x0038
public class FSQRangeConstraints : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbEnablePitchInterval                                       = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableYawInterval                                         = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableRollInterval                                        = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offPitchInterval                                              = new ExternalOffset<FVector2D>(0x0004, false);                // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offYawInterval                                                = new ExternalOffset<FVector2D>(0x000C, false);                // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offRollInterval                                               = new ExternalOffset<FVector2D>(0x0014, false);                // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQRotationConstraints>             _offConstraints                                                = new ExternalOffset<FSQRotationConstraints>(0x001C, false);   // 0x001C(0x001C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bEnablePitchInterval                                           => _offbEnablePitchInterval.GetValue();
	public byte/*(bool)*/                                      bEnableYawInterval                                             => _offbEnableYawInterval.GetValue();
	public byte/*(bool)*/                                      bEnableRollInterval                                            => _offbEnableRollInterval.GetValue();
	public FVector2D                                           PitchInterval                                                  => _offPitchInterval.GetValue();
	public FVector2D                                           YawInterval                                                    => _offYawInterval.GetValue();
	public FVector2D                                           RollInterval                                                   => _offRollInterval.GetValue();
	public FSQRotationConstraints                              Constraints                                                    => _offConstraints.GetValue();
	#endregion

	public FSQRangeConstraints(byte/*(bool)*/ c_bEnablePitchInterval, byte/*(bool)*/ c_bEnableYawInterval, byte/*(bool)*/ c_bEnableRollInterval, FVector2D c_PitchInterval, FVector2D c_YawInterval, FVector2D c_RollInterval, FSQRotationConstraints c_Constraints) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbEnablePitchInterval.SetValue(c_bEnablePitchInterval);
		_offbEnableYawInterval.SetValue(c_bEnableYawInterval);
		_offbEnableRollInterval.SetValue(c_bEnableRollInterval);
		_offPitchInterval.SetValue(c_PitchInterval);
		_offYawInterval.SetValue(c_YawInterval);
		_offRollInterval.SetValue(c_RollInterval);
		_offConstraints.SetValue(c_Constraints);
	}
}
// ScriptStruct Squad.SQPenetrationProxy
// 0x0000 (0x00AC - 0x00AC)
public class FSQPenetrationProxy : FSQPenetrationTrace
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSQPenetrationProxy() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Squad.SQMagazineData
// 0x0008
public class FSQMagazineData : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offDefaultRoundsPerMag                                        = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRemainingRounds                                            = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 DefaultRoundsPerMag                                            => _offDefaultRoundsPerMag.GetValue();
	public int                                                 RemainingRounds                                                => _offRemainingRounds.GetValue();
	#endregion

	public FSQMagazineData(int c_DefaultRoundsPerMag, int c_RemainingRounds) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultRoundsPerMag.SetValue(c_DefaultRoundsPerMag);
		_offRemainingRounds.SetValue(c_RemainingRounds);
	}
}
// ScriptStruct Squad.SQWeaponSpring
// 0x0024
public class FSQWeaponSpring : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offWeaponSpringFactor                                         = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offWeaponSpringRotationPivot                                  = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offWeaponSpringRotationFactor                                 = new ExternalOffset<FRotator>(0x0018, false);                 // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             WeaponSpringFactor                                             => _offWeaponSpringFactor.GetValue();
	public FVector                                             WeaponSpringRotationPivot                                      => _offWeaponSpringRotationPivot.GetValue();
	public FRotator                                            WeaponSpringRotationFactor                                     => _offWeaponSpringRotationFactor.GetValue();
	#endregion

	public FSQWeaponSpring(FVector c_WeaponSpringFactor, FVector c_WeaponSpringRotationPivot, FRotator c_WeaponSpringRotationFactor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWeaponSpringFactor.SetValue(c_WeaponSpringFactor);
		_offWeaponSpringRotationPivot.SetValue(c_WeaponSpringRotationPivot);
		_offWeaponSpringRotationFactor.SetValue(c_WeaponSpringRotationFactor);
	}
}
// ScriptStruct Squad.SQWeaponEffects
// 0x0038
public class FSQWeaponEffects : ExternalClass
{
	#region Offsets
	private ExternalOffset<UParticleSystem>                    _offMuzzleFlashEffect1P                                        = new ExternalOffset<UParticleSystem>(0x0000, true);           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offMuzzleFlashEffect3P                                        = new ExternalOffset<UParticleSystem>(0x0008, true);           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offShellEjection1P                                            = new ExternalOffset<UParticleSystem>(0x0010, true);           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UParticleSystem>                    _offShellEjection3P                                            = new ExternalOffset<UParticleSystem>(0x0018, true);           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offMuzzleFlashSocket                                          = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offShellEjectionSocket                                        = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMuzzleFlashCullDistanceInMeters                            = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offShellEjectionCullDistanceInMeters                          = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UParticleSystem                                     MuzzleFlashEffect1P                                            => _offMuzzleFlashEffect1P.GetValue();
	public UParticleSystem                                     MuzzleFlashEffect3P                                            => _offMuzzleFlashEffect3P.GetValue();
	public UParticleSystem                                     ShellEjection1P                                                => _offShellEjection1P.GetValue();
	public UParticleSystem                                     ShellEjection3P                                                => _offShellEjection3P.GetValue();
	public FName                                               MuzzleFlashSocket                                              => _offMuzzleFlashSocket.GetValue();
	public FName                                               ShellEjectionSocket                                            => _offShellEjectionSocket.GetValue();
	public float                                               MuzzleFlashCullDistanceInMeters                                => _offMuzzleFlashCullDistanceInMeters.GetValue();
	public float                                               ShellEjectionCullDistanceInMeters                              => _offShellEjectionCullDistanceInMeters.GetValue();
	#endregion

	public FSQWeaponEffects(UParticleSystem c_MuzzleFlashEffect1P, UParticleSystem c_MuzzleFlashEffect3P, UParticleSystem c_ShellEjection1P, UParticleSystem c_ShellEjection3P, FName c_MuzzleFlashSocket, FName c_ShellEjectionSocket, float c_MuzzleFlashCullDistanceInMeters, float c_ShellEjectionCullDistanceInMeters) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMuzzleFlashEffect1P.SetValue(c_MuzzleFlashEffect1P);
		_offMuzzleFlashEffect3P.SetValue(c_MuzzleFlashEffect3P);
		_offShellEjection1P.SetValue(c_ShellEjection1P);
		_offShellEjection3P.SetValue(c_ShellEjection3P);
		_offMuzzleFlashSocket.SetValue(c_MuzzleFlashSocket);
		_offShellEjectionSocket.SetValue(c_ShellEjectionSocket);
		_offMuzzleFlashCullDistanceInMeters.SetValue(c_MuzzleFlashCullDistanceInMeters);
		_offShellEjectionCullDistanceInMeters.SetValue(c_ShellEjectionCullDistanceInMeters);
	}
}
// ScriptStruct Squad.SQRecoilData
// 0x0048
public class FSQRecoilData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offRecoilFactorMin                                            = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offRecoilFactorMax                                            = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRecoilZoomFactor                                           = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRecoilDuration                                             = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNotAimingDownSightsMultiplier                              = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offRecoilCurve                                                = new ExternalOffset<UCurveFloat>(0x0020, true);               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offRecoilCurveCrouch                                          = new ExternalOffset<UCurveFloat>(0x0028, true);               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offRecoilCurveProne                                           = new ExternalOffset<UCurveFloat>(0x0030, true);               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRecoilCurveIndex                                           = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseRecoilMultipliers                                      = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCrouchRecoilMultiplier                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offProneRecoilMultiplier                                      = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           RecoilFactorMin                                                => _offRecoilFactorMin.GetValue();
	public FVector2D                                           RecoilFactorMax                                                => _offRecoilFactorMax.GetValue();
	public float                                               RecoilZoomFactor                                               => _offRecoilZoomFactor.GetValue();
	public float                                               RecoilDuration                                                 => _offRecoilDuration.GetValue();
	public float                                               NotAimingDownSightsMultiplier                                  => _offNotAimingDownSightsMultiplier.GetValue();
	public UCurveFloat                                         RecoilCurve                                                    => _offRecoilCurve.GetValue();
	public UCurveFloat                                         RecoilCurveCrouch                                              => _offRecoilCurveCrouch.GetValue();
	public UCurveFloat                                         RecoilCurveProne                                               => _offRecoilCurveProne.GetValue();
	public int                                                 RecoilCurveIndex                                               => _offRecoilCurveIndex.GetValue();
	public byte/*(bool)*/                                      bUseRecoilMultipliers                                          => _offbUseRecoilMultipliers.GetValue();
	public float                                               CrouchRecoilMultiplier                                         => _offCrouchRecoilMultiplier.GetValue();
	public float                                               ProneRecoilMultiplier                                          => _offProneRecoilMultiplier.GetValue();
	#endregion

	public FSQRecoilData(FVector2D c_RecoilFactorMin, FVector2D c_RecoilFactorMax, float c_RecoilZoomFactor, float c_RecoilDuration, float c_NotAimingDownSightsMultiplier, UCurveFloat c_RecoilCurve, UCurveFloat c_RecoilCurveCrouch, UCurveFloat c_RecoilCurveProne, int c_RecoilCurveIndex, byte/*(bool)*/ c_bUseRecoilMultipliers, float c_CrouchRecoilMultiplier, float c_ProneRecoilMultiplier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRecoilFactorMin.SetValue(c_RecoilFactorMin);
		_offRecoilFactorMax.SetValue(c_RecoilFactorMax);
		_offRecoilZoomFactor.SetValue(c_RecoilZoomFactor);
		_offRecoilDuration.SetValue(c_RecoilDuration);
		_offNotAimingDownSightsMultiplier.SetValue(c_NotAimingDownSightsMultiplier);
		_offRecoilCurve.SetValue(c_RecoilCurve);
		_offRecoilCurveCrouch.SetValue(c_RecoilCurveCrouch);
		_offRecoilCurveProne.SetValue(c_RecoilCurveProne);
		_offRecoilCurveIndex.SetValue(c_RecoilCurveIndex);
		_offbUseRecoilMultipliers.SetValue(c_bUseRecoilMultipliers);
		_offCrouchRecoilMultiplier.SetValue(c_CrouchRecoilMultiplier);
		_offProneRecoilMultiplier.SetValue(c_ProneRecoilMultiplier);
	}
}
// ScriptStruct Squad.SQWeaponAnims
// 0x0048
public class FSQWeaponAnims : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimSequence>                      _offStandAnim                                                  = new ExternalOffset<UAnimSequence>(0x0000, true);             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offEquipAnim                                                  = new ExternalOffset<UAnimSequence>(0x0008, true);             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offFireRecoilAnim                                             = new ExternalOffset<UAnimSequence>(0x0010, true);             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offFireTriggerAnim                                            = new ExternalOffset<UAnimSequence>(0x0018, true);             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offReloadAnim                                                 = new ExternalOffset<UAnimSequence>(0x0020, true);             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offDryAnim                                                    = new ExternalOffset<UAnimSequence>(0x0028, true);             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                      _offToggleFiremodeAnim                                         = new ExternalOffset<UAnimSequence>(0x0030, true);             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldLockBult                                            = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTriggerPullDuration                                        = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveVector>                       _offAimOffsetCurve                                             = new ExternalOffset<UCurveVector>(0x0040, true);              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimSequence                                       StandAnim                                                      => _offStandAnim.GetValue();
	public UAnimSequence                                       EquipAnim                                                      => _offEquipAnim.GetValue();
	public UAnimSequence                                       FireRecoilAnim                                                 => _offFireRecoilAnim.GetValue();
	public UAnimSequence                                       FireTriggerAnim                                                => _offFireTriggerAnim.GetValue();
	public UAnimSequence                                       ReloadAnim                                                     => _offReloadAnim.GetValue();
	public UAnimSequence                                       DryAnim                                                        => _offDryAnim.GetValue();
	public UAnimSequence                                       ToggleFiremodeAnim                                             => _offToggleFiremodeAnim.GetValue();
	public byte/*(bool)*/                                      bShouldLockBult                                                => _offbShouldLockBult.GetValue();
	public float                                               TriggerPullDuration                                            => _offTriggerPullDuration.GetValue();
	public UCurveVector                                        AimOffsetCurve                                                 => _offAimOffsetCurve.GetValue();
	#endregion

	public FSQWeaponAnims(UAnimSequence c_StandAnim, UAnimSequence c_EquipAnim, UAnimSequence c_FireRecoilAnim, UAnimSequence c_FireTriggerAnim, UAnimSequence c_ReloadAnim, UAnimSequence c_DryAnim, UAnimSequence c_ToggleFiremodeAnim, byte/*(bool)*/ c_bShouldLockBult, float c_TriggerPullDuration, UCurveVector c_AimOffsetCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStandAnim.SetValue(c_StandAnim);
		_offEquipAnim.SetValue(c_EquipAnim);
		_offFireRecoilAnim.SetValue(c_FireRecoilAnim);
		_offFireTriggerAnim.SetValue(c_FireTriggerAnim);
		_offReloadAnim.SetValue(c_ReloadAnim);
		_offDryAnim.SetValue(c_DryAnim);
		_offToggleFiremodeAnim.SetValue(c_ToggleFiremodeAnim);
		_offbShouldLockBult.SetValue(c_bShouldLockBult);
		_offTriggerPullDuration.SetValue(c_TriggerPullDuration);
		_offAimOffsetCurve.SetValue(c_AimOffsetCurve);
	}
}
// ScriptStruct Squad.SQWeaponSounds
// 0x0088
public class FSQWeaponSounds : ExternalClass
{
	#region Offsets
	private ExternalOffset<USoundCue>                          _offFireSound1P                                                = new ExternalOffset<USoundCue>(0x0000, true);                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offFireSound3P                                                = new ExternalOffset<USoundCue>(0x0008, true);                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offReloadSound1P                                              = new ExternalOffset<USoundCue>(0x0010, true);                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offReloadSound3P                                              = new ExternalOffset<USoundCue>(0x0018, true);                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offDryReloadSound1P                                           = new ExternalOffset<USoundCue>(0x0020, true);                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offDryReloadSound3P                                           = new ExternalOffset<USoundCue>(0x0028, true);                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offEquipSound1P                                               = new ExternalOffset<USoundCue>(0x0030, true);                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offEquipSound3P                                               = new ExternalOffset<USoundCue>(0x0038, true);                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offUnequipSound1P                                             = new ExternalOffset<USoundCue>(0x0040, true);                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offUnequipSound3P                                             = new ExternalOffset<USoundCue>(0x0048, true);                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offTriggerSound1P                                             = new ExternalOffset<USoundCue>(0x0050, true);                 // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offTriggerSound3P                                             = new ExternalOffset<USoundCue>(0x0058, true);                 // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offBoltSound1P                                                = new ExternalOffset<USoundCue>(0x0060, true);                 // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offBoltSound3P                                                = new ExternalOffset<USoundCue>(0x0068, true);                 // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offToggleFiremodeSound1P                                      = new ExternalOffset<USoundCue>(0x0070, true);                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offToggleFiremodeSound3P                                      = new ExternalOffset<USoundCue>(0x0078, true);                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSoundSocket                                                = new ExternalOffset<FName>(0x0080, false);                    // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USoundCue                                           FireSound1P                                                    => _offFireSound1P.GetValue();
	public USoundCue                                           FireSound3P                                                    => _offFireSound3P.GetValue();
	public USoundCue                                           ReloadSound1P                                                  => _offReloadSound1P.GetValue();
	public USoundCue                                           ReloadSound3P                                                  => _offReloadSound3P.GetValue();
	public USoundCue                                           DryReloadSound1P                                               => _offDryReloadSound1P.GetValue();
	public USoundCue                                           DryReloadSound3P                                               => _offDryReloadSound3P.GetValue();
	public USoundCue                                           EquipSound1P                                                   => _offEquipSound1P.GetValue();
	public USoundCue                                           EquipSound3P                                                   => _offEquipSound3P.GetValue();
	public USoundCue                                           UnequipSound1P                                                 => _offUnequipSound1P.GetValue();
	public USoundCue                                           UnequipSound3P                                                 => _offUnequipSound3P.GetValue();
	public USoundCue                                           TriggerSound1P                                                 => _offTriggerSound1P.GetValue();
	public USoundCue                                           TriggerSound3P                                                 => _offTriggerSound3P.GetValue();
	public USoundCue                                           BoltSound1P                                                    => _offBoltSound1P.GetValue();
	public USoundCue                                           BoltSound3P                                                    => _offBoltSound3P.GetValue();
	public USoundCue                                           ToggleFiremodeSound1P                                          => _offToggleFiremodeSound1P.GetValue();
	public USoundCue                                           ToggleFiremodeSound3P                                          => _offToggleFiremodeSound3P.GetValue();
	public FName                                               SoundSocket                                                    => _offSoundSocket.GetValue();
	#endregion

	public FSQWeaponSounds(USoundCue c_FireSound1P, USoundCue c_FireSound3P, USoundCue c_ReloadSound1P, USoundCue c_ReloadSound3P, USoundCue c_DryReloadSound1P, USoundCue c_DryReloadSound3P, USoundCue c_EquipSound1P, USoundCue c_EquipSound3P, USoundCue c_UnequipSound1P, USoundCue c_UnequipSound3P, USoundCue c_TriggerSound1P, USoundCue c_TriggerSound3P, USoundCue c_BoltSound1P, USoundCue c_BoltSound3P, USoundCue c_ToggleFiremodeSound1P, USoundCue c_ToggleFiremodeSound3P, FName c_SoundSocket) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFireSound1P.SetValue(c_FireSound1P);
		_offFireSound3P.SetValue(c_FireSound3P);
		_offReloadSound1P.SetValue(c_ReloadSound1P);
		_offReloadSound3P.SetValue(c_ReloadSound3P);
		_offDryReloadSound1P.SetValue(c_DryReloadSound1P);
		_offDryReloadSound3P.SetValue(c_DryReloadSound3P);
		_offEquipSound1P.SetValue(c_EquipSound1P);
		_offEquipSound3P.SetValue(c_EquipSound3P);
		_offUnequipSound1P.SetValue(c_UnequipSound1P);
		_offUnequipSound3P.SetValue(c_UnequipSound3P);
		_offTriggerSound1P.SetValue(c_TriggerSound1P);
		_offTriggerSound3P.SetValue(c_TriggerSound3P);
		_offBoltSound1P.SetValue(c_BoltSound1P);
		_offBoltSound3P.SetValue(c_BoltSound3P);
		_offToggleFiremodeSound1P.SetValue(c_ToggleFiremodeSound1P);
		_offToggleFiremodeSound3P.SetValue(c_ToggleFiremodeSound3P);
		_offSoundSocket.SetValue(c_SoundSocket);
	}
}
// ScriptStruct Squad.SQMeshTransitionSettings
// 0x0040
public class FSQMeshTransitionSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offTransitionValue                                            = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UStaticMesh>                        _offMesh                                                       = new ExternalOffset<UStaticMesh>(0x0008, true);               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offMeshTransform                                              = new ExternalOffset<FTransform>(0x0010, false);               // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               TransitionValue                                                => _offTransitionValue.GetValue();
	public UStaticMesh                                         Mesh                                                           => _offMesh.GetValue();
	public FTransform                                          MeshTransform                                                  => _offMeshTransform.GetValue();
	#endregion

	public FSQMeshTransitionSettings(float c_TransitionValue, UStaticMesh c_Mesh, FTransform c_MeshTransform) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTransitionValue.SetValue(c_TransitionValue);
		_offMesh.SetValue(c_Mesh);
		_offMeshTransform.SetValue(c_MeshTransform);
	}
}
// ScriptStruct Squad.SQFireTriggerMontage
// 0x0010
public class FSQFireTriggerMontage : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offFireWeaponMontage                                          = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offFireTriggerMontage                                         = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        FireWeaponMontage                                              => _offFireWeaponMontage.GetValue();
	public UAnimMontage                                        FireTriggerMontage                                             => _offFireTriggerMontage.GetValue();
	#endregion

	public FSQFireTriggerMontage(UAnimMontage c_FireWeaponMontage, UAnimMontage c_FireTriggerMontage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFireWeaponMontage.SetValue(c_FireWeaponMontage);
		_offFireTriggerMontage.SetValue(c_FireTriggerMontage);
	}
}
// ScriptStruct Squad.SQAdjustableSightMontageSet
// 0x0040
public class FSQAdjustableSightMontageSet : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offBaseAdjustAds3pMontage                                     = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offAdjustAdsTransition3pMontage                               = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offAdjustFromAdsTransition3pMontage                           = new ExternalOffset<UAnimMontage>(0x0010, true);              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offLineOfFireAngle                                            = new ExternalOffset<FRotator>(0x0018, false);                 // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                              _offDistanceText                                               = new ExternalOffset<FText>(0x0028, false);                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        BaseAdjustAds3pMontage                                         => _offBaseAdjustAds3pMontage.GetValue();
	public UAnimMontage                                        AdjustAdsTransition3pMontage                                   => _offAdjustAdsTransition3pMontage.GetValue();
	public UAnimMontage                                        AdjustFromAdsTransition3pMontage                               => _offAdjustFromAdsTransition3pMontage.GetValue();
	public FRotator                                            LineOfFireAngle                                                => _offLineOfFireAngle.GetValue();
	public FText                                               DistanceText                                                   => _offDistanceText.GetValue();
	#endregion

	public FSQAdjustableSightMontageSet(UAnimMontage c_BaseAdjustAds3pMontage, UAnimMontage c_AdjustAdsTransition3pMontage, UAnimMontage c_AdjustFromAdsTransition3pMontage, FRotator c_LineOfFireAngle, FText c_DistanceText) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBaseAdjustAds3pMontage.SetValue(c_BaseAdjustAds3pMontage);
		_offAdjustAdsTransition3pMontage.SetValue(c_AdjustAdsTransition3pMontage);
		_offAdjustFromAdsTransition3pMontage.SetValue(c_AdjustFromAdsTransition3pMontage);
		_offLineOfFireAngle.SetValue(c_LineOfFireAngle);
		_offDistanceText.SetValue(c_DistanceText);
	}
}
// ScriptStruct Squad.SQMinimapMakerSettings
// 0x0550
public class FSQMinimapMakerSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESQTileResolution>                  _offTileResolution                                             = new ExternalOffset<ESQTileResolution>(0x0000, false);        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQTileCount>                       _offTileCount                                                  = new ExternalOffset<ESQTileCount>(0x0001, false);             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPostProcessSettings>               _offMinimapPostProcessor                                       = new ExternalOffset<FPostProcessSettings>(0x0010, false);     // 0x0010(0x0530) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinimapFOV                                                 = new ExternalOffset<int>(0x0540);                             // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESQTileResolution                                   TileResolution                                                 => _offTileResolution.GetValue();
	public ESQTileCount                                        TileCount                                                      => _offTileCount.GetValue();
	public FPostProcessSettings                                MinimapPostProcessor                                           => _offMinimapPostProcessor.GetValue();
	public int                                                 MinimapFOV                                                     => _offMinimapFOV.GetValue();
	#endregion

	public FSQMinimapMakerSettings(ESQTileResolution c_TileResolution, ESQTileCount c_TileCount, FPostProcessSettings c_MinimapPostProcessor, int c_MinimapFOV) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTileResolution.SetValue(c_TileResolution);
		_offTileCount.SetValue(c_TileCount);
		_offMinimapPostProcessor.SetValue(c_MinimapPostProcessor);
		_offMinimapFOV.SetValue(c_MinimapFOV);
	}
}
// ScriptStruct Squad.SQRoleLimitOverride
// 0x0030
public class FSQRoleLimitOverride : ExternalClass
{
	#region Offsets
	private ExternalOffset<USQRoleSettings>                    _offRole                                                       = new ExternalOffset<USQRoleSettings>(0x0000, true);           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQRoleLimit>                       _offLimit                                                      = new ExternalOffset<FSQRoleLimit>(0x0008, false);             // 0x0008(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USQRoleSettings                                     Role                                                           => _offRole.GetValue();
	public FSQRoleLimit                                        Limit                                                          => _offLimit.GetValue();
	#endregion

	public FSQRoleLimitOverride(USQRoleSettings c_Role, FSQRoleLimit c_Limit) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRole.SetValue(c_Role);
		_offLimit.SetValue(c_Limit);
	}
}
// ScriptStruct Squad.SQUsableWidgetData
// 0x0038
public class FSQUsableWidgetData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offUsableText                                                 = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offCustomTexture                                              = new ExternalOffset<UTexture2D>(0x0018, true);                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offCustomColor                                                = new ExternalOffset<FLinearColor>(0x0020, false);             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offInteractWidgetItemClass                                    = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               UsableText                                                     => _offUsableText.GetValue();
	public UTexture2D                                          CustomTexture                                                  => _offCustomTexture.GetValue();
	public FLinearColor                                        CustomColor                                                    => _offCustomColor.GetValue();
	public UClass                                              InteractWidgetItemClass                                        => _offInteractWidgetItemClass.GetValue();
	#endregion

	public FSQUsableWidgetData(FText c_UsableText, UTexture2D c_CustomTexture, FLinearColor c_CustomColor, UClass c_InteractWidgetItemClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUsableText.SetValue(c_UsableText);
		_offCustomTexture.SetValue(c_CustomTexture);
		_offCustomColor.SetValue(c_CustomColor);
		_offInteractWidgetItemClass.SetValue(c_InteractWidgetItemClass);
	}
}
// ScriptStruct Squad.SQUsableData
// 0x0040
public class FSQUsableData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offDisplayName                                                = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSQUsableWidgetData>>        _offInteractionData                                            = new ExternalOffset<TArray<FSQUsableWidgetData>>(0x0018, false); // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offInteractWidgetClass                                        = new ExternalOffset<UClass>(0x0028, true);                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offDrawLocationOffset                                         = new ExternalOffset<FVector>(0x0030, false);                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQInteractVisibility>              _offInteractVisiblity                                          = new ExternalOffset<ESQInteractVisibility>(0x003C, false);    // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               DisplayName                                                    => _offDisplayName.GetValue();
	public TArray<FSQUsableWidgetData>                         InteractionData                                                => _offInteractionData.GetValue();
	public UClass                                              InteractWidgetClass                                            => _offInteractWidgetClass.GetValue();
	public FVector                                             DrawLocationOffset                                             => _offDrawLocationOffset.GetValue();
	public ESQInteractVisibility                               InteractVisiblity                                              => _offInteractVisiblity.GetValue();
	#endregion

	public FSQUsableData(FText c_DisplayName, TArray<FSQUsableWidgetData> c_InteractionData, UClass c_InteractWidgetClass, FVector c_DrawLocationOffset, ESQInteractVisibility c_InteractVisiblity) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDisplayName.SetValue(c_DisplayName);
		_offInteractionData.SetValue(c_InteractionData);
		_offInteractWidgetClass.SetValue(c_InteractWidgetClass);
		_offDrawLocationOffset.SetValue(c_DrawLocationOffset);
		_offInteractVisiblity.SetValue(c_InteractVisiblity);
	}
}
// ScriptStruct Squad.SQBoneDamageMod
// 0x000C
public class FSQBoneDamageMod : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offBoneName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDamageMod                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               BoneName                                                       => _offBoneName.GetValue();
	public float                                               DamageMod                                                      => _offDamageMod.GetValue();
	#endregion

	public FSQBoneDamageMod(FName c_BoneName, float c_DamageMod) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneName.SetValue(c_BoneName);
		_offDamageMod.SetValue(c_DamageMod);
	}
}
// ScriptStruct Squad.SQTakeHitInfo
// 0x0138
public class FSQTakeHitInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offActualDamage                                               = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offServerTimestamp                                            = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offDamageTypeClass                                            = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<ASQSoldier>>         _offPawnInstigator                                             = new ExternalOffset<TWeakObjectPtr<ASQSoldier>>(0x0010, false); // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offDamageCauser                                               = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0018, false);   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDamageEventClassID                                         = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbKilled                                                    = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbWounded                                                   = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEjectedFromVehicle                                        = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDamageEvent>                       _offGeneralDamageEvent                                         = new ExternalOffset<FDamageEvent>(0x0028, false);             // 0x0028(0x0010) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FPointDamageEvent>                  _offPointDamageEvent                                           = new ExternalOffset<FPointDamageEvent>(0x0038, false);        // 0x0038(0x00A8) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FRadialDamageEvent>                 _offRadialDamageEvent                                          = new ExternalOffset<FRadialDamageEvent>(0x00E0, false);       // 0x00E0(0x0040) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UPhysicalMaterial>>  _offPackagedHitResultPhysMaterial                              = new ExternalOffset<TWeakObjectPtr<UPhysicalMaterial>>(0x0120, false); // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offPackagedHitResultActor                                     = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0128, false);   // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UPrimitiveComponent>> _offPackagedHitResultComponent                                 = new ExternalOffset<TWeakObjectPtr<UPrimitiveComponent>>(0x0130, false); // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                               ActualDamage                                                   => _offActualDamage.GetValue();
	public float                                               ServerTimestamp                                                => _offServerTimestamp.GetValue();
	public UClass                                              DamageTypeClass                                                => _offDamageTypeClass.GetValue();
	public TWeakObjectPtr<ASQSoldier>                          PawnInstigator                                                 => _offPawnInstigator.GetValue();
	public TWeakObjectPtr<AActor>                              DamageCauser                                                   => _offDamageCauser.GetValue();
	public int                                                 DamageEventClassID                                             => _offDamageEventClassID.GetValue();
	public FDamageEvent                                        GeneralDamageEvent                                             => _offGeneralDamageEvent.GetValue();
	public FPointDamageEvent                                   PointDamageEvent                                               => _offPointDamageEvent.GetValue();
	public FRadialDamageEvent                                  RadialDamageEvent                                              => _offRadialDamageEvent.GetValue();
	public TWeakObjectPtr<UPhysicalMaterial>                   PackagedHitResultPhysMaterial                                  => _offPackagedHitResultPhysMaterial.GetValue();
	public TWeakObjectPtr<AActor>                              PackagedHitResultActor                                         => _offPackagedHitResultActor.GetValue();
	public TWeakObjectPtr<UPrimitiveComponent>                 PackagedHitResultComponent                                     => _offPackagedHitResultComponent.GetValue();
	#endregion

	public FSQTakeHitInfo(float c_ActualDamage, float c_ServerTimestamp, UClass c_DamageTypeClass, TWeakObjectPtr<ASQSoldier> c_PawnInstigator, TWeakObjectPtr<AActor> c_DamageCauser, int c_DamageEventClassID, FDamageEvent c_GeneralDamageEvent, FPointDamageEvent c_PointDamageEvent, FRadialDamageEvent c_RadialDamageEvent, TWeakObjectPtr<UPhysicalMaterial> c_PackagedHitResultPhysMaterial, TWeakObjectPtr<AActor> c_PackagedHitResultActor, TWeakObjectPtr<UPrimitiveComponent> c_PackagedHitResultComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActualDamage.SetValue(c_ActualDamage);
		_offServerTimestamp.SetValue(c_ServerTimestamp);
		_offDamageTypeClass.SetValue(c_DamageTypeClass);
		_offPawnInstigator.SetValue(c_PawnInstigator);
		_offDamageCauser.SetValue(c_DamageCauser);
		_offDamageEventClassID.SetValue(c_DamageEventClassID);
		_offGeneralDamageEvent.SetValue(c_GeneralDamageEvent);
		_offPointDamageEvent.SetValue(c_PointDamageEvent);
		_offRadialDamageEvent.SetValue(c_RadialDamageEvent);
		_offPackagedHitResultPhysMaterial.SetValue(c_PackagedHitResultPhysMaterial);
		_offPackagedHitResultActor.SetValue(c_PackagedHitResultActor);
		_offPackagedHitResultComponent.SetValue(c_PackagedHitResultComponent);
	}
}
// ScriptStruct Squad.SQBoneHitSound
// 0x0010
public class FSQBoneHitSound : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offBoneName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundCue>                          _offHitSound                                                   = new ExternalOffset<USoundCue>(0x0008, true);                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               BoneName                                                       => _offBoneName.GetValue();
	public USoundCue                                           HitSound                                                       => _offHitSound.GetValue();
	#endregion

	public FSQBoneHitSound(FName c_BoneName, USoundCue c_HitSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneName.SetValue(c_BoneName);
		_offHitSound.SetValue(c_HitSound);
	}
}
// ScriptStruct Squad.SQDraggingData
// 0x0018
public class FSQDraggingData : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQSoldier>                         _offDragee                                                     = new ExternalOffset<ASQSoldier>(0x0000, true);                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ASQSoldier>                         _offDragger                                                    = new ExternalOffset<ASQSoldier>(0x0008, true);                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDraggedBoneIndex                                           = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQSoldier                                          Dragee                                                         => _offDragee.GetValue();
	public ASQSoldier                                          Dragger                                                        => _offDragger.GetValue();
	public int                                                 DraggedBoneIndex                                               => _offDraggedBoneIndex.GetValue();
	#endregion

	public FSQDraggingData(ASQSoldier c_Dragee, ASQSoldier c_Dragger, int c_DraggedBoneIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDragee.SetValue(c_Dragee);
		_offDragger.SetValue(c_Dragger);
		_offDraggedBoneIndex.SetValue(c_DraggedBoneIndex);
	}
}
// ScriptStruct Squad.CommanderCategory
// 0x0020
public class FCommanderCategory : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offName                                                       = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCooldownDuration                                           = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               Name                                                           => _offName.GetValue();
	public float                                               CooldownDuration                                               => _offCooldownDuration.GetValue();
	#endregion

	public FCommanderCategory(FText c_Name, float c_CooldownDuration) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offCooldownDuration.SetValue(c_CooldownDuration);
	}
}
// ScriptStruct Squad.SQMapMarkerVisualData
// 0x00C8
public class FSQMapMarkerVisualData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UTexture2D>                         _offTexture                                                    = new ExternalOffset<UTexture2D>(0x0000, true);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapIconSelectionGroup>           _offSelectionGroup                                             = new ExternalOffset<ESQMapIconSelectionGroup>(0x0008, false); // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offSelectedTexture                                            = new ExternalOffset<UTexture2D>(0x0010, true);                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offSelectedTint                                               = new ExternalOffset<FLinearColor>(0x0018, false);             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapMarkerType>                   _offMapMarkerType                                              = new ExternalOffset<ESQMapMarkerType>(0x0028, false);         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESQMapWidgetTint>>      _offMapMarkerTintType                                          = new ExternalOffset<TEnumAsByte<ESQMapWidgetTint>>(0x0029, false); // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapMarkerVisibleTo>              _offMapMarkerVisibleTo                                         = new ExternalOffset<ESQMapMarkerVisibleTo>(0x002A, false);    // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapItemType>                     _offType                                                       = new ExternalOffset<ESQMapItemType>(0x002B, false);           // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbVisibleWhenNeutral                                        = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQEmotes>                          _offPlacementEmote                                             = new ExternalOffset<ESQEmotes>(0x002D, false);                // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLifetime                                                   = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFadeOutTime                                                = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldOverrideTint                                        = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offOverrideTint                                               = new ExternalOffset<FLinearColor>(0x003C, false);             // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offTint                                                       = new ExternalOffset<FLinearColor>(0x004C, false);             // 0x004C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRotation                                                   = new ExternalOffset<float>(0x005C);                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offRotPivot                                                   = new ExternalOffset<FVector2D>(0x0060, false);                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offSize                                                       = new ExternalOffset<FVector2D>(0x0068, false);                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offOffset                                                     = new ExternalOffset<FVector2D>(0x0070, false);                // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offZOrder                                                     = new ExternalOffset<int>(0x0078);                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapItemDrawMode>                 _offDrawModeX                                                  = new ExternalOffset<ESQMapItemDrawMode>(0x007C, false);       // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQMapItemDrawMode>                 _offDrawModeY                                                  = new ExternalOffset<ESQMapItemDrawMode>(0x007D, false);       // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQMapMarkerGameplayData>           _offMarkerGameplayData                                         = new ExternalOffset<FSQMapMarkerGameplayData>(0x0088, false); // 0x0088(0x0038) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offWidgetClass                                                = new ExternalOffset<UClass>(0x00C0, true);                    // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture2D                                          Texture                                                        => _offTexture.GetValue();
	public ESQMapIconSelectionGroup                            SelectionGroup                                                 => _offSelectionGroup.GetValue();
	public UTexture2D                                          SelectedTexture                                                => _offSelectedTexture.GetValue();
	public FLinearColor                                        SelectedTint                                                   => _offSelectedTint.GetValue();
	public ESQMapMarkerType                                    MapMarkerType                                                  => _offMapMarkerType.GetValue();
	public TEnumAsByte<ESQMapWidgetTint>                       MapMarkerTintType                                              => _offMapMarkerTintType.GetValue();
	public ESQMapMarkerVisibleTo                               MapMarkerVisibleTo                                             => _offMapMarkerVisibleTo.GetValue();
	public ESQMapItemType                                      Type                                                           => _offType.GetValue();
	public byte/*(bool)*/                                      bVisibleWhenNeutral                                            => _offbVisibleWhenNeutral.GetValue();
	public ESQEmotes                                           PlacementEmote                                                 => _offPlacementEmote.GetValue();
	public float                                               Lifetime                                                       => _offLifetime.GetValue();
	public float                                               FadeOutTime                                                    => _offFadeOutTime.GetValue();
	public byte/*(bool)*/                                      bShouldOverrideTint                                            => _offbShouldOverrideTint.GetValue();
	public FLinearColor                                        OverrideTint                                                   => _offOverrideTint.GetValue();
	public FLinearColor                                        Tint                                                           => _offTint.GetValue();
	public float                                               Rotation                                                       => _offRotation.GetValue();
	public FVector2D                                           RotPivot                                                       => _offRotPivot.GetValue();
	public FVector2D                                           Size                                                           => _offSize.GetValue();
	public FVector2D                                           Offset                                                         => _offOffset.GetValue();
	public int                                                 ZOrder                                                         => _offZOrder.GetValue();
	public ESQMapItemDrawMode                                  DrawModeX                                                      => _offDrawModeX.GetValue();
	public ESQMapItemDrawMode                                  DrawModeY                                                      => _offDrawModeY.GetValue();
	public FSQMapMarkerGameplayData                            MarkerGameplayData                                             => _offMarkerGameplayData.GetValue();
	public UClass                                              WidgetClass                                                    => _offWidgetClass.GetValue();
	#endregion

	public FSQMapMarkerVisualData(UTexture2D c_Texture, ESQMapIconSelectionGroup c_SelectionGroup, UTexture2D c_SelectedTexture, FLinearColor c_SelectedTint, ESQMapMarkerType c_MapMarkerType, TEnumAsByte<ESQMapWidgetTint> c_MapMarkerTintType, ESQMapMarkerVisibleTo c_MapMarkerVisibleTo, ESQMapItemType c_Type, byte/*(bool)*/ c_bVisibleWhenNeutral, ESQEmotes c_PlacementEmote, float c_Lifetime, float c_FadeOutTime, byte/*(bool)*/ c_bShouldOverrideTint, FLinearColor c_OverrideTint, FLinearColor c_Tint, float c_Rotation, FVector2D c_RotPivot, FVector2D c_Size, FVector2D c_Offset, int c_ZOrder, ESQMapItemDrawMode c_DrawModeX, ESQMapItemDrawMode c_DrawModeY, FSQMapMarkerGameplayData c_MarkerGameplayData, UClass c_WidgetClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTexture.SetValue(c_Texture);
		_offSelectionGroup.SetValue(c_SelectionGroup);
		_offSelectedTexture.SetValue(c_SelectedTexture);
		_offSelectedTint.SetValue(c_SelectedTint);
		_offMapMarkerType.SetValue(c_MapMarkerType);
		_offMapMarkerTintType.SetValue(c_MapMarkerTintType);
		_offMapMarkerVisibleTo.SetValue(c_MapMarkerVisibleTo);
		_offType.SetValue(c_Type);
		_offbVisibleWhenNeutral.SetValue(c_bVisibleWhenNeutral);
		_offPlacementEmote.SetValue(c_PlacementEmote);
		_offLifetime.SetValue(c_Lifetime);
		_offFadeOutTime.SetValue(c_FadeOutTime);
		_offbShouldOverrideTint.SetValue(c_bShouldOverrideTint);
		_offOverrideTint.SetValue(c_OverrideTint);
		_offTint.SetValue(c_Tint);
		_offRotation.SetValue(c_Rotation);
		_offRotPivot.SetValue(c_RotPivot);
		_offSize.SetValue(c_Size);
		_offOffset.SetValue(c_Offset);
		_offZOrder.SetValue(c_ZOrder);
		_offDrawModeX.SetValue(c_DrawModeX);
		_offDrawModeY.SetValue(c_DrawModeY);
		_offMarkerGameplayData.SetValue(c_MarkerGameplayData);
		_offWidgetClass.SetValue(c_WidgetClass);
	}
}
// ScriptStruct Squad.SQBasedMovementInfo
// 0x0030
public class FSQBasedMovementInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPrimitiveComponent>                _offMovementBase                                               = new ExternalOffset<UPrimitiveComponent>(0x0000, true);       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offBoneName                                                   = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantize100>             _offLocation                                                   = new ExternalOffset<FVector_NetQuantize100>(0x0010, false);   // 0x0010(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x001C, false);                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbServerHasBaseComponent                                    = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRelativeRotation                                          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbServerHasVelocity                                         = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPrimitiveComponent                                 MovementBase                                                   => _offMovementBase.GetValue();
	public FName                                               BoneName                                                       => _offBoneName.GetValue();
	public FVector_NetQuantize100                              Location                                                       => _offLocation.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public byte/*(bool)*/                                      bServerHasBaseComponent                                        => _offbServerHasBaseComponent.GetValue();
	public byte/*(bool)*/                                      bRelativeRotation                                              => _offbRelativeRotation.GetValue();
	public byte/*(bool)*/                                      bServerHasVelocity                                             => _offbServerHasVelocity.GetValue();
	#endregion

	public FSQBasedMovementInfo(UPrimitiveComponent c_MovementBase, FName c_BoneName, FVector_NetQuantize100 c_Location, FRotator c_Rotation, byte/*(bool)*/ c_bServerHasBaseComponent, byte/*(bool)*/ c_bRelativeRotation, byte/*(bool)*/ c_bServerHasVelocity) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMovementBase.SetValue(c_MovementBase);
		_offBoneName.SetValue(c_BoneName);
		_offLocation.SetValue(c_Location);
		_offRotation.SetValue(c_Rotation);
		_offbServerHasBaseComponent.SetValue(c_bServerHasBaseComponent);
		_offbRelativeRotation.SetValue(c_bRelativeRotation);
		_offbServerHasVelocity.SetValue(c_bServerHasVelocity);
	}
}
// ScriptStruct Squad.SQInputState
// 0x0020
public class FSQInputState : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offRequestReason                                              = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UUserWidget>                        _offFocus                                                      = new ExternalOffset<UUserWidget>(0x0010, true);               // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbGameInput                                                 = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDisplayMouse                                              = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUIInput                                                   = new ExternalOffset<byte/*(bool)*/>(0x001A);                  // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             RequestReason                                                  => _offRequestReason.GetValue();
	public UUserWidget                                         Focus                                                          => _offFocus.GetValue();
	public byte/*(bool)*/                                      bGameInput                                                     => _offbGameInput.GetValue();
	public byte/*(bool)*/                                      bDisplayMouse                                                  => _offbDisplayMouse.GetValue();
	public byte/*(bool)*/                                      bUIInput                                                       => _offbUIInput.GetValue();
	#endregion

	public FSQInputState(FString c_RequestReason, UUserWidget c_Focus, byte/*(bool)*/ c_bGameInput, byte/*(bool)*/ c_bDisplayMouse, byte/*(bool)*/ c_bUIInput) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequestReason.SetValue(c_RequestReason);
		_offFocus.SetValue(c_Focus);
		_offbGameInput.SetValue(c_bGameInput);
		_offbDisplayMouse.SetValue(c_bDisplayMouse);
		_offbUIInput.SetValue(c_bUIInput);
	}
}
// ScriptStruct Squad.SQRemoteTalkerDisplayInfo
// 0x0010
public class FSQRemoteTalkerDisplayInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQPlayerState>                     _offPlayerState                                                = new ExternalOffset<ASQPlayerState>(0x0000, true);            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESQVoiceChannel>                    _offChannel                                                    = new ExternalOffset<ESQVoiceChannel>(0x0008, false);          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ASQPlayerState                                      PlayerState                                                    => _offPlayerState.GetValue();
	public ESQVoiceChannel                                     Channel                                                        => _offChannel.GetValue();
	#endregion

	public FSQRemoteTalkerDisplayInfo(ASQPlayerState c_PlayerState, ESQVoiceChannel c_Channel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayerState.SetValue(c_PlayerState);
		_offChannel.SetValue(c_Channel);
	}
}
// ScriptStruct Squad.SQClimbTypeData
// 0x0030
public class FSQClimbTypeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offEndSpace                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxHeight                                                  = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRequiredAnimationTime                                      = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbFiringDisabled                                            = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStaminaCost                                                = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offMontage1P                                                  = new ExternalOffset<UAnimMontage>(0x0020, true);              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offMontage3P                                                  = new ExternalOffset<UAnimMontage>(0x0028, true);              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               EndSpace                                                       => _offEndSpace.GetValue();
	public float                                               MaxHeight                                                      => _offMaxHeight.GetValue();
	public float                                               RequiredAnimationTime                                          => _offRequiredAnimationTime.GetValue();
	public byte/*(bool)*/                                      bFiringDisabled                                                => _offbFiringDisabled.GetValue();
	public float                                               StaminaCost                                                    => _offStaminaCost.GetValue();
	public UAnimMontage                                        Montage1P                                                      => _offMontage1P.GetValue();
	public UAnimMontage                                        Montage3P                                                      => _offMontage3P.GetValue();
	#endregion

	public FSQClimbTypeData(float c_EndSpace, float c_MaxHeight, float c_RequiredAnimationTime, byte/*(bool)*/ c_bFiringDisabled, float c_StaminaCost, UAnimMontage c_Montage1P, UAnimMontage c_Montage3P) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEndSpace.SetValue(c_EndSpace);
		_offMaxHeight.SetValue(c_MaxHeight);
		_offRequiredAnimationTime.SetValue(c_RequiredAnimationTime);
		_offbFiringDisabled.SetValue(c_bFiringDisabled);
		_offStaminaCost.SetValue(c_StaminaCost);
		_offMontage1P.SetValue(c_Montage1P);
		_offMontage3P.SetValue(c_Montage3P);
	}
}
// ScriptStruct Squad.SQClimbOverTypeData
// 0x0018 (0x0048 - 0x0030)
public class FSQClimbOverTypeData : FSQClimbTypeData
{
	#region Offsets
	private ExternalOffset<float>                              _offMinVerticalSpace                                           = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInterpolateTimeToMidStart                                  = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInterpolateTimeToMidEnd                                    = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInterpolateTimeToEnd                                       = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMidHorizonalSpace                                          = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MinVerticalSpace                                               => _offMinVerticalSpace.GetValue();
	public float                                               InterpolateTimeToMidStart                                      => _offInterpolateTimeToMidStart.GetValue();
	public float                                               InterpolateTimeToMidEnd                                        => _offInterpolateTimeToMidEnd.GetValue();
	public float                                               InterpolateTimeToEnd                                           => _offInterpolateTimeToEnd.GetValue();
	public float                                               MidHorizonalSpace                                              => _offMidHorizonalSpace.GetValue();
	#endregion

	public FSQClimbOverTypeData(float c_MinVerticalSpace, float c_InterpolateTimeToMidStart, float c_InterpolateTimeToMidEnd, float c_InterpolateTimeToEnd, float c_MidHorizonalSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinVerticalSpace.SetValue(c_MinVerticalSpace);
		_offInterpolateTimeToMidStart.SetValue(c_InterpolateTimeToMidStart);
		_offInterpolateTimeToMidEnd.SetValue(c_InterpolateTimeToMidEnd);
		_offInterpolateTimeToEnd.SetValue(c_InterpolateTimeToEnd);
		_offMidHorizonalSpace.SetValue(c_MidHorizonalSpace);
	}
}
// ScriptStruct Squad.SQClimbOverData
// 0x00A0
public class FSQClimbOverData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMaxMoveDistance                                            = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMiddleMoveDistance                                      = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMidCollisionShapeScale                                     = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOverTypeData>               _offLow                                                        = new ExternalOffset<FSQClimbOverTypeData>(0x0010, false);     // 0x0010(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOverTypeData>               _offMid                                                        = new ExternalOffset<FSQClimbOverTypeData>(0x0058, false);     // 0x0058(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MaxMoveDistance                                                => _offMaxMoveDistance.GetValue();
	public float                                               MinMiddleMoveDistance                                          => _offMinMiddleMoveDistance.GetValue();
	public float                                               MidCollisionShapeScale                                         => _offMidCollisionShapeScale.GetValue();
	public FSQClimbOverTypeData                                Low                                                            => _offLow.GetValue();
	public FSQClimbOverTypeData                                Mid                                                            => _offMid.GetValue();
	#endregion

	public FSQClimbOverData(float c_MaxMoveDistance, float c_MinMiddleMoveDistance, float c_MidCollisionShapeScale, FSQClimbOverTypeData c_Low, FSQClimbOverTypeData c_Mid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxMoveDistance.SetValue(c_MaxMoveDistance);
		_offMinMiddleMoveDistance.SetValue(c_MinMiddleMoveDistance);
		_offMidCollisionShapeScale.SetValue(c_MidCollisionShapeScale);
		_offLow.SetValue(c_Low);
		_offMid.SetValue(c_Mid);
	}
}
// ScriptStruct Squad.SQClimbOntoTypeData
// 0x0008 (0x0038 - 0x0030)
public class FSQClimbOntoTypeData : FSQClimbTypeData
{
	#region Offsets
	private ExternalOffset<float>                              _offInterpolateTime                                            = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InterpolateTime                                                => _offInterpolateTime.GetValue();
	#endregion

	public FSQClimbOntoTypeData(float c_InterpolateTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInterpolateTime.SetValue(c_InterpolateTime);
	}
}
// ScriptStruct Squad.SQClimbOntoData
// 0x00A8
public class FSQClimbOntoData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSQClimbOntoTypeData>               _offLow                                                        = new ExternalOffset<FSQClimbOntoTypeData>(0x0000, false);     // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOntoTypeData>               _offMid                                                        = new ExternalOffset<FSQClimbOntoTypeData>(0x0038, false);     // 0x0038(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOntoTypeData>               _offHigh                                                       = new ExternalOffset<FSQClimbOntoTypeData>(0x0070, false);     // 0x0070(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSQClimbOntoTypeData                                Low                                                            => _offLow.GetValue();
	public FSQClimbOntoTypeData                                Mid                                                            => _offMid.GetValue();
	public FSQClimbOntoTypeData                                High                                                           => _offHigh.GetValue();
	#endregion

	public FSQClimbOntoData(FSQClimbOntoTypeData c_Low, FSQClimbOntoTypeData c_Mid, FSQClimbOntoTypeData c_High) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLow.SetValue(c_Low);
		_offMid.SetValue(c_Mid);
		_offHigh.SetValue(c_High);
	}
}
// ScriptStruct Squad.SQClimbData
// 0x0178
public class FSQClimbData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMinHeight                                                  = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOverData>                   _offOverData                                                   = new ExternalOffset<FSQClimbOverData>(0x0008, false);         // 0x0008(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSQClimbOntoData>                   _offOntoData                                                   = new ExternalOffset<FSQClimbOntoData>(0x00A8, false);         // 0x00A8(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMoveToStartSpeed                                        = new ExternalOffset<float>(0x0150);                           // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSearchDistance                                             = new ExternalOffset<float>(0x0154);                           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxClimbableAngle                                          = new ExternalOffset<float>(0x0158);                           // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPitchCorrectionTime                                        = new ExternalOffset<float>(0x015C);                           // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPitchCorrectionMidPoint                                    = new ExternalOffset<float>(0x0160);                           // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCielingNormalTollerance                                    = new ExternalOffset<float>(0x0164);                           // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOverlapDetectionScale                                      = new ExternalOffset<float>(0x0168);                           // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offActorLocationAcceptanceDistance                            = new ExternalOffset<float>(0x016C);                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offServerAcceptanceDistance                                   = new ExternalOffset<float>(0x0170);                           // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MinHeight                                                      => _offMinHeight.GetValue();
	public FSQClimbOverData                                    OverData                                                       => _offOverData.GetValue();
	public FSQClimbOntoData                                    OntoData                                                       => _offOntoData.GetValue();
	public float                                               MinMoveToStartSpeed                                            => _offMinMoveToStartSpeed.GetValue();
	public float                                               SearchDistance                                                 => _offSearchDistance.GetValue();
	public float                                               MaxClimbableAngle                                              => _offMaxClimbableAngle.GetValue();
	public float                                               PitchCorrectionTime                                            => _offPitchCorrectionTime.GetValue();
	public float                                               PitchCorrectionMidPoint                                        => _offPitchCorrectionMidPoint.GetValue();
	public float                                               CielingNormalTollerance                                        => _offCielingNormalTollerance.GetValue();
	public float                                               OverlapDetectionScale                                          => _offOverlapDetectionScale.GetValue();
	public float                                               ActorLocationAcceptanceDistance                                => _offActorLocationAcceptanceDistance.GetValue();
	public float                                               ServerAcceptanceDistance                                       => _offServerAcceptanceDistance.GetValue();
	#endregion

	public FSQClimbData(float c_MinHeight, FSQClimbOverData c_OverData, FSQClimbOntoData c_OntoData, float c_MinMoveToStartSpeed, float c_SearchDistance, float c_MaxClimbableAngle, float c_PitchCorrectionTime, float c_PitchCorrectionMidPoint, float c_CielingNormalTollerance, float c_OverlapDetectionScale, float c_ActorLocationAcceptanceDistance, float c_ServerAcceptanceDistance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinHeight.SetValue(c_MinHeight);
		_offOverData.SetValue(c_OverData);
		_offOntoData.SetValue(c_OntoData);
		_offMinMoveToStartSpeed.SetValue(c_MinMoveToStartSpeed);
		_offSearchDistance.SetValue(c_SearchDistance);
		_offMaxClimbableAngle.SetValue(c_MaxClimbableAngle);
		_offPitchCorrectionTime.SetValue(c_PitchCorrectionTime);
		_offPitchCorrectionMidPoint.SetValue(c_PitchCorrectionMidPoint);
		_offCielingNormalTollerance.SetValue(c_CielingNormalTollerance);
		_offOverlapDetectionScale.SetValue(c_OverlapDetectionScale);
		_offActorLocationAcceptanceDistance.SetValue(c_ActorLocationAcceptanceDistance);
		_offServerAcceptanceDistance.SetValue(c_ServerAcceptanceDistance);
	}
}
// ScriptStruct Squad.SQClimbInfo
// 0x0030
public class FSQClimbInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<EClimbType>                         _offPendingType                                                = new ExternalOffset<EClimbType>(0x0001, false);               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector_NetQuantize10>>      _offPendingClimbMovePathZeroBased                              = new ExternalOffset<TArray<FVector_NetQuantize10>>(0x0018, false); // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EClimbState>                        _offPendingState                                               = new ExternalOffset<EClimbState>(0x0029, false);              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EClimbType                                          PendingType                                                    => _offPendingType.GetValue();
	public TArray<FVector_NetQuantize10>                       PendingClimbMovePathZeroBased                                  => _offPendingClimbMovePathZeroBased.GetValue();
	public EClimbState                                         PendingState                                                   => _offPendingState.GetValue();
	#endregion

	public FSQClimbInfo(EClimbType c_PendingType, TArray<FVector_NetQuantize10> c_PendingClimbMovePathZeroBased, EClimbState c_PendingState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPendingType.SetValue(c_PendingType);
		_offPendingClimbMovePathZeroBased.SetValue(c_PendingClimbMovePathZeroBased);
		_offPendingState.SetValue(c_PendingState);
	}
}
// ScriptStruct Squad.SQVoipAnim
// 0x0020
public class FSQVoipAnim : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offFirstPersonAnim                                            = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offThirdPersonAnim                                            = new ExternalOffset<UAnimMontage>(0x0008, true);              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offFirstPersonEndAnim                                         = new ExternalOffset<UAnimMontage>(0x0010, true);              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimMontage>                       _offThirdPersonEndAnim                                         = new ExternalOffset<UAnimMontage>(0x0018, true);              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        FirstPersonAnim                                                => _offFirstPersonAnim.GetValue();
	public UAnimMontage                                        ThirdPersonAnim                                                => _offThirdPersonAnim.GetValue();
	public UAnimMontage                                        FirstPersonEndAnim                                             => _offFirstPersonEndAnim.GetValue();
	public UAnimMontage                                        ThirdPersonEndAnim                                             => _offThirdPersonEndAnim.GetValue();
	#endregion

	public FSQVoipAnim(UAnimMontage c_FirstPersonAnim, UAnimMontage c_ThirdPersonAnim, UAnimMontage c_FirstPersonEndAnim, UAnimMontage c_ThirdPersonEndAnim) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFirstPersonAnim.SetValue(c_FirstPersonAnim);
		_offThirdPersonAnim.SetValue(c_ThirdPersonAnim);
		_offFirstPersonEndAnim.SetValue(c_FirstPersonEndAnim);
		_offThirdPersonEndAnim.SetValue(c_ThirdPersonEndAnim);
	}
}

}