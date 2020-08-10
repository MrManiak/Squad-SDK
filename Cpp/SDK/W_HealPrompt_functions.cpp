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

// Function W_HealPrompt.W_HealPrompt_C.Update Soldier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HealPrompt_C::Update_Soldier(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HealPrompt.W_HealPrompt_C.Update Soldier");

	UW_HealPrompt_C_Update_Soldier_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HealPrompt.W_HealPrompt_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HealPrompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HealPrompt.W_HealPrompt_C.Tick");

	UW_HealPrompt_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HealPrompt.W_HealPrompt_C.Collapse
// (BlueprintCallable, BlueprintEvent)
void UW_HealPrompt_C::Collapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HealPrompt.W_HealPrompt_C.Collapse");

	UW_HealPrompt_C_Collapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HealPrompt.W_HealPrompt_C.Show
// (BlueprintCallable, BlueprintEvent)
void UW_HealPrompt_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HealPrompt.W_HealPrompt_C.Show");

	UW_HealPrompt_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HealPrompt.W_HealPrompt_C.ExecuteUbergraph_W_HealPrompt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HealPrompt_C::ExecuteUbergraph_W_HealPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HealPrompt.W_HealPrompt_C.ExecuteUbergraph_W_HealPrompt");

	UW_HealPrompt_C_ExecuteUbergraph_W_HealPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
