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

// Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.Bind To Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Bind_To                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_DirectorMaster_C::Bind_To_Destroy(class AActor* Bind_To)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.Bind To Destroy");

	ABP_MapMarker_DirectorMaster_C_Bind_To_Destroy_Params params;
	params.Bind_To = Bind_To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_DirectorMaster_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.OnDestroyed_Event_1");

	ABP_MapMarker_DirectorMaster_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MapMarker_DirectorMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.ReceiveBeginPlay");

	ABP_MapMarker_DirectorMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.ExecuteUbergraph_BP_MapMarker_DirectorMaster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MapMarker_DirectorMaster_C::ExecuteUbergraph_BP_MapMarker_DirectorMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C.ExecuteUbergraph_BP_MapMarker_DirectorMaster");

	ABP_MapMarker_DirectorMaster_C_ExecuteUbergraph_BP_MapMarker_DirectorMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
