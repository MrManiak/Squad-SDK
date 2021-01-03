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

// Function W_ChatBox.W_ChatBox_C.Get_ScrollButton_ToolTipWidget_1
struct UW_ChatBox_C_Get_ScrollButton_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBox.W_ChatBox_C.Refresh Scroll Button
struct UW_ChatBox_C_Refresh_Scroll_Button_Params
{
};

// Function W_ChatBox.W_ChatBox_C.Refresh Visuals
struct UW_ChatBox_C_Refresh_Visuals_Params
{
};

// Function W_ChatBox.W_ChatBox_C.Focus Menu
struct UW_ChatBox_C_Focus_Menu_Params
{
};

// Function W_ChatBox.W_ChatBox_C.OnPreviewKeyDown
struct UW_ChatBox_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_ChatBox_C_BndEvt__EditableTextBox_165_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBox.W_ChatBox_C.Change Channel
struct UW_ChatBox_C_Change_Channel_Params
{
};

// Function W_ChatBox.W_ChatBox_C.Construct
struct UW_ChatBox_C_Construct_Params
{
};

// Function W_ChatBox.W_ChatBox_C.Add New Chat
struct UW_ChatBox_C_Add_New_Chat_Params
{
	struct FString                                     PlayerName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQNotificationTypes                               NotificationType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBox.W_ChatBox_C.Focus and Change Channel
struct UW_ChatBox_C_Focus_and_Change_Channel_Params
{
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBox.W_ChatBox_C.Set Chat Visibility
struct UW_ChatBox_C_Set_Chat_Visibility_Params
{
	bool                                               Visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChatBox.W_ChatBox_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
struct UW_ChatBox_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_ChatBox.W_ChatBox_C.OnAddedToFocusPath
struct UW_ChatBox_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function W_ChatBox.W_ChatBox_C.Bind To Menu Open Close
struct UW_ChatBox_C_Bind_To_Menu_Open_Close_Params
{
	class UUMG_MenuBase_C*                             Menu;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBox.W_ChatBox_C.Parent Closed
struct UW_ChatBox_C_Parent_Closed_Params
{
};

// Function W_ChatBox.W_ChatBox_C.Parent Opened
struct UW_ChatBox_C_Parent_Opened_Params
{
};

// Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
struct UW_ChatBox_C_ExecuteUbergraph_W_ChatBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
