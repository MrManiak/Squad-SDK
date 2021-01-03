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

// Function BP_EmplacedM2.BP_EmplacedM2_C.IsSoldierAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_EmplacedM2_C::IsSoldierAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.IsSoldierAlive");

	ABP_EmplacedM2_C_IsSoldierAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetCurrentWeaponInputEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInputEnabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EmplacedM2_C::GetCurrentWeaponInputEnabled(bool* bInputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetCurrentWeaponInputEnabled");

	ABP_EmplacedM2_C_GetCurrentWeaponInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bInputEnabled != nullptr)
		*bInputEnabled = params.bInputEnabled;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetADSCameraLocationComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedM2_C::GetADSCameraLocationComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetADSCameraLocationComponent");

	ABP_EmplacedM2_C_GetADSCameraLocationComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetDefaultCameraLocationComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedM2_C::GetDefaultCameraLocationComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetDefaultCameraLocationComponent");

	ABP_EmplacedM2_C_GetDefaultCameraLocationComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetCameraComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCameraComponent* ABP_EmplacedM2_C::GetCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetCameraComponent");

	ABP_EmplacedM2_C_GetCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetMasterPoseComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkinnedMeshComponent* ABP_EmplacedM2_C::GetMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetMasterPoseComponent");

	ABP_EmplacedM2_C_GetMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.Get1PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedM2_C::Get1PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.Get1PAttachComponent");

	ABP_EmplacedM2_C_Get1PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.Get3PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedM2_C::Get3PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.Get3PAttachComponent");

	ABP_EmplacedM2_C_Get3PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedM2_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.GetWeaponAttachComponent");

	ABP_EmplacedM2_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_EmplacedM2_C::InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_2");

	ABP_EmplacedM2_C_InpActEvt_Focus_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_EmplacedM2_C::InpActEvt_Focus_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.InpActEvt_Focus_K2Node_InputActionEvent_1");

	ABP_EmplacedM2_C_InpActEvt_Focus_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_EmplacedM2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.ReceiveBeginPlay");

	ABP_EmplacedM2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedM2_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40");

	ABP_EmplacedM2_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedM2_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43");

	ABP_EmplacedM2_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_43_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedM2.BP_EmplacedM2_C.ExecuteUbergraph_BP_EmplacedM2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedM2_C::ExecuteUbergraph_BP_EmplacedM2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedM2.BP_EmplacedM2_C.ExecuteUbergraph_BP_EmplacedM2");

	ABP_EmplacedM2_C_ExecuteUbergraph_BP_EmplacedM2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
