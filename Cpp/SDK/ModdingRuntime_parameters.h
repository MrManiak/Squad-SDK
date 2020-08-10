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

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.VerifyModIntegrity
struct UModdingRuntimeBlueprintLibrary_VerifyModIntegrity_Params
{
	struct FSQModLoadProgress                          ServerModProgress;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.ToIDString
struct UModdingRuntimeBlueprintLibrary_ToIDString_Params
{
	struct FSQModInfo                                  ModInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.GetModInfo
struct UModdingRuntimeBlueprintLibrary_GetModInfo_Params
{
	struct FSQModLoadProgress                          MissingModData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSQModInfo                                  OutModInfo;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.DownloadMissingMods
struct UModdingRuntimeBlueprintLibrary_DownloadMissingMods_Params
{
	TArray<struct FSQModLoadProgress>                  MissingModData;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.CancelDownloads
struct UModdingRuntimeBlueprintLibrary_CancelDownloads_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
