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

// Function M1a2_Ammocook.M1a2_Ammocook_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AM1a2_Ammocook_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Ammocook.M1a2_Ammocook_C.ReceiveBeginPlay");

	AM1a2_Ammocook_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function M1a2_Ammocook.M1a2_Ammocook_C.OnBeginDestroyedVehicle
// (Event, Public, BlueprintEvent)
void AM1a2_Ammocook_C::OnBeginDestroyedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Ammocook.M1a2_Ammocook_C.OnBeginDestroyedVehicle");

	AM1a2_Ammocook_C_OnBeginDestroyedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function M1a2_Ammocook.M1a2_Ammocook_C.BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AM1a2_Ammocook_C::BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Ammocook.M1a2_Ammocook_C.BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	AM1a2_Ammocook_C_BndEvt__Turret_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function M1a2_Ammocook.M1a2_Ammocook_C.ExecuteUbergraph_M1a2_Ammocook
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AM1a2_Ammocook_C::ExecuteUbergraph_M1a2_Ammocook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Ammocook.M1a2_Ammocook_C.ExecuteUbergraph_M1a2_Ammocook");

	AM1a2_Ammocook_C_ExecuteUbergraph_M1a2_Ammocook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
