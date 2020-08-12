#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Squad.ESQAnimState
enum class ESQAnimState : uint8_t
{
	ESQAnimState__Out              = 0,
	ESQAnimState__Entered          = 1,
	ESQAnimState__FullWeight       = 2,
	ESQAnimState__Left             = 3,
	ESQAnimState__ESQAnimState_MAX = 4,

};

// Enum Squad.ESQDrivenDestinationMode
enum class ESQDrivenDestinationMode : uint8_t
{
	ESQDrivenDestinationMode__Bone = 0,
	ESQDrivenDestinationMode__MorphTarget = 1,
	ESQDrivenDestinationMode__MaterialParameter = 2,
	ESQDrivenDestinationMode__ESQDrivenDestinationMode_MAX = 3,

};

// Enum Squad.ESQDrivenBoneModificationMode
enum class ESQDrivenBoneModificationMode : uint8_t
{
	ESQDrivenBoneModificationMode__AddToInput = 0,
	ESQDrivenBoneModificationMode__ReplaceComponent = 1,
	ESQDrivenBoneModificationMode__AddToRefPose = 2,
	ESQDrivenBoneModificationMode__ESQDrivenBoneModificationMode_MAX = 3,

};

// Enum Squad.ESQComponentType
enum class ESQComponentType : uint8_t
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
	ESQComponentType__ESQComponentType_MAX = 11,

};

// Enum Squad.EApprovalRequestChannels
enum class EApprovalRequestChannels : uint8_t
{
	EApprovalRequestChannels__Undefined = 0,
	EApprovalRequestChannels__SquadLeader = 1,
	EApprovalRequestChannels__SinglePlayer = 2,
	EApprovalRequestChannels__EApprovalRequestChannels_MAX = 3,

};

// Enum Squad.EApprovalRequestTypes
enum class EApprovalRequestTypes : uint8_t
{
	EApprovalRequestTypes__Undefined = 0,
	EApprovalRequestTypes__VehicleClaim = 1,
	EApprovalRequestTypes__RequestToJoinSquad = 2,
	EApprovalRequestTypes__EApprovalRequestTypes_MAX = 3,

};

// Enum Squad.ESQReturnBool
enum class ESQReturnBool : uint8_t
{
	ESQReturnBool__IsTrue          = 0,
	ESQReturnBool__IsFalse         = 1,
	ESQReturnBool__ESQReturnBool_MAX = 2,

};

// Enum Squad.ESQBuffTypes
enum class ESQBuffTypes : uint8_t
{
	ESQBuffTypes__ProtectionZone   = 0,
	ESQBuffTypes__PendingDeath     = 1,
	ESQBuffTypes__NoFallDamage     = 2,
	ESQBuffTypes__StagingPhase     = 3,
	ESQBuffTypes__Max              = 4,

};

// Enum Squad.ESQConsoleMessageType
enum class ESQConsoleMessageType : uint8_t
{
	ESQConsoleMessageType__Normal  = 0,
	ESQConsoleMessageType__Warning = 1,
	ESQConsoleMessageType__Error   = 2,
	ESQConsoleMessageType__ESQConsoleMessageType_MAX = 3,

};

// Enum Squad.ESQConsoleVariableViewerState
enum class ESQConsoleVariableViewerState : uint8_t
{
	ESQConsoleVariableViewerState__None = 0,
	ESQConsoleVariableViewerState__Soldier = 1,
	ESQConsoleVariableViewerState__Driver = 2,
	ESQConsoleVariableViewerState__Passenger = 3,
	ESQConsoleVariableViewerState__Spectator = 4,
	ESQConsoleVariableViewerState__MAX = 5,

};

// Enum Squad.ESQConsoleVariableRange
enum class ESQConsoleVariableRange : uint8_t
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
	ESQConsoleVariableRange__MAX   = 14,

};

// Enum Squad.EListLayout
enum class EListLayout : uint8_t
{
	EListLayout__SquadList         = 0,
	EListLayout__RoleList          = 1,
	EListLayout__InviteList        = 2,
	EListLayout__EListLayout_MAX   = 3,

};

// Enum Squad.ESQSelectionState
enum class ESQSelectionState : uint8_t
{
	ESQSelectionState__None        = 0,
	ESQSelectionState__Highlighted = 1,
	ESQSelectionState__Selected    = 2,
	ESQSelectionState__ESQSelectionState_MAX = 3,

};

// Enum Squad.EJoinButtonState
enum class EJoinButtonState : uint8_t
{
	EJoinButtonState__None         = 0,
	EJoinButtonState__Join         = 1,
	EJoinButtonState__Full         = 2,
	EJoinButtonState__Locked       = 3,
	EJoinButtonState__EJoinButtonState_MAX = 4,

};

// Enum Squad.ESQAuthorityTypes
enum class ESQAuthorityTypes : uint8_t
{
	ESQAuthorityTypes__None        = 0,
	ESQAuthorityTypes__FireteamLeader = 1,
	ESQAuthorityTypes__SquadLeader = 2,
	ESQAuthorityTypes__Commander   = 3,
	ESQAuthorityTypes__ESQAuthorityTypes_MAX = 4,

};

// Enum Squad.ESQAxis
enum class ESQAxis : uint8_t
{
	ESQAxis__None                  = 0,
	ESQAxis__X                     = 1,
	ESQAxis__Y                     = 2,
	ESQAxis__Z                     = 3,
	ESQAxis__ESQAxis_MAX           = 4,

};

// Enum Squad.EFreeLookMode
enum class EFreeLookMode : uint8_t
{
	EFreeLookMode__NeverFreeLook   = 0,
	EFreeLookMode__ToggleFreeLook  = 1,
	EFreeLookMode__AlwaysFreeLook  = 2,
	EFreeLookMode__EFreeLookMode_MAX = 3,

};

// Enum Squad.ESQSpawnPointType
enum class ESQSpawnPointType : uint8_t
{
	ESQSpawnPointType__None        = 0,
	ESQSpawnPointType__BaseSpawn   = 1,
	ESQSpawnPointType__HABSpawn    = 2,
	ESQSpawnPointType__RallySpawn  = 3,
	ESQSpawnPointType__CacheSpawn  = 4,
	ESQSpawnPointType__ESQSpawnPointType_MAX = 5,

};

// Enum Squad.ESQContestingState
enum class ESQContestingState : uint8_t
{
	ESQContestingState__None       = 0,
	ESQContestingState__Attackable = 1,
	ESQContestingState__Defendable = 2,
	ESQContestingState__ESQContestingState_MAX = 3,

};

// Enum Squad.ESQMoveSerializationMode
enum class ESQMoveSerializationMode : uint8_t
{
	ESQMoveSerializationMode__OldMove = 0,
	ESQMoveSerializationMode__DualFirstMove = 1,
	ESQMoveSerializationMode__DualSecondMove = 2,
	ESQMoveSerializationMode__SingleMove = 3,
	ESQMoveSerializationMode__ESQMoveSerializationMode_MAX = 4,

};

// Enum Squad.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__AllwaysRelevantTeamOnly = 2,
	EClassRepNodeMapping__Spatialize_Static = 3,
	EClassRepNodeMapping__Spatialize_Dynamic = 4,
	EClassRepNodeMapping__Spatialize_Dormancy = 5,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 6,

};

// Enum Squad.ESQRotationMovementState
enum class ESQRotationMovementState : uint8_t
{
	ESQRotationMovementState__Idle = 0,
	ESQRotationMovementState__Starting = 1,
	ESQRotationMovementState__Moving = 2,
	ESQRotationMovementState__Stopping = 3,
	ESQRotationMovementState__ESQRotationMovementState_MAX = 4,

};

// Enum Squad.ESQRotorRunningState
enum class ESQRotorRunningState : uint8_t
{
	ESQRotorRunningState__Accelerating = 0,
	ESQRotorRunningState__Idling   = 1,
	ESQRotorRunningState__Locked   = 2,
	ESQRotorRunningState__ESQRotorRunningState_MAX = 3,

};

// Enum Squad.ESQRotorState
enum class ESQRotorState : uint8_t
{
	ESQRotorState__None            = 0,
	ESQRotorState__Starting        = 1,
	ESQRotorState__Running         = 2,
	ESQRotorState__Stopping        = 3,
	ESQRotorState__Stopped         = 4,
	ESQRotorState__ESQRotorState_MAX = 5,

};

// Enum Squad.ESQRotorType
enum class ESQRotorType : uint8_t
{
	ESQRotorType__Main             = 0,
	ESQRotorType__Lateral          = 1,
	ESQRotorType__ESQRotorType_MAX = 2,

};

// Enum Squad.ESQShockwaveEffectType
enum class ESQShockwaveEffectType : uint8_t
{
	ESQShockwaveEffectType__Explosion = 0,
	ESQShockwaveEffectType__Blast  = 1,
	ESQShockwaveEffectType__ESQShockwaveEffectType_MAX = 2,

};

// Enum Squad.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	ECustomMovementMode__MOVE_Bipod = 0,
	ECustomMovementMode__MOVE_Climbing = 1,
	ECustomMovementMode__MOVE_MAX  = 2,

};

// Enum Squad.ESQSoundNodeFlyByState
enum class ESQSoundNodeFlyByState : uint8_t
{
	ESQSoundNodeFlyByState__Idle   = 0,
	ESQSoundNodeFlyByState__ComingTowardsNotPlaying = 1,
	ESQSoundNodeFlyByState__Playing = 2,
	ESQSoundNodeFlyByState__MovingAwayNotPlaying = 3,
	ESQSoundNodeFlyByState__ESQSoundNodeFlyByState_MAX = 4,

};

// Enum Squad.EVehicleClaimCheckResults
enum class EVehicleClaimCheckResults : uint8_t
{
	EVehicleClaimCheckResults__OK  = 0,
	EVehicleClaimCheckResults__NullPtr = 1,
	EVehicleClaimCheckResults__EmptyRole = 2,
	EVehicleClaimCheckResults__EVehicleClaimCheckResults_MAX = 3,

};

// Enum Squad.ESquadMemberUIAction
enum class ESquadMemberUIAction : uint8_t
{
	ESquadMemberUIAction__MenuOpen = 0,
	ESquadMemberUIAction__PromoteToSL = 1,
	ESquadMemberUIAction__Kick     = 2,
	ESquadMemberUIAction__SLInvite = 3,
	ESquadMemberUIAction__ESquadMemberUIAction_MAX = 4,

};

// Enum Squad.ESquadMemberUIViewMode
enum class ESquadMemberUIViewMode : uint8_t
{
	ESquadMemberUIViewMode__SquadMembers = 0,
	ESquadMemberUIViewMode__UnassignedMembers = 1,
	ESquadMemberUIViewMode__ESquadMemberUIViewMode_MAX = 2,

};

// Enum Squad.ESeatProgressMenuMode
enum class ESeatProgressMenuMode : uint8_t
{
	ESeatProgressMenuMode__InventoryOnly = 0,
	ESeatProgressMenuMode__Entering = 1,
	ESeatProgressMenuMode__Switching = 2,
	ESeatProgressMenuMode__Exiting = 3,
	ESeatProgressMenuMode__ESeatProgressMenuMode_MAX = 4,

};

// Enum Squad.ESQVehicleClaimStatus
enum class ESQVehicleClaimStatus : uint8_t
{
	ESQVehicleClaimStatus__Active  = 0,
	ESQVehicleClaimStatus__DroppedOff = 1,
	ESQVehicleClaimStatus__Abandoned = 2,
	ESQVehicleClaimStatus__Destroyed = 3,
	ESQVehicleClaimStatus__ESQVehicleClaimStatus_MAX = 4,

};

// Enum Squad.ESQInventoryModificationType
enum class ESQInventoryModificationType : uint8_t
{
	ESQInventoryModificationType__AddToInventory = 0,
	ESQInventoryModificationType__RemoveFromInventory = 1,
	ESQInventoryModificationType__UpdateInventory = 2,
	ESQInventoryModificationType__ESQInventoryModificationType_MAX = 3,

};

// Enum Squad.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Backpack          = 0,
	EWeaponType__Primary           = 1,
	EWeaponType__Secondary         = 2,
	EWeaponType__Special           = 3,
	EWeaponType__EWeaponType_MAX   = 4,

};

// Enum Squad.ESQCreditsLineType
enum class ESQCreditsLineType : uint8_t
{
	ESQCreditsLineType__None       = 0,
	ESQCreditsLineType__Header     = 1,
	ESQCreditsLineType__LineBreak  = 2,
	ESQCreditsLineType__Names      = 3,
	ESQCreditsLineType__ESQCreditsLineType_MAX = 4,

};

// Enum Squad.ESQKillReportChannel
enum class ESQKillReportChannel : uint8_t
{
	ESQKillReportChannel__None     = 0,
	ESQKillReportChannel__Admin    = 1,
	ESQKillReportChannel__Team     = 2,
	ESQKillReportChannel__TeamAndAdmin = 3,
	ESQKillReportChannel__Public   = 4,
	ESQKillReportChannel__ESQKillReportChannel_MAX = 5,

};

// Enum Squad.ESQRepairSource
enum class ESQRepairSource : uint8_t
{
	ESQRepairSource__REPAIR_STATION = 0,
	ESQRepairSource__REPAIR_TOOL   = 1,
	ESQRepairSource__REPAIR_MAX    = 2,

};

// Enum Squad.ESQSpawnInventoryReason
enum class ESQSpawnInventoryReason : uint8_t
{
	ESQSpawnInventoryReason__SpawningIn = 0,
	ESQSpawnInventoryReason__SwappingRoles = 1,
	ESQSpawnInventoryReason__SwappingRolesPartialAmmo = 2,
	ESQSpawnInventoryReason__ESQSpawnInventoryReason_MAX = 3,

};

// Enum Squad.ESQSoldierRagdollReason
enum class ESQSoldierRagdollReason : uint8_t
{
	ESQSoldierRagdollReason__NotInRagdoll = 0,
	ESQSoldierRagdollReason__NotReplicated = 1,
	ESQSoldierRagdollReason__Replicated = 2,
	ESQSoldierRagdollReason__ReplicatedAutoGetUp = 3,
	ESQSoldierRagdollReason__ESQSoldierRagdollReason_MAX = 4,

};

// Enum Squad.ESQVehicleRoleAbility
enum class ESQVehicleRoleAbility : uint8_t
{
	ESQVehicleRoleAbility__LightVehicle = 0,
	ESQVehicleRoleAbility__HeavyVehicle = 1,
	ESQVehicleRoleAbility__FlyingVehicle = 2,
	ESQVehicleRoleAbility__ESQVehicleRoleAbility_MAX = 3,

};

// Enum Squad.ESQRearmType
enum class ESQRearmType : uint8_t
{
	ESQRearmType__MainOrEnvironment = 0,
	ESQRearmType__ForwardBase      = 1,
	ESQRearmType__Vehicle          = 2,
	ESQRearmType__AmmoBag          = 3,
	ESQRearmType__ESQRearmType_MAX = 4,

};

// Enum Squad.ESQGrenadeState
enum class ESQGrenadeState : uint8_t
{
	ESQGrenadeState__Idle          = 0,
	ESQGrenadeState__PreparingOverhandThrow = 1,
	ESQGrenadeState__PreparingUnderhandThrow = 2,
	ESQGrenadeState__ThrowingOverhand = 3,
	ESQGrenadeState__ThrowingUnderhand = 4,
	ESQGrenadeState__Reloading     = 5,
	ESQGrenadeState__ESQGrenadeState_MAX = 6,

};

// Enum Squad.ESQEquippableState
enum class ESQEquippableState : uint8_t
{
	ESQEquippableState__None       = 0,
	ESQEquippableState__Unequipped = 1,
	ESQEquippableState__Equipping  = 2,
	ESQEquippableState__Equipped   = 3,
	ESQEquippableState__Unequipping = 4,
	ESQEquippableState__ESQEquippableState_MAX = 5,

};

// Enum Squad.ESQVehicleDifferential4W
enum class ESQVehicleDifferential4W : uint8_t
{
	ESQVehicleDifferential4W__LimitedSlip_4W = 0,
	ESQVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	ESQVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	ESQVehicleDifferential4W__Open_4W = 3,
	ESQVehicleDifferential4W__Open_FrontDrive = 4,
	ESQVehicleDifferential4W__Open_RearDrive = 5,
	ESQVehicleDifferential4W__ESQVehicleDifferential4W_MAX = 6,

};

// Enum Squad.ESQDeadState
enum class ESQDeadState : uint8_t
{
	ESQDeadState__GameNotStarted   = 0,
	ESQDeadState__SpawningIn       = 1,
	ESQDeadState__SelectingSpawn   = 2,
	ESQDeadState__SelectingRole    = 3,
	ESQDeadState__WaitingToSpawn   = 4,
	ESQDeadState__InCap            = 5,
	ESQDeadState__ESQDeadState_MAX = 6,

};

// Enum Squad.ESQTileCount
enum class ESQTileCount : uint8_t
{
	ESQTileCount__COUNT            = 0,
	ESQTileCount__COUNT01          = 1,
	ESQTileCount__COUNT02          = 2,
	ESQTileCount__COUNT03          = 3,
	ESQTileCount__COUNT04          = 4,
	ESQTileCount__COUNT05          = 5,
	ESQTileCount__COUNT_MAX        = 6,

};

// Enum Squad.ESQTileResolution
enum class ESQTileResolution : uint8_t
{
	ESQTileResolution__SIZE        = 0,
	ESQTileResolution__SIZE01      = 1,
	ESQTileResolution__SIZE02      = 2,
	ESQTileResolution__SIZE03      = 3,
	ESQTileResolution__SIZE_MAX    = 4,

};

// Enum Squad.ESQSoldierLeanDirection
enum class ESQSoldierLeanDirection : uint8_t
{
	ESQSoldierLeanDirection__LeftLean = 0,
	ESQSoldierLeanDirection__NoLean = 1,
	ESQSoldierLeanDirection__RightLean = 2,
	ESQSoldierLeanDirection__ESQSoldierLeanDirection_MAX = 3,

};

// Enum Squad.ESQFOBRallyPointDisplayMode
enum class ESQFOBRallyPointDisplayMode : uint8_t
{
	ESQFOBRallyPointDisplayMode__None = 0,
	ESQFOBRallyPointDisplayMode__FOB = 1,
	ESQFOBRallyPointDisplayMode__RallyPoint = 2,
	ESQFOBRallyPointDisplayMode__Both = 3,
	ESQFOBRallyPointDisplayMode__ESQFOBRallyPointDisplayMode_MAX = 4,

};

// Enum Squad.ESQHUDView
enum class ESQHUDView : uint8_t
{
	ESQHUDView__None               = 0,
	ESQHUDView__AllPawns           = 1,
	ESQHUDView__SameTeam           = 2,
	ESQHUDView__OnlyEnemy          = 3,
	ESQHUDView__ESQHUDView_MAX     = 4,

};

// Enum Squad.ESQCameraMode
enum class ESQCameraMode : uint8_t
{
	ESQCameraMode__FlySpeed        = 0,
	ESQCameraMode__Deceleration    = 1,
	ESQCameraMode__FOV             = 2,
	ESQCameraMode__ESQCameraMode_MAX = 3,

};

// Enum Squad.ESQExplosiveType
enum class ESQExplosiveType : uint8_t
{
	ESQExplosiveType__None         = 0,
	ESQExplosiveType__RemoteExplosive = 1,
	ESQExplosiveType__Mine         = 2,
	ESQExplosiveType__ESQExplosiveType_MAX = 3,

};

// Enum Squad.ESQDeployableSize
enum class ESQDeployableSize : uint8_t
{
	ESQDeployableSize__Very_Small  = 0,
	ESQDeployableSize__Small       = 1,
	ESQDeployableSize__Medium      = 2,
	ESQDeployableSize__Large       = 3,
	ESQDeployableSize__Very_Large  = 4,
	ESQDeployableSize__ESQDeployableSize_MAX = 5,

};

// Enum Squad.ESQInvalidPlacementReason
enum class ESQInvalidPlacementReason : uint8_t
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
	ESQInvalidPlacementReason__ESQInvalidPlacementReason_MAX = 17,

};

// Enum Squad.ESQRandomizeMapRotation
enum class ESQRandomizeMapRotation : uint8_t
{
	ESQRandomizeMapRotation__Always = 0,
	ESQRandomizeMapRotation__FirstMap = 1,
	ESQRandomizeMapRotation__None  = 2,
	ESQRandomizeMapRotation__ESQRandomizeMapRotation_MAX = 3,

};

// Enum Squad.ESQWeaponAnimType
enum class ESQWeaponAnimType : uint8_t
{
	ESQWeaponAnimType__Rifle       = 0,
	ESQWeaponAnimType__Grenade     = 1,
	ESQWeaponAnimType__Equippable  = 2,
	ESQWeaponAnimType__ESQWeaponAnimType_MAX = 3,

};

// Enum Squad.ESQEquippableActionState
enum class ESQEquippableActionState : uint8_t
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
	ESQEquippableActionState__ESQEquippableActionState_MAX = 10,

};

// Enum Squad.ESQWeaponState
enum class ESQWeaponState : uint8_t
{
	ESQWeaponState__Idle           = 0,
	ESQWeaponState__Firing         = 1,
	ESQWeaponState__Reloading      = 2,
	ESQWeaponState__Melee          = 3,
	ESQWeaponState__ProcessingAttachment = 4,
	ESQWeaponState__ESQWeaponState_MAX = 5,

};

// Enum Squad.ESQHitDetectionFailReason
enum class ESQHitDetectionFailReason : uint8_t
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
	ESQHitDetectionFailReason__ESQHitDetectionFailReason_MAX = 9,

};

// Enum Squad.ESQReadyToEndMatch
enum class ESQReadyToEndMatch : uint8_t
{
	ESQReadyToEndMatch__Unhandled  = 0,
	ESQReadyToEndMatch__ReadyToEndMatch = 1,
	ESQReadyToEndMatch__DoNotEndMatch = 2,
	ESQReadyToEndMatch__ESQReadyToEndMatch_MAX = 3,

};

// Enum Squad.ESQRoleTypeEnum
enum class ESQRoleTypeEnum : uint8_t
{
	ESQRoleTypeEnum__RoleType_Standard = 0,
	ESQRoleTypeEnum__RoleType_Specialist = 1,
	ESQRoleTypeEnum__RoleType_Support = 2,
	ESQRoleTypeEnum__RoleType_FireSupport = 3,
	ESQRoleTypeEnum__RoleType_MAX  = 4,

};

// Enum Squad.ESQDialogType
enum class ESQDialogType : uint8_t
{
	ESQDialogType__None            = 0,
	ESQDialogType__Generic         = 1,
	ESQDialogType__ControllerDisconnected = 2,
	ESQDialogType__ESQDialogType_MAX = 3,

};

// Enum Squad.ESQRadialWidgetSizeEnum
enum class ESQRadialWidgetSizeEnum : uint8_t
{
	ESQRadialWidgetSizeEnum__Small = 0,
	ESQRadialWidgetSizeEnum__Medium = 1,
	ESQRadialWidgetSizeEnum__Large = 2,
	ESQRadialWidgetSizeEnum__ESQRadialWidgetSizeEnum_MAX = 3,

};

// Enum Squad.ESQHudPosition
enum class ESQHudPosition : uint8_t
{
	ESQHudPosition__Left           = 0,
	ESQHudPosition__FrontLeft      = 1,
	ESQHudPosition__Front          = 2,
	ESQHudPosition__FrontRight     = 3,
	ESQHudPosition__Right          = 4,
	ESQHudPosition__BackRight      = 5,
	ESQHudPosition__Back           = 6,
	ESQHudPosition__BackLeft       = 7,
	ESQHudPosition__ESQHudPosition_MAX = 8,

};

// Enum Squad.ESQCrosshairDirection
enum class ESQCrosshairDirection : uint8_t
{
	ESQCrosshairDirection__Left    = 0,
	ESQCrosshairDirection__Right   = 1,
	ESQCrosshairDirection__Top     = 2,
	ESQCrosshairDirection__Bottom  = 3,
	ESQCrosshairDirection__Center  = 4,
	ESQCrosshairDirection__ESQCrosshairDirection_MAX = 5,

};

// Enum Squad.ESQAudioVolumeType
enum class ESQAudioVolumeType : uint8_t
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
	ESQAudioVolumeType__ESQAudioVolumeType_MAX = 14,

};

// Enum Squad.ESQLeftSquadWeaponBehaviour
enum class ESQLeftSquadWeaponBehaviour : uint8_t
{
	ESQLeftSquadWeaponBehaviour__DoNotKeep = 0,
	ESQLeftSquadWeaponBehaviour__KeepWithMagsAndLoadedAmmo = 1,
	ESQLeftSquadWeaponBehaviour__KeepWithOnlyLoadedAmmo = 2,
	ESQLeftSquadWeaponBehaviour__OverWriteMagsAndKeepLoadedAmmo = 3,
	ESQLeftSquadWeaponBehaviour__OverWriteWithOnlyLoadedAmmo = 4,
	ESQLeftSquadWeaponBehaviour__ESQLeftSquadWeaponBehaviour_MAX = 5,

};

// Enum Squad.ESQAdminAccessLevels
enum class ESQAdminAccessLevels : uint8_t
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
	ESQAdminAccessLevels__Level_MAX = 25,

};

// Enum Squad.ESQSortStates
enum class ESQSortStates : uint8_t
{
	ESQSortStates__Unsorted        = 0,
	ESQSortStates__Ascending       = 1,
	ESQSortStates__Descending      = 2,
	ESQSortStates__ESQSortStates_MAX = 3,

};

// Enum Squad.ESQSortLevels
enum class ESQSortLevels : uint8_t
{
	ESQSortLevels__ServerName      = 0,
	ESQSortLevels__MapName         = 1,
	ESQSortLevels__GameMode        = 2,
	ESQSortLevels__Ping            = 3,
	ESQSortLevels__NumPlayers      = 4,
	ESQSortLevels__ESQSortLevels_MAX = 5,

};

// Enum Squad.ESQTrackDeployableResult
enum class ESQTrackDeployableResult : uint8_t
{
	ESQTrackDeployableResult__Allow = 0,
	ESQTrackDeployableResult__AllowButRemoveAllOthers = 1,
	ESQTrackDeployableResult__AllowButRemoveFirst = 2,
	ESQTrackDeployableResult__AllowButRemoveLast = 3,
	ESQTrackDeployableResult__DoNotAllow = 4,
	ESQTrackDeployableResult__ESQTrackDeployableResult_MAX = 5,

};

// Enum Squad.ESQVehicleType
enum class ESQVehicleType : uint8_t
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
	ESQVehicleType__MAX            = 19,

};

// Enum Squad.ESQVehicleComponentStates
enum class ESQVehicleComponentStates : uint8_t
{
	ESQVehicleComponentStates__FullyRepaired = 0,
	ESQVehicleComponentStates__RepairedFromDestruction = 1,
	ESQVehicleComponentStates__Destroyed = 2,
	ESQVehicleComponentStates__ESQVehicleComponentStates_MAX = 3,

};

// Enum Squad.ESQTeamType
enum class ESQTeamType : uint8_t
{
	ESQTeamType__Attacker          = 0,
	ESQTeamType__Defender          = 1,
	ESQTeamType__ESQTeamType_MAX   = 2,

};

// Enum Squad.ESQBuildState
enum class ESQBuildState : uint8_t
{
	ESQBuildState__Completed       = 0,
	ESQBuildState__HalfBuilt       = 1,
	ESQBuildState__Unbuilt         = 2,
	ESQBuildState__ESQBuildState_MAX = 3,

};

// Enum Squad.ESQSoldierSeatState
enum class ESQSoldierSeatState : uint8_t
{
	ESQSoldierSeatState__Locked    = 0,
	ESQSoldierSeatState__LockedWithWeapon = 1,
	ESQSoldierSeatState__Hidden    = 2,
	ESQSoldierSeatState__None      = 3,
	ESQSoldierSeatState__ESQSoldierSeatState_MAX = 4,

};

// Enum Squad.ESQListenerType
enum class ESQListenerType : uint8_t
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
	ESQListenerType__ESQListenerType_MAX = 10,

};

// Enum Squad.ESQInteractVisibility
enum class ESQInteractVisibility : uint8_t
{
	ESQInteractVisibility__Invisible = 0,
	ESQInteractVisibility__Team    = 1,
	ESQInteractVisibility__AlwaysVisible = 2,
	ESQInteractVisibility__ESQInteractVisibility_MAX = 3,

};

// Enum Squad.ESQEmotes
enum class ESQEmotes : uint8_t
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
	ESQEmotes__MAX                 = 12,

};

// Enum Squad.EClimbState
enum class EClimbState : uint8_t
{
	EClimbState__Interpolating     = 0,
	EClimbState__RequiredOutro     = 1,
	EClimbState__Outro             = 2,
	EClimbState__End               = 3,
	EClimbState__None              = 4,
	EClimbState__EClimbState_MAX   = 5,

};

// Enum Squad.EClimbType
enum class EClimbType : uint8_t
{
	EClimbType__None               = 0,
	EClimbType__OverLow            = 1,
	EClimbType__OverMid            = 2,
	EClimbType__OntoLow            = 3,
	EClimbType__OntoMid            = 4,
	EClimbType__OntoHigh           = 5,
	EClimbType__MAX                = 6,

};

// Enum Squad.ESQTeam
enum class ESQTeam : uint8_t
{
	ESQTeam__Team_Neutral          = 0,
	ESQTeam__Team_One              = 1,
	ESQTeam__Team_Two              = 2,
	ESQTeam__Team_MAX              = 3,

};

// Enum Squad.ESQCommandOptionState
enum class ESQCommandOptionState : uint8_t
{
	ESQCommandOptionState__Ready   = 0,
	ESQCommandOptionState__Enroute = 1,
	ESQCommandOptionState__Active  = 2,
	ESQCommandOptionState__Cooldown = 3,
	ESQCommandOptionState__None    = 4,
	ESQCommandOptionState__ESQCommandOptionState_MAX = 5,

};

// Enum Squad.ESQNotificationTypes
enum class ESQNotificationTypes : uint8_t
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
	ESQNotificationTypes__MAX      = 11,

};

// Enum Squad.ESQChat
enum class ESQChat : uint8_t
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
	ESQChat__ESQChat_MAX           = 13,

};

// Enum Squad.ESQTextVerticalAlignment
enum class ESQTextVerticalAlignment : uint8_t
{
	ESQTextVerticalAlignment__Top  = 0,
	ESQTextVerticalAlignment__Center = 1,
	ESQTextVerticalAlignment__Bottom = 2,
	ESQTextVerticalAlignment__ESQTextVerticalAlignment_MAX = 3,

};

// Enum Squad.ESQTextHorizontalAlignment
enum class ESQTextHorizontalAlignment : uint8_t
{
	ESQTextHorizontalAlignment__Left = 0,
	ESQTextHorizontalAlignment__Center = 1,
	ESQTextHorizontalAlignment__Right = 2,
	ESQTextHorizontalAlignment__ESQTextHorizontalAlignment_MAX = 3,

};

// Enum Squad.ESQMapItemDrawMode
enum class ESQMapItemDrawMode : uint8_t
{
	ESQMapItemDrawMode__ZoomedOut  = 0,
	ESQMapItemDrawMode__ZoomedIn   = 1,
	ESQMapItemDrawMode__Absolute   = 2,
	ESQMapItemDrawMode__Meters     = 3,
	ESQMapItemDrawMode__ESQMapItemDrawMode_MAX = 4,

};

// Enum Squad.ESQMapItemType
enum class ESQMapItemType : uint8_t
{
	ESQMapItemType__Map            = 0,
	ESQMapItemType__Default        = 1,
	ESQMapItemType__Player         = 2,
	ESQMapItemType__Spawn          = 3,
	ESQMapItemType__LocalPlayer    = 4,
	ESQMapItemType__Gameplay       = 5,
	ESQMapItemType__ESQMapItemType_MAX = 6,

};

// Enum Squad.ESQMapMarkerVisibleTo
enum class ESQMapMarkerVisibleTo : uint8_t
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
	ESQMapMarkerVisibleTo__ESQMapMarkerVisibleTo_MAX = 11,

};

// Enum Squad.ESQMapWidgetTint
enum class ESQMapWidgetTint : uint8_t
{
	ESQMapWidgetTint__Neutral      = 0,
	ESQMapWidgetTint__Self         = 1,
	ESQMapWidgetTint__Squad        = 2,
	ESQMapWidgetTint__Team         = 3,
	ESQMapWidgetTint__SquadLeader  = 4,
	ESQMapWidgetTint__AllCommand   = 5,
	ESQMapWidgetTint__Enemy        = 6,
	ESQMapWidgetTint__FireTeam     = 7,
	ESQMapWidgetTint__MAX          = 8,

};

// Enum Squad.ESQMapMarkerType
enum class ESQMapMarkerType : uint8_t
{
	ESQMapMarkerType__Action       = 0,
	ESQMapMarkerType__Spot         = 1,
	ESQMapMarkerType__POI          = 2,
	ESQMapMarkerType__Fireteam     = 3,
	ESQMapMarkerType__Request      = 4,
	ESQMapMarkerType__Arrow        = 5,
	ESQMapMarkerType__Frontline    = 6,
	ESQMapMarkerType__CommanderOrder = 7,
	ESQMapMarkerType__MAX          = 8,

};

// Enum Squad.ESQMapIconSelectionGroup
enum class ESQMapIconSelectionGroup : uint8_t
{
	ESQMapIconSelectionGroup__None = 0,
	ESQMapIconSelectionGroup__Spawns = 1,
	ESQMapIconSelectionGroup__Players = 2,
	ESQMapIconSelectionGroup__ESQMapIconSelectionGroup_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Squad.BlueprintOnlineItem
// 0x0010
struct FBlueprintOnlineItem
{

};
// ScriptStruct Squad.SQLedColorScheme
// 0x0078
struct FSQLedColorScheme
{
	struct FColor                                      DefaultColor;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      BgColor;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DeadColor;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      InjuredColor;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FColor>                  ControlsColors;                                            // 0x0010(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              UpdateFrequency;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowAmmoTreshold;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowStaminaTreshold;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFireTeam
// 0x0018
struct FSQFireTeam
{
	TArray<class ASQPlayerController*>                 Players;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBlueprintLoginResult
// 0x0010
struct FSQBlueprintLoginResult
{

};
// ScriptStruct Squad.SQGraphLink
// 0x0010
struct FSQGraphLink
{
	class USQGraphNodeComponent*                       NodeA;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQGraphNodeComponent*                       NodeB;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQLatticeLine
// 0x002C
struct FSQLatticeLine
{
	struct FVector                                     StartWorldLocation;                                        // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndWorldLocation;                                          // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgeWidth;                                                 // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQScoreEvent
// 0x0028
struct FSQScoreEvent
{
	float                                              Points;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ScoreGroup;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInventoryData
// 0x0018
struct FSQInventoryData
{
	class UClass*                                      EquipableItem;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAllowedInInventory;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumCountOnSpawn;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCannotRearm;                                              // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWeaponType                                        WeaponType;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInventoryMod
// 0x0038
struct FSQInventoryMod
{
	unsigned char                                      bClearAllInventoryFirst;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQInventoryData                            InventoryData;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	ESQInventoryModificationType                       InventoryModificationType;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            Team;                                                      // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQRoleSettings*                             Role;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQGameModeRules
// 0x0018
struct FSQGameModeRules
{
	ESQTeam                                            Team;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Rules;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSystemHUDMessage
// 0x0028
struct FSQSystemHUDMessage
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQApprovalEntryRequest
// 0x0040
struct FSQApprovalEntryRequest
{
	EApprovalRequestTypes                              RequestType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     PtrParams[0x4];                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CombinedMessage;                                           // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpireIn;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQApprovalEntryClientDesc
// 0x0008
struct FSQApprovalEntryClientDesc
{
	float                                              ExpireIn;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRearmWeaponRequest
// 0x0010
struct FSQRearmWeaponRequest
{
	class ASQEquipableItem*                            Weapon;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MagsToRearm;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQShotInfo
// 0x002C
struct FSQShotInfo
{
	unsigned char                                      ShotCounter;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTime;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Origin;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTracer;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenetrationDamageMultiplier;                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorDamageMultiplier;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPenetrationTrace
// 0x00AC
struct FSQPenetrationTrace
{
	unsigned char                                      bIsActor;                                                  // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasValidReverseImpact;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ReverseAngleImpactLocation;                                // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ReverseAngleImpactNormal;                                  // 0x0098(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReverseAngleBoneName;                                      // 0x00A4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.ArmorPenetration
// 0x0028
struct FArmorPenetration
{

};
// ScriptStruct Squad.BlueprintOnlineItemDefinition
// 0x0010
struct FBlueprintOnlineItemDefinition
{

};
// ScriptStruct Squad.HeatMapRecording
// 0x0088
struct FHeatMapRecording
{

};
// ScriptStruct Squad.HeatMapRecordingSample
// 0x0020
struct FHeatMapRecordingSample
{

};
// ScriptStruct Squad.SQWeaponData
// 0x00C0
struct FSQWeaponData
{
	bool                                               bInfiniteAmmo;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteMags;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding1[2];
	int                                                MaxMags;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundsPerMag;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRoundInChamber;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding2[3];
	TArray<int>                                        Firemodes;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              TimeBetweenShots;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenSingleShots;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReloadWhenEquipping;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateProjectileOnServer;                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding3[2];
	float                                              TacticalReloadDuration;                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryReloadDuration;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TacticalReloadBipodDuration;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadDryBipodDuration;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZoomDuration;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSPostTransitionRatio;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowZoom;                                                // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAverageFireRate;                                          // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetBurstOnTriggerRelease;                               // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding4[1];
	class UClass*                                      ProjectileClass;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundsBetweenTracer;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding5[4];
	class UClass*                                      TracerProjectileClass;                                     // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MuzzleVelocity;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDamageToApply;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToStartDamageFallOff;                                  // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToStartDamageFallOff;                              // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFallOffRate;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamageToApply;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DamageFalloffCurve;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBarrelSocketOnSoldier;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding6[3];
	struct FName                                       BarrelSocketName;                                          // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MOA;                                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumTraceDistance;                                      // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallHackCheckTraceDistance;                                // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileCameraRelativeOffsetMultiplier;                  // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMagMustBeEmptyForVehicleRearm;                            // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyIfCurrentMagazineIsEmpty;                        // 0x009D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmCanFillCurrentMagazine;                              // 0x009E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding7[1];
	float                                              MinimumTimeBetweenRearms;                                  // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyOneMagazine;                                     // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyXRoundsOfAmmo;                                   // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _padding8[2];
	int                                                RearmRoundsOfAmmoPerRearm;                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArmorPenetrationDepthMillimeters;                          // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ArmorPenetrationDepthCurve;                                // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceDistanceAfterPenetrationMeters;                       // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
// ScriptStruct Squad.SQMarkerReference
// 0x0028
struct FSQMarkerReference
{
	class UClass*                                      MarkerType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSquadOnly;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQ_HexMenu_BaseAction*>              Markers;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                ConcurrentMarkersLimit;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQReverbVolumeEffect
// 0x0020
struct FSQReverbVolumeEffect
{
	class UReverbEffect*                               ReverbEffect;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EffectName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EffectVolume;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EffectFadeTime;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EffectPriority;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCachedTransitionData
// 0x0024
struct FSQCachedTransitionData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FromStateName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToStateName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCachedRelevantAnimData
// 0x001C
struct FSQCachedRelevantAnimData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCachedAssetPlayerData
// 0x0020
struct FSQCachedAssetPlayerData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InstanceName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCachedStateData
// 0x001C
struct FSQCachedStateData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCachedStateArray
// 0x0018
struct FSQCachedStateArray
{
	TArray<struct FSQCachedStateData>                  States;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEmoteAnims
// 0x0028
struct FSQEmoteAnims
{
	bool                                               bForceIfCantPlay;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPersonAnim;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPersonEndAnim;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonEndAnim;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAnimNode_BoneDrivenController
// 0x0060 (0x0128 - 0x00C8)
struct FSQAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQComponentType>                      SourceComponent;                                           // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DrivingCurve;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRange;                                                 // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMin;                                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQDrivenDestinationMode                           DestinationMode;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x010C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     TargetComponentSpace;                                      // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQComponentType>                      TargetComponent;                                           // 0x011D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAffectTargetTranslationX;                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY;                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ;                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX;                                    // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY;                                    // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ;                                    // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX;                                       // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY;                                       // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ;                                       // 0x0121(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQDrivenBoneModificationMode                      ModificationMode;                                          // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAnimNode_WheelHandler
// 0x0030 (0x00F8 - 0x00C8)
struct FSQAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	float                                              Smoothing;                                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PreviousWheelLocations;                                    // 0x00E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct Squad.SQButtonStyle
// 0x0080
struct FSQButtonStyle
{
	bool                                               bUseStyling;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseImageStyling;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  NormalImage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HoveredImage;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PressedImage;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DisabledImage;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTintStyling;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseColorBlending;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalTint;                                                // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredTint;                                               // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedTint;                                               // 0x004C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledTint;                                              // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   PressedSoundCue;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HoveredSoundCue;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBoundaryListenerData
// 0x0014
struct FSQBoundaryListenerData
{
	bool                                               bInsideBoundary;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CheckTime;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EntryTime;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExitTime;                                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBuffDesc
// 0x0008
struct FSQBuffDesc
{

};
// ScriptStruct Squad.SQChatStyle
// 0x08F8 (0x0900 - 0x0008)
struct FSQChatStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextEntryStyle;                                            // 0x0008(0x07F0) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackingBrush;                                              // 0x07F8(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BoxBorderColor;                                            // 0x0880(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TextColor;                                                 // 0x08A8(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateSound                                 RxMessgeSound;                                             // 0x08D0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 TxMessgeSound;                                             // 0x08E8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQChunkDependency
// 0x0020
struct FSQChunkDependency
{
	struct FInt32Range                                 ChunkIDs;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ParentChunkIDs;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.ServerAnalyticsData
// 0x0048
struct FServerAnalyticsData
{
	struct FString                                     GameVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      tick_Min;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      tick_Max;                                                  // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      tick_q1;                                                   // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      tick_Mean;                                                 // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      tick_q3;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                pop_Mean;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                pop_Max;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                samplesTaken;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQTeamCommands
// 0x0018 (0x0020 - 0x0008)
struct FSQTeamCommands : public FTableRowBase
{
	class UClass*                                      CommandData;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Team;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCommandActionData
// 0x0018
struct FSQCommandActionData
{
	class UClass*                                      CommandActionData;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GameTimeAtCreation;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownTimeRemaining;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDestroyedDuringActive;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCommandActionDataFASItem
// 0x001C (0x0028 - 0x000C)
struct FSQCommandActionDataFASItem : public FFastArraySerializerItem
{
	struct FSQCommandActionData                        Content;                                                   // 0x0010(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCommanderActionDataArray
// 0x0010 (0x0118 - 0x0108)
struct FSQCommanderActionDataArray : public FFastArraySerializer
{
	TArray<struct FSQCommandActionDataFASItem>         Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCommanderActionSounds
// 0x00A0
struct FSQCommanderActionSounds
{

};
// ScriptStruct Squad.CommanderVoteNominee
// 0x0014 (0x0020 - 0x000C)
struct FCommanderVoteNominee : public FFastArraySerializerItem
{
	class ASQPlayerState*                              NomineeState;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VoteCount;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CommanderNomineeArray
// 0x0010 (0x0118 - 0x0108)
struct FCommanderNomineeArray : public FFastArraySerializer
{
	TArray<struct FCommanderVoteNominee>               Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRemoteServerConfig
// 0x0001
struct FSQRemoteServerConfig
{

};
// ScriptStruct Squad.SQRemoteGameConfig
// 0x0010
struct FSQRemoteGameConfig
{
	bool                                               bLicensingEnabled;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerHealthEnabled;                                      // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerHealthHigh;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerHealthLow;                                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModdedServersOnTop;                                       // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQServerSettings
// 0x0078
struct FSQServerSettings
{

};
// ScriptStruct Squad.SQConfigValueLoader
// 0x0008
struct FSQConfigValueLoader
{

};
// ScriptStruct Squad.SQConfigMappedValueLoader
// 0x0050 (0x0058 - 0x0008)
struct FSQConfigMappedValueLoader : public FSQConfigValueLoader
{

};
// ScriptStruct Squad.SQConsoleCommand
// 0x0038 (0x0060 - 0x0028)
struct FSQConsoleCommand : public FAutoCompleteCommand
{

};
// ScriptStruct Squad.SQCoreStateId
// 0x0002
struct FSQCoreStateId
{
	uint16_t                                           Raw;                                                       // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCoreStateDataToIdMap
// 0x0050
struct FSQCoreStateDataToIdMap
{
	TMap<class USQCoreStateData*, struct FSQCoreStateId> Raw;                                                       // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CoreStateDataTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCoreStateDataTickFunction : public FTickFunction
{
	class USQCoreStateData*                            Target;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCoreStateDataList
// 0x0010
struct FSQCoreStateDataList
{
	TArray<class USQCoreStateData*>                    Raw;                                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoldierInfo
// 0x0028
struct FSQSoldierInfo
{
	int                                                SquadId;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQAuthorityTypes                                  LeaderState;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQRoleSettings*                             CurrentRole;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleOccupantInfo
// 0x0010 (0x0038 - 0x0028)
struct FSQVehicleOccupantInfo : public FSQSoldierInfo
{
	unsigned char                                      bIsOccupied;                                               // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              PlayerState;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.WidgetGroup
// 0x0010
struct FWidgetGroup
{
	TArray<class USQCoreStateWidget*>                  List;                                                      // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEffectParticleSound
// 0x0018
struct FSQEffectParticleSound
{
	class UClass*                                      LastingEffectClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleEffect;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SoundEffect;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDamageEffect
// 0x0018
struct FSQDamageEffect
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQEffectParticleSound>              Effects;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDamageTypeEffects
// 0x0028
struct FSQDamageTypeEffects
{
	struct FSQDamageEffect                             DefaultDamageEffect;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FSQDamageEffect>                     DamageEffects;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDamageModifier
// 0x0028
struct FSQDamageModifier
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Modifier;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForwardDamageToSoldier;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwardDamageToSoldierModifier;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForwardDeathToSoldier;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncapSoldierOnDeath;                                      // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyPassDamageIfDirectHit;                                // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectHitDamageMultiplier;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectHitDamageMultiplier;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectHitRadialDamageMultiplier;                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDeployableChangeStateEffect
// 0x0020
struct FSQDeployableChangeStateEffect
{
	ESQBuildState                                      OldBuildState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      NewBuildState;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullingDistanceInMeters;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQEffectParticleSound                      Effect;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDeployableStateDamageEffect
// 0x0018
struct FSQDeployableStateDamageEffect
{
	ESQBuildState                                      OldBuildState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      NewBuildState;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullingDistanceInMeters;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQDamageEffect>                     DamageEffects;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQHUDMessage
// 0x0030
struct FSQHUDMessage
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Scale;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExpireTime;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeTime;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct Squad.SQMessageBoxInfo
// 0x0078
struct FSQMessageBoxInfo
{
	struct FSlateFontInfo                              FontInfo;                                                  // 0x0000(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQHUDMessage>                       Messages;                                                  // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MessageBoxLocation;                                        // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNumberOfMessagesToShow;                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessagesLifetime;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessagesFadeTime;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextHorizontalAlignment                         MessageHorizontalAlignment;                                // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextVerticalAlignment                           MessageVerticalAlignment;                                  // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScrollUp;                                                 // 0x0076(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDrawChatStruct
// 0x00B0
struct FSQDrawChatStruct
{
	struct FVector2D                                   RenderPosition;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQMessageBoxInfo                           Info;                                                      // 0x0030(0x0078) (NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAudioComponentPool
// 0x0020
struct FSQAudioComponentPool
{
	TArray<class UAudioComponent*>                     AudioComponentPool;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAnimPlayTime
// 0x000C
struct FSQAnimPlayTime
{
	float                                              WeaponPlayTime;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Soldier1pPlayTime;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Soldier3pPlayTime;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBlueprintFriend
// 0x0060
struct FSQBlueprintFriend
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealName;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatusString;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnline;                                                 // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlaying;                                                // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayingThisGame;                                        // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsJoinable;                                               // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFlagScoreInfo
// 0x001C
struct FSQFlagScoreInfo
{
	int                                                ScoreForFlagNeutralize;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreForCapture;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreForDefense;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreOnCaptureTick;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreOnDefenseTick;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               CaptureReportChannel;                                      // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               NeutralizeReportChannel;                                   // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               DefenseReportChannel;                                      // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyPlayerOnNeutral;                                    // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyPlayerOnCapture;                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyPlayerOnDefense;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyPlayerOnTick;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQGameSubsystemObject
// 0x0018
struct FSQGameSubsystemObject
{
	struct FString                                     SubsystemClass;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunOnServer;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunOnClient;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDesignLink
// 0x0010
struct FSQDesignLink
{
	class AActor*                                      NodeA;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NodeB;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoute
// 0x0020
struct FSQRoute
{
	TArray<struct FSQGraphLink>                        Links;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     Source;                                                    // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     Destination;                                               // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoute2
// 0x0050
struct FSQRoute2
{

};
// ScriptStruct Squad.SQGrenadeData
// 0x0048
struct FSQGrenadeData
{
	bool                                               bInfiniteAmmo;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char											   _pad1[3];
	int                                                InitialAmmo;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmo;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverhandThrowVelocity;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnderhandThrowVelocity;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowReadyTime;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverhandThrowTime;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnderhandThrowTime;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverhandThrowDuration;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnderhandThrowDuration;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowModeTransitionTime;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FuseTimeMin;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FuseTimeMax;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadTime;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ProjectileClass;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ProjectileOriginSocketName;                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQGroundVehicleWheelParameters
// 0x0040
struct FSQGroundVehicleWheelParameters
{
	float                                              WheelsInAir;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RPM;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongSlip;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LatSlip;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Asphalt;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Dirt;                                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Grass;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gravel;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Metal;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mud;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sand;                                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Snow;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnowWet;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TallGrass;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Water;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Wood;                                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleEffectsQualitySetting
// 0x0008
struct FSQVehicleEffectsQualitySetting
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullingDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleEffectConfig
// 0x0030
struct FSQVehicleEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSounds;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       WheelBoneName;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UVehicleWheel>                VehicleWheel;                                              // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USQPhysicalMaterial>          PhysMaterial;                                              // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBoredMontageSet
// 0x0018
struct FSQBoredMontageSet
{
	class UAnimMontage*                                BoredWeaponMontage;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Bored1pMontage;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Bored3pMontage;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMutualWeapon
// 0x00D0
struct FSQMutualWeapon
{
	class UClass*                                      Weapon;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckCurrentMagazineForEquip;                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CheckCurrentMagazineForUnequip;                            // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPreviousMagazineForEquip;                            // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                BothEmptyWeaponEquipMontage;                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                BothEmpty1pEquipMontage;                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                BothEmpty3pEquipMontage;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BothEmptyEquipDuration;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrentWeaponEquipMontage;            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent1pEquipMontage;                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent3pEquipMontage;                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousEmptyOrIgnoreCurrentEquipDuration;                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyOrIgnorePreviousWeaponEquipMontage;            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious1pEquipMontage;                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious3pEquipMontage;                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentEmptyOrIgnorePreviousEquipDuration;                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneEmptyOrIgnoreBothWeaponEquipMontage;                   // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth1pEquipMontage;                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth3pEquipMontage;                       // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoneEmptyOrIgnoreBothEquipDuration;                        // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyWeaponUnequipMontage;                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmpty1pUnequipMontage;                              // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmpty3pUnequipMontage;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentEmptyUnequipDuration;                               // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneOrIgnoreCurrentWeaponUnequipMontage;                   // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneOrIgnoreCurrent1pUnequipMontage;                       // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneOrIgnoreCurrent3pUnequipMontage;                       // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoneOrIgnoreCurrentUnequipDuration;                        // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQHealSettings
// 0x0024
struct FSQHealSettings
{
	int                                                TicketsLostOnRevive;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnHeal;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnSelfHeal;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForHeal;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForSelfHeal;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForRevive;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForHeal;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForSelfHeal;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayHealScore;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelaySelfHealScore;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleDeathTicket
// 0x0038
struct FSQVehicleDeathTicket
{
	int                                                TicketsLostOnVehicleDestroy;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForVehicleDestroy;                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayVehicleDestroyScore;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQKillDeathSettings
// 0x0050
struct FSQKillDeathSettings
{
	TArray<struct FSQVehicleDeathTicket>               VehicleSettings;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnKill;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnSuicide;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnTeamkill;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLostOnKillCommander;                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               KillChannel;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               SuicideChannel;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQKillReportChannel                               TeamkillChannel;                                           // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForKill;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForWounded;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForSuicide;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForTeamkill;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForDeath;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForKill;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForSuicide;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForTeamkill;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamPointsForDeath;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NotifyKillerOnKill;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NotifyKillerOnTeamkill;                                    // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayKillScore;                                            // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayTeamkillScore;                                        // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayDeathScore;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRejectedLicenseInfo
// 0x0018
struct FSQRejectedLicenseInfo
{

};
// ScriptStruct Squad.SQLogisticsSettings
// 0x000C
struct FSQLogisticsSettings
{
	float                                              AmmoToScore;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstructionToScore;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PassengerPercent;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapListItem
// 0x0060
struct FSQMapListItem
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.TeamSquadFireteamIdKey
// 0x000C
struct FTeamSquadFireteamIdKey
{

};
// ScriptStruct Squad.SQMarkerLimiterTeam
// 0x00A0
struct FSQMarkerLimiterTeam
{

};
// ScriptStruct Squad.SQMarkerLimiterSquad
// 0x00A0
struct FSQMarkerLimiterSquad
{

};
// ScriptStruct Squad.SQMarkerLimiterFireTeam
// 0x0050
struct FSQMarkerLimiterFireTeam
{

};
// ScriptStruct Squad.SQMapMarkerGameplayData
// 0x0038
struct FSQMapMarkerGameplayData
{
	int                                                SquadId;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            TeamId;                                                    // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         LocationVector;                                            // 0x000C(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         DistanceRotationVector;                                    // 0x0018(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQMapMarkerDataAsset*                       MapMarkerDataAsset;                                        // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UniqueID;                                                  // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CreationTime;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMarkerTimestamps
// 0x0008
struct FSQMarkerTimestamps
{

};
// ScriptStruct Squad.SQMapMarkerFastArraySerializerItem
// 0x0044 (0x0050 - 0x000C)
struct FSQMapMarkerFastArraySerializerItem : public FFastArraySerializerItem
{
	struct FSQMapMarkerGameplayData                    MarkerGameplayData;                                        // 0x0010(0x0038) (NoDestructor, NativeAccessSpecifierPublic)
	struct FSQMarkerTimestamps                         AssignedTimestamp;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQStaticMapMarkerArray
// 0x0040 (0x0148 - 0x0108)
struct FSQStaticMapMarkerArray : public FFastArraySerializer
{
	TArray<struct FSQMapMarkerFastArraySerializerItem> Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ModifiedMarkerIndices;                                     // 0x0118(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    MapMarkerCreatedEvent;                                     // 0x0128(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    MapMarkerDeletedEvent;                                     // 0x0138(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMenuItemStyle
// 0x0198 (0x01A0 - 0x0008)
struct FSQMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftArrowImage;                                            // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightArrowImage;                                           // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                            // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 ExitGameSound;                                             // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMenuStyle
// 0x01F8 (0x0200 - 0x0008)
struct FSQMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                     // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftBackgroundBrush;                                       // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightBackgroundBrush;                                      // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateSound                                 MenuEnterSound;                                            // 0x01A0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 MenuBackSound;                                             // 0x01B8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 OptionChangeSound;                                         // 0x01D0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 MenuItemChangeSound;                                       // 0x01E8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRepMovement
// 0x0040
struct FSQRepMovement
{
	struct FVector                                     LocationZeroBased;                                         // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RotationalVelocity;                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerTimestamp;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.MovePacket
// 0x0038
struct FMovePacket
{
	uint32_t                                           UniqueID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OldMove;                                                   // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              NewMove;                                                   // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              PendingMove;                                               // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMontageSectionNames
// 0x0028
struct FSQMontageSectionNames
{
	struct FName                                       BeginSection;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LoopSection1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LoopSection2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndSection;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MidEndSection;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.AdjustPositionAndRotationPacket
// 0x0030
struct FAdjustPositionAndRotationPacket
{
	uint32_t                                           UniqueID;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAcknowledge;                                             // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasPosition;                                               // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasRotation;                                               // 0x000A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasRotationVelocity;                                       // 0x000B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationZeroBased;                                         // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotationConstraints
// 0x001C
struct FSQRotationConstraints
{
	struct FVector2D                                   PitchInterval;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   YawInterval;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RollInterval;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockPitch;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockYaw;                                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockRoll;                                                 // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQNotificationLayout
// 0x0030
struct FSQNotificationLayout
{
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                IconColor;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQOptionsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQOptionsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 AcceptChangesSound;                                        // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 DiscardChangesSound;                                       // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponGroupData
// 0x001C (0x0028 - 0x000C)
struct FSQWeaponGroupData : public FFastArraySerializerItem
{
	TArray<class ASQEquipableItem*>                    Weapons;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedWeaponOffset;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponGroupDataArray
// 0x0010 (0x0118 - 0x0108)
struct FSQWeaponGroupDataArray : public FFastArraySerializer
{
	TArray<struct FSQWeaponGroupData>                  Items;                                                     // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMovePostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSQMovePostPhysicsTickFunction : public FTickFunction
{
	class USQPawnMovementComponent*                    Target;                                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoldierEffect
// 0x0038
struct FSQSoldierEffect
{
	class UCurveFloat*                                 SoldierInclineMovementSpeedCurve;                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayFootstepEffectWhenMovementInteractionTriggered;       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FootstepEffect;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FootstepSound;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MovementInteractionParticleEffect;                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MovementInteractionSound;                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   LandedSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPhysMatVehicleFXData
// 0x0064
struct FSQPhysMatVehicleFXData
{
	float                                              Asphalt;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Dirt;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Grass;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gravel;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Metal;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mud;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sand;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Snow;                                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnowWet;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TallGrass;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Water;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Wood;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DustColor;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DustLifetime;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DustSize;                                                  // 0x0044(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebrisColor;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebrisSpawnRate;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleEffect
// 0x0090
struct FSQVehicleEffect
{
	struct FSQPhysMatVehicleFXData                     VehicleFXData;                                             // 0x0000(0x0064) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleLightImpactSound;                                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleLightImpactEffect;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleImpactSound;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleImpactEffect;                                       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoVehicleParticlesUseRotation;                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQProjectileImpactEffect
// 0x0088
struct FSQProjectileImpactEffect
{
	TArray<class UParticleSystem*>                     Particles;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      Shockwave;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                           Sounds;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                           FirstPersonSounds;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                           RicochetSounds;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USoundCue*>                           RicochetFirstPersonSounds;                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  decals;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      bDoParticlesUseRotation;                                   // 0x0068(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDecalSize;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDecalSize;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkewDecalSize;                                            // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalDepth;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalLifeSpan;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeDecalRotation;                                   // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQExplosionEffect
// 0x0020 (0x00A8 - 0x0088)
struct FSQExplosionEffect : public FSQProjectileImpactEffect
{
	class UParticleSystem*                             ShockwaveParticleEffect;                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ShockwaveSound;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ShockwaveDecalMaterial;                                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DebrisSound;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEffectsSet
// 0x0248
struct FSQEffectsSet
{
	struct FSQProjectileImpactEffect                   ImpactEffects;                                             // 0x0000(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQProjectileImpactEffect                   ThrowableEffects;                                          // 0x0088(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQExplosionEffect                          ExplosionEffects;                                          // 0x0110(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQProjectileImpactEffect                   BlastEffects;                                              // 0x01B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bOverlapsThrowableProjectiles;                             // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.DeployableItem
// 0x000C (0x0018 - 0x000C)
struct FDeployableItem : public FFastArraySerializerItem
{
	class ASQDeployable*                               Deployable;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.DeployableItemsArray
// 0x0010 (0x0118 - 0x0108)
struct FDeployableItemsArray : public FFastArraySerializer
{
	TArray<struct FDeployableItem>                     Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.PlayerStateDataObject
// 0x0060
struct FPlayerStateDataObject
{
	int                                                Lives;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumKills;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumDeaths;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumWoundeds;                                               // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumWounds;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumTeamkills;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealPoints;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RevivedPoints;                                             // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamWorkScore;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObjectiveScore;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdmin;                                                    // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDev;                                                      // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bQA;                                                       // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMember;                                                   // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCommander;                                                // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamIndex;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamPosition;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerNamePrefix;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    SupporterPatch;                                            // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReplicationKey;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              Owner;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.TeamSquadId
// 0x0008
struct FTeamSquadId
{

};
// ScriptStruct Squad.SQRoleKitIconLookup
// 0x0008 (0x0010 - 0x0008)
struct FSQRoleKitIconLookup : public FTableRowBase
{
	class USQRoleSettings*                             RoleSetting;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotationRepMovement
// 0x0000 (0x0040 - 0x0040)
struct FSQRotationRepMovement : public FSQRepMovement
{

};
// ScriptStruct Squad.PlayerWidgetPair
// 0x0010
struct FPlayerWidgetPair
{
	class USQScoreboardPlayer*                         PlayerWidget;                                              // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              PlayerState;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SquadWidgetPair
// 0x0010
struct FSquadWidgetPair
{
	class USQScoreboardSquad*                          SquadWidget;                                               // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSquadState*                               SquadState;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQScoreboardStyle
// 0x0100 (0x0108 - 0x0008)
struct FSQScoreboardStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 ItemBorderBrush;                                           // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 KillStatColor;                                             // 0x0090(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 DeathStatColor;                                            // 0x00B8(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ScoreStatColor;                                            // 0x00E0(0x0028) (Edit, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotator_NetQuantizeShorts
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeShorts : public FRotator
{

};
// ScriptStruct Squad.SQRotator_NetQuantizeBytes
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeBytes : public FRotator
{

};
// ScriptStruct Squad.SQClimbTraceHitResults
// 0x002C
struct FSQClimbTraceHitResults
{
	struct FVector                                     EndingPoint1;                                              // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockingHit;                                              // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ClimbFrontNormal;                                          // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClimbDistanceFromWall;                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ClimbTraceHit2;                                            // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVaultTraceHitResults
// 0x00AC
struct FSQVaultTraceHitResults
{
	struct FHitResult                                  bVaultLineTrace1Hit;                                       // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     VaultOppSideWallHit;                                       // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultDistanceFromOppSideWall;                              // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VaultEndingPointLineTraceImpact;                           // 0x0098(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVaultLineTrace2Hit;                                       // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToNewLocation;                                     // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDistanceDatum
// 0x0014
struct FSQDistanceDatum
{
	float                                              FadeInDistanceStart;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeInDistanceEnd;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceStart;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceEnd;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoundWeight
// 0x0010
struct FSQSoundWeight
{
	class USoundWave*                                  Sound;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBeenUsed;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWaypoint
// 0x0030
struct FSQWaypoint
{
	struct FVector                                     WorldPosition;                                             // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                               // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           PathPoints;                                                // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.VehicleOccupantsItem
// 0x0044 (0x0050 - 0x000C)
struct FVehicleOccupantsItem : public FFastArraySerializerItem
{
	struct FSQVehicleOccupantInfo                      VehicleOccupantInfo;                                       // 0x0010(0x0038) (NativeAccessSpecifierPublic)
	int8_t                                             SeatId;                                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DirtyCount;                                                // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.VehicleOccupantsArray
// 0x0010 (0x0118 - 0x0108)
struct FVehicleOccupantsArray : public FFastArraySerializer
{
	TArray<struct FVehicleOccupantsItem>               Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMedicCalls
// 0x0078
struct FSQMedicCalls
{

};
// ScriptStruct Squad.SQTeamEventSounds
// 0x00C8
struct FSQTeamEventSounds
{

};
// ScriptStruct Squad.SQCommanderSounds
// 0x0140
struct FSQCommanderSounds
{

};
// ScriptStruct Squad.SQObjectiveSounds
// 0x00A0
struct FSQObjectiveSounds
{

};
// ScriptStruct Squad.SQRoleGroupLimit
// 0x0014
struct FSQRoleGroupLimit
{
	ESQRoleTypeEnum                                    RoleGroup;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLimit;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLimit;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadMembersPerSlotIncrease;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotsPerIncrease;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimit
// 0x0024
struct FSQRoleLimit
{
	int                                                MinPerTeam;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPerSquad;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadMembersToUnlockNextKit;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnlocksAtSquadSize;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StopScalingAtSquadSize;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamMembersToUnlockNextKit;                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnlocksAtTeamSize;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StopScalingAtTeamSize;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSquadLeaderOnly;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNonDeployable;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimitFASItem
// 0x0024 (0x0030 - 0x000C)
struct FSQRoleLimitFASItem : public FFastArraySerializerItem
{
	struct FSQRoleLimit                                Content;                                                   // 0x000C(0x0024) (NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimitArray
// 0x0010 (0x0118 - 0x0108)
struct FSQRoleLimitArray : public FFastArraySerializer
{
	TArray<struct FSQRoleLimitFASItem>                 Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSettingsRestriction
// 0x0018
struct FSQSettingsRestriction
{
	struct FString                                     Setting;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQServerSlot
// 0x0028
struct FSQServerSlot
{
	class ASQJoinBeaconClient*                         ClientBeacon;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQConnectionCheckResponse
// 0x0008
struct FSQConnectionCheckResponse
{
	unsigned char                                      bCanQueue;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurrentTotalPlayers;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoundTripRPCTimeMS;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleDestroyedConfig
// 0x0010
struct FSQVehicleDestroyedConfig
{
	class UClass*                                      DamageType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DestroyedVehicleClass;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleDestroyEffectConfig
// 0x0010
struct FSQVehicleDestroyEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDeployableLimit
// 0x0010
struct FSQDeployableLimit
{
	class UClass*                                      DeployableClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxPerFob;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleSeatAnimationState
// 0x0058
struct FSQVehicleSeatAnimationState
{
	class UAnimMontage*                                PawnAnimation;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SeatAnimation;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               BaseAnimation;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 AimOffsets;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWheelBlendSpace1D;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               WheelBlendSpace1D;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHandIK;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWeaponForHandIK;                                       // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftHandIKAlpha;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LeftHandIKSocketName;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightHandIKAlpha;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RightHandIKSocketName;                                     // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               SteeringWheelSingleFrameAnimSequence;                      // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleSeatTransitionState
// 0x0020
struct FSQVehicleSeatTransitionState
{
	ESQSoldierSeatState                                SoldierSeatState;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionDamageMultipler;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierCanTakeDirectRadialDamage;                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDetachSoldier;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectDeadSoldier;                                         // 0x000A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectIncappedSoldier;                                     // 0x000B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeatIsInTheOpen;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyPlayExteriorVehicleSounds;                            // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   SoundMix;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQListenerType                                    ListenerTypeOverride;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleSeatState
// 0x0078
struct FSQVehicleSeatState
{
	struct FSQVehicleSeatAnimationState                AnimationState;                                            // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSQVehicleSeatTransitionState               TransitionState;                                           // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleSeatConfig
// 0x0050
struct FSQVehicleSeatConfig
{
	ESQVehicleRoleAbility                              SeatAbilityRequirement;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDetachSoldier;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeatHealth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRepairToolLimit;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassDamageToVehicle;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionDamageMultipler;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassPointDamageToVehicle;                                 // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierCanTakeDirectRadialDamage;                         // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassRadialDamageToVehicle;                                // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SeatAttachSocket;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SoldierAttachSocket;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SeatPawn;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialState;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQVehicleSeatState>                 SeatStates;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bShouldAlwaysStayRegistered;                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierInSeatCanCapture;                                  // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRotationComponentForControlRotation;                   // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerEnterDuration;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQOnlineInventorySetting
// 0x0008
struct FSQOnlineInventorySetting
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQShockwaveQualitySetting
// 0x0010
struct FSQShockwaveQualitySetting
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VerticalSteps;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HorizontalSteps;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullingDistance;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQTextureMemoryStats
// 0x001C
struct FSQTextureMemoryStats
{
	int                                                DedicatedVideoMemory;                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DedicatedSystemMemory;                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SharedSystemMemory;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalGraphicsMemory;                                       // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AllocatedMemorySize;                                       // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TexturePoolSize;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PendingMemoryAdjustment;                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAnnouncement
// 0x0030
struct FSQAnnouncement
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Link;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCreditsList
// 0x0028
struct FSQCreditsList
{
	ESQCreditsLineType                                 LineType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Columns;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPlayerLimiter
// 0x0008
struct FSQPlayerLimiter
{
	int                                                NumberOfPlayers;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFontInfo
// 0x0060
struct FSQFontInfo
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextHorizontalAlignment                         HorizontalAlignment;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTextVerticalAlignment                           VerticalAlignment;                                         // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawShadow;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowDirection;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawOutline;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutlineColor;                                              // 0x004C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoCount
// 0x0008
struct FSQPersistedAmmoCount
{
	int                                                AmmoCount;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoGroup
// 0x0010
struct FSQPersistedAmmoGroup
{
	TArray<struct FSQPersistedAmmoCount>               AmmoCounts;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoState
// 0x0018
struct FSQPersistedAmmoState
{
	TArray<struct FSQPersistedAmmoGroup>               AmmoGroups;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class USQRoleSettings*                             PersistedRole;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInventoryWeaponGroupData
// 0x0010
struct FSQInventoryWeaponGroupData
{
	TArray<struct FSQInventoryData>                    WeaponItems;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQTestInventoryData
// 0x0010
struct FSQTestInventoryData
{
	TArray<struct FSQInventoryWeaponGroupData>         GroupItems;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSpringInterpStruct3D
// 0x0030
struct FSQSpringInterpStruct3D
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Damping;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MinLimits;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxLimits;                                                 // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDynamicEasingStruct
// 0x0014
struct FSQDynamicEasingStruct
{
	float                                              Target;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Velocity;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Acceleration;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OppositeAcceleration;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCameraShake
// 0x0020
struct FSQCameraShake
{
	class UClass*                                      Shake;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientShakeTowardsEpicenter;                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoliderNetPriorityObject
// 0x000C
struct FSQSoliderNetPriorityObject
{
	float                                              distance;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetPriority;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetPriorityWhenBehind;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapData
// 0x0040
struct FSQMapData
{
	struct FString                                     ShortName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadingScreenTexturePath;                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapPaths;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQExplosiveShotInfo
// 0x000C (0x0038 - 0x002C)
struct FSQExplosiveShotInfo : public FSQShotInfo
{
	class UClass*                                      ProjectileClass;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSessionFlagStruct
// 0x0008
struct FSQSessionFlagStruct
{
	int                                                ServerHealth;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsAnticheatProtected;                                     // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFTEText
// 0x0030
struct FSQFTEText
{
	struct FText                                       FTEText;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActionKeys;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRadialDamageEvent
// 0x0090 (0x00D0 - 0x0040)
struct FSQRadialDamageEvent : public FRadialDamageEvent
{
	bool                                               bDirectHit;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0044(0x0088) (Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleQueueEntry
// 0x0020
struct FSQVehicleQueueEntry
{
	class ASQPlayerController*                         Player;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEngineMovementSoundObject
// 0x0028
struct FSQEngineMovementSoundObject
{
	class USoundCue*                                   EngineSound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gear;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAcceleratingSound;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachBoneName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutEndVolume;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             AudioComponent;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleWeaponConfig
// 0x0008
struct FSQVehicleWeaponConfig
{
	class UClass*                                      WeaponClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleRecoil
// 0x000C
struct FSQVehicleRecoil
{
	struct FVector2D                                   RecoilFactor;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RepeatAmount;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotationVelocityRepMovement
// 0x0010 (0x0050 - 0x0040)
struct FSQRotationVelocityRepMovement : public FSQRepMovement
{

};
// ScriptStruct Squad.SQRangeConstraints
// 0x0038
struct FSQRangeConstraints
{
	bool                                               bEnablePitchInterval;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableYawInterval;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRollInterval;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PitchInterval;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   YawInterval;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RollInterval;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQRotationConstraints                      Constraints;                                               // 0x001C(0x001C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPenetrationProxy
// 0x0000 (0x00AC - 0x00AC)
struct FSQPenetrationProxy : public FSQPenetrationTrace
{

};
// ScriptStruct Squad.SQMagazineData
// 0x0008
struct FSQMagazineData
{
	int                                                DefaultRoundsPerMag;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingRounds;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponSpring
// 0x0024
struct FSQWeaponSpring
{
	struct FVector                                     WeaponSpringFactor;                                        // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WeaponSpringRotationPivot;                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    WeaponSpringRotationFactor;                                // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponEffects
// 0x0038
struct FSQWeaponEffects
{
	class UParticleSystem*                             MuzzleFlashEffect1P;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MuzzleFlashEffect3P;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ShellEjection1P;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ShellEjection3P;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MuzzleFlashSocket;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShellEjectionSocket;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MuzzleFlashCullDistanceInMeters;                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShellEjectionCullDistanceInMeters;                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRecoilData
// 0x0048
struct FSQRecoilData
{
	struct FVector2D                                   RecoilFactorMin;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RecoilFactorMax;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoilZoomFactor;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoilDuration;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NotAimingDownSightsMultiplier;                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RecoilCurve;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RecoilCurveCrouch;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RecoilCurveProne;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecoilCurveIndex;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRecoilMultipliers;                                     // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchRecoilMultiplier;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProneRecoilMultiplier;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponAnims
// 0x0048
struct FSQWeaponAnims
{
	class UAnimSequence*                               StandAnim;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               EquipAnim;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               FireRecoilAnim;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               FireTriggerAnim;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               ReloadAnim;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               DryAnim;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               ToggleFiremodeAnim;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLockBult;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerPullDuration;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                AimOffsetCurve;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponSounds
// 0x0088
struct FSQWeaponSounds
{
	class USoundCue*                                   FireSound1P;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FireSound3P;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReloadSound1P;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReloadSound3P;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DryReloadSound1P;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DryReloadSound3P;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EquipSound1P;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EquipSound3P;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   UnequipSound1P;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   UnequipSound3P;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TriggerSound1P;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TriggerSound3P;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   BoltSound1P;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   BoltSound3P;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ToggleFiremodeSound1P;                                     // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ToggleFiremodeSound3P;                                     // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SoundSocket;                                               // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMeshTransitionSettings
// 0x0040
struct FSQMeshTransitionSettings
{
	float                                              TransitionValue;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 Mesh;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  MeshTransform;                                             // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFireTriggerMontage
// 0x0010
struct FSQFireTriggerMontage
{
	class UAnimMontage*                                FireWeaponMontage;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FireTriggerMontage;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAdjustableSightMontageSet
// 0x0040
struct FSQAdjustableSightMontageSet
{
	class UAnimMontage*                                BaseAdjustAds3pMontage;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AdjustAdsTransition3pMontage;                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AdjustFromAdsTransition3pMontage;                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    LineOfFireAngle;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       DistanceText;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMinimapMakerSettings
// 0x0550
struct FSQMinimapMakerSettings
{
	ESQTileResolution                                  TileResolution;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTileCount                                       TileCount;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPostProcessSettings                        MinimapPostProcessor;                                      // 0x0010(0x0530) (Edit, NativeAccessSpecifierPublic)
	int                                                MinimapFOV;                                                // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimitOverride
// 0x0030
struct FSQRoleLimitOverride
{
	class USQRoleSettings*                             Role;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQRoleLimit                                Limit;                                                     // 0x0008(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQUsableWidgetData
// 0x0038
struct FSQUsableWidgetData
{
	struct FText                                       UsableText;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CustomTexture;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CustomColor;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InteractWidgetItemClass;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQUsableData
// 0x0040
struct FSQUsableData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FSQUsableWidgetData>                 InteractionData;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      InteractWidgetClass;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DrawLocationOffset;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQInteractVisibility                              InteractVisiblity;                                         // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBoneDamageMod
// 0x000C
struct FSQBoneDamageMod
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageMod;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQTakeHitInfo
// 0x0138
struct FSQTakeHitInfo
{
	float                                              ActualDamage;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerTimestamp;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ASQSoldier>                   PawnInstigator;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageEventClassID;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bKilled;                                                   // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWounded;                                                  // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEjectedFromVehicle;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                GeneralDamageEvent;                                        // 0x0028(0x0010) (Protected, NativeAccessSpecifierProtected)
	struct FPointDamageEvent                           PointDamageEvent;                                          // 0x0038(0x00A8) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FRadialDamageEvent                          RadialDamageEvent;                                         // 0x00E0(0x0040) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPhysicalMaterial>            PackagedHitResultPhysMaterial;                             // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       PackagedHitResultActor;                                    // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>          PackagedHitResultComponent;                                // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct Squad.SQBoneHitSound
// 0x0010
struct FSQBoneHitSound
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSound;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDraggingData
// 0x0018
struct FSQDraggingData
{
	class ASQSoldier*                                  Dragee;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSoldier*                                  Dragger;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DraggedBoneIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CommanderCategory
// 0x0020
struct FCommanderCategory
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapMarkerVisualData
// 0x00C8
struct FSQMapMarkerVisualData
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapIconSelectionGroup                           SelectionGroup;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SelectedTexture;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SelectedTint;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapMarkerType                                   MapMarkerType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQMapWidgetTint>                      MapMarkerTintType;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapMarkerVisibleTo                              MapMarkerVisibleTo;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemType                                     Type;                                                      // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisibleWhenNeutral;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQEmotes                                          PlacementEmote;                                            // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldOverrideTint;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OverrideTint;                                              // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // 0x004C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotPivot;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemDrawMode                                 DrawModeX;                                                 // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemDrawMode                                 DrawModeY;                                                 // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQMapMarkerGameplayData                    MarkerGameplayData;                                        // 0x0088(0x0038) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQBasedMovementInfo
// 0x0030
struct FSQBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                  // 0x0010(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bServerHasBaseComponent;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeRotation;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerHasVelocity;                                        // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInputState
// 0x0020
struct FSQInputState
{
	struct FString                                     RequestReason;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 Focus;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGameInput;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayMouse;                                             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUIInput;                                                  // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRemoteTalkerDisplayInfo
// 0x0010
struct FSQRemoteTalkerDisplayInfo
{
	class ASQPlayerState*                              PlayerState;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQVoiceChannel                                    Channel;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbTypeData
// 0x0030
struct FSQClimbTypeData
{
	float                                              EndSpace;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeight;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RequiredAnimationTime;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFiringDisabled;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaCost;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage1P;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage3P;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbOverTypeData
// 0x0018 (0x0048 - 0x0030)
struct FSQClimbOverTypeData : public FSQClimbTypeData
{
	float                                              MinVerticalSpace;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateTimeToMidStart;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateTimeToMidEnd;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateTimeToEnd;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidHorizonalSpace;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbOverData
// 0x00A0
struct FSQClimbOverData
{
	float                                              MaxMoveDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinMiddleMoveDistance;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidCollisionShapeScale;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQClimbOverTypeData                        Low;                                                       // 0x0010(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQClimbOverTypeData                        Mid;                                                       // 0x0058(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbOntoTypeData
// 0x0008 (0x0038 - 0x0030)
struct FSQClimbOntoTypeData : public FSQClimbTypeData
{
	float                                              InterpolateTime;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbOntoData
// 0x00A8
struct FSQClimbOntoData
{
	struct FSQClimbOntoTypeData                        Low;                                                       // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQClimbOntoTypeData                        Mid;                                                       // 0x0038(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQClimbOntoTypeData                        High;                                                      // 0x0070(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbData
// 0x0178
struct FSQClimbData
{
	float                                              MinHeight;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQClimbOverData                            OverData;                                                  // 0x0008(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQClimbOntoData                            OntoData;                                                  // 0x00A8(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              MinMoveToStartSpeed;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchDistance;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxClimbableAngle;                                         // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchCorrectionTime;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchCorrectionMidPoint;                                   // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CielingNormalTollerance;                                   // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverlapDetectionScale;                                     // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActorLocationAcceptanceDistance;                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerAcceptanceDistance;                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbInfo
// 0x0030
struct FSQClimbInfo
{
	EClimbType                                         PendingType;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector_NetQuantize10>               PendingClimbMovePathZeroBased;                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	EClimbState                                        PendingState;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVoipAnim
// 0x0020
struct FSQVoipAnim
{
	class UAnimMontage*                                FirstPersonAnim;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPersonEndAnim;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonEndAnim;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
