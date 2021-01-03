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

// Function DeploymentList.DeploymentList_C.Auto Select Spawn Point
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDeploymentList_C::Auto_Select_Spawn_Point(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.Auto Select Spawn Point");

	UDeploymentList_C_Auto_Select_Spawn_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function DeploymentList.DeploymentList_C.Update Prompt
// (Public, BlueprintCallable, BlueprintEvent)
void UDeploymentList_C::Update_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.Update Prompt");

	UDeploymentList_C_Update_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeploymentList.DeploymentList_C.Set List Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDeploymentList_C::Set_List_Visibility(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.Set List Visibility");

	UDeploymentList_C_Set_List_Visibility_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeploymentList.DeploymentList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDeploymentList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.Construct");

	UDeploymentList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeploymentList.DeploymentList_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeploymentList_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UDeploymentList_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeploymentList.DeploymentList_C.ExecuteUbergraph_DeploymentList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeploymentList_C::ExecuteUbergraph_DeploymentList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeploymentList.DeploymentList_C.ExecuteUbergraph_DeploymentList");

	UDeploymentList_C_ExecuteUbergraph_DeploymentList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
