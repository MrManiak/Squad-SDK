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

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.Remove FT Markers
struct ABP_GenericMapMarker_C_Remove_FT_Markers_Params
{
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.Tint
struct ABP_GenericMapMarker_C_Tint_Params
{
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.MarkerIsRelevant
struct ABP_GenericMapMarker_C_MarkerIsRelevant_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.UserConstructionScript
struct ABP_GenericMapMarker_C_UserConstructionScript_Params
{
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.SetTexture
struct ABP_GenericMapMarker_C_SetTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveBeginPlay
struct ABP_GenericMapMarker_C_ReceiveBeginPlay_Params
{
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveDestroyed
struct ABP_GenericMapMarker_C_ReceiveDestroyed_Params
{
};

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ExecuteUbergraph_BP_GenericMapMarker
struct ABP_GenericMapMarker_C_ExecuteUbergraph_BP_GenericMapMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
