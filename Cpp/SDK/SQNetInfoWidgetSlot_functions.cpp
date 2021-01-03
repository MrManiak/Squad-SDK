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

// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetHeaderURL
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   HeaderURL                      (Parm, OutParm)
void USQNetInfoWidgetSlot_C::GetHeaderURL(struct FText* HeaderURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetHeaderURL");

	USQNetInfoWidgetSlot_C_GetHeaderURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeaderURL != nullptr)
		*HeaderURL = params.HeaderURL;

}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetBodyText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USQNetInfoWidgetSlot_C::GetBodyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetBodyText");

	USQNetInfoWidgetSlot_C_GetBodyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USQNetInfoWidgetSlot_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.GetTitleText");

	USQNetInfoWidgetSlot_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnFail_9D89973243B31B6470A48FB1F15C4057
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USQNetInfoWidgetSlot_C::OnFail_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnFail_9D89973243B31B6470A48FB1F15C4057");

	USQNetInfoWidgetSlot_C_OnFail_9D89973243B31B6470A48FB1F15C4057_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnSuccess_9D89973243B31B6470A48FB1F15C4057
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USQNetInfoWidgetSlot_C::OnSuccess_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnSuccess_9D89973243B31B6470A48FB1F15C4057");

	USQNetInfoWidgetSlot_C_OnSuccess_9D89973243B31B6470A48FB1F15C4057_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.EventHeaderChanged
// (BlueprintCallable, BlueprintEvent)
void USQNetInfoWidgetSlot_C::EventHeaderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.EventHeaderChanged");

	USQNetInfoWidgetSlot_C_EventHeaderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USQNetInfoWidgetSlot_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.OnInitialized");

	USQNetInfoWidgetSlot_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.ExecuteUbergraph_SQNetInfoWidgetSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USQNetInfoWidgetSlot_C::ExecuteUbergraph_SQNetInfoWidgetSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C.ExecuteUbergraph_SQNetInfoWidgetSlot");

	USQNetInfoWidgetSlot_C_ExecuteUbergraph_SQNetInfoWidgetSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
