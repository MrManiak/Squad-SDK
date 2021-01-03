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

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction_Event
struct UBP_PlaceMarkerAction_C_DoAction_Event_Params
{
	class USQMapMarkerDataAsset*                       MapMarkerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                           RadialMenu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      MapMarkerClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.ExecuteUbergraph_BP_PlaceMarkerAction
struct UBP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction__DelegateSignature
struct UBP_PlaceMarkerAction_C_DoAction__DelegateSignature_Params
{
	class UClass*                                      NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
