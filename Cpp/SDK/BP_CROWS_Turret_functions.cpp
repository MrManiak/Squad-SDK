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

// Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetPitchMovementComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USQMovementComponentBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USQMovementComponentBase* ABP_CROWS_Turret_C::GetPitchMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetPitchMovementComponent");

	ABP_CROWS_Turret_C_GetPitchMovementComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetYawMovementComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USQMovementComponentBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USQMovementComponentBase* ABP_CROWS_Turret_C::GetYawMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetYawMovementComponent");

	ABP_CROWS_Turret_C_GetYawMovementComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetSoldierAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_CROWS_Turret_C::GetSoldierAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetSoldierAttachComponent");

	ABP_CROWS_Turret_C_GetSoldierAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_CROWS_Turret_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetWeaponAttachComponent");

	ABP_CROWS_Turret_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetMasterPoseComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkinnedMeshComponent* ABP_CROWS_Turret_C::GetMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.GetMasterPoseComponent");

	ABP_CROWS_Turret_C_GetMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.Get1PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_CROWS_Turret_C::Get1PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.Get1PAttachComponent");

	ABP_CROWS_Turret_C_Get1PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.Get3PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_CROWS_Turret_C::Get3PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.Get3PAttachComponent");

	ABP_CROWS_Turret_C_Get3PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CROWS_Turret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.UserConstructionScript");

	ABP_CROWS_Turret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_CROWS_Turret_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.Timeline_0__FinishedFunc");

	ABP_CROWS_Turret_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_CROWS_Turret_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.Timeline_0__UpdateFunc");

	ABP_CROWS_Turret_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.InpActEvt_Fire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_CROWS_Turret_C::InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.InpActEvt_Fire_K2Node_InputActionEvent_2");

	ABP_CROWS_Turret_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_CROWS_Turret_C::InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.InpActEvt_Fire_K2Node_InputActionEvent_1");

	ABP_CROWS_Turret_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CROWS_Turret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.ReceiveBeginPlay");

	ABP_CROWS_Turret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.ResetZoom
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_CROWS_Turret_C::ResetZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.ResetZoom");

	ABP_CROWS_Turret_C_ResetZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.BP_OnVehicleZoom
// (Event, Protected, BlueprintEvent)
void ABP_CROWS_Turret_C::BP_OnVehicleZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.BP_OnVehicleZoom");

	ABP_CROWS_Turret_C_BP_OnVehicleZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CROWS_Turret.BP_CROWS_Turret_C.ExecuteUbergraph_BP_CROWS_Turret
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CROWS_Turret_C::ExecuteUbergraph_BP_CROWS_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CROWS_Turret.BP_CROWS_Turret_C.ExecuteUbergraph_BP_CROWS_Turret");

	ABP_CROWS_Turret_C_ExecuteUbergraph_BP_CROWS_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
