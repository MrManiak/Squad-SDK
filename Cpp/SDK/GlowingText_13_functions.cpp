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

// Function GlowingText_13.GlowingText_12_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UGlowingText_12_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.SetText");

	UGlowingText_12_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
void UGlowingText_12_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.Update");

	UGlowingText_12_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bShowShadow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingText_12_C::Init(const struct FText& Text, bool bShowShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.Init");

	UGlowingText_12_C_Init_Params params;
	params.Text = Text;
	params.bShowShadow = bShowShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.SetGlowing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGlowing                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingText_12_C::SetGlowing(bool bGlowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.SetGlowing");

	UGlowingText_12_C_SetGlowing_Params params;
	params.bGlowing = bGlowing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGlowingText_12_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.Construct");

	UGlowingText_12_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGlowingText_12_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.PreConstruct");

	UGlowingText_12_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlowingText_13.GlowingText_12_C.ExecuteUbergraph_GlowingText_13
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGlowingText_12_C::ExecuteUbergraph_GlowingText_13(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlowingText_13.GlowingText_12_C.ExecuteUbergraph_GlowingText_13");

	UGlowingText_12_C_ExecuteUbergraph_GlowingText_13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
