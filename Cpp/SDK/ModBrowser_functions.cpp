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
// Functions
//---------------------------------------------------------------------------

// Function ModBrowser.ModBrowser_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UModBrowser_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModBrowser.ModBrowser_C.GetVisibility_1");

	UModBrowser_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModBrowser.ModBrowser_C.Selected Mod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModdingRuntimeModInfoDetails ModInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UModBrowser_C::Selected_Mod(const struct FModdingRuntimeModInfoDetails& ModInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModBrowser.ModBrowser_C.Selected Mod");

	UModBrowser_C_Selected_Mod_Params params;
	params.ModInfo = ModInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModBrowser.ModBrowser_C.Init
// (BlueprintCallable, BlueprintEvent)
void UModBrowser_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModBrowser.ModBrowser_C.Init");

	UModBrowser_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModBrowser.ModBrowser_C.ExecuteUbergraph_ModBrowser
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModBrowser_C::ExecuteUbergraph_ModBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModBrowser.ModBrowser_C.ExecuteUbergraph_ModBrowser");

	UModBrowser_C_ExecuteUbergraph_ModBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
