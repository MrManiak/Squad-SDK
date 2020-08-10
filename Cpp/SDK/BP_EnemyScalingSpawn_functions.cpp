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

// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_EnemyScalingSpawn_C::IsSameTeam(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.IsSameTeam");

	ABP_EnemyScalingSpawn_C_IsSameTeam_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.OnEnemiesInRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_EnemyScalingSpawn_C::OnEnemiesInRadiusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.OnEnemiesInRadiusChanged");

	ABP_EnemyScalingSpawn_C_OnEnemiesInRadiusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.GetRespawnDelay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_EnemyScalingSpawn_C::GetRespawnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.GetRespawnDelay");

	ABP_EnemyScalingSpawn_C_GetRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_327_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_EnemyScalingSpawn_C::BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_327_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_327_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EnemyScalingSpawn_C_BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_327_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_351_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EnemyScalingSpawn_C::BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_351_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_351_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EnemyScalingSpawn_C_BndEvt__EnemyDetectionRadius_K2Node_ComponentBoundEvent_351_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.ExecuteUbergraph_BP_EnemyScalingSpawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EnemyScalingSpawn_C::ExecuteUbergraph_BP_EnemyScalingSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyScalingSpawn.BP_EnemyScalingSpawn_C.ExecuteUbergraph_BP_EnemyScalingSpawn");

	ABP_EnemyScalingSpawn_C_ExecuteUbergraph_BP_EnemyScalingSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
