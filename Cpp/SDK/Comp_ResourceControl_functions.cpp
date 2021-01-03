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

// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Distance to FOB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQForwardBase*          fob                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UComp_ResourceControl_C::Validate_Distance_to_FOB(class ASQVehicle* Vehicle, class ASQForwardBase* fob, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Distance to FOB");

	UComp_ResourceControl_C_Validate_Distance_to_FOB_Params params;
	params.Vehicle = Vehicle;
	params.fob = fob;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Soldier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UComp_ResourceControl_C::Validate_Soldier(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Soldier");

	UComp_ResourceControl_C_Validate_Soldier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Setup Resource Weapon
// (Public, BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Setup_Resource_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Setup Resource Weapon");

	UComp_ResourceControl_C_Setup_Resource_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Owner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UComp_ResourceControl_C::Validate_Owner(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Owner");

	UComp_ResourceControl_C_Validate_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Transaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid_Transaction              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Has_Con_Weapon                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Has_Ammo_Weapon                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Loading                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Zone_has_Points                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UComp_ResourceControl_C::Validate_Transaction(bool Ammo, bool Pickup, class ASQVehicle* Vehicle, bool* Valid_Transaction, bool* Has_Con_Weapon, bool* Has_Ammo_Weapon, bool* Is_Loading, bool* Zone_has_Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Transaction");

	UComp_ResourceControl_C_Validate_Transaction_Params params;
	params.Ammo = Ammo;
	params.Pickup = Pickup;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_Transaction != nullptr)
		*Valid_Transaction = params.Valid_Transaction;
	if (Has_Con_Weapon != nullptr)
		*Has_Con_Weapon = params.Has_Con_Weapon;
	if (Has_Ammo_Weapon != nullptr)
		*Has_Ammo_Weapon = params.Has_Ammo_Weapon;
	if (Is_Loading != nullptr)
		*Is_Loading = params.Is_Loading;
	if (Zone_has_Points != nullptr)
		*Zone_has_Points = params.Zone_has_Points;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Resource Point
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQForwardBase*          fob                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  CapZone                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_ResourceControl_C::Validate_Resource_Point(class ASQVehicle* Vehicle, bool* Valid, class ASQForwardBase** fob, class AActor** CapZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Validate Resource Point");

	UComp_ResourceControl_C_Validate_Resource_Point_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (fob != nullptr)
		*fob = params.fob;
	if (CapZone != nullptr)
		*CapZone = params.CapZone;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Start Supply
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_ResourceControl_C::Server_Start_Supply(bool Ammo, bool Pickup, class ASQVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Server Start Supply");

	UComp_ResourceControl_C_Server_Start_Supply_Params params;
	params.Ammo = Ammo;
	params.Pickup = Pickup;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UComp_ResourceControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.ReceiveBeginPlay");

	UComp_ResourceControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Stop Supply
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Server_Stop_Supply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Server Stop Supply");

	UComp_ResourceControl_C_Server_Stop_Supply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Invoke Use Resources
// (BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Invoke_Use_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Invoke Use Resources");

	UComp_ResourceControl_C_Invoke_Use_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Server Use Resources
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Server_Use_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Server Use Resources");

	UComp_ResourceControl_C_Server_Use_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Stop Resource Supply
// (BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Stop_Resource_Supply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Stop Resource Supply");

	UComp_ResourceControl_C_Stop_Resource_Supply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Start Resource Supply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ammo_Transaction               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Pickup_Transaction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQVehicle*              Current_Vehicle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_ResourceControl_C::Start_Resource_Supply(bool Ammo_Transaction, bool Pickup_Transaction, class ASQVehicle* Current_Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Start Resource Supply");

	UComp_ResourceControl_C_Start_Resource_Supply_Params params;
	params.Ammo_Transaction = Ammo_Transaction;
	params.Pickup_Transaction = Pickup_Transaction;
	params.Current_Vehicle = Current_Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Client Resource Timer
// (BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Client_Resource_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Client Resource Timer");

	UComp_ResourceControl_C_Client_Resource_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.Play Hand Animation
// (BlueprintCallable, BlueprintEvent)
void UComp_ResourceControl_C::Play_Hand_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.Play Hand Animation");

	UComp_ResourceControl_C_Play_Hand_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Comp_ResourceControl.Comp_ResourceControl_C.ExecuteUbergraph_Comp_ResourceControl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UComp_ResourceControl_C::ExecuteUbergraph_Comp_ResourceControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Comp_ResourceControl.Comp_ResourceControl_C.ExecuteUbergraph_Comp_ResourceControl");

	UComp_ResourceControl_C_ExecuteUbergraph_Comp_ResourceControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
