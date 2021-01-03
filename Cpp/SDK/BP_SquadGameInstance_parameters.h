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

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.Get UI Data
struct UBP_SquadGameInstance_C_Get_UI_Data_Params
{
	class USaveData_UI_C*                              AsSave_Data_UI;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.Set UI Data
struct UBP_SquadGameInstance_C_Set_UI_Data_Params
{
	class USaveData_UI_C*                              UISaveData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.ReceiveInit
struct UBP_SquadGameInstance_C_ReceiveInit_Params
{
};

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.ExecuteUbergraph_BP_SquadGameInstance
struct UBP_SquadGameInstance_C_ExecuteUbergraph_BP_SquadGameInstance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.UI Data Changed__DelegateSignature
struct UBP_SquadGameInstance_C_UI_Data_Changed__DelegateSignature_Params
{
	class USaveData_UI_C*                              Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
