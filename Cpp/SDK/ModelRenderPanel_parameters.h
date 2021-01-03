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

// Function ModelRenderPanel.ModelRenderPanel_C.SetCustomPostProcess
struct UModelRenderPanel_C_SetCustomPostProcess_Params
{
	struct FPostProcessSettings                        InPostProcessSettings;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetCustomOrthoWidth
struct UModelRenderPanel_C_SetCustomOrthoWidth_Params
{
	float                                              CustomOrthoWidth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetCameraModelOffset
struct UModelRenderPanel_C_SetCameraModelOffset_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetupCustomActor
struct UModelRenderPanel_C_SetupCustomActor_Params
{
	class AActor*                                      CustomActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetupStaticMesh
struct UModelRenderPanel_C_SetupStaticMesh_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  Materials;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetupSkeletalMesh
struct UModelRenderPanel_C_SetupSkeletalMesh_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  Materials;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.SetupAsImage
struct UModelRenderPanel_C_SetupAsImage_Params
{
	class UTexture2D*                                  OverrideTexture;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModelRenderPanel.ModelRenderPanel_C.ClearRender
struct UModelRenderPanel_C_ClearRender_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.RemoveRenderActors
struct UModelRenderPanel_C_RemoveRenderActors_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonUp_1
struct UModelRenderPanel_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonDown_1
struct UModelRenderPanel_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.RotateCamera
struct UModelRenderPanel_C_RotateCamera_Params
{
	float                                              XDelta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YDelta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModelRenderPanel.ModelRenderPanel_C.UpdateRender
struct UModelRenderPanel_C_UpdateRender_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.RendererSetup
struct UModelRenderPanel_C_RendererSetup_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseLeave
struct UModelRenderPanel_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ModelRenderPanel.ModelRenderPanel_C.PreConstruct
struct UModelRenderPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ModelRenderPanel.ModelRenderPanel_C.Tick
struct UModelRenderPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ModelRenderPanel.ModelRenderPanel_C.Destruct
struct UModelRenderPanel_C_Destruct_Params
{
};

// Function ModelRenderPanel.ModelRenderPanel_C.ExecuteUbergraph_ModelRenderPanel
struct UModelRenderPanel_C_ExecuteUbergraph_ModelRenderPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
