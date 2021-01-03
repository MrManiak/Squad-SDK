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

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Init Mod Window
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ModDownloadWindow_C::Init_Mod_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Init Mod Window");

	UW_ModDownloadWindow_C_Init_Mod_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Update Mod Download Window
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_ModDownloadWindow_C::Update_Mod_Download_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Update Mod Download Window");

	UW_ModDownloadWindow_C_Update_Mod_Download_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Download Successful
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ModDownloadWindow_C::Is_Download_Successful(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Download Successful");

	UW_ModDownloadWindow_C_Is_Download_Successful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Finished Loading
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ModDownloadWindow_C::Is_Finished_Loading(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Finished Loading");

	UW_ModDownloadWindow_C_Is_Finished_Loading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModDownloadWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Tick");

	UW_ModDownloadWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModDownloadWindow_C::BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UW_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModDownloadWindow_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UW_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ModDownloadWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.Construct");

	UW_ModDownloadWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModDownloadWindow.W_ModDownloadWindow_C.ExecuteUbergraph_W_ModDownloadWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModDownloadWindow_C::ExecuteUbergraph_W_ModDownloadWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModDownloadWindow.W_ModDownloadWindow_C.ExecuteUbergraph_W_ModDownloadWindow");

	UW_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
