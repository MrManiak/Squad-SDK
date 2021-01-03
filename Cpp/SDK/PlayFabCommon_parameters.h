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

// Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
struct UPlayFabAuthenticationContext_SetPlayFabId_Params
{
	struct FString                                     InKey;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
struct UPlayFabAuthenticationContext_SetEntityToken_Params
{
	struct FString                                     InToken;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
struct UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params
{
	struct FString                                     InKey;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
struct UPlayFabAuthenticationContext_SetClientSessionTicket_Params
{
	struct FString                                     InTicket;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
struct UPlayFabAuthenticationContext_GetPlayFabId_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
struct UPlayFabAuthenticationContext_GetEntityToken_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
struct UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
struct UPlayFabAuthenticationContext_GetClientSessionTicket_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
struct UPlayFabAuthenticationContext_ForgetAllCredentials_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
