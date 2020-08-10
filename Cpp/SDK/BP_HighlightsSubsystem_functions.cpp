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

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExplosiveDetonated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RecordEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HighlightsSubsystem_C::ExplosiveDetonated(class ASQPlayerController* Instigator, bool* RecordEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExplosiveDetonated");

	UBP_HighlightsSubsystem_C_ExplosiveDetonated_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RecordEvent != nullptr)
		*RecordEvent = params.RecordEvent;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.CloseHighlightsGroup
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_HighlightsSubsystem_C::CloseHighlightsGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.CloseHighlightsGroup");

	UBP_HighlightsSubsystem_C_CloseHighlightsGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OpenHighlightsGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OpenHighlightsGroup(int GroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OpenHighlightsGroup");

	UBP_HighlightsSubsystem_C_OpenHighlightsGroup_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.PlayerKilled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     KilledPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RecordEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HighlightsSubsystem_C::PlayerKilled(class ASQPlayerController* Killer, class ASQPlayerController* KilledPlayer, bool* RecordEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.PlayerKilled");

	UBP_HighlightsSubsystem_C_PlayerKilled_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RecordEvent != nullptr)
		*RecordEvent = params.RecordEvent;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.GetPlayerWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQEquipableItem*        Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::GetPlayerWeapon(class ASQPlayerController* PlayerController, class ASQEquipableItem** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.GetPlayerWeapon");

	UBP_HighlightsSubsystem_C_GetPlayerWeapon_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.VehicleDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RecordEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HighlightsSubsystem_C::VehicleDestroyed(class ASQPlayerController* Killer, class ASQVehicle* Vehicle, bool* RecordEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.VehicleDestroyed");

	UBP_HighlightsSubsystem_C_VehicleDestroyed_Params params;
	params.Killer = Killer;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RecordEvent != nullptr)
		*RecordEvent = params.RecordEvent;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_HighlightsSubsystem_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.Initialize");

	UBP_HighlightsSubsystem_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE");

	UBP_HighlightsSubsystem_C_OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGfeSDKCreateResponse   GfeSdkProperties               (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_HighlightsSubsystem_C::OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE(EGfeSDKReturnCode GfeSdkReturnCode, const struct FGfeSDKCreateResponse& GfeSdkProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE");

	UBP_HighlightsSubsystem_C_OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;
	params.GfeSdkProperties = GfeSdkProperties;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_F1AC158747E026E10731C8849D2B3257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_F1AC158747E026E10731C8849D2B3257(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_F1AC158747E026E10731C8849D2B3257");

	UBP_HighlightsSubsystem_C_OnFailure_F1AC158747E026E10731C8849D2B3257_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_F1AC158747E026E10731C8849D2B3257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_F1AC158747E026E10731C8849D2B3257(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_F1AC158747E026E10731C8849D2B3257");

	UBP_HighlightsSubsystem_C_OnSuccess_F1AC158747E026E10731C8849D2B3257_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_A84C3C164836D3ACA87616BAE86BEF45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_A84C3C164836D3ACA87616BAE86BEF45(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_A84C3C164836D3ACA87616BAE86BEF45");

	UBP_HighlightsSubsystem_C_OnFailure_A84C3C164836D3ACA87616BAE86BEF45_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_A84C3C164836D3ACA87616BAE86BEF45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_A84C3C164836D3ACA87616BAE86BEF45(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_A84C3C164836D3ACA87616BAE86BEF45");

	UBP_HighlightsSubsystem_C_OnSuccess_A84C3C164836D3ACA87616BAE86BEF45_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_73D8E28E4AC20756426FB7891826A0B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_73D8E28E4AC20756426FB7891826A0B9(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_73D8E28E4AC20756426FB7891826A0B9");

	UBP_HighlightsSubsystem_C_OnFailure_73D8E28E4AC20756426FB7891826A0B9_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_73D8E28E4AC20756426FB7891826A0B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_73D8E28E4AC20756426FB7891826A0B9(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_73D8E28E4AC20756426FB7891826A0B9");

	UBP_HighlightsSubsystem_C_OnSuccess_73D8E28E4AC20756426FB7891826A0B9_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535");

	UBP_HighlightsSubsystem_C_OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535");

	UBP_HighlightsSubsystem_C_OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3596E8AA4CA50D765158CAAA52397BFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_3596E8AA4CA50D765158CAAA52397BFF(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3596E8AA4CA50D765158CAAA52397BFF");

	UBP_HighlightsSubsystem_C_OnFailure_3596E8AA4CA50D765158CAAA52397BFF_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3596E8AA4CA50D765158CAAA52397BFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_3596E8AA4CA50D765158CAAA52397BFF(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3596E8AA4CA50D765158CAAA52397BFF");

	UBP_HighlightsSubsystem_C_OnSuccess_3596E8AA4CA50D765158CAAA52397BFF_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_67D0029B488CA8168AA634809699BEA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_67D0029B488CA8168AA634809699BEA3(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_67D0029B488CA8168AA634809699BEA3");

	UBP_HighlightsSubsystem_C_OnFailure_67D0029B488CA8168AA634809699BEA3_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_67D0029B488CA8168AA634809699BEA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_67D0029B488CA8168AA634809699BEA3(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_67D0029B488CA8168AA634809699BEA3");

	UBP_HighlightsSubsystem_C_OnSuccess_67D0029B488CA8168AA634809699BEA3_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E");

	UBP_HighlightsSubsystem_C_OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E");

	UBP_HighlightsSubsystem_C_OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_84C233334450389DA1183DB4D24E94F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_84C233334450389DA1183DB4D24E94F1(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_84C233334450389DA1183DB4D24E94F1");

	UBP_HighlightsSubsystem_C_OnFailure_84C233334450389DA1183DB4D24E94F1_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_84C233334450389DA1183DB4D24E94F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_84C233334450389DA1183DB4D24E94F1(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_84C233334450389DA1183DB4D24E94F1");

	UBP_HighlightsSubsystem_C_OnSuccess_84C233334450389DA1183DB4D24E94F1_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3752EC094E2D2F5B596322B1AF0BBE42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_3752EC094E2D2F5B596322B1AF0BBE42(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3752EC094E2D2F5B596322B1AF0BBE42");

	UBP_HighlightsSubsystem_C_OnFailure_3752EC094E2D2F5B596322B1AF0BBE42_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42");

	UBP_HighlightsSubsystem_C_OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_093B37B54B9F772075A0F8B78CFE6B8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnFailure_093B37B54B9F772075A0F8B78CFE6B8A(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_093B37B54B9F772075A0F8B78CFE6B8A");

	UBP_HighlightsSubsystem_C_OnFailure_093B37B54B9F772075A0F8B78CFE6B8A_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A");

	UBP_HighlightsSubsystem_C_OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.InitializeSubsystem
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQGameInstance*         SquadGameInstance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::InitializeSubsystem(class USQGameInstance* SquadGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.InitializeSubsystem");

	UBP_HighlightsSubsystem_C_InitializeSubsystem_Params params;
	params.SquadGameInstance = SquadGameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.TickSubsystem
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::TickSubsystem(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.TickSubsystem");

	UBP_HighlightsSubsystem_C_TickSubsystem_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameEnded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     SQPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnGameEnded_Event(class ASQPlayerController* SQPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameEnded_Event");

	UBP_HighlightsSubsystem_C_OnGameEnded_Event_Params params;
	params.SQPlayerController = SQPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     SQPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnGameStarted(class ASQPlayerController* SQPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameStarted");

	UBP_HighlightsSubsystem_C_OnGameStarted_Params params;
	params.SQPlayerController = SQPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDetonateExplosive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnPlayerDetonateExplosive(class ASQPlayerController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDetonateExplosive");

	UBP_HighlightsSubsystem_C_OnPlayerDetonateExplosive_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnEnteredMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     SQPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnEnteredMainMenu(class ASQPlayerController* SQPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnEnteredMainMenu");

	UBP_HighlightsSubsystem_C_OnEnteredMainMenu_Params params;
	params.SQPlayerController = SQPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDestroyedVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnPlayerDestroyedVehicle(class ASQPlayerController* Killer, class ASQVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDestroyedVehicle");

	UBP_HighlightsSubsystem_C_OnPlayerDestroyedVehicle_Params params;
	params.Killer = Killer;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerWounded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     KilledPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::OnPlayerWounded(class ASQPlayerController* Killer, class ASQPlayerController* KilledPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerWounded");

	UBP_HighlightsSubsystem_C_OnPlayerWounded_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExecuteUbergraph_BP_HighlightsSubsystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HighlightsSubsystem_C::ExecuteUbergraph_BP_HighlightsSubsystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExecuteUbergraph_BP_HighlightsSubsystem");

	UBP_HighlightsSubsystem_C_ExecuteUbergraph_BP_HighlightsSubsystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
