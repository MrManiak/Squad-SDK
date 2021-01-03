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

// Function W_FireteamGroup.W_FireteamGroup_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_FireteamGroup_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.OnMouseButtonDown");

	UW_FireteamGroup_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_FireteamGroup.W_FireteamGroup_C.Set Fireteam Option Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FireteamGroup_C::Set_Fireteam_Option_Visibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Set Fireteam Option Visibility");

	UW_FireteamGroup_C_Set_Fireteam_Option_Visibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.Is Member Highlighted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Has_Highlighted_member         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_FireteamGroup_C::Is_Member_Highlighted(bool* Has_Highlighted_member)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Is Member Highlighted");

	UW_FireteamGroup_C_Is_Member_Highlighted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has_Highlighted_member != nullptr)
		*Has_Highlighted_member = params.Has_Highlighted_member;

}


// Function W_FireteamGroup.W_FireteamGroup_C.Highlight Fireteam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQSelectionState              InSelectionState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FireteamGroup_C::Highlight_Fireteam(ESQSelectionState InSelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Highlight Fireteam");

	UW_FireteamGroup_C_Highlight_Fireteam_Params params;
	params.InSelectionState = InSelectionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_FireteamGroup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.PreConstruct");

	UW_FireteamGroup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_FireteamGroup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Construct");

	UW_FireteamGroup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.Create Disband Option
// (BlueprintCallable, BlueprintEvent)
void UW_FireteamGroup_C::Create_Disband_Option()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Create Disband Option");

	UW_FireteamGroup_C_Create_Disband_Option_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.Option Clicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FireteamGroup_C::Option_Clicked_Event_1(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.Option Clicked_Event_1");

	UW_FireteamGroup_C_Option_Clicked_Event_1_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C. Hide Fireteam
// (BlueprintCallable, BlueprintEvent)
void UW_FireteamGroup_C::_Hide_Fireteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C. Hide Fireteam");

	UW_FireteamGroup_C__Hide_Fireteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FireteamGroup.W_FireteamGroup_C.ExecuteUbergraph_W_FireteamGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FireteamGroup_C::ExecuteUbergraph_W_FireteamGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FireteamGroup.W_FireteamGroup_C.ExecuteUbergraph_W_FireteamGroup");

	UW_FireteamGroup_C_ExecuteUbergraph_W_FireteamGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
