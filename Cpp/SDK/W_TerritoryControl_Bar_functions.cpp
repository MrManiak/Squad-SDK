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

// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Set Flags
// (BlueprintCallable, BlueprintEvent)
void UW_TerritoryControl_Bar_C::Set_Flags()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Set Flags");

	UW_TerritoryControl_Bar_C_Set_Flags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TerritoryControl_Bar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Tick");

	UW_TerritoryControl_Bar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TerritoryControl_Bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Construct");

	UW_TerritoryControl_Bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Bind Team Change
// (BlueprintCallable, BlueprintEvent)
void UW_TerritoryControl_Bar_C::Bind_Team_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Bind Team Change");

	UW_TerritoryControl_Bar_C_Bind_Team_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Team Changed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            OldTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            NewTeam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TerritoryControl_Bar_C::Team_Changed_Event(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.Team Changed Event");

	UW_TerritoryControl_Bar_C_Team_Changed_Event_Params params;
	params.OldTeam = OldTeam;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.ExecuteUbergraph_W_TerritoryControl_Bar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TerritoryControl_Bar_C::ExecuteUbergraph_W_TerritoryControl_Bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TerritoryControl_Bar.W_TerritoryControl_Bar_C.ExecuteUbergraph_W_TerritoryControl_Bar");

	UW_TerritoryControl_Bar_C_ExecuteUbergraph_W_TerritoryControl_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
