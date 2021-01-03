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

// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Manage Attachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Create                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_R2T_Soldier_C::Manage_Attachments(bool Create)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.Manage Attachments");

	ABP_R2T_Soldier_C_Manage_Attachments_Params params;
	params.Create = Create;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Get Role Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Soldier_Mesh                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Weapon_Mesh                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_R2T_Soldier_C::Get_Role_Info(class USkeletalMeshComponent** Soldier_Mesh, class USkeletalMeshComponent** Weapon_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.Get Role Info");

	ABP_R2T_Soldier_C_Get_Role_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Soldier_Mesh != nullptr)
		*Soldier_Mesh = params.Soldier_Mesh;
	if (Weapon_Mesh != nullptr)
		*Weapon_Mesh = params.Weapon_Mesh;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Rendering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_R2T_Soldier_C::Set_Rendering(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Rendering");

	ABP_R2T_Soldier_C_Set_Rendering_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Render Soldier Role
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         NewRole                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_R2T_Soldier_C::Set_Render_Soldier_Role(class USQRoleSettings* NewRole, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.Set Render Soldier Role");

	ABP_R2T_Soldier_C_Set_Render_Soldier_Role_Params params;
	params.NewRole = NewRole;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_R2T_Soldier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.UserConstructionScript");

	ABP_R2T_Soldier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_R2T_Soldier_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveTick");

	ABP_R2T_Soldier_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.Play Animations
// (BlueprintCallable, BlueprintEvent)
void ABP_R2T_Soldier_C::Play_Animations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.Play Animations");

	ABP_R2T_Soldier_C_Play_Animations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_R2T_Soldier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.ReceiveBeginPlay");

	ABP_R2T_Soldier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_R2T_Soldier.BP_R2T_Soldier_C.ExecuteUbergraph_BP_R2T_Soldier
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_R2T_Soldier_C::ExecuteUbergraph_BP_R2T_Soldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_R2T_Soldier.BP_R2T_Soldier_C.ExecuteUbergraph_BP_R2T_Soldier");

	ABP_R2T_Soldier_C_ExecuteUbergraph_BP_R2T_Soldier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
