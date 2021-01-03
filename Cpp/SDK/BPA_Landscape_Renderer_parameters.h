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

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Validate Landscapes
struct ABPA_Landscape_Renderer_C_Validate_Landscapes_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get New Offset
struct ABPA_Landscape_Renderer_C_Get_New_Offset_Params
{
	struct FVector                                     Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Landscape_Offset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                New_Offset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get Origin and Bounds
struct ABPA_Landscape_Renderer_C_Get_Origin_and_Bounds_Params
{
	struct FVector                                     Origin;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Bounds;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Render
struct ABPA_Landscape_Renderer_C_Render_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetOffset
struct ABPA_Landscape_Renderer_C_SetOffset_Params
{
	struct FVector                                     Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetupRenderLandscape
struct ABPA_Landscape_Renderer_C_SetupRenderLandscape_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ComputeOrthoWidth
struct ABPA_Landscape_Renderer_C_ComputeOrthoWidth_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.UserConstructionScript
struct ABPA_Landscape_Renderer_C_UserConstructionScript_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveBeginPlay
struct ABPA_Landscape_Renderer_C_ReceiveBeginPlay_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.WorldOriginChangedEvent
struct ABPA_Landscape_Renderer_C_WorldOriginChangedEvent_Params
{
	struct FVector                                     Origin_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveEndPlay
struct ABPA_Landscape_Renderer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Create Depth Texture
struct ABPA_Landscape_Renderer_C_Create_Depth_Texture_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.RenderLandscape
struct ABPA_Landscape_Renderer_C_RenderLandscape_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Grab Landscape Bounds
struct ABPA_Landscape_Renderer_C_Grab_Landscape_Bounds_Params
{
};

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ExecuteUbergraph_BPA_Landscape_Renderer
struct ABPA_Landscape_Renderer_C_ExecuteUbergraph_BPA_Landscape_Renderer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
