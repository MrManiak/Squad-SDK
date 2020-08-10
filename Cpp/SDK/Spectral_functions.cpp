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

// Function Spectral.SpectralBPLibrary.Shutdown
// (Final, Native, Static, Private, BlueprintCallable)
void USpectralBPLibrary::STATIC_Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.Shutdown");

	USpectralBPLibrary_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Spectral.SpectralBPLibrary.SetColorForLeds
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<ESpectralLedName>       ledNames                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_SetColorForLeds(TArray<ESpectralLedName> ledNames, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.SetColorForLeds");

	USpectralBPLibrary_SetColorForLeds_Params params;
	params.ledNames = ledNames;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.SetColorForLed
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// ESpectralLedName               ledName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_SetColorForLed(ESpectralLedName ledName, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.SetColorForLed");

	USpectralBPLibrary_SetColorForLed_Params params;
	params.ledName = ledName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.SetColorForDevice
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// ESpectralDeviceType            DeviceType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_SetColorForDevice(ESpectralDeviceType DeviceType, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.SetColorForDevice");

	USpectralBPLibrary_SetColorForDevice_Params params;
	params.DeviceType = DeviceType;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.SetColor
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_SetColor(const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.SetColor");

	USpectralBPLibrary_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.RazerIsEnabled
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_RazerIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.RazerIsEnabled");

	USpectralBPLibrary_RazerIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.LogitechIsEnabled
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_LogitechIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.LogitechIsEnabled");

	USpectralBPLibrary_LogitechIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.IsInitialized
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.IsInitialized");

	USpectralBPLibrary_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.Initialize
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.Initialize");

	USpectralBPLibrary_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Spectral.SpectralBPLibrary.CorsairIsEnabled
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpectralBPLibrary::STATIC_CorsairIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spectral.SpectralBPLibrary.CorsairIsEnabled");

	USpectralBPLibrary_CorsairIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
