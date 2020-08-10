#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function W_VoipPlayer.W_VoipPlayer_C.Fade Out
struct UW_VoipPlayer_C_Fade_Out_Params
{
};

// Function W_VoipPlayer.W_VoipPlayer_C.Refresh Speaker
struct UW_VoipPlayer_C_Refresh_Speaker_Params
{
	struct FSQRemoteTalkerDisplayInfo                  Speaker_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_VoipPlayer.W_VoipPlayer_C.Construct
struct UW_VoipPlayer_C_Construct_Params
{
};

// Function W_VoipPlayer.W_VoipPlayer_C.ExecuteUbergraph_W_VoipPlayer
struct UW_VoipPlayer_C_ExecuteUbergraph_W_VoipPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
