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

// Function BP_FlyingDrone.BP_FlyingDrone_C.Check Owner Death
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Check_Owner_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Check Owner Death");

	ABP_FlyingDrone_C_Check_Owner_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Update Zoom
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Update_Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Update Zoom");

	ABP_FlyingDrone_C_Update_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Add Zoom Delta
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Add_Zoom_Delta()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Add Zoom Delta");

	ABP_FlyingDrone_C_Add_Zoom_Delta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Set Can Increase Altitude
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Set_Can_Increase_Altitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Set Can Increase Altitude");

	ABP_FlyingDrone_C_Set_Can_Increase_Altitude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Update Relative Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Update_Relative_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Update Relative Rotation");

	ABP_FlyingDrone_C_Update_Relative_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_Interact_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_Interact_K2Node_InputActionEvent_2");

	ABP_FlyingDrone_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpActEvt_LeanLeft_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_1");

	ABP_FlyingDrone_C_InpActEvt_LeanLeft_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2");

	ABP_FlyingDrone_C_InpAxisEvt_MoveAileron_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3");

	ABP_FlyingDrone_C_InpAxisEvt_HelicopterRight_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4");

	ABP_FlyingDrone_C_InpAxisEvt_HelicopterUp_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5");

	ABP_FlyingDrone_C_InpAxisEvt_MoveElevator_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveTick");

	ABP_FlyingDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FlyingDrone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveBeginPlay");

	ABP_FlyingDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature
// (BlueprintEvent)
void ABP_FlyingDrone_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature");

	ABP_FlyingDrone_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Multicast Destroy
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Multicast_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Multicast Destroy");

	ABP_FlyingDrone_C_Multicast_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1");

	ABP_FlyingDrone_C_InpAxisEvt_AircraftUp_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Server Die
// (BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::Server_Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Server Die");

	ABP_FlyingDrone_C_Server_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.End Flight
// (BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::End_Flight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.End Flight");

	ABP_FlyingDrone_C_End_Flight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Server Unpossess
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlyingDrone_C::Server_Unpossess(bool Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Server Unpossess");

	ABP_FlyingDrone_C_Server_Unpossess_Params params;
	params.Remove = Remove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.ReceivePossessed");

	ABP_FlyingDrone_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.On Possess
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_FlyingDrone_C::On_Possess(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.On Possess");

	ABP_FlyingDrone_C_On_Possess_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.ReceiveUnpossessed");

	ABP_FlyingDrone_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.On Depossess
// (BlueprintCallable, BlueprintEvent)
void ABP_FlyingDrone_C::On_Depossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.On Depossess");

	ABP_FlyingDrone_C_On_Depossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.Kit Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         CurrentRole                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::Kit_Changed(class USQRoleSettings* CurrentRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.Kit Changed");

	ABP_FlyingDrone_C_Kit_Changed_Params params;
	params.CurrentRole = CurrentRole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_FlyingDrone_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ABP_FlyingDrone_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlyingDrone.BP_FlyingDrone_C.ExecuteUbergraph_BP_FlyingDrone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlyingDrone_C::ExecuteUbergraph_BP_FlyingDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingDrone.BP_FlyingDrone_C.ExecuteUbergraph_BP_FlyingDrone");

	ABP_FlyingDrone_C_ExecuteUbergraph_BP_FlyingDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
