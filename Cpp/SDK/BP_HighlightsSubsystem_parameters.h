#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExplosiveDetonated
struct UBP_HighlightsSubsystem_C_ExplosiveDetonated_Params
{
	class ASQPlayerController*                         Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecordEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.CloseHighlightsGroup
struct UBP_HighlightsSubsystem_C_CloseHighlightsGroup_Params
{
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OpenHighlightsGroup
struct UBP_HighlightsSubsystem_C_OpenHighlightsGroup_Params
{
	int                                                GroupId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.PlayerKilled
struct UBP_HighlightsSubsystem_C_PlayerKilled_Params
{
	class ASQPlayerController*                         Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         KilledPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecordEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.GetPlayerWeapon
struct UBP_HighlightsSubsystem_C_GetPlayerWeapon_Params
{
	class ASQPlayerController*                         PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQEquipableItem*                            Weapon;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.VehicleDestroyed
struct UBP_HighlightsSubsystem_C_VehicleDestroyed_Params
{
	class ASQPlayerController*                         Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecordEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.Initialize
struct UBP_HighlightsSubsystem_C_Initialize_Params
{
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE
struct UBP_HighlightsSubsystem_C_OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE
struct UBP_HighlightsSubsystem_C_OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGfeSDKCreateResponse                       GfeSdkProperties;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_F1AC158747E026E10731C8849D2B3257
struct UBP_HighlightsSubsystem_C_OnFailure_F1AC158747E026E10731C8849D2B3257_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_F1AC158747E026E10731C8849D2B3257
struct UBP_HighlightsSubsystem_C_OnSuccess_F1AC158747E026E10731C8849D2B3257_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_A84C3C164836D3ACA87616BAE86BEF45
struct UBP_HighlightsSubsystem_C_OnFailure_A84C3C164836D3ACA87616BAE86BEF45_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_A84C3C164836D3ACA87616BAE86BEF45
struct UBP_HighlightsSubsystem_C_OnSuccess_A84C3C164836D3ACA87616BAE86BEF45_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_73D8E28E4AC20756426FB7891826A0B9
struct UBP_HighlightsSubsystem_C_OnFailure_73D8E28E4AC20756426FB7891826A0B9_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_73D8E28E4AC20756426FB7891826A0B9
struct UBP_HighlightsSubsystem_C_OnSuccess_73D8E28E4AC20756426FB7891826A0B9_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535
struct UBP_HighlightsSubsystem_C_OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535
struct UBP_HighlightsSubsystem_C_OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3596E8AA4CA50D765158CAAA52397BFF
struct UBP_HighlightsSubsystem_C_OnFailure_3596E8AA4CA50D765158CAAA52397BFF_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3596E8AA4CA50D765158CAAA52397BFF
struct UBP_HighlightsSubsystem_C_OnSuccess_3596E8AA4CA50D765158CAAA52397BFF_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_67D0029B488CA8168AA634809699BEA3
struct UBP_HighlightsSubsystem_C_OnFailure_67D0029B488CA8168AA634809699BEA3_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_67D0029B488CA8168AA634809699BEA3
struct UBP_HighlightsSubsystem_C_OnSuccess_67D0029B488CA8168AA634809699BEA3_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E
struct UBP_HighlightsSubsystem_C_OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E
struct UBP_HighlightsSubsystem_C_OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_84C233334450389DA1183DB4D24E94F1
struct UBP_HighlightsSubsystem_C_OnFailure_84C233334450389DA1183DB4D24E94F1_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_84C233334450389DA1183DB4D24E94F1
struct UBP_HighlightsSubsystem_C_OnSuccess_84C233334450389DA1183DB4D24E94F1_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_3752EC094E2D2F5B596322B1AF0BBE42
struct UBP_HighlightsSubsystem_C_OnFailure_3752EC094E2D2F5B596322B1AF0BBE42_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42
struct UBP_HighlightsSubsystem_C_OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnFailure_093B37B54B9F772075A0F8B78CFE6B8A
struct UBP_HighlightsSubsystem_C_OnFailure_093B37B54B9F772075A0F8B78CFE6B8A_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A
struct UBP_HighlightsSubsystem_C_OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.InitializeSubsystem
struct UBP_HighlightsSubsystem_C_InitializeSubsystem_Params
{
	class USQGameInstance*                             SquadGameInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.TickSubsystem
struct UBP_HighlightsSubsystem_C_TickSubsystem_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameEnded_Event
struct UBP_HighlightsSubsystem_C_OnGameEnded_Event_Params
{
	class ASQPlayerController*                         SQPlayerController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnGameStarted
struct UBP_HighlightsSubsystem_C_OnGameStarted_Params
{
	class ASQPlayerController*                         SQPlayerController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDetonateExplosive
struct UBP_HighlightsSubsystem_C_OnPlayerDetonateExplosive_Params
{
	class ASQPlayerController*                         Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnEnteredMainMenu
struct UBP_HighlightsSubsystem_C_OnEnteredMainMenu_Params
{
	class ASQPlayerController*                         SQPlayerController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerDestroyedVehicle
struct UBP_HighlightsSubsystem_C_OnPlayerDestroyedVehicle_Params
{
	class ASQPlayerController*                         Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQVehicle*                                  Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.OnPlayerWounded
struct UBP_HighlightsSubsystem_C_OnPlayerWounded_Params
{
	class ASQPlayerController*                         Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         KilledPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HighlightsSubsystem.BP_HighlightsSubsystem_C.ExecuteUbergraph_BP_HighlightsSubsystem
struct UBP_HighlightsSubsystem_C_ExecuteUbergraph_BP_HighlightsSubsystem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
