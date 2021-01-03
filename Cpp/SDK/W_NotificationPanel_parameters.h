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

// Function W_NotificationPanel.W_NotificationPanel_C.Draw Notification
struct UW_NotificationPanel_C_Draw_Notification_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESQNotificationTypes                               Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Custom_Icon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationPanel.W_NotificationPanel_C.New Notification
struct UW_NotificationPanel_C_New_Notification_Params
{
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESQNotificationTypes                               Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Custom_Icon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationPanel.W_NotificationPanel_C.Construct
struct UW_NotificationPanel_C_Construct_Params
{
};

// Function W_NotificationPanel.W_NotificationPanel_C.Add New Chat
struct UW_NotificationPanel_C_Add_New_Chat_Params
{
	struct FString                                     PlayerName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQNotificationTypes                               NotificationType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationPanel.W_NotificationPanel_C.Draw Main Notification
struct UW_NotificationPanel_C_Draw_Main_Notification_Params
{
};

// Function W_NotificationPanel.W_NotificationPanel_C.Draw Next Notification
struct UW_NotificationPanel_C_Draw_Next_Notification_Params
{
};

// Function W_NotificationPanel.W_NotificationPanel_C.ExecuteUbergraph_W_NotificationPanel
struct UW_NotificationPanel_C_ExecuteUbergraph_W_NotificationPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
