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

// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Set Helicopter Tips
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Set_Helicopter_Tips()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Set Helicopter Tips");

	UW_Vehicle_Tutorial_C_Set_Helicopter_Tips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Set Engine Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Set_Engine_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Set Engine Text");

	UW_Vehicle_Tutorial_C_Set_Engine_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Refresh_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Refresh Visibility");

	UW_Vehicle_Tutorial_C_Refresh_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Update");

	UW_Vehicle_Tutorial_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Refresh Vehicle Reference
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Refresh_Vehicle_Reference()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Refresh Vehicle Reference");

	UW_Vehicle_Tutorial_C_Refresh_Vehicle_Reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Vehicle_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.Construct");

	UW_Vehicle_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.ExecuteUbergraph_W_Vehicle_Tutorial
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Vehicle_Tutorial_C::ExecuteUbergraph_W_Vehicle_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Vehicle_Tutorial.W_Vehicle_Tutorial_C.ExecuteUbergraph_W_Vehicle_Tutorial");

	UW_Vehicle_Tutorial_C_ExecuteUbergraph_W_Vehicle_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
