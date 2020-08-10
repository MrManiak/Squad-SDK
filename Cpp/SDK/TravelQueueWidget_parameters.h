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

// Function TravelQueueWidget.TravelQueueWidget_C.Bind Visibility via bToggle
struct UTravelQueueWidget_C_Bind_Visibility_via_bToggle_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Bind Text Detailed Queue 2
struct UTravelQueueWidget_C_Bind_Text_Detailed_Queue_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Bind Text Detailed Queue 1
struct UTravelQueueWidget_C_Bind_Text_Detailed_Queue_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Bind Text Countdown
struct UTravelQueueWidget_C_Bind_Text_Countdown_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Bind Text Position
struct UTravelQueueWidget_C_Bind_Text_Position_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Get Queue
struct UTravelQueueWidget_C_Get_Queue_Params
{
	class ASQJoinBeaconClient*                         JoinQueueClient;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelQueueWidget.TravelQueueWidget_C.OnFailure_338384884E6EB2D7330F46BC3A121CC7
struct UTravelQueueWidget_C_OnFailure_338384884E6EB2D7330F46BC3A121CC7_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.OnSuccess_338384884E6EB2D7330F46BC3A121CC7
struct UTravelQueueWidget_C_OnSuccess_338384884E6EB2D7330F46BC3A121CC7_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UTravelQueueWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.Start Countdown
struct UTravelQueueWidget_C_Start_Countdown_Params
{
	struct FBlueprintSessionResult                     Sesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Count Down
struct UTravelQueueWidget_C_Count_Down_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.Lock Open
struct UTravelQueueWidget_C_Lock_Open_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.BndEvt__CancelTravel_K2Node_ComponentBoundEvent_220_OnClicked__DelegateSignature
struct UTravelQueueWidget_C_BndEvt__CancelTravel_K2Node_ComponentBoundEvent_220_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelQueueWidget.TravelQueueWidget_C.BndEvt__LeaveQueue_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature
struct UTravelQueueWidget_C_BndEvt__LeaveQueue_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Reset Queue Window
struct UTravelQueueWidget_C_Reset_Queue_Window_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.Initiate Travel
struct UTravelQueueWidget_C_Initiate_Travel_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TravelQueueWidget.TravelQueueWidget_C.Construct
struct UTravelQueueWidget_C_Construct_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.Marquee
struct UTravelQueueWidget_C_Marquee_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.New Queue
struct UTravelQueueWidget_C_New_Queue_Params
{
};

// Function TravelQueueWidget.TravelQueueWidget_C.ExecuteUbergraph_TravelQueueWidget
struct UTravelQueueWidget_C_ExecuteUbergraph_TravelQueueWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
