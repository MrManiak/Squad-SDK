#pragma once

// Name: S, Version: b


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
	Out                            = 0,
	Entered                        = 1,
	FullWeight                     = 2,
	Left                           = 3,
	MAX                            = 4,

};

// Enum Squad.ESQDrivenDestinationMode
enum class ESQDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	MAX                            = 3,

};

// Enum Squad.ESQDrivenBoneModificationMode
enum class ESQDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	MAX                            = 3,

};

// Enum Squad.ESQComponentType
enum class ESQComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	MAX                            = 11,

};

// Enum Squad.EApprovalRequestChannels
enum class EApprovalRequestChannels : uint8_t
{
	Undefined                      = 0,
	SquadLeader                    = 1,
	SinglePlayer                   = 2,
	MAX                            = 3,

};

// Enum Squad.EApprovalRequestTypes
enum class EApprovalRequestTypes : uint8_t
{
	Undefined                      = 0,
	VehicleClaim                   = 1,
	RequestToJoinSquad             = 2,
	MAX                            = 3,

};

// Enum Squad.ESQReturnBool
enum class ESQReturnBool : uint8_t
{
	IsTrue                         = 0,
	IsFalse                        = 1,
	MAX                            = 2,

};

// Enum Squad.ESQBuffTypes
enum class ESQBuffTypes : uint8_t
{
	ProtectionZone                 = 0,
	PendingDeath                   = 1,
	NoFallDamage                   = 2,
	StagingPhase                   = 3,
	Max                            = 4,

};

// Enum Squad.ESQConsoleMessageType
enum class ESQConsoleMessageType : uint8_t
{
	Normal                         = 0,
	Warning                        = 1,
	Error                          = 2,
	MAX                            = 3,

};

// Enum Squad.ESQConsoleVariableViewerState
enum class ESQConsoleVariableViewerState : uint8_t
{
	None                           = 0,
	Soldier                        = 1,
	Driver                         = 2,
	Passenger                      = 3,
	Spectator                      = 4,
	MAX                            = 5,

};

// Enum Squad.ESQConsoleVariableRange
enum class ESQConsoleVariableRange : uint8_t
{
	Self                           = 0,
	Meters                         = 1,
	Meters01                       = 2,
	Meters02                       = 3,
	Meters03                       = 4,
	Meters04                       = 5,
	Meters05                       = 6,
	Meters06                       = 7,
	Meters07                       = 8,
	Meters08                       = 9,
	Meters09                       = 10,
	Meters10                       = 11,
	Meters11                       = 12,
	Meters12                       = 13,
	MAX                            = 14,

};

// Enum Squad.EListLayout
enum class EListLayout : uint8_t
{
	SquadList                      = 0,
	RoleList                       = 1,
	InviteList                     = 2,
	MAX                            = 3,

};

// Enum Squad.ESQSelectionState
enum class ESQSelectionState : uint8_t
{
	None                           = 0,
	Highlighted                    = 1,
	Selected                       = 2,
	MAX                            = 3,

};

// Enum Squad.EJoinButtonState
enum class EJoinButtonState : uint8_t
{
	None                           = 0,
	Join                           = 1,
	Full                           = 2,
	Locked                         = 3,
	MAX                            = 4,

};

// Enum Squad.ESQAuthorityTypes
enum class ESQAuthorityTypes : uint8_t
{
	None                           = 0,
	FireteamLeader                 = 1,
	SquadLeader                    = 2,
	Commander                      = 3,
	MAX                            = 4,

};

// Enum Squad.ESQAxis
enum class ESQAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	MAX                            = 4,

};

// Enum Squad.EFreeLookMode
enum class EFreeLookMode : uint8_t
{
	NeverFreeLook                  = 0,
	ToggleFreeLook                 = 1,
	AlwaysFreeLook                 = 2,
	MAX                            = 3,

};

// Enum Squad.ESQSpawnPointType
enum class ESQSpawnPointType : uint8_t
{
	None                           = 0,
	BaseSpawn                      = 1,
	HABSpawn                       = 2,
	RallySpawn                     = 3,
	CacheSpawn                     = 4,
	MAX                            = 5,

};

// Enum Squad.ESQContestingState
enum class ESQContestingState : uint8_t
{
	None                           = 0,
	Attackable                     = 1,
	Defendable                     = 2,
	MAX                            = 3,

};

// Enum Squad.ESQMoveSerializationMode
enum class ESQMoveSerializationMode : uint8_t
{
	OldMove                        = 0,
	DualFirstMove                  = 1,
	DualSecondMove                 = 2,
	SingleMove                     = 3,
	MAX                            = 4,

};

// Enum Squad.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	AllwaysRelevantTeamOnly        = 2,
	Spatialize_Static              = 3,
	Spatialize_Dynamic             = 4,
	Spatialize_Dormancy            = 5,
	MAX                            = 6,

};

// Enum Squad.ESQRotationMovementState
enum class ESQRotationMovementState : uint8_t
{
	Idle                           = 0,
	Starting                       = 1,
	Moving                         = 2,
	Stopping                       = 3,
	MAX                            = 4,

};

// Enum Squad.ESQRotorRunningState
enum class ESQRotorRunningState : uint8_t
{
	Accelerating                   = 0,
	Idling                         = 1,
	Locked                         = 2,
	MAX                            = 3,

};

// Enum Squad.ESQRotorState
enum class ESQRotorState : uint8_t
{
	None                           = 0,
	Starting                       = 1,
	Running                        = 2,
	Stopping                       = 3,
	Stopped                        = 4,
	MAX                            = 5,

};

// Enum Squad.ESQRotorType
enum class ESQRotorType : uint8_t
{
	Main                           = 0,
	Lateral                        = 1,
	MAX                            = 2,

};

// Enum Squad.ESQShockwaveEffectType
enum class ESQShockwaveEffectType : uint8_t
{
	Explosion                      = 0,
	Blast                          = 1,
	MAX                            = 2,

};

// Enum Squad.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	MOVE_Bipod                     = 0,
	MOVE_Climbing                  = 1,
	MOVE_MAX                       = 2,

};

// Enum Squad.ESQSoundNodeFlyByState
enum class ESQSoundNodeFlyByState : uint8_t
{
	Idle                           = 0,
	ComingTowardsNotPlaying        = 1,
	Playing                        = 2,
	MovingAwayNotPlaying           = 3,
	MAX                            = 4,

};

// Enum Squad.EVehicleClaimCheckResults
enum class EVehicleClaimCheckResults : uint8_t
{
	OK                             = 0,
	NullPtr                        = 1,
	EmptyRole                      = 2,
	MAX                            = 3,

};

// Enum Squad.ESquadMemberUIAction
enum class ESquadMemberUIAction : uint8_t
{
	MenuOpen                       = 0,
	PromoteToSL                    = 1,
	Kick                           = 2,
	SLInvite                       = 3,
	MAX                            = 4,

};

// Enum Squad.ESquadMemberUIViewMode
enum class ESquadMemberUIViewMode : uint8_t
{
	SquadMembers                   = 0,
	UnassignedMembers              = 1,
	MAX                            = 2,

};

// Enum Squad.ESeatProgressMenuMode
enum class ESeatProgressMenuMode : uint8_t
{
	InventoryOnly                  = 0,
	Entering                       = 1,
	Switching                      = 2,
	Exiting                        = 3,
	MAX                            = 4,

};

// Enum Squad.ESQVehicleClaimStatus
enum class ESQVehicleClaimStatus : uint8_t
{
	Active                         = 0,
	DroppedOff                     = 1,
	Abandoned                      = 2,
	Destroyed                      = 3,
	MAX                            = 4,

};

// Enum Squad.ESQInventoryModificationType
enum class ESQInventoryModificationType : uint8_t
{
	AddToInventory                 = 0,
	RemoveFromInventory            = 1,
	UpdateInventory                = 2,
	MAX                            = 3,

};

// Enum Squad.EWeaponType
enum class EWeaponType : uint8_t
{
	Backpack                       = 0,
	Primary                        = 1,
	Secondary                      = 2,
	Special                        = 3,
	MAX                            = 4,

};

// Enum Squad.ESQCreditsLineType
enum class ESQCreditsLineType : uint8_t
{
	None                           = 0,
	Header                         = 1,
	LineBreak                      = 2,
	Names                          = 3,
	MAX                            = 4,

};

// Enum Squad.ESQKillReportChannel
enum class ESQKillReportChannel : uint8_t
{
	None                           = 0,
	Admin                          = 1,
	Team                           = 2,
	TeamAndAdmin                   = 3,
	Public                         = 4,
	MAX                            = 5,

};

// Enum Squad.ESQRepairSource
enum class ESQRepairSource : uint8_t
{
	REPAIR_STATION                 = 0,
	REPAIR_TOOL                    = 1,
	REPAIR_MAX                     = 2,

};

// Enum Squad.ESQSpawnInventoryReason
enum class ESQSpawnInventoryReason : uint8_t
{
	SpawningIn                     = 0,
	SwappingRoles                  = 1,
	SwappingRolesPartialAmmo       = 2,
	MAX                            = 3,

};

// Enum Squad.ESQSoldierRagdollReason
enum class ESQSoldierRagdollReason : uint8_t
{
	NotInRagdoll                   = 0,
	NotReplicated                  = 1,
	Replicated                     = 2,
	ReplicatedAutoGetUp            = 3,
	MAX                            = 4,

};

// Enum Squad.ESQVehicleRoleAbility
enum class ESQVehicleRoleAbility : uint8_t
{
	LightVehicle                   = 0,
	HeavyVehicle                   = 1,
	FlyingVehicle                  = 2,
	MAX                            = 3,

};

// Enum Squad.ESQRearmType
enum class ESQRearmType : uint8_t
{
	MainOrEnvironment              = 0,
	ForwardBase                    = 1,
	Vehicle                        = 2,
	AmmoBag                        = 3,
	MAX                            = 4,

};

// Enum Squad.ESQGrenadeState
enum class ESQGrenadeState : uint8_t
{
	Idle                           = 0,
	PreparingOverhandThrow         = 1,
	PreparingUnderhandThrow        = 2,
	ThrowingOverhand               = 3,
	ThrowingUnderhand              = 4,
	Reloading                      = 5,
	MAX                            = 6,

};

// Enum Squad.ESQEquippableState
enum class ESQEquippableState : uint8_t
{
	None                           = 0,
	Unequipped                     = 1,
	Equipping                      = 2,
	Equipped                       = 3,
	Unequipping                    = 4,
	MAX                            = 5,

};

// Enum Squad.ESQVehicleDifferential4W
enum class ESQVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W                 = 0,
	LimitedSlip_FrontDrive         = 1,
	LimitedSlip_RearDrive          = 2,
	Open_4W                        = 3,
	Open_FrontDrive                = 4,
	Open_RearDrive                 = 5,
	MAX                            = 6,

};

// Enum Squad.ESQDeadState
enum class ESQDeadState : uint8_t
{
	GameNotStarted                 = 0,
	SpawningIn                     = 1,
	SelectingSpawn                 = 2,
	SelectingRole                  = 3,
	WaitingToSpawn                 = 4,
	InCap                          = 5,
	MAX                            = 6,

};

// Enum Squad.ESQTileCount
enum class ESQTileCount : uint8_t
{
	COUNT                          = 0,
	COUNT01                        = 1,
	COUNT02                        = 2,
	COUNT03                        = 3,
	COUNT04                        = 4,
	COUNT05                        = 5,
	COUNT_MAX                      = 6,

};

// Enum Squad.ESQTileResolution
enum class ESQTileResolution : uint8_t
{
	SIZE                           = 0,
	SIZE01                         = 1,
	SIZE02                         = 2,
	SIZE03                         = 3,
	SIZE_MAX                       = 4,

};

// Enum Squad.ESQSoldierLeanDirection
enum class ESQSoldierLeanDirection : uint8_t
{
	LeftLean                       = 0,
	NoLean                         = 1,
	RightLean                      = 2,
	MAX                            = 3,

};

// Enum Squad.ESQFOBRallyPointDisplayMode
enum class ESQFOBRallyPointDisplayMode : uint8_t
{
	None                           = 0,
	FOB                            = 1,
	RallyPoint                     = 2,
	Both                           = 3,
	MAX                            = 4,

};

// Enum Squad.ESQHUDView
enum class ESQHUDView : uint8_t
{
	None                           = 0,
	AllPawns                       = 1,
	SameTeam                       = 2,
	OnlyEnemy                      = 3,
	MAX                            = 4,

};

// Enum Squad.ESQCameraMode
enum class ESQCameraMode : uint8_t
{
	FlySpeed                       = 0,
	Deceleration                   = 1,
	FOV                            = 2,
	MAX                            = 3,

};

// Enum Squad.ESQExplosiveType
enum class ESQExplosiveType : uint8_t
{
	None                           = 0,
	RemoteExplosive                = 1,
	Mine                           = 2,
	MAX                            = 3,

};

// Enum Squad.ESQDeployableSize
enum class ESQDeployableSize : uint8_t
{
	Very_Small                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Very_Large                     = 4,
	MAX                            = 5,

};

// Enum Squad.ESQInvalidPlacementReason
enum class ESQInvalidPlacementReason : uint8_t
{
	NOREASONGIVEN                  = 0,
	VALID                          = 1,
	BAD_GROUND                     = 2,
	NO_FOB                         = 3,
	IN_FOB                         = 4,
	NOT_FRIENDLY_FOB               = 5,
	NO_RESOURCES                   = 6,
	OVERLAP                        = 7,
	NO_DEPLOY_ZONE                 = 8,
	EXCLUSION_ZONE                 = 9,
	CUSTOM1                        = 10,
	CUSTOM2                        = 11,
	CUSTOM3                        = 12,
	CUSTOM4                        = 13,
	ExtraPlacementRules            = 14,
	MAX_DEPLOY_TYPE_REACHED        = 15,
	TrackedDeployableLimitation    = 16,
	MAX                            = 17,

};

// Enum Squad.ESQRandomizeMapRotation
enum class ESQRandomizeMapRotation : uint8_t
{
	Always                         = 0,
	FirstMap                       = 1,
	None                           = 2,
	MAX                            = 3,

};

// Enum Squad.ESQWeaponAnimType
enum class ESQWeaponAnimType : uint8_t
{
	Rifle                          = 0,
	Grenade                        = 1,
	Equippable                     = 2,
	MAX                            = 3,

};

// Enum Squad.ESQEquippableActionState
enum class ESQEquippableActionState : uint8_t
{
	Idle                           = 0,
	Use                            = 1,
	AltUse                         = 2,
	Custom1                        = 3,
	Custom2                        = 4,
	Custom3                        = 5,
	PreUse                         = 6,
	PostUse                        = 7,
	PreAltUse                      = 8,
	PostAltUse                     = 9,
	MAX                            = 10,

};

// Enum Squad.ESQWeaponState
enum class ESQWeaponState : uint8_t
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	Melee                          = 3,
	ProcessingAttachment           = 4,
	MAX                            = 5,

};

// Enum Squad.ESQHitDetectionFailReason
enum class ESQHitDetectionFailReason : uint8_t
{
	None                           = 0,
	NoAmmo                         = 1,
	NoOwner                        = 2,
	NoShot                         = 3,
	InvalidViewAngle               = 4,
	Blocked                        = 5,
	Reloading                      = 6,
	Sprinting                      = 7,
	UnableToFire                   = 8,
	MAX                            = 9,

};

// Enum Squad.ESQReadyToEndMatch
enum class ESQReadyToEndMatch : uint8_t
{
	Unhandled                      = 0,
	ReadyToEndMatch                = 1,
	DoNotEndMatch                  = 2,
	MAX                            = 3,

};

// Enum Squad.ESQRoleTypeEnum
enum class ESQRoleTypeEnum : uint8_t
{
	RoleType_Standard              = 0,
	RoleType_Specialist            = 1,
	RoleType_Support               = 2,
	RoleType_FireSupport           = 3,
	RoleType_MAX                   = 4,

};

// Enum Squad.ESQDialogType
enum class ESQDialogType : uint8_t
{
	None                           = 0,
	Generic                        = 1,
	ControllerDisconnected         = 2,
	MAX                            = 3,

};

// Enum Squad.ESQRadialWidgetSizeEnum
enum class ESQRadialWidgetSizeEnum : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	MAX                            = 3,

};

// Enum Squad.ESQHudPosition
enum class ESQHudPosition : uint8_t
{
	Left                           = 0,
	FrontLeft                      = 1,
	Front                          = 2,
	FrontRight                     = 3,
	Right                          = 4,
	BackRight                      = 5,
	Back                           = 6,
	BackLeft                       = 7,
	MAX                            = 8,

};

// Enum Squad.ESQCrosshairDirection
enum class ESQCrosshairDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Top                            = 2,
	Bottom                         = 3,
	Center                         = 4,
	MAX                            = 5,

};

// Enum Squad.ESQAudioVolumeType
enum class ESQAudioVolumeType : uint8_t
{
	Default                        = 0,
	FieldOpen                      = 1,
	FieldClosed                    = 2,
	Valley                         = 3,
	ForestLarge                    = 4,
	ForestSmall                    = 5,
	UrbanLarge                     = 6,
	UrbanSmall                     = 7,
	RoomLarge                      = 8,
	RoomMedium                     = 9,
	RoomSmall                      = 10,
	RoomHollowLarge                = 11,
	RoomHollowMedium               = 12,
	RoomHollowSmall                = 13,
	MAX                            = 14,

};

// Enum Squad.ESQLeftSquadWeaponBehaviour
enum class ESQLeftSquadWeaponBehaviour : uint8_t
{
	DoNotKeep                      = 0,
	KeepWithMagsAndLoadedAmmo      = 1,
	KeepWithOnlyLoadedAmmo         = 2,
	OverWriteMagsAndKeepLoadedAmmo = 3,
	OverWriteWithOnlyLoadedAmmo    = 4,
	MAX                            = 5,

};

// Enum Squad.ESQAdminAccessLevels
enum class ESQAdminAccessLevels : uint8_t
{
	Level_Public                   = 0,
	Level_StartVote                = 1,
	Level_ChangeMap                = 2,
	Level_Pause                    = 3,
	Level_Cheat                    = 4,
	Level_Private                  = 5,
	Level_Balance                  = 6,
	Level_Chat                     = 7,
	Level_Mute                     = 8,
	Level_Kick                     = 9,
	Level_Ban                      = 10,
	Level_Config                   = 11,
	Level_Immune                   = 12,
	Level_Server                   = 13,
	Level_CameraMan                = 14,
	Level_Add                      = 15,
	Level_FeatureTest              = 16,
	Level_Debug                    = 17,
	Level_Demos                    = 18,
	Level_Reserve                  = 19,
	Level_TeamChange               = 20,
	Level_Developer                = 21,
	Level_ForceTeamChange          = 22,
	Level_CanSeeAdminChat          = 23,
	Level_QA                       = 24,
	Level_MAX                      = 25,

};

// Enum Squad.ESQSortStates
enum class ESQSortStates : uint8_t
{
	Unsorted                       = 0,
	Ascending                      = 1,
	Descending                     = 2,
	MAX                            = 3,

};

// Enum Squad.ESQSortLevels
enum class ESQSortLevels : uint8_t
{
	ServerName                     = 0,
	MapName                        = 1,
	GameMode                       = 2,
	Ping                           = 3,
	NumPlayers                     = 4,
	MAX                            = 5,

};

// Enum Squad.ESQTrackDeployableResult
enum class ESQTrackDeployableResult : uint8_t
{
	Allow                          = 0,
	AllowButRemoveAllOthers        = 1,
	AllowButRemoveFirst            = 2,
	AllowButRemoveLast             = 3,
	DoNotAllow                     = 4,
	MAX                            = 5,

};

// Enum Squad.ESQVehicleType
enum class ESQVehicleType : uint8_t
{
	None                           = 0,
	Motorcycle                     = 1,
	Jeep                           = 2,
	JeepTransport                  = 3,
	JeepLogistics                  = 4,
	JeepAntiTank                   = 5,
	JeepArtillery                  = 6,
	TruckTransport                 = 7,
	TruckLogistics                 = 8,
	TruckAntiAir                   = 9,
	APC                            = 10,
	APCTracked                     = 11,
	AntiAirTracked                 = 12,
	IFV                            = 13,
	IFVTracked                     = 14,
	Tank                           = 15,
	HelicopterTransport            = 16,
	HelicopterAttack               = 17,
	Boat                           = 18,
	MAX                            = 19,

};

// Enum Squad.ESQVehicleComponentStates
enum class ESQVehicleComponentStates : uint8_t
{
	FullyRepaired                  = 0,
	RepairedFromDestruction        = 1,
	Destroyed                      = 2,
	MAX                            = 3,

};

// Enum Squad.ESQTeamType
enum class ESQTeamType : uint8_t
{
	Attacker                       = 0,
	Defender                       = 1,
	MAX                            = 2,

};

// Enum Squad.ESQBuildState
enum class ESQBuildState : uint8_t
{
	Completed                      = 0,
	HalfBuilt                      = 1,
	Unbuilt                        = 2,
	MAX                            = 3,

};

// Enum Squad.ESQSoldierSeatState
enum class ESQSoldierSeatState : uint8_t
{
	Locked                         = 0,
	LockedWithWeapon               = 1,
	Hidden                         = 2,
	None                           = 3,
	MAX                            = 4,

};

// Enum Squad.ESQListenerType
enum class ESQListenerType : uint8_t
{
	Default                        = 0,
	Soldier                        = 1,
	TurretOpenAir                  = 2,
	TurretLight                    = 3,
	TurretHeavy                    = 4,
	TurretArmored                  = 5,
	VehicleOpenAir                 = 6,
	VehicleLight                   = 7,
	VehicleHeavy                   = 8,
	VehicleArmored                 = 9,
	MAX                            = 10,

};

// Enum Squad.ESQInteractVisibility
enum class ESQInteractVisibility : uint8_t
{
	Invisible                      = 0,
	Team                           = 1,
	AlwaysVisible                  = 2,
	MAX                            = 3,

};

// Enum Squad.ESQEmotes
enum class ESQEmotes : uint8_t
{
	None                           = 0,
	HandSignalAttack               = 1,
	HandSignalBuild                = 2,
	HandSignalDefend               = 3,
	HandSignalMove                 = 4,
	HandSignalRally                = 5,
	HandSignalObserve              = 6,
	HandActionRearm                = 7,
	HandActionLoadup               = 8,
	HandActionUnload               = 9,
	MAX_Visible                    = 10,
	Custom                         = 11,
	MAX                            = 12,

};

// Enum Squad.EClimbState
enum class EClimbState : uint8_t
{
	Interpolating                  = 0,
	RequiredOutro                  = 1,
	Outro                          = 2,
	End                            = 3,
	None                           = 4,
	MAX                            = 5,

};

// Enum Squad.EClimbType
enum class EClimbType : uint8_t
{
	None                           = 0,
	OverLow                        = 1,
	OverMid                        = 2,
	OntoLow                        = 3,
	OntoMid                        = 4,
	OntoHigh                       = 5,
	MAX                            = 6,

};

// Enum Squad.ESQTeam
enum class ESQTeam : uint8_t
{
	Team_Neutral                   = 0,
	Team_One                       = 1,
	Team_Two                       = 2,
	Team_MAX                       = 3,

};

// Enum Squad.ESQCommandOptionState
enum class ESQCommandOptionState : uint8_t
{
	Ready                          = 0,
	Enroute                        = 1,
	Active                         = 2,
	Cooldown                       = 3,
	None                           = 4,
	MAX                            = 5,

};

// Enum Squad.ESQNotificationTypes
enum class ESQNotificationTypes : uint8_t
{
	None                           = 0,
	Error                          = 1,
	Warning                        = 2,
	Message                        = 3,
	Negative                       = 4,
	Positive                       = 5,
	Commander                      = 6,
	Team                           = 7,
	Squad                          = 8,
	Fireteam                       = 9,
	GameMode                       = 10,
	MAX                            = 11,

};

// Enum Squad.ESQChat
enum class ESQChat : uint8_t
{
	Unknown                        = 0,
	All                            = 1,
	Team                           = 2,
	Squad                          = 3,
	GameNotification               = 4,
	GameNotificationTeam           = 5,
	GameChat                       = 6,
	AdminBroadcast                 = 7,
	AdminChat                      = 8,
	AdminNotification              = 9,
	PlayerNotification             = 10,
	ServerMessage                  = 11,
	System                         = 12,
	MAX                            = 13,

};

// Enum Squad.ESQTextVerticalAlignment
enum class ESQTextVerticalAlignment : uint8_t
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	MAX                            = 3,

};

// Enum Squad.ESQTextHorizontalAlignment
enum class ESQTextHorizontalAlignment : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	MAX                            = 3,

};

// Enum Squad.ESQMapItemDrawMode
enum class ESQMapItemDrawMode : uint8_t
{
	ZoomedOut                      = 0,
	ZoomedIn                       = 1,
	Absolute                       = 2,
	Meters                         = 3,
	MAX                            = 4,

};

// Enum Squad.ESQMapItemType
enum class ESQMapItemType : uint8_t
{
	Map                            = 0,
	Default                        = 1,
	Player                         = 2,
	Spawn                          = 3,
	LocalPlayer                    = 4,
	Gameplay                       = 5,
	MAX                            = 6,

};

// Enum Squad.ESQMapMarkerVisibleTo
enum class ESQMapMarkerVisibleTo : uint8_t
{
	None                           = 0,
	All                            = 1,
	Team                           = 2,
	Squad                          = 3,
	FireTeam                       = 4,
	Self                           = 5,
	FireTeamLeader                 = 6,
	SquadLeader                    = 7,
	SquadAndSLs                    = 8,
	Commander                      = 9,
	Admin                          = 10,
	MAX                            = 11,

};

// Enum Squad.ESQMapWidgetTint
enum class ESQMapWidgetTint : uint8_t
{
	Neutral                        = 0,
	Self                           = 1,
	Squad                          = 2,
	Team                           = 3,
	SquadLeader                    = 4,
	AllCommand                     = 5,
	Enemy                          = 6,
	FireTeam                       = 7,
	MAX                            = 8,

};

// Enum Squad.ESQMapMarkerType
enum class ESQMapMarkerType : uint8_t
{
	Action                         = 0,
	Spot                           = 1,
	POI                            = 2,
	Fireteam                       = 3,
	Request                        = 4,
	Arrow                          = 5,
	Frontline                      = 6,
	CommanderOrder                 = 7,
	MAX                            = 8,

};

// Enum Squad.ESQMapIconSelectionGroup
enum class ESQMapIconSelectionGroup : uint8_t
{
	None                           = 0,
	Spawns                         = 1,
	Players                        = 2,
	MAX                            = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Squad.SQVoipAnim
// 0x0020
struct FSQVoipAnim
{
	class UAnimMontage*                                FirstPersonAnim;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPersonEndAnim;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonEndAnim;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbInfo
// 0x0030
struct FSQClimbInfo
{
	unsigned char                                      UnknownData_5KMJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EClimbType                                         PendingType;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP7E[0x16];                                    // 0x0002(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector_NetQuantize10>               PendingClimbMovePathZeroBased;                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZN33[0x1];                                     // 0x0028(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EClimbState                                        PendingState;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCBB[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQClimbTypeData
// 0x0030
struct FSQClimbTypeData
{
	unsigned char                                      UnknownData_UZ1S[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EndSpace;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeight;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RequiredAnimationTime;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFiringDisabled;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5A4W[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaCost;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAIX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	unsigned char                                      UnknownData_6P5Q[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQClimbOverData
// 0x00A0
struct FSQClimbOverData
{
	float                                              MaxMoveDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinMiddleMoveDistance;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidCollisionShapeScale;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I97F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQClimbOverTypeData                        Low;                                                       // 0x0010(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSQClimbOverTypeData                        Mid;                                                       // 0x0058(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbOntoTypeData
// 0x0008 (0x0038 - 0x0030)
struct FSQClimbOntoTypeData : public FSQClimbTypeData
{
	float                                              InterpolateTime;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTI4[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_0JQE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	unsigned char                                      UnknownData_ETEQ[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRemoteTalkerDisplayInfo
// 0x0010
struct FSQRemoteTalkerDisplayInfo
{
	class ASQPlayerState*                              PlayerState;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQVoiceChannel                                    Channel;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWLU[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_6PN0[0x5];                                     // 0x001B(0x0005) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_YIBI[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQConnectionCheckResponse
// 0x0008
struct FSQConnectionCheckResponse
{
	unsigned char                                      bCanQueue : 1;                                             // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurrentTotalPlayers;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VOF[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RoundTripRPCTimeMS;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapMarkerGameplayData
// 0x0038
struct FSQMapMarkerGameplayData
{
	int                                                SquadId;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            TeamId;                                                    // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U0ZY[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FireTeamId;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         LocationVector;                                            // 0x000C(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         DistanceRotationVector;                                    // 0x0018(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AU3T[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQMapMarkerDataAsset*                       MapMarkerDataAsset;                                        // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UniqueID;                                                  // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJMT[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CreationTime;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapMarkerVisualData
// 0x00C8
struct FSQMapMarkerVisualData
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapIconSelectionGroup                           SelectionGroup;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9RMZ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  SelectedTexture;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SelectedTint;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapMarkerType                                   MapMarkerType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQMapWidgetTint>                      MapMarkerTintType;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapMarkerVisibleTo                              MapMarkerVisibleTo;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemType                                     Type;                                                      // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisibleWhenNeutral;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQEmotes                                          PlacementEmote;                                            // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLMP[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Lifetime;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldOverrideTint;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALSY[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                OverrideTint;                                              // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // 0x004C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotPivot;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemDrawMode                                 DrawModeX;                                                 // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQMapItemDrawMode                                 DrawModeY;                                                 // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TUZ7[0xA];                                     // 0x007E(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQMapMarkerGameplayData                    MarkerGameplayData;                                        // 0x0088(0x0038) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CommanderCategory
// 0x0020
struct FCommanderCategory
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HMH[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQDraggingData
// 0x0018
struct FSQDraggingData
{
	class ASQSoldier*                                  Dragee;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSoldier*                                  Dragger;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DraggedBoneIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P9MG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQBoneHitSound
// 0x0010
struct FSQBoneHitSound
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSound;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      bKilled : 1;                                               // 0x0024(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWounded : 1;                                              // 0x0024(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEjectedFromVehicle : 1;                                   // 0x0024(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUGH[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDamageEvent                                GeneralDamageEvent;                                        // 0x0028(0x0010) (Protected, NativeAccessSpecifierProtected)
	struct FPointDamageEvent                           PointDamageEvent;                                          // 0x0038(0x00A8) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FRadialDamageEvent                          RadialDamageEvent;                                         // 0x00E0(0x0040) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPhysicalMaterial>            PackagedHitResultPhysMaterial;                             // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       PackagedHitResultActor;                                    // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>          PackagedHitResultComponent;                                // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct Squad.SQBoneDamageMod
// 0x000C
struct FSQBoneDamageMod
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageMod;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_NQND[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

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
// ScriptStruct Squad.SQAnnouncement
// 0x0040
struct FSQAnnouncement
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Link;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeaderLink;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQCreditsList
// 0x0028
struct FSQCreditsList
{
	ESQCreditsLineType                                 LineType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RJRC[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Columns;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQSpringInterpStruct3D
// 0x0030
struct FSQSpringInterpStruct3D
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Damping;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MinLimits;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxLimits;                                                 // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMovePostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSQMovePostPhysicsTickFunction : public FTickFunction
{
	class USQPawnMovementComponent*                    Target;                                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQEmoteAnims
// 0x0028
struct FSQEmoteAnims
{
	bool                                               bForceIfCantPlay;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFD3[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                FirstPersonAnim;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonAnim;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPersonEndAnim;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThirdPersonEndAnim;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_PGY5[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQWeaponData
// 0x00C0
struct FSQWeaponData
{
	bool                                               bInfiniteAmmo;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteMags;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XQ1[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxMags;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundsPerMag;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRoundInChamber;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I589[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Firemodes;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              TimeBetweenShots;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenSingleShots;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReloadWhenEquipping;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateProjectileOnServer;                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FA3X[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TacticalReloadDuration;                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryReloadDuration;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TacticalReloadBipodDuration;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadDryBipodDuration;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZoomDuration;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSPostTransitionRatio;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowZoom;                                                // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAverageFireRate;                                          // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetBurstOnTriggerRelease;                               // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WBHX[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundsBetweenTracer;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSQV[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TracerProjectileClass;                                     // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MuzzleVelocity;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDamageToApply;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToStartDamageFallOff;                                  // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToStartDamageFallOff;                              // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFallOffRate;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamageToApply;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DamageFalloffCurve;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBarrelSocketOnSoldier;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QKF[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BarrelSocketName;                                          // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MOA;                                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumTraceDistance;                                      // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallHackCheckTraceDistance;                                // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileCameraRelativeOffsetMultiplier;                  // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMagMustBeEmptyForVehicleRearm;                            // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyIfCurrentMagazineIsEmpty;                        // 0x009D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmCanFillCurrentMagazine;                              // 0x009E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PHM[0x1];                                     // 0x009F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumTimeBetweenRearms;                                  // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyOneMagazine;                                     // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRearmOnlyXRoundsOfAmmo;                                   // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHCP[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RearmRoundsOfAmmoPerRearm;                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArmorPenetrationDepthMillimeters;                          // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ArmorPenetrationDepthCurve;                                // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceDistanceAfterPenetrationMeters;                       // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MGTM[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.ArmorPenetration
// 0x0028
struct FArmorPenetration
{
	unsigned char                                      UnknownData_56KK[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQPenetrationTrace
// 0x00AC
struct FSQPenetrationTrace
{
	unsigned char                                      bIsActor : 1;                                              // 0x0000(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasValidReverseImpact : 1;                                // 0x0000(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTK5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ReverseAngleImpactLocation;                                // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ReverseAngleImpactNormal;                                  // 0x0098(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReverseAngleBoneName;                                      // 0x00A4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQShotInfo
// 0x002C
struct FSQShotInfo
{
	unsigned char                                      ShotCounter;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPUM[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WorldTime;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Origin;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTracer;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6DY[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PenetrationDamageMultiplier;                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorDamageMultiplier;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRearmWeaponRequest
// 0x0010
struct FSQRearmWeaponRequest
{
	class ASQEquipableItem*                            Weapon;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MagsToRearm;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XU2Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQApprovalEntryClientDesc
// 0x0008
struct FSQApprovalEntryClientDesc
{
	float                                              ExpireIn;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQApprovalEntryRequest
// 0x0040
struct FSQApprovalEntryRequest
{
	EApprovalRequestTypes                              RequestType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYK7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     PtrParams[0x4];                                            // 0x0008(0x0020) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CombinedMessage;                                           // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpireIn;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSystemHUDMessage
// 0x0028
struct FSQSystemHUDMessage
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MessageLifetime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83G5[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQGameModeRules
// 0x0018
struct FSQGameModeRules
{
	ESQTeam                                            Team;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLTJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               Rules;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInventoryData
// 0x0018
struct FSQInventoryData
{
	class UClass*                                      EquipableItem;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAllowedInInventory;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumCountOnSpawn;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCannotRearm : 1;                                          // 0x0010(0x0001) BIT_FIELD  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9B8[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EWeaponType                                        WeaponType;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QCSY[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQInventoryMod
// 0x0038
struct FSQInventoryMod
{
	unsigned char                                      bClearAllInventoryFirst : 1;                               // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCY8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQInventoryData                            InventoryData;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	ESQInventoryModificationType                       InventoryModificationType;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDEB[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Slot;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            Team;                                                      // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CK8G[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQRoleSettings*                             Role;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQScoreEvent
// 0x0028
struct FSQScoreEvent
{
	float                                              Points;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SI5N[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Reason;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ScoreGroup;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFXI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

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
// ScriptStruct Squad.SQGraphLink
// 0x0010
struct FSQGraphLink
{
	class USQGraphNodeComponent*                       NodeA;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQGraphNodeComponent*                       NodeB;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.BlueprintOnlineItem
// 0x0010
struct FBlueprintOnlineItem
{
	unsigned char                                      UnknownData_7JFX[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_BRWX[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRoleLimitOverride
// 0x0030
struct FSQRoleLimitOverride
{
	class USQRoleSettings*                             Role;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQRoleLimit                                Limit;                                                     // 0x0008(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IX61[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMinimapMakerSettings
// 0x0550
struct FSQMinimapMakerSettings
{
	ESQTileResolution                                  TileResolution;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTileCount                                       TileCount;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6L9J[0xE];                                     // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        MinimapPostProcessor;                                      // 0x0010(0x0530) (Edit, NativeAccessSpecifierPublic)
	int                                                MinimapFOV;                                                // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIM8[0xC];                                     // 0x0544(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQAdjustableSightMontageSet
// 0x0040
struct FSQAdjustableSightMontageSet
{
	class UAnimMontage*                                BaseAdjustAds3pMontage;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AdjustAdsTransition3pMontage;                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AdjustFromAdsTransition3pMontage;                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    LineOfFireAngle;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S70T[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DistanceText;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQFireTriggerMontage
// 0x0010
struct FSQFireTriggerMontage
{
	class UAnimMontage*                                FireWeaponMontage;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FireTriggerMontage;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMeshTransitionSettings
// 0x0040
struct FSQMeshTransitionSettings
{
	float                                              TransitionValue;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZZ0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  MeshTransform;                                             // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_51QU[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TriggerPullDuration;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                AimOffsetCurve;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_8TGE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 RecoilCurve;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RecoilCurveCrouch;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RecoilCurveProne;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecoilCurveIndex;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRecoilMultipliers;                                     // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W96X[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CrouchRecoilMultiplier;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProneRecoilMultiplier;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQWeaponSpring
// 0x0024
struct FSQWeaponSpring
{
	struct FVector                                     WeaponSpringFactor;                                        // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WeaponSpringRotationPivot;                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    WeaponSpringRotationFactor;                                // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMagazineData
// 0x0008
struct FSQMagazineData
{
	int                                                DefaultRoundsPerMag;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingRounds;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPenetrationProxy
// 0x0000 (0x00AC - 0x00AC)
struct FSQPenetrationProxy : public FSQPenetrationTrace
{

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
	unsigned char                                      UnknownData_2KZJ[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRangeConstraints
// 0x0038
struct FSQRangeConstraints
{
	bool                                               bEnablePitchInterval;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableYawInterval;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRollInterval;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JI6O[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PitchInterval;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   YawInterval;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RollInterval;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQRotationConstraints                      Constraints;                                               // 0x001C(0x001C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRepMovement
// 0x0040
struct FSQRepMovement
{
	unsigned char                                      UnknownData_TWXW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationZeroBased;                                         // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RotationalVelocity;                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerTimestamp;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YHM[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRotationVelocityRepMovement
// 0x0010 (0x0050 - 0x0040)
struct FSQRotationVelocityRepMovement : public FSQRepMovement
{
	unsigned char                                      UnknownData_306C[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleRecoil
// 0x000C
struct FSQVehicleRecoil
{
	struct FVector2D                                   RecoilFactor;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RepeatAmount;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZC5I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleWeaponConfig
// 0x0008
struct FSQVehicleWeaponConfig
{
	class UClass*                                      WeaponClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEngineMovementSoundObject
// 0x0028
struct FSQEngineMovementSoundObject
{
	class USoundCue*                                   EngineSound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gear;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAcceleratingSound;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBR0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachBoneName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutEndVolume;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             AudioComponent;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleQueueEntry
// 0x0020
struct FSQVehicleQueueEntry
{
	unsigned char                                      UnknownData_F3RW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerController*                         Player;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWVW[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRadialDamageEvent
// 0x0090 (0x00D0 - 0x0040)
struct FSQRadialDamageEvent : public FRadialDamageEvent
{
	bool                                               bDirectHit;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I17O[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  HitResult;                                                 // 0x0044(0x0088) (Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M5J[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQFTEText
// 0x0030
struct FSQFTEText
{
	struct FText                                       FTEText;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActionKeys;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTQW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQSessionFlagStruct
// 0x0008
struct FSQSessionFlagStruct
{
	int                                                ServerHealth;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsAnticheatProtected : 1;                                 // 0x0004(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MLVS[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQExplosiveShotInfo
// 0x000C (0x0038 - 0x002C)
struct FSQExplosiveShotInfo : public FSQShotInfo
{
	unsigned char                                      UnknownData_OO5Q[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMapData
// 0x0040
struct FSQMapData
{
	struct FString                                     ShortName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadingScreenTexturePath;                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapPaths;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HZAS[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQSoliderNetPriorityObject
// 0x000C
struct FSQSoliderNetPriorityObject
{
	float                                              distance;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetPriority;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetPriorityWhenBehind;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCameraShake
// 0x0020
struct FSQCameraShake
{
	unsigned char                                      UnknownData_Z2HX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Shake;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientShakeTowardsEpicenter;                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGYX[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQTestInventoryData
// 0x0010
struct FSQTestInventoryData
{
	TArray<struct FSQInventoryWeaponGroupData>         GroupItems;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQInventoryWeaponGroupData
// 0x0010
struct FSQInventoryWeaponGroupData
{
	TArray<struct FSQInventoryData>                    WeaponItems;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoState
// 0x0018
struct FSQPersistedAmmoState
{
	TArray<struct FSQPersistedAmmoGroup>               AmmoGroups;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class USQRoleSettings*                             PersistedRole;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoGroup
// 0x0010
struct FSQPersistedAmmoGroup
{
	TArray<struct FSQPersistedAmmoCount>               AmmoCounts;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQPersistedAmmoCount
// 0x0008
struct FSQPersistedAmmoCount
{
	int                                                AmmoCount;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_V8JF[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawShadow;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVSS[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ShadowDirection;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawOutline;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D30Y[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                OutlineColor;                                              // 0x004C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6L8T[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQPlayerLimiter
// 0x0008
struct FSQPlayerLimiter
{
	int                                                NumberOfPlayers;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQShockwaveQualitySetting
// 0x0010
struct FSQShockwaveQualitySetting
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1U8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VerticalSteps;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HorizontalSteps;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullingDistance;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQOnlineInventorySetting
// 0x0008
struct FSQOnlineInventorySetting
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5L4[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleSeatConfig
// 0x0050
struct FSQVehicleSeatConfig
{
	ESQVehicleRoleAbility                              SeatAbilityRequirement;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDetachSoldier;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YII[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SeatHealth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRepairToolLimit;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassDamageToVehicle;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEX8[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionDamageMultipler;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassPointDamageToVehicle;                                 // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierCanTakeDirectRadialDamage;                         // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassRadialDamageToVehicle;                                // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W00I[0x1];                                     // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SeatAttachSocket;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SoldierAttachSocket;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SeatPawn;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialState;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PSS[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSQVehicleSeatState>                 SeatStates;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bShouldAlwaysStayRegistered;                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierInSeatCanCapture;                                  // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRotationComponentForControlRotation;                   // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FG4X[0x1];                                     // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayerEnterDuration;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_JJVQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpace1D*                               WheelBlendSpace1D;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHandIK;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWeaponForHandIK;                                       // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHV9[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeftHandIKAlpha;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LeftHandIKSocketName;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightHandIKAlpha;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RightHandIKSocketName;                                     // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZDP[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               SteeringWheelSingleFrameAnimSequence;                      // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleSeatTransitionState
// 0x0020
struct FSQVehicleSeatTransitionState
{
	ESQSoldierSeatState                                SoldierSeatState;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTY4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionDamageMultipler;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoldierCanTakeDirectRadialDamage;                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDetachSoldier;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectDeadSoldier;                                         // 0x000A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectIncappedSoldier;                                     // 0x000B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeatIsInTheOpen;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyPlayExteriorVehicleSounds;                            // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCQU[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundMix*                                   SoundMix;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQListenerType                                    ListenerTypeOverride;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C6QQ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleSeatState
// 0x0078
struct FSQVehicleSeatState
{
	struct FSQVehicleSeatAnimationState                AnimationState;                                            // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSQVehicleSeatTransitionState               TransitionState;                                           // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDeployableLimit
// 0x0010
struct FSQDeployableLimit
{
	class UClass*                                      DeployableClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxPerFob;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1WM[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleDestroyEffectConfig
// 0x0010
struct FSQVehicleDestroyEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleDestroyedConfig
// 0x0010
struct FSQVehicleDestroyedConfig
{
	class UClass*                                      DamageType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DestroyedVehicleClass;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQServerSlot
// 0x0028
struct FSQServerSlot
{
	unsigned char                                      UnknownData_9S8I[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQJoinBeaconClient*                         ClientBeacon;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSettingsRestriction
// 0x0018
struct FSQSettingsRestriction
{
	struct FString                                     Setting;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimitArray
// 0x0010 (0x0118 - 0x0108)
struct FSQRoleLimitArray : public FFastArraySerializer
{
	TArray<struct FSQRoleLimitFASItem>                 Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleLimitFASItem
// 0x0024 (0x0030 - 0x000C)
struct FSQRoleLimitFASItem : public FFastArraySerializerItem
{
	struct FSQRoleLimit                                Content;                                                   // 0x000C(0x0024) (NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRoleGroupLimit
// 0x0014
struct FSQRoleGroupLimit
{
	ESQRoleTypeEnum                                    RoleGroup;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_86V4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLimit;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLimit;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadMembersPerSlotIncrease;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotsPerIncrease;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQObjectiveSounds
// 0x00A0
struct FSQObjectiveSounds
{
	unsigned char                                      ObjectiveBeingWon[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQObjectiveSounds.ObjectiveBeingWon
	unsigned char                                      ObjectiveWon[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQObjectiveSounds.ObjectiveWon
	unsigned char                                      ObjectiveBeingLost[0x28];                                  // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQObjectiveSounds.ObjectiveBeingLost
	unsigned char                                      ObjectiveLost[0x28];                                       // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQObjectiveSounds.ObjectiveLost

};
// ScriptStruct Squad.SQCommanderSounds
// 0x0140
struct FSQCommanderSounds
{
	unsigned char                                      CommanderVoteStarted[0x28];                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderVoteStarted
	unsigned char                                      CommanderVotePassedNormalSelf[0x28];                       // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderVotePassedNormalSelf
	unsigned char                                      CommanderVotePassedNormalOthers[0x28];                     // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderVotePassedNormalOthers
	unsigned char                                      CommanderVotePassedMutinySelf[0x28];                       // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderVotePassedMutinySelf
	unsigned char                                      CommanderVotePassedMutinyOthers[0x28];                     // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderVotePassedMutinyOthers
	unsigned char                                      RequestCommandReinforcements[0x28];                        // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.RequestCommandReinforcements
	unsigned char                                      CommanderReinforcementsApproved[0x28];                     // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderReinforcementsApproved
	unsigned char                                      CommanderReinforcementsDenied[0x28];                       // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderSounds.CommanderReinforcementsDenied

};
// ScriptStruct Squad.SQTeamEventSounds
// 0x00C8
struct FSQTeamEventSounds
{
	unsigned char                                      Join[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQTeamEventSounds.Join
	unsigned char                                      Win[0x28];                                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQTeamEventSounds.Win
	unsigned char                                      Lose[0x28];                                                // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQTeamEventSounds.Lose
	unsigned char                                      FriendlyTicketsLow[0x28];                                  // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQTeamEventSounds.FriendlyTicketsLow
	unsigned char                                      EnemyTicketsLow[0x28];                                     // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQTeamEventSounds.EnemyTicketsLow

};
// ScriptStruct Squad.SQMedicCalls
// 0x0078
struct FSQMedicCalls
{
	unsigned char                                      MedicCO[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMedicCalls.MedicCO
	unsigned char                                      MedicSL[0x28];                                             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMedicCalls.MedicSL
	unsigned char                                      MedicGrunt[0x28];                                          // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMedicCalls.MedicGrunt

};
// ScriptStruct Squad.SQPatchItem
// 0x0040
struct FSQPatchItem
{
	struct FText                                       PatchName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       PatchDescription;                                          // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PatchImage;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PatchImageUI;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSupporterPatchItem_TableRow
// 0x0040 (0x0048 - 0x0008)
struct FSQSupporterPatchItem_TableRow : public FTableRowBase
{
	struct FSQPatchItem                                PatchInfo;                                                 // 0x0008(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClanPacks_TableRow
// 0x0090 (0x0098 - 0x0008)
struct FSQClanPacks_TableRow : public FTableRowBase
{
	struct FSQPatchItem                                PatchInfo;                                                 // 0x0008(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      MembersSteamId64[0x50];                                    // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty Squad.SQClanPacks_TableRow.MembersSteamId64

};
// ScriptStruct Squad.SQWeaponReplacementItem
// 0x0088
struct FSQWeaponReplacementItem
{
	struct FText                                       ItemName;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ItemDescription;                                           // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SkinTexture;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UClass*, class UClass*>                 WeaponReplacements;                                        // 0x0038(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponReplacementItem_TableRow
// 0x0088 (0x0090 - 0x0008)
struct FSQWeaponReplacementItem_TableRow : public FTableRowBase
{
	struct FSQWeaponReplacementItem                    Item;                                                      // 0x0008(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.VehicleOccupantsArray
// 0x0010 (0x0118 - 0x0108)
struct FVehicleOccupantsArray : public FFastArraySerializer
{
	TArray<struct FVehicleOccupantsItem>               Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoldierInfo
// 0x0028
struct FSQSoldierInfo
{
	int                                                SquadId;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamId;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQAuthorityTypes                                  LeaderState;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1G13[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQRoleSettings*                             CurrentRole;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleOccupantInfo
// 0x0010 (0x0038 - 0x0028)
struct FSQVehicleOccupantInfo : public FSQSoldierInfo
{
	unsigned char                                      bIsOccupied : 1;                                           // 0x0028(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TKGZ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerState*                              PlayerState;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.VehicleOccupantsItem
// 0x0044 (0x0050 - 0x000C)
struct FVehicleOccupantsItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_1Y1V[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQVehicleOccupantInfo                      VehicleOccupantInfo;                                       // 0x0010(0x0038) (NativeAccessSpecifierPublic)
	int8_t                                             SeatId;                                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DirtyCount;                                                // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VD36[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQWaypoint
// 0x0030
struct FSQWaypoint
{
	struct FVector                                     WorldPosition;                                             // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                               // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NB1[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           PathPoints;                                                // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQSoundWeight
// 0x0010
struct FSQSoundWeight
{
	class USoundWave*                                  Sound;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBeenUsed;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEXW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

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
// ScriptStruct Squad.SQVaultTraceHitResults
// 0x00AC
struct FSQVaultTraceHitResults
{
	struct FHitResult                                  bVaultLineTrace1Hit;                                       // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     VaultOppSideWallHit;                                       // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultDistanceFromOppSideWall;                              // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VaultEndingPointLineTraceImpact;                           // 0x0098(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVaultLineTrace2Hit;                                       // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7SN[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceToNewLocation;                                     // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQClimbTraceHitResults
// 0x002C
struct FSQClimbTraceHitResults
{
	struct FVector                                     EndingPoint1;                                              // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockingHit;                                              // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJ2U[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    ClimbFrontNormal;                                          // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClimbDistanceFromWall;                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ClimbTraceHit2;                                            // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotator_NetQuantizeBytes
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeBytes : public FRotator
{

};
// ScriptStruct Squad.SQRotator_NetQuantizeShorts
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeShorts : public FRotator
{

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
// ScriptStruct Squad.SquadWidgetPair
// 0x0010
struct FSquadWidgetPair
{
	class USQScoreboardSquad*                          SquadWidget;                                               // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQSquadState*                               SquadState;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.PlayerWidgetPair
// 0x0010
struct FPlayerWidgetPair
{
	class USQScoreboardPlayer*                         PlayerWidget;                                              // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerState*                              PlayerState;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRotationRepMovement
// 0x0000 (0x0040 - 0x0040)
struct FSQRotationRepMovement : public FSQRepMovement
{

};
// ScriptStruct Squad.SQRoleKitIconLookup
// 0x0008 (0x0010 - 0x0008)
struct FSQRoleKitIconLookup : public FTableRowBase
{
	class USQRoleSettings*                             RoleSetting;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.TeamSquadId
// 0x0008
struct FTeamSquadId
{
	unsigned char                                      UnknownData_EKIT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.PlayerStateDataObject
// 0x0068
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
	unsigned char                                      UnknownData_STQF[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FireTeamIndex;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTeamPosition;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerNamePrefix;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    SupporterPatch;                                            // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    ClanPatch;                                                 // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReplicationKey;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJQA[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerState*                              Owner;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.DeployableItemsArray
// 0x0010 (0x0118 - 0x0108)
struct FDeployableItemsArray : public FFastArraySerializer
{
	TArray<struct FDeployableItem>                     Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.DeployableItem
// 0x000C (0x0018 - 0x000C)
struct FDeployableItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_ONXM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQDeployable*                               Deployable;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      bDoParticlesUseRotation : 1;                               // 0x0068(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5PW[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDecalSize;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDecalSize;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkewDecalSize;                                            // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T8N3[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecalDepth;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalLifeSpan;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeDecalRotation;                                   // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZN6[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_FW7Q[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_2G88[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   VehicleLightImpactSound;                                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleLightImpactEffect;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleImpactSound;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleImpactEffect;                                       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoVehicleParticlesUseRotation;                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWMV[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQSoldierEffect
// 0x0038
struct FSQSoldierEffect
{
	class UCurveFloat*                                 SoldierInclineMovementSpeedCurve;                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayFootstepEffectWhenMovementInteractionTriggered;       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANXT[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             FootstepEffect;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FootstepSound;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MovementInteractionParticleEffect;                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MovementInteractionSound;                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   LandedSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponGroupDataArray
// 0x0010 (0x0118 - 0x0108)
struct FSQWeaponGroupDataArray : public FFastArraySerializer
{
	TArray<struct FSQWeaponGroupData>                  Items;                                                     // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQWeaponGroupData
// 0x001C (0x0028 - 0x000C)
struct FSQWeaponGroupData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_VGWO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASQEquipableItem*>                    Weapons;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedWeaponOffset;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQOptionsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQOptionsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 AcceptChangesSound;                                        // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 DiscardChangesSound;                                       // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQNotificationLayout
// 0x0030
struct FSQNotificationLayout
{
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                IconColor;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5E7K[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

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
// ScriptStruct Squad.MovePacket
// 0x0038
struct FMovePacket
{
	uint32_t                                           UniqueID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XH8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              OldMove;                                                   // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              NewMove;                                                   // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              PendingMove;                                               // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                            // 0x0008(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 ExitGameSound;                                             // 0x0020(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMenuItemStyle
// 0x0198 (0x01A0 - 0x0008)
struct FSQMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftArrowImage;                                            // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightArrowImage;                                           // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQMarkerTimestamps
// 0x0008
struct FSQMarkerTimestamps
{
	unsigned char                                      UnknownData_FNDG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMapMarkerFastArraySerializerItem
// 0x0044 (0x0050 - 0x000C)
struct FSQMapMarkerFastArraySerializerItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_FY13[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQMapMarkerGameplayData                    MarkerGameplayData;                                        // 0x0010(0x0038) (NoDestructor, NativeAccessSpecifierPublic)
	struct FSQMarkerTimestamps                         AssignedTimestamp;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQMarkerLimiterFireTeam
// 0x0050
struct FSQMarkerLimiterFireTeam
{
	unsigned char                                      UnknownData_D31C[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMarkerLimiterSquad
// 0x00A0
struct FSQMarkerLimiterSquad
{
	unsigned char                                      UnknownData_45BD[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMarkerLimiterTeam
// 0x00A0
struct FSQMarkerLimiterTeam
{
	unsigned char                                      UnknownData_7K5H[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.TeamSquadFireteamIdKey
// 0x000C
struct FTeamSquadFireteamIdKey
{
	unsigned char                                      UnknownData_EU6N[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMapListItem
// 0x0060
struct FSQMapListItem
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Map[0x28];                                                 // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMapListItem.Map
	unsigned char                                      Loadingscreen[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMapListItem.Loadingscreen

};
// ScriptStruct Squad.SQLogisticsSettings
// 0x000C
struct FSQLogisticsSettings
{
	float                                              AmmoToScore;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstructionToScore;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PassengerPercent;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQRejectedLicenseInfo
// 0x0018
struct FSQRejectedLicenseInfo
{
	unsigned char                                      UnknownData_XIXZ[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_UXUB[0x1];                                     // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	unsigned char                                      UnknownData_MWUZ[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleDeathTicket
// 0x0038
struct FSQVehicleDeathTicket
{
	unsigned char                                      VehicleType[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Squad.SQVehicleDeathTicket.VehicleType
	int                                                TicketsLostOnVehicleDestroy;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointsForVehicleDestroy;                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DelayVehicleDestroyScore;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D4P8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_U6R6[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMutualWeapon
// 0x00D0
struct FSQMutualWeapon
{
	class UClass*                                      Weapon;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckCurrentMagazineForEquip;                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CheckCurrentMagazineForUnequip;                            // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPreviousMagazineForEquip;                            // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZUQ3[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                BothEmptyWeaponEquipMontage;                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                BothEmpty1pEquipMontage;                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                BothEmpty3pEquipMontage;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BothEmptyEquipDuration;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4MT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrentWeaponEquipMontage;            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent1pEquipMontage;                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent3pEquipMontage;                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousEmptyOrIgnoreCurrentEquipDuration;                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YFS[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentEmptyOrIgnorePreviousWeaponEquipMontage;            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious1pEquipMontage;                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious3pEquipMontage;                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentEmptyOrIgnorePreviousEquipDuration;                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZBFA[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                NoneEmptyOrIgnoreBothWeaponEquipMontage;                   // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth1pEquipMontage;                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth3pEquipMontage;                       // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoneEmptyOrIgnoreBothEquipDuration;                        // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1R3W[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentEmptyWeaponUnequipMontage;                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmpty1pUnequipMontage;                              // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CurrentEmpty3pUnequipMontage;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentEmptyUnequipDuration;                               // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DQ1[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                NoneOrIgnoreCurrentWeaponUnequipMontage;                   // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneOrIgnoreCurrent1pUnequipMontage;                       // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                NoneOrIgnoreCurrent3pUnequipMontage;                       // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoneOrIgnoreCurrentUnequipDuration;                        // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY5H[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQBoredMontageSet
// 0x0018
struct FSQBoredMontageSet
{
	class UAnimMontage*                                BoredWeaponMontage;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Bored1pMontage;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Bored3pMontage;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQVehicleEffectConfig
// 0x0030
struct FSQVehicleEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSounds;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AZY[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       WheelBoneName;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UVehicleWheel>                VehicleWheel;                                              // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USQPhysicalMaterial>          PhysMaterial;                                              // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSS8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQVehicleEffectsQualitySetting
// 0x0008
struct FSQVehicleEffectsQualitySetting
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIT1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CullingDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQGrenadeData
// 0x0048
struct FSQGrenadeData
{
	bool                                               bInfiniteAmmo;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DZ1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
// ScriptStruct Squad.SQRoute2
// 0x0050
struct FSQRoute2
{
	unsigned char                                      Links[0x50];                                               // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Squad.SQRoute2.Links

};
// ScriptStruct Squad.SQRoute
// 0x0020
struct FSQRoute
{
	TArray<struct FSQGraphLink>                        Links;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     Source;                                                    // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     Destination;                                               // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDesignLink
// 0x0010
struct FSQDesignLink
{
	class AActor*                                      NodeA;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NodeB;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQGameSubsystemObject
// 0x0018
struct FSQGameSubsystemObject
{
	struct FString                                     SubsystemClass;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunOnServer;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunOnClient;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PHV[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_99KM[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_YZ27[0x2C];                                    // 0x0034(0x002C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQAnimPlayTime
// 0x000C
struct FSQAnimPlayTime
{
	float                                              WeaponPlayTime;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Soldier1pPlayTime;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Soldier3pPlayTime;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAudioComponentPool
// 0x0020
struct FSQAudioComponentPool
{
	TArray<class UAudioComponent*>                     AudioComponentPool;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_RKFP[0x1];                                     // 0x0077(0x0001) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_YFRH[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_B1LL[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQDeployableStateDamageEffect
// 0x0018
struct FSQDeployableStateDamageEffect
{
	ESQBuildState                                      OldBuildState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      NewBuildState;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z3TF[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CullingDistanceInMeters;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSQDamageEffect>                     DamageEffects;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQEffectParticleSound
// 0x0018
struct FSQEffectParticleSound
{
	class UClass*                                      LastingEffectClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleEffect;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SoundEffect;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDeployableChangeStateEffect
// 0x0020
struct FSQDeployableChangeStateEffect
{
	ESQBuildState                                      OldBuildState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQBuildState                                      NewBuildState;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5I4[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CullingDistanceInMeters;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSQEffectParticleSound                      Effect;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQDamageModifier
// 0x0028
struct FSQDamageModifier
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Modifier;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForwardDamageToSoldier;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RS4Y[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ForwardDamageToSoldierModifier;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForwardDeathToSoldier;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncapSoldierOnDeath;                                      // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyPassDamageIfDirectHit;                                // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8C52[0x1];                                     // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirectHitDamageMultiplier;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectHitDamageMultiplier;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectHitRadialDamageMultiplier;                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5004[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

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
// ScriptStruct Squad.WidgetGroup
// 0x0010
struct FWidgetGroup
{
	TArray<class USQCoreStateWidget*>                  List;                                                      // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCoreStateDataList
// 0x0010
struct FSQCoreStateDataList
{
	TArray<class USQCoreStateData*>                    Raw;                                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CoreStateDataTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCoreStateDataTickFunction : public FTickFunction
{
	class USQCoreStateData*                            Target;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCoreStateDataToIdMap
// 0x0050
struct FSQCoreStateDataToIdMap
{
	TMap<class USQCoreStateData*, struct FSQCoreStateId> Raw;                                                       // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCoreStateId
// 0x0002
struct FSQCoreStateId
{
	uint16_t                                           Raw;                                                       // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQConsoleCommand
// 0x0038 (0x0060 - 0x0028)
struct FSQConsoleCommand : public FAutoCompleteCommand
{
	unsigned char                                      UnknownData_EEQB[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQConfigValueLoader
// 0x0008
struct FSQConfigValueLoader
{
	unsigned char                                      UnknownData_WJVY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQConfigMappedValueLoader
// 0x0050 (0x0058 - 0x0008)
struct FSQConfigMappedValueLoader : public FSQConfigValueLoader
{
	unsigned char                                      UnknownData_TFTA[0x50];                                    // 0x0008(0x0050) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQServerSettings
// 0x0080
struct FSQServerSettings
{
	unsigned char                                      UnknownData_IXEN[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRemoteGameConfig
// 0x0010
struct FSQRemoteGameConfig
{
	bool                                               bLicensingEnabled;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerHealthEnabled;                                      // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZTD[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ServerHealthHigh;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerHealthLow;                                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModdedServersOnTop;                                       // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TXJO[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQRemoteServerConfig
// 0x0001
struct FSQRemoteServerConfig
{
	unsigned char                                      UnknownData_A2KD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.CommanderNomineeArray
// 0x0010 (0x0118 - 0x0108)
struct FCommanderNomineeArray : public FFastArraySerializer
{
	TArray<struct FCommanderVoteNominee>               Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.CommanderVoteNominee
// 0x0014 (0x0020 - 0x000C)
struct FCommanderVoteNominee : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_R96L[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerState*                              NomineeState;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VoteCount;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHV2[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCommanderActionSounds
// 0x00A0
struct FSQCommanderActionSounds
{
	unsigned char                                      CommandActionPlaced[0x28];                                 // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderActionSounds.CommandActionPlaced
	unsigned char                                      CommandActionActive[0x28];                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderActionSounds.CommandActionActive
	unsigned char                                      CommandActionDestroyed[0x28];                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderActionSounds.CommandActionDestroyed
	unsigned char                                      CommandActionEnded[0x28];                                  // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQCommanderActionSounds.CommandActionEnded

};
// ScriptStruct Squad.SQCommanderActionDataArray
// 0x0010 (0x0118 - 0x0108)
struct FSQCommanderActionDataArray : public FFastArraySerializer
{
	TArray<struct FSQCommandActionDataFASItem>         Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQCommandActionData
// 0x0018
struct FSQCommandActionData
{
	class UClass*                                      CommandActionData;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GameTimeAtCreation;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownTimeRemaining;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDestroyedDuringActive;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA1F[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCommandActionDataFASItem
// 0x001C (0x0028 - 0x000C)
struct FSQCommandActionDataFASItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_25LZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQCommandActionData                        Content;                                                   // 0x0010(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQTeamCommands
// 0x0018 (0x0020 - 0x0008)
struct FSQTeamCommands : public FTableRowBase
{
	class UClass*                                      CommandData;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Team;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

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
	unsigned char                                      UnknownData_5DER[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                pop_Mean;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                pop_Max;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                samplesTaken;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1HXS[0x14];                                    // 0x0034(0x0014) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQChunkDependency
// 0x0020
struct FSQChunkDependency
{
	struct FInt32Range                                 ChunkIDs;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ParentChunkIDs;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

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
// ScriptStruct Squad.SQBuffDesc
// 0x0008
struct FSQBuffDesc
{
	unsigned char                                      UnknownData_XSEH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQBoundaryListenerData
// 0x0014
struct FSQBoundaryListenerData
{
	bool                                               bInsideBoundary;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXQN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CheckTime;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EntryTime;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExitTime;                                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MUG[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQButtonStyle
// 0x0080
struct FSQButtonStyle
{
	bool                                               bUseStyling;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseImageStyling;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M42I[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  NormalImage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HoveredImage;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PressedImage;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DisabledImage;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTintStyling;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseColorBlending;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNB2[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                NormalTint;                                                // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredTint;                                               // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedTint;                                               // 0x004C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledTint;                                              // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E98[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   PressedSoundCue;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HoveredSoundCue;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Squad.SQAnimNode_WheelHandler
// 0x0030 (0x00F8 - 0x00C8)
struct FSQAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	float                                              Smoothing;                                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1SB[0x1C];                                    // 0x00CC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             PreviousWheelLocations;                                    // 0x00E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct Squad.SQAnimNode_BoneDrivenController
// 0x0060 (0x0128 - 0x00C8)
struct FSQAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQComponentType>                      SourceComponent;                                           // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UVF[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DrivingCurve;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRange;                                                 // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEC2[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RangeMin;                                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQDrivenDestinationMode                           DestinationMode;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPNU[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x010C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     TargetComponentSpace;                                      // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESQComponentType>                      TargetComponent;                                           // 0x011D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QJOX[0x2];                                     // 0x011E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAffectTargetTranslationX : 1;                             // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY : 1;                             // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ : 1;                             // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX : 1;                                // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY : 1;                                // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ : 1;                                // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX : 1;                                   // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY : 1;                                   // 0x0120(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ : 1;                                   // 0x0121(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BG4[0x2];                                     // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ESQDrivenBoneModificationMode                      ModificationMode;                                          // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HR1C[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCachedStateArray
// 0x0018
struct FSQCachedStateArray
{
	TArray<struct FSQCachedStateData>                  States;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6OO[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCachedStateData
// 0x001C
struct FSQCachedStateData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49JA[0xC];                                     // 0x0010(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCachedAssetPlayerData
// 0x0020
struct FSQCachedAssetPlayerData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InstanceName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IVJ[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCachedRelevantAnimData
// 0x001C
struct FSQCachedRelevantAnimData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8R0U[0xC];                                     // 0x0010(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQCachedTransitionData
// 0x0024
struct FSQCachedTransitionData
{
	struct FName                                       StateMachineName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FromStateName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToStateName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XU96[0xC];                                     // 0x0018(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQMarkerReference
// 0x0028
struct FSQMarkerReference
{
	class UClass*                                      MarkerType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSquadOnly;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NCC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USQ_HexMenu_BaseAction*>              Markers;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                ConcurrentMarkersLimit;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMB6[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.HeatMapRecordingSample
// 0x0020
struct FHeatMapRecordingSample
{
	unsigned char                                      UnknownData_NGQ2[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.HeatMapRecording
// 0x0088
struct FHeatMapRecording
{
	unsigned char                                      UnknownData_B5FT[0x88];                                    // 0x0000(0x0088) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.BlueprintOnlineItemDefinition
// 0x0010
struct FBlueprintOnlineItemDefinition
{
	unsigned char                                      UnknownData_1A3Q[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQBlueprintLoginResult
// 0x0010
struct FSQBlueprintLoginResult
{
	unsigned char                                      UnknownData_S029[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct Squad.SQFireTeam
// 0x0018
struct FSQFireTeam
{
	TArray<class ASQPlayerController*>                 Players;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNCH[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

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
	unsigned char                                      UnknownData_J1X5[0xC];                                     // 0x006C(0x000C) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
