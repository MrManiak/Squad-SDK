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

// Function BP_VehicleBay.BP_VehicleBay_C.Has Vehicle Capacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_VehicleBay_C::Has_Vehicle_Capacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Has Vehicle Capacity");

	ABP_VehicleBay_C_Has_Vehicle_Capacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBay.BP_VehicleBay_C.Is Pending Construction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Constructing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VehicleBay_C::Is_Pending_Construction(bool* Constructing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Is Pending Construction");

	ABP_VehicleBay_C_Is_Pending_Construction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Constructing != nullptr)
		*Constructing = params.Constructing;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Is Constructing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Constructing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VehicleBay_C::Is_Constructing(bool* Constructing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Is Constructing");

	ABP_VehicleBay_C_Is_Constructing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Constructing != nullptr)
		*Constructing = params.Constructing;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Get Fob
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQForwardBase*          fob                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Get_Fob(class ASQForwardBase** fob)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Get Fob");

	ABP_VehicleBay_C_Get_Fob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (fob != nullptr)
		*fob = params.fob;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Can Afford
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Construction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_VehicleBay_C::Can_Afford(int Construction, int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Can Afford");

	ABP_VehicleBay_C_Can_Afford_Params params;
	params.Construction = Construction;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBay.BP_VehicleBay_C.Validate Spawning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Spawn_Action                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Can_Afford                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Has_Capacity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VehicleBay_C::Validate_Spawning(class UClass* Spawn_Action, bool* Valid, bool* Can_Afford, bool* Has_Capacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Validate Spawning");

	ABP_VehicleBay_C_Validate_Spawning_Params params;
	params.Spawn_Action = Spawn_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Can_Afford != nullptr)
		*Can_Afford = params.Can_Afford;
	if (Has_Capacity != nullptr)
		*Has_Capacity = params.Has_Capacity;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Get Construction Queue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Construction_Queue             (Parm, OutParm, ZeroConstructor)
void ABP_VehicleBay_C::Get_Construction_Queue(TArray<class UClass*>* Construction_Queue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Get Construction Queue");

	ABP_VehicleBay_C_Get_Construction_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Construction_Queue != nullptr)
		*Construction_Queue = params.Construction_Queue;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Get Build Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_VehicleBay_C::Get_Build_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Get Build Percent");

	ABP_VehicleBay_C_Get_Build_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VehicleBay.BP_VehicleBay_C.OnRep_Construction Queue
// (BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::OnRep_Construction_Queue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.OnRep_Construction Queue");

	ABP_VehicleBay_C_OnRep_Construction_Queue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Manage Build Visuals
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::Manage_Build_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Manage Build Visuals");

	ABP_VehicleBay_C_Manage_Build_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.UserConstructionScript");

	ABP_VehicleBay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE");

	ABP_VehicleBay_C_OnLoaded_D39A2818470E6F858FAB8ABCE253D0FE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.SetTeam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::SetTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.SetTeam");

	ABP_VehicleBay_C_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.ReceiveTick");

	ABP_VehicleBay_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Request Spawn Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Request_Spawn_Vehicle(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Request Spawn Vehicle");

	ABP_VehicleBay_C_Request_Spawn_Vehicle_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Finish Building
// (BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::Finish_Building()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Finish Building");

	ABP_VehicleBay_C_Finish_Building_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Build Next Queue Item
// (BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::Build_Next_Queue_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Build Next Queue Item");

	ABP_VehicleBay_C_Build_Next_Queue_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VehicleBay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.ReceiveBeginPlay");

	ABP_VehicleBay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Load Mesh
// (BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::Load_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Load Mesh");

	ABP_VehicleBay_C_Load_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Add Vehicle To Queue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Add_Vehicle_To_Queue(class UClass* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Add Vehicle To Queue");

	ABP_VehicleBay_C_Add_Vehicle_To_Queue_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Try Play Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Try_Play_Sound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Try Play Sound");

	ABP_VehicleBay_C_Try_Play_Sound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Play Vehicle Bay Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Play_Vehicle_Bay_Sound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Play Vehicle Bay Sound");

	ABP_VehicleBay_C_Play_Vehicle_Bay_Sound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Notify Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Spawn_Action                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::Notify_Error(class UClass* Spawn_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Notify Error");

	ABP_VehicleBay_C_Notify_Error_Params params;
	params.Spawn_Action = Spawn_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.MC Sound Event
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::MC_Sound_Event(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.MC Sound Event");

	ABP_VehicleBay_C_MC_Sound_Event_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.ExecuteUbergraph_BP_VehicleBay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleBay_C::ExecuteUbergraph_BP_VehicleBay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.ExecuteUbergraph_BP_VehicleBay");

	ABP_VehicleBay_C_ExecuteUbergraph_BP_VehicleBay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleBay.BP_VehicleBay_C.Queue Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_VehicleBay_C::Queue_Updated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBay.BP_VehicleBay_C.Queue Updated__DelegateSignature");

	ABP_VehicleBay_C_Queue_Updated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
