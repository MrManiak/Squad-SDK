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

// Function W_SQRoamingMap.W_SQRoamingMap_C.MouseWheelZoom
struct UW_SQRoamingMap_C_MouseWheelZoom_Params
{
	float                                              MouseWheelAxis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.GetOwningPawnMapScreenPosition
struct UW_SQRoamingMap_C_GetOwningPawnMapScreenPosition_Params
{
	struct FVector2D                                   Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.Tick
struct UW_SQRoamingMap_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.PreConstruct
struct UW_SQRoamingMap_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.Construct
struct UW_SQRoamingMap_C_Construct_Params
{
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.Opened
struct UW_SQRoamingMap_C_Opened_Params
{
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.Closed
struct UW_SQRoamingMap_C_Closed_Params
{
};

// Function W_SQRoamingMap.W_SQRoamingMap_C.ExecuteUbergraph_W_SQRoamingMap
struct UW_SQRoamingMap_C_ExecuteUbergraph_W_SQRoamingMap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
