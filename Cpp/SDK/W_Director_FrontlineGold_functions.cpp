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

// Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Director_FrontlineGold_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Tick");

	UW_Director_FrontlineGold_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Update Tiling
// (BlueprintCallable, BlueprintEvent)
void UW_Director_FrontlineGold_C::Update_Tiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Update Tiling");

	UW_Director_FrontlineGold_C_Update_Tiling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Director_FrontlineGold_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.Construct");

	UW_Director_FrontlineGold_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.ExecuteUbergraph_W_Director_FrontlineGold
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Director_FrontlineGold_C::ExecuteUbergraph_W_Director_FrontlineGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Director_FrontlineGold.W_Director_FrontlineGold_C.ExecuteUbergraph_W_Director_FrontlineGold");

	UW_Director_FrontlineGold_C_ExecuteUbergraph_W_Director_FrontlineGold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
