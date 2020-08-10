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

// Function BP_CommandActor.BP_CommandActor_C.Server Start Active Duration
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_C::Server_Start_Active_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Server Start Active Duration");

	ABP_CommandActor_C_Server_Start_Active_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.Server End Active Duration
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_C::Server_End_Active_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Server End Active Duration");

	ABP_CommandActor_C_Server_End_Active_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.Try to Load and Play Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_C::Try_to_Load_and_Play_Sound(unsigned char ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Try to Load and Play Sound");

	ABP_CommandActor_C_Try_to_Load_and_Play_Sound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.Owner Load and Play Sound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_C::Owner_Load_and_Play_Sound(unsigned char ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Owner Load and Play Sound");

	ABP_CommandActor_C_Owner_Load_and_Play_Sound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.Server Destroy Action
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_C::Server_Destroy_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Server Destroy Action");

	ABP_CommandActor_C_Server_Destroy_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.Multi Death Cosmetics
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_C::Multi_Death_Cosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.Multi Death Cosmetics");

	ABP_CommandActor_C_Multi_Death_Cosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CommandActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.ReceiveBeginPlay");

	ABP_CommandActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor.BP_CommandActor_C.ExecuteUbergraph_BP_CommandActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_C::ExecuteUbergraph_BP_CommandActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor.BP_CommandActor_C.ExecuteUbergraph_BP_CommandActor");

	ABP_CommandActor_C_ExecuteUbergraph_BP_CommandActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
