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

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Visibility if Dead
struct UW_Medic_GiveUp_C_Get_Visibility_if_Dead_Params
{
	bool                                               is_visible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Get Teammate Distance
struct UW_Medic_GiveUp_C_Get_Teammate_Distance_Params
{
	class ASQSoldier*                                  Teammate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D
struct UW_Medic_GiveUp_C_OnLoaded_AFF1CC584BBDF1233D1C2888084E5A4D_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Construct
struct UW_Medic_GiveUp_C_Construct_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Refresh
struct UW_Medic_GiveUp_C_Refresh_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature
struct UW_Medic_GiveUp_C_BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_24_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature
struct UW_Medic_GiveUp_C_BndEvt__ChallengeSwitchTeam_K2Node_ComponentBoundEvent_0_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
struct UW_Medic_GiveUp_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
struct UW_Medic_GiveUp_C_BndEvt__SettingsItem_TickBox_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USettingsItem_TickBox_C*                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.GiveUp
struct UW_Medic_GiveUp_C_GiveUp_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_Medic_GiveUp_C_BndEvt__Button_Medic_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Enable Medic Button
struct UW_Medic_GiveUp_C_Enable_Medic_Button_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Initial Delay for Medic Call
struct UW_Medic_GiveUp_C_Initial_Delay_for_Medic_Call_Params
{
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.Tick
struct UW_Medic_GiveUp_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Medic_GiveUp.W_Medic_GiveUp_C.ExecuteUbergraph_W_Medic_GiveUp
struct UW_Medic_GiveUp_C_ExecuteUbergraph_W_Medic_GiveUp_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
