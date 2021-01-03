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

// Function W_DeploymentTutorial.W_DeploymentTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DeploymentTutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.Construct");

	UW_DeploymentTutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Show_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::BndEvt__Show_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Show_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_DeploymentTutorial_C_BndEvt__Show_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Skip_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::BndEvt__Skip_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Skip_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UW_DeploymentTutorial_C_BndEvt__Skip_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Button_TeamSelect1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::BndEvt__Button_TeamSelect1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__Button_TeamSelect1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UW_DeploymentTutorial_C_BndEvt__Button_TeamSelect1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.Squad Select 1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::Squad_Select_1(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.Squad Select 1");

	UW_DeploymentTutorial_C_Squad_Select_1_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.Tick");

	UW_DeploymentTutorial_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.Squad Select 2
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentTutorial_C::Squad_Select_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.Squad Select 2");

	UW_DeploymentTutorial_C_Squad_Select_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__ButtonRoleNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::BndEvt__ButtonRoleNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.BndEvt__ButtonRoleNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UW_DeploymentTutorial_C_BndEvt__ButtonRoleNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.End of Tutorial 1
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentTutorial_C::End_of_Tutorial_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.End of Tutorial 1");

	UW_DeploymentTutorial_C_End_of_Tutorial_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.End Tutorial
// (BlueprintCallable, BlueprintEvent)
void UW_DeploymentTutorial_C::End_Tutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.End Tutorial");

	UW_DeploymentTutorial_C_End_Tutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeploymentTutorial.W_DeploymentTutorial_C.ExecuteUbergraph_W_DeploymentTutorial
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeploymentTutorial_C::ExecuteUbergraph_W_DeploymentTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeploymentTutorial.W_DeploymentTutorial_C.ExecuteUbergraph_W_DeploymentTutorial");

	UW_DeploymentTutorial_C_ExecuteUbergraph_W_DeploymentTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
