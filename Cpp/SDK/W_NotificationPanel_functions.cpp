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

// Function W_NotificationPanel.W_NotificationPanel_C.Draw Notification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ESQNotificationTypes           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Custom_Icon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationPanel_C::Draw_Notification(const struct FText& Text, ESQNotificationTypes Type, class UTexture2D* Custom_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.Draw Notification");

	UW_NotificationPanel_C_Draw_Notification_Params params;
	params.Text = Text;
	params.Type = Type;
	params.Custom_Icon = Custom_Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.New Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// ESQNotificationTypes           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Custom_Icon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationPanel_C::New_Notification(const struct FText& Message, ESQNotificationTypes Type, class UTexture2D* Custom_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.New Notification");

	UW_NotificationPanel_C_New_Notification_Params params;
	params.Message = Message;
	params.Type = Type;
	params.Custom_Icon = Custom_Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_NotificationPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.Construct");

	UW_NotificationPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.Add New Chat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQNotificationTypes           NotificationType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationPanel_C::Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.Add New Chat");

	UW_NotificationPanel_C_Add_New_Chat_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;
	params.Channel = Channel;
	params.Color = Color;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.Draw Main Notification
// (BlueprintCallable, BlueprintEvent)
void UW_NotificationPanel_C::Draw_Main_Notification()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.Draw Main Notification");

	UW_NotificationPanel_C_Draw_Main_Notification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.Draw Next Notification
// (BlueprintCallable, BlueprintEvent)
void UW_NotificationPanel_C::Draw_Next_Notification()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.Draw Next Notification");

	UW_NotificationPanel_C_Draw_Next_Notification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationPanel.W_NotificationPanel_C.ExecuteUbergraph_W_NotificationPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationPanel_C::ExecuteUbergraph_W_NotificationPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationPanel.W_NotificationPanel_C.ExecuteUbergraph_W_NotificationPanel");

	UW_NotificationPanel_C_ExecuteUbergraph_W_NotificationPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
