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

// Enum Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t
{
	EUpdateCompletionStatus__UpdateUnknown = 0,
	EUpdateCompletionStatus__UpdateSuccess = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn = 8,
	EUpdateCompletionStatus__EUpdateCompletionStatus_MAX = 9,

};

// Enum Hotfix.EUpdateState
enum class EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle       = 0,
	EUpdateState__UpdatePending    = 1,
	EUpdateState__CheckingForPatch = 2,
	EUpdateState__DetectingPlatformEnvironment = 3,
	EUpdateState__CheckingForHotfix = 4,
	EUpdateState__WaitingOnInitialLoad = 5,
	EUpdateState__InitialLoadComplete = 6,
	EUpdateState__UpdateComplete   = 7,
	EUpdateState__EUpdateState_MAX = 8,

};

// Enum Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t
{
	EHotfixResult__Failed          = 0,
	EHotfixResult__Success         = 1,
	EHotfixResult__SuccessNoChange = 2,
	EHotfixResult__SuccessNeedsReload = 3,
	EHotfixResult__SuccessNeedsRelaunch = 4,
	EHotfixResult__EHotfixResult_MAX = 5,

};

// Enum Hotfix.EPatchCheckResult
enum class EPatchCheckResult : uint8_t
{
	EPatchCheckResult__NoPatchRequired = 0,
	EPatchCheckResult__PatchRequired = 1,
	EPatchCheckResult__NoLoggedInUser = 2,
	EPatchCheckResult__PatchCheckFailure = 3,
	EPatchCheckResult__EPatchCheckResult_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
