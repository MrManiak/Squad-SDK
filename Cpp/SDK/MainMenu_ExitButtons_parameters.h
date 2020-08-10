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

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.GetVisibility_1
struct UMainMenu_ExitButtons_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.Tick
struct UMainMenu_ExitButtons_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UMainMenu_ExitButtons_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UMainMenu_ExitButtons_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.ExecuteUbergraph_MainMenu_ExitButtons
struct UMainMenu_ExitButtons_C_ExecuteUbergraph_MainMenu_ExitButtons_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
