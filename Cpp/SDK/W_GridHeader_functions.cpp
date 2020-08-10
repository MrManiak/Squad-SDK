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

// Function W_GridHeader.W_GridHeader_C.Get Squad ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridHeader_C::Get_Squad_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Get Squad ID");

	UW_GridHeader_C_Get_Squad_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_GridHeader.W_GridHeader_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridHeader_C::Get_Fireteam_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Get Fireteam ID");

	UW_GridHeader_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_GridHeader.W_GridHeader_C.Set Buttons Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GridHeader_C::Set_Buttons_Visibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Set Buttons Visibility");

	UW_GridHeader_C_Set_Buttons_Visibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader.W_GridHeader_C.Set Viewport Position
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridHeader_C::Set_Viewport_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Set Viewport Position");

	UW_GridHeader_C_Set_Viewport_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader.W_GridHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GridHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Construct");

	UW_GridHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader.W_GridHeader_C.Construct Buttons
// (BlueprintCallable, BlueprintEvent)
void UW_GridHeader_C::Construct_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.Construct Buttons");

	UW_GridHeader_C_Construct_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridHeader.W_GridHeader_C.ExecuteUbergraph_W_GridHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridHeader_C::ExecuteUbergraph_W_GridHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridHeader.W_GridHeader_C.ExecuteUbergraph_W_GridHeader");

	UW_GridHeader_C_ExecuteUbergraph_W_GridHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
