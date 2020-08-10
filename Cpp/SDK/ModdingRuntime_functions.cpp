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

// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.VerifyModIntegrity
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSQModLoadProgress      ServerModProgress              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UModdingRuntimeBlueprintLibrary::STATIC_VerifyModIntegrity(const struct FSQModLoadProgress& ServerModProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.VerifyModIntegrity");

	UModdingRuntimeBlueprintLibrary_VerifyModIntegrity_Params params;
	params.ServerModProgress = ServerModProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.ToIDString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSQModInfo              ModInfo                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UModdingRuntimeBlueprintLibrary::STATIC_ToIDString(const struct FSQModInfo& ModInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.ToIDString");

	UModdingRuntimeBlueprintLibrary_ToIDString_Params params;
	params.ModInfo = ModInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.GetModInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSQModLoadProgress      MissingModData                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSQModInfo              OutModInfo                     (Parm, OutParm, NativeAccessSpecifierPublic)
void UModdingRuntimeBlueprintLibrary::STATIC_GetModInfo(const struct FSQModLoadProgress& MissingModData, struct FSQModInfo* OutModInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.GetModInfo");

	UModdingRuntimeBlueprintLibrary_GetModInfo_Params params;
	params.MissingModData = MissingModData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutModInfo != nullptr)
		*OutModInfo = params.OutModInfo;

}


// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.DownloadMissingMods
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSQModLoadProgress> MissingModData                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UModdingRuntimeBlueprintLibrary::STATIC_DownloadMissingMods(TArray<struct FSQModLoadProgress>* MissingModData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.DownloadMissingMods");

	UModdingRuntimeBlueprintLibrary_DownloadMissingMods_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MissingModData != nullptr)
		*MissingModData = params.MissingModData;

}


// Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.CancelDownloads
// (Final, Native, Static, Public, BlueprintCallable)
void UModdingRuntimeBlueprintLibrary::STATIC_CancelDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModdingRuntime.ModdingRuntimeBlueprintLibrary.CancelDownloads");

	UModdingRuntimeBlueprintLibrary_CancelDownloads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
