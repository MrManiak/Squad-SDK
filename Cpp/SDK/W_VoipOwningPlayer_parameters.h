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

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Get Squad Leader Name
struct UW_VoipOwningPlayer_C_Get_Squad_Leader_Name_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Construct
struct UW_VoipOwningPlayer_C_Construct_Params
{
};

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Refresh Voip
struct UW_VoipOwningPlayer_C_Refresh_Voip_Params
{
};

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.ExecuteUbergraph_W_VoipOwningPlayer
struct UW_VoipOwningPlayer_C_ExecuteUbergraph_W_VoipOwningPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
