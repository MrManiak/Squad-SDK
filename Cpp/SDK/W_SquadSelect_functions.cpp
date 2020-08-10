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

// Function W_SquadSelect.W_SquadSelect_C.BIND - Squad Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_SquadSelect_C::BIND___Squad_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.BIND - Squad Name");

	UW_SquadSelect_C_BIND___Squad_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadSelect.W_SquadSelect_C.BIND - Map & Mode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_SquadSelect_C::BIND___Map___Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.BIND - Map & Mode");

	UW_SquadSelect_C_BIND___Map___Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UW_SquadSelect_C::BIND___Lock_Button_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Color");

	UW_SquadSelect_C_BIND___Lock_Button_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UW_SquadSelect_C::BIND___Lock_Button_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.BIND - Lock Button Visibility");

	UW_SquadSelect_C_BIND___Lock_Button_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadSelect.W_SquadSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.PreConstruct");

	UW_SquadSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadSelect.W_SquadSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SquadSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.Construct");

	UW_SquadSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadSelect.W_SquadSelect_C.BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadSelect_C::BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_SquadSelect_C_BndEvt__ButtonDeploymentSizeToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadSelect.W_SquadSelect_C.ExecuteUbergraph_W_SquadSelect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadSelect_C::ExecuteUbergraph_W_SquadSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadSelect.W_SquadSelect_C.ExecuteUbergraph_W_SquadSelect");

	UW_SquadSelect_C_ExecuteUbergraph_W_SquadSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
