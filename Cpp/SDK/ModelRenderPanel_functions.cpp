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
// Functions
//---------------------------------------------------------------------------

// Function ModelRenderPanel.ModelRenderPanel_C.SetCustomPostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings    InPostProcessSettings          (BlueprintVisible, BlueprintReadOnly, Parm)
void UModelRenderPanel_C::SetCustomPostProcess(const struct FPostProcessSettings& InPostProcessSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetCustomPostProcess");

	UModelRenderPanel_C_SetCustomPostProcess_Params params;
	params.InPostProcessSettings = InPostProcessSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetCustomOrthoWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CustomOrthoWidth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::SetCustomOrthoWidth(float CustomOrthoWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetCustomOrthoWidth");

	UModelRenderPanel_C_SetCustomOrthoWidth_Params params;
	params.CustomOrthoWidth = CustomOrthoWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetCameraModelOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UModelRenderPanel_C::SetCameraModelOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetCameraModelOffset");

	UModelRenderPanel_C_SetCameraModelOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetupCustomActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CustomActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::SetupCustomActor(class AActor* CustomActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetupCustomActor");

	UModelRenderPanel_C_SetupCustomActor_Params params;
	params.CustomActor = CustomActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetupStaticMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*> Materials                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UModelRenderPanel_C::SetupStaticMesh(class UStaticMesh* StaticMesh, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetupStaticMesh");

	UModelRenderPanel_C_SetupStaticMesh_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetupSkeletalMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*> Materials                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UModelRenderPanel_C::SetupSkeletalMesh(class USkeletalMesh* SkeletalMesh, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetupSkeletalMesh");

	UModelRenderPanel_C_SetupSkeletalMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;

}


// Function ModelRenderPanel.ModelRenderPanel_C.SetupAsImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              OverrideTexture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::SetupAsImage(class UTexture2D* OverrideTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.SetupAsImage");

	UModelRenderPanel_C_SetupAsImage_Params params;
	params.OverrideTexture = OverrideTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.ClearRender
// (Public, BlueprintCallable, BlueprintEvent)
void UModelRenderPanel_C::ClearRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.ClearRender");

	UModelRenderPanel_C_ClearRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.RemoveRenderActors
// (Public, BlueprintCallable, BlueprintEvent)
void UModelRenderPanel_C::RemoveRenderActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.RemoveRenderActors");

	UModelRenderPanel_C_RemoveRenderActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UModelRenderPanel_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonUp_1");

	UModelRenderPanel_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UModelRenderPanel_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.OnMouseButtonDown_1");

	UModelRenderPanel_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ModelRenderPanel.ModelRenderPanel_C.RotateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          XDelta                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          YDelta                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::RotateCamera(float XDelta, float YDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.RotateCamera");

	UModelRenderPanel_C_RotateCamera_Params params;
	params.XDelta = XDelta;
	params.YDelta = YDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.UpdateRender
// (Public, BlueprintCallable, BlueprintEvent)
void UModelRenderPanel_C::UpdateRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.UpdateRender");

	UModelRenderPanel_C_UpdateRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.RendererSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UModelRenderPanel_C::RendererSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.RendererSetup");

	UModelRenderPanel_C_RendererSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UModelRenderPanel_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.OnMouseLeave");

	UModelRenderPanel_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UModelRenderPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.PreConstruct");

	UModelRenderPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.Tick");

	UModelRenderPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UModelRenderPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.Destruct");

	UModelRenderPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModelRenderPanel.ModelRenderPanel_C.ExecuteUbergraph_ModelRenderPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModelRenderPanel_C::ExecuteUbergraph_ModelRenderPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelRenderPanel.ModelRenderPanel_C.ExecuteUbergraph_ModelRenderPanel");

	UModelRenderPanel_C_ExecuteUbergraph_ModelRenderPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
