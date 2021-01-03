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

// Function W_GridHeader_Command.W_GridHeader_Command_C.Construct Categories
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridHeader_Command_C::Construct_Categories()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_Command.W_GridHeader_Command_C.Construct Categories");

	UW_GridHeader_Command_C_Construct_Categories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader_Command.W_GridHeader_Command_C.Construct Buttons
// (BlueprintCallable, BlueprintEvent)
void UW_GridHeader_Command_C::Construct_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_Command.W_GridHeader_Command_C.Construct Buttons");

	UW_GridHeader_Command_C_Construct_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader_Command.W_GridHeader_Command_C.ExecuteUbergraph_W_GridHeader_Command
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridHeader_Command_C::ExecuteUbergraph_W_GridHeader_Command(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader_Command.W_GridHeader_Command_C.ExecuteUbergraph_W_GridHeader_Command");

	UW_GridHeader_Command_C_ExecuteUbergraph_W_GridHeader_Command_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
