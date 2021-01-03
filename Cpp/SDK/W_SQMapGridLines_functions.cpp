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

// Function W_SQMapGridLines.W_SQMapGridLines_C.InitializeTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               GridNumbers                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingZoom                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLines_C::InitializeTexture(const struct FVector2D& GridNumbers, float StartingZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLines.W_SQMapGridLines_C.InitializeTexture");

	UW_SQMapGridLines_C_InitializeTexture_Params params;
	params.GridNumbers = GridNumbers;
	params.StartingZoom = StartingZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLines.W_SQMapGridLines_C.UpdateZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLines_C::UpdateZoom(float ZoomAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLines.W_SQMapGridLines_C.UpdateZoom");

	UW_SQMapGridLines_C_UpdateZoom_Params params;
	params.ZoomAmount = ZoomAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLines.W_SQMapGridLines_C.Update Grid Opacity
// (BlueprintCallable, BlueprintEvent)
void UW_SQMapGridLines_C::Update_Grid_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLines.W_SQMapGridLines_C.Update Grid Opacity");

	UW_SQMapGridLines_C_Update_Grid_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLines.W_SQMapGridLines_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQMapGridLines_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLines.W_SQMapGridLines_C.Construct");

	UW_SQMapGridLines_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLines.W_SQMapGridLines_C.ExecuteUbergraph_W_SQMapGridLines
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLines_C::ExecuteUbergraph_W_SQMapGridLines(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLines.W_SQMapGridLines_C.ExecuteUbergraph_W_SQMapGridLines");

	UW_SQMapGridLines_C_ExecuteUbergraph_W_SQMapGridLines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
