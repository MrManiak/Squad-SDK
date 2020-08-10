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

// Function W_CamControlButton.W_CamControlButton_C.Validate Vehicle Action
struct UW_CamControlButton_C_Validate_Vehicle_Action_Params
{
	bool                                               Allowed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CamControlButton.W_CamControlButton_C.Get Tooltip
struct UW_CamControlButton_C_Get_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CamControlButton.W_CamControlButton_C.Can Use Button
struct UW_CamControlButton_C_Can_Use_Button_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CamControlButton.W_CamControlButton_C.Update Remote Camera Button
struct UW_CamControlButton_C_Update_Remote_Camera_Button_Params
{
};

// Function W_CamControlButton.W_CamControlButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_CamControlButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_CamControlButton.W_CamControlButton_C.Tick
struct UW_CamControlButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CamControlButton.W_CamControlButton_C.Construct
struct UW_CamControlButton_C_Construct_Params
{
};

// Function W_CamControlButton.W_CamControlButton_C.Remove Camera Button
struct UW_CamControlButton_C_Remove_Camera_Button_Params
{
};

// Function W_CamControlButton.W_CamControlButton_C.PreConstruct
struct UW_CamControlButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CamControlButton.W_CamControlButton_C.Fail Message
struct UW_CamControlButton_C_Fail_Message_Params
{
};

// Function W_CamControlButton.W_CamControlButton_C.ExecuteUbergraph_W_CamControlButton
struct UW_CamControlButton_C_ExecuteUbergraph_W_CamControlButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CamControlButton.W_CamControlButton_C.Cam State Changed__DelegateSignature
struct UW_CamControlButton_C_Cam_State_Changed__DelegateSignature_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_ControlledCamera_C*                      Cam;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
