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

// Function VoiceAction_Component.VoiceAction_Component_C.Try to Play Voice
struct UVoiceAction_Component_C_Try_to_Play_Voice_Params
{
	class USoundBase*                                  Voice;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Played;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function VoiceAction_Component.VoiceAction_Component_C.Multicast Voice
struct UVoiceAction_Component_C_Multicast_Voice_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VoiceAction_Component.VoiceAction_Component_C.Server Play Voice
struct UVoiceAction_Component_C_Server_Play_Voice_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VoiceAction_Component.VoiceAction_Component_C.ExecuteUbergraph_VoiceAction_Component
struct UVoiceAction_Component_C_ExecuteUbergraph_VoiceAction_Component_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
