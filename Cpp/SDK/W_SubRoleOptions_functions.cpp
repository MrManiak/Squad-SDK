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

// Function W_SubRoleOptions.W_SubRoleOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SubRoleOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleOptions.W_SubRoleOptions_C.Construct");

	UW_SubRoleOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleOptions.W_SubRoleOptions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SubRoleOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleOptions.W_SubRoleOptions_C.Tick");

	UW_SubRoleOptions_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleOptions.W_SubRoleOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SubRoleOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleOptions.W_SubRoleOptions_C.PreConstruct");

	UW_SubRoleOptions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleOptions.W_SubRoleOptions_C.Clear
// (BlueprintCallable, BlueprintEvent)
void UW_SubRoleOptions_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleOptions.W_SubRoleOptions_C.Clear");

	UW_SubRoleOptions_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleOptions.W_SubRoleOptions_C.ExecuteUbergraph_W_SubRoleOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SubRoleOptions_C::ExecuteUbergraph_W_SubRoleOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleOptions.W_SubRoleOptions_C.ExecuteUbergraph_W_SubRoleOptions");

	UW_SubRoleOptions_C_ExecuteUbergraph_W_SubRoleOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
