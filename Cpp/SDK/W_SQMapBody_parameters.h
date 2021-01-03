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

// Function W_SQMapBody.W_SQMapBody_C.Get Relative Location
struct UW_SQMapBody_C_Get_Relative_Location_Params
{
	struct FVector                                     In_Location;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Relative;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapBody.W_SQMapBody_C.Map Corner Bounds
struct UW_SQMapBody_C_Map_Corner_Bounds_Params
{
	struct FVector                                     Extent;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapBody.W_SQMapBody_C.Init Map Boundary
struct UW_SQMapBody_C_Init_Map_Boundary_Params
{
};

// Function W_SQMapBody.W_SQMapBody_C.RemoveMarkerWidget
struct UW_SQMapBody_C_RemoveMarkerWidget_Params
{
	class USQMapMarkerBase*                            Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_SQMapBody.W_SQMapBody_C.CreateMarkerWidget
struct UW_SQMapBody_C_CreateMarkerWidget_Params
{
	struct FSQMapMarkerVisualData                      MapMarkerVisualData;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class USQMapMarkerBase*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapBody.W_SQMapBody_C.PreConstruct
struct UW_SQMapBody_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQMapBody.W_SQMapBody_C.Construct
struct UW_SQMapBody_C_Construct_Params
{
};

// Function W_SQMapBody.W_SQMapBody_C.InitializeLattice
struct UW_SQMapBody_C_InitializeLattice_Params
{
	class USQCoreStateMapComponent*                    MapComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapBody.W_SQMapBody_C.Set Flag Lattice Visibility
struct UW_SQMapBody_C_Set_Flag_Lattice_Visibility_Params
{
	bool                                               InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQMapBody.W_SQMapBody_C.ExecuteUbergraph_W_SQMapBody
struct UW_SQMapBody_C_ExecuteUbergraph_W_SQMapBody_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
