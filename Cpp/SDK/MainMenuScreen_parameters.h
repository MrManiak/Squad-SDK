#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function MainMenuScreen.MainMenuScreen_C.Setup Pending Queue Screen
struct UMainMenuScreen_C_Setup_Pending_Queue_Screen_Params
{
	class USQGameInstance*                             instance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.OnKeyDown
struct UMainMenuScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function MainMenuScreen.MainMenuScreen_C.Get Main Menu
struct UMainMenuScreen_C_Get_Main_Menu_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MainMenu_PC_C*                           Menu_PC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Hide Back Button
struct UMainMenuScreen_C_Hide_Back_Button_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Get_Button_HideHUD_ToolTipWidget_1
struct UMainMenuScreen_C_Get_Button_HideHUD_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Toggle Game HUD
struct UMainMenuScreen_C_Toggle_Game_HUD_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Get_GameDebug_ToolTipWidget_1
struct UMainMenuScreen_C_Get_GameDebug_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Get_GameReset_ToolTipWidget_1
struct UMainMenuScreen_C_Get_GameReset_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Close Menu
struct UMainMenuScreen_C_Close_Menu_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Check Server Issues
struct UMainMenuScreen_C_Check_Server_Issues_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Leave Queue Challenge
struct UMainMenuScreen_C_Leave_Queue_Challenge_Params
{
	bool                                               Cached_Session_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBlueprintSessionResult                     Cached_Session;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenuScreen.MainMenuScreen_C.Enable Refresh Servers
struct UMainMenuScreen_C_Enable_Refresh_Servers_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Get Menu Cam
struct UMainMenuScreen_C_Get_Menu_Cam_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.On Join Queue
struct UMainMenuScreen_C_On_Join_Queue_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Hide Queue Info
struct UMainMenuScreen_C_Hide_Queue_Info_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Start Training
struct UMainMenuScreen_C_Start_Training_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Get_StopInputImage_Visibility_1
struct UMainMenuScreen_C_Get_StopInputImage_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.On Leave Queue
struct UMainMenuScreen_C_On_Leave_Queue_Params
{
	bool                                               New_Server;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBlueprintSessionResult                     Sesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenuScreen.MainMenuScreen_C.Get_LeaveQueueConfirm_Visibility_1
struct UMainMenuScreen_C_Get_LeaveQueueConfirm_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Remove Exit Buttons
struct UMainMenuScreen_C_Remove_Exit_Buttons_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Set Context Widgets
struct UMainMenuScreen_C_Set_Context_Widgets_Params
{
	class UWidget*                                     Context_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Set Visible Widgets
struct UMainMenuScreen_C_Set_Visible_Widgets_Params
{
	class UWidget*                                     Main_Widget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Nav_Widget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Bottom_context_widget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               selected;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenuScreen.MainMenuScreen_C.Clear Menu
struct UMainMenuScreen_C_Clear_Menu_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Get_ServerMessageConfirmation_Visibility_1
struct UMainMenuScreen_C_Get_ServerMessageConfirmation_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.CustomGamesButtonVisibility
struct UMainMenuScreen_C_CustomGamesButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.InfoWidgetVisibility
struct UMainMenuScreen_C_InfoWidgetVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Get_DISCONNECT_Visiblity_1
struct UMainMenuScreen_C_Get_DISCONNECT_Visiblity_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Get_Background_Image_Visiblity_1
struct UMainMenuScreen_C_Get_Background_Image_Visiblity_1_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Close
struct UMainMenuScreen_C_Close_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Open
struct UMainMenuScreen_C_Open_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.UnselectNavButtons
struct UMainMenuScreen_C_UnselectNavButtons_Params
{
	class UWidget*                                     Except;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.UnselectSettingsButtons
struct UMainMenuScreen_C_UnselectSettingsButtons_Params
{
	bool                                               selected;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     Except;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.GetBrush_1
struct UMainMenuScreen_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function MainMenuScreen.MainMenuScreen_C.Tick
struct UMainMenuScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.OpenResetBox
struct UMainMenuScreen_C_OpenResetBox_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.HideServerMessageConfirmation
struct UMainMenuScreen_C_HideServerMessageConfirmation_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Open Exit Window
struct UMainMenuScreen_C_Open_Exit_Window_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Open Disconnect Window
struct UMainMenuScreen_C_Open_Disconnect_Window_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Construct
struct UMainMenuScreen_C_Construct_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Reset Settings Active Widget
struct UMainMenuScreen_C_Reset_Settings_Active_Widget_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Refresh Steam Status
struct UMainMenuScreen_C_Refresh_Steam_Status_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Return To Browser
struct UMainMenuScreen_C_Return_To_Browser_Params
{
	bool                                               Dedicated_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature
struct UMainMenuScreen_C_BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMainMenuScreen_C_BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Finished Search_Event_1
struct UMainMenuScreen_C_Finished_Search_Event_1_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Listen For Menu Cam
struct UMainMenuScreen_C_Listen_For_Menu_Cam_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.Possessed Menu Cam
struct UMainMenuScreen_C_Possessed_Menu_Cam_Params
{
	class AMenuCamPawn_C*                              NewMenuCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.Destruct
struct UMainMenuScreen_C_Destruct_Params
{
};

// Function MainMenuScreen.MainMenuScreen_C.BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UMainMenuScreen_C_BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuScreen.MainMenuScreen_C.ExecuteUbergraph_MainMenuScreen
struct UMainMenuScreen_C_ExecuteUbergraph_MainMenuScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
