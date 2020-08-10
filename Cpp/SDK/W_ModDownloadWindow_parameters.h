#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Init Mod Window
struct UW_ModDownloadWindow_C_Init_Mod_Window_Params
{
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Update Mod Download Window
struct UW_ModDownloadWindow_C_Update_Mod_Download_Window_Params
{
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Download Successful
struct UW_ModDownloadWindow_C_Is_Download_Successful_Params
{
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Is Finished Loading
struct UW_ModDownloadWindow_C_Is_Finished_Loading_Params
{
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Tick
struct UW_ModDownloadWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_ModDownloadWindow_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_ModDownloadWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.Construct
struct UW_ModDownloadWindow_C_Construct_Params
{
};

// Function W_ModDownloadWindow.W_ModDownloadWindow_C.ExecuteUbergraph_W_ModDownloadWindow
struct UW_ModDownloadWindow_C_ExecuteUbergraph_W_ModDownloadWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
