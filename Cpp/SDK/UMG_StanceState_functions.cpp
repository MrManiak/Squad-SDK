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

// Function UMG_StanceState.UMG_StanceState_C.UpdateBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StanceState_C::UpdateBleeding(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.UpdateBleeding");

	UUMG_StanceState_C_UpdateBleeding_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.UpdateLean
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StanceState_C::UpdateLean(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.UpdateLean");

	UUMG_StanceState_C_UpdateLean_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.UpdateStance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StanceState_C::UpdateStance(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.UpdateStance");

	UUMG_StanceState_C_UpdateStance_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.UpdateStanceState
// (BlueprintCallable, BlueprintEvent)
void UUMG_StanceState_C::UpdateStanceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.UpdateStanceState");

	UUMG_StanceState_C_UpdateStanceState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.Update Stance Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StanceState_C::Update_Stance_Visibility(class USaveData_UI_C* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.Update Stance Visibility");

	UUMG_StanceState_C_Update_Stance_Visibility_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_StanceState_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.Construct");

	UUMG_StanceState_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StanceState.UMG_StanceState_C.ExecuteUbergraph_UMG_StanceState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_StanceState_C::ExecuteUbergraph_UMG_StanceState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StanceState.UMG_StanceState_C.ExecuteUbergraph_UMG_StanceState");

	UUMG_StanceState_C_ExecuteUbergraph_UMG_StanceState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
