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

// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set Owner Flag Image
// (Public, BlueprintCallable, BlueprintEvent)
void UW_FlagCapturedEvent_C::Set_Owner_Flag_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set Owner Flag Image");

	UW_FlagCapturedEvent_C_Set_Owner_Flag_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set State Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_FlagCapturedEvent_C::Set_State_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Set State Text");

	UW_FlagCapturedEvent_C_Set_State_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Setup Fill Image
// (Public, BlueprintCallable, BlueprintEvent)
void UW_FlagCapturedEvent_C::Setup_Fill_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Setup Fill Image");

	UW_FlagCapturedEvent_C_Setup_Fill_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Change Flag Image
// (BlueprintCallable, BlueprintEvent)
void UW_FlagCapturedEvent_C::Change_Flag_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Change Flag Image");

	UW_FlagCapturedEvent_C_Change_Flag_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Play Capture Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Flag_Name                      (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char                  New_Owning_Team                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Last_Owning_Team               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FlagCapturedEvent_C::Play_Capture_Animation(const struct FText& Flag_Name, unsigned char New_Owning_Team, unsigned char Last_Owning_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Play Capture Animation");

	UW_FlagCapturedEvent_C_Play_Capture_Animation_Params params;
	params.Flag_Name = Flag_Name;
	params.New_Owning_Team = New_Owning_Team;
	params.Last_Owning_Team = Last_Owning_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FlagCapturedEvent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Tick");

	UW_FlagCapturedEvent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_FlagCapturedEvent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.Construct");

	UW_FlagCapturedEvent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.ExecuteUbergraph_W_FlagCapturedEvent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FlagCapturedEvent_C::ExecuteUbergraph_W_FlagCapturedEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FlagCapturedEvent.W_FlagCapturedEvent_C.ExecuteUbergraph_W_FlagCapturedEvent");

	UW_FlagCapturedEvent_C_ExecuteUbergraph_W_FlagCapturedEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
