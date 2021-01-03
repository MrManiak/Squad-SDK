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

// Function W_CommandActionList.W_CommandActionList_C.Init Actions List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Init_Actions_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Init Actions List");

	UW_CommandActionList_C_Init_Actions_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandActionList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Construct");

	UW_CommandActionList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Get Player State
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Get_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Get Player State");

	UW_CommandActionList_C_Get_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Team Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            OldTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionList_C::Team_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Team Changed");

	UW_CommandActionList_C_Team_Changed_Params params;
	params.OldTeam = OldTeam;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Bind To Menu Open Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionList_C::Bind_To_Menu_Open_Close(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Bind To Menu Open Close");

	UW_CommandActionList_C_Bind_To_Menu_Open_Close_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Parent Opened
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Parent_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Parent Opened");

	UW_CommandActionList_C_Parent_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Parent Closed
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Parent_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Parent Closed");

	UW_CommandActionList_C_Parent_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Bind Commander Changed
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Bind_Commander_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Bind Commander Changed");

	UW_CommandActionList_C_Bind_Commander_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Command Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionList_C::Command_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Command Changed");

	UW_CommandActionList_C_Command_Changed_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.Update Requirements Text
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionList_C::Update_Requirements_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.Update Requirements Text");

	UW_CommandActionList_C_Update_Requirements_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionList.W_CommandActionList_C.ExecuteUbergraph_W_CommandActionList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionList_C::ExecuteUbergraph_W_CommandActionList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionList.W_CommandActionList_C.ExecuteUbergraph_W_CommandActionList");

	UW_CommandActionList_C_ExecuteUbergraph_W_CommandActionList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
