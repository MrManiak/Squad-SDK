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

// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Validate Landscapes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::Validate_Landscapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Validate Landscapes");

	ABPA_Landscape_Renderer_C_Validate_Landscapes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get New Offset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Landscape_Offset               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            New_Offset                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_Landscape_Renderer_C::Get_New_Offset(const struct FVector& Offset, const struct FVector& Landscape_Offset, struct FLinearColor* New_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get New Offset");

	ABPA_Landscape_Renderer_C_Get_New_Offset_Params params;
	params.Offset = Offset;
	params.Landscape_Offset = Landscape_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (New_Offset != nullptr)
		*New_Offset = params.New_Offset;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get Origin and Bounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Bounds                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABPA_Landscape_Renderer_C::Get_Origin_and_Bounds(struct FVector* Origin, struct FVector* Bounds, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Get Origin and Bounds");

	ABPA_Landscape_Renderer_C_Get_Origin_and_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Bounds != nullptr)
		*Bounds = params.Bounds;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::Render()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Render");

	ABPA_Landscape_Renderer_C_Render_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_Landscape_Renderer_C::SetOffset(const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetOffset");

	ABPA_Landscape_Renderer_C_SetOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetupRenderLandscape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::SetupRenderLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.SetupRenderLandscape");

	ABPA_Landscape_Renderer_C_SetupRenderLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ComputeOrthoWidth
// (Public, BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::ComputeOrthoWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ComputeOrthoWidth");

	ABPA_Landscape_Renderer_C_ComputeOrthoWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.UserConstructionScript");

	ABPA_Landscape_Renderer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABPA_Landscape_Renderer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveBeginPlay");

	ABPA_Landscape_Renderer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.WorldOriginChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_Landscape_Renderer_C::WorldOriginChangedEvent(const struct FVector& Origin_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.WorldOriginChangedEvent");

	ABPA_Landscape_Renderer_C_WorldOriginChangedEvent_Params params;
	params.Origin_Location = Origin_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_Landscape_Renderer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ReceiveEndPlay");

	ABPA_Landscape_Renderer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Create Depth Texture
// (BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::Create_Depth_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Create Depth Texture");

	ABPA_Landscape_Renderer_C_Create_Depth_Texture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.RenderLandscape
// (BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::RenderLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.RenderLandscape");

	ABPA_Landscape_Renderer_C_RenderLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Grab Landscape Bounds
// (BlueprintCallable, BlueprintEvent)
void ABPA_Landscape_Renderer_C::Grab_Landscape_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.Grab Landscape Bounds");

	ABPA_Landscape_Renderer_C_Grab_Landscape_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ExecuteUbergraph_BPA_Landscape_Renderer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_Landscape_Renderer_C::ExecuteUbergraph_BPA_Landscape_Renderer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Landscape_Renderer.BPA_Landscape_Renderer_C.ExecuteUbergraph_BPA_Landscape_Renderer");

	ABPA_Landscape_Renderer_C_ExecuteUbergraph_BPA_Landscape_Renderer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
