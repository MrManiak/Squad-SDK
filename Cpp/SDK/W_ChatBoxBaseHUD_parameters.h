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

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Update Save Visibility
struct UW_ChatBoxBaseHUD_C_Update_Save_Visibility_Params
{
};

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Construct
struct UW_ChatBoxBaseHUD_C_Construct_Params
{
};

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Add New Chat
struct UW_ChatBoxBaseHUD_C_Add_New_Chat_Params
{
	struct FString                                     PlayerName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESQChat                                            Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQNotificationTypes                               NotificationType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Close Chat
struct UW_ChatBoxBaseHUD_C_Close_Chat_Params
{
};

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Open Chat
struct UW_ChatBoxBaseHUD_C_Open_Chat_Params
{
};

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.ExecuteUbergraph_W_ChatBoxBaseHUD
struct UW_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
