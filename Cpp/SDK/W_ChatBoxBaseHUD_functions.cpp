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
// Functions
//---------------------------------------------------------------------------

// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Update Save Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ChatBoxBaseHUD_C::Update_Save_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Update Save Visibility");

	UW_ChatBoxBaseHUD_C_Update_Save_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChatBoxBaseHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Construct");

	UW_ChatBoxBaseHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Add New Chat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQNotificationTypes           NotificationType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBoxBaseHUD_C::Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Add New Chat");

	UW_ChatBoxBaseHUD_C_Add_New_Chat_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;
	params.Channel = Channel;
	params.Color = Color;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Close Chat
// (BlueprintCallable, BlueprintEvent)
void UW_ChatBoxBaseHUD_C::Close_Chat()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Close Chat");

	UW_ChatBoxBaseHUD_C_Close_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Open Chat
// (BlueprintCallable, BlueprintEvent)
void UW_ChatBoxBaseHUD_C::Open_Chat()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.Open Chat");

	UW_ChatBoxBaseHUD_C_Open_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.ExecuteUbergraph_W_ChatBoxBaseHUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatBoxBaseHUD_C::ExecuteUbergraph_W_ChatBoxBaseHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C.ExecuteUbergraph_W_ChatBoxBaseHUD");

	UW_ChatBoxBaseHUD_C_ExecuteUbergraph_W_ChatBoxBaseHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
