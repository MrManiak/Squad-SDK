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

// Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.UpdateOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLinePerZoomLevel_C::UpdateOpacity(float ZoomAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.UpdateOpacity");

	UW_SQMapGridLinePerZoomLevel_C_UpdateOpacity_Params params;
	params.ZoomAmount = ZoomAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.InitializeTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             GridZoomOpacities              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              GridTextures                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ZoomFadeIn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ZoomOpaque                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScaleFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               GridNumbers                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingZoom                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLinePerZoomLevel_C::InitializeTexture(class UCurveFloat* GridZoomOpacities, class UTexture2D* GridTextures, float ZoomFadeIn, float ZoomOpaque, int ScaleFactor, const struct FLinearColor& Tint, const struct FVector2D& GridNumbers, float StartingZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.InitializeTexture");

	UW_SQMapGridLinePerZoomLevel_C_InitializeTexture_Params params;
	params.GridZoomOpacities = GridZoomOpacities;
	params.GridTextures = GridTextures;
	params.ZoomFadeIn = ZoomFadeIn;
	params.ZoomOpaque = ZoomOpaque;
	params.ScaleFactor = ScaleFactor;
	params.Tint = Tint;
	params.GridNumbers = GridNumbers;
	params.StartingZoom = StartingZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.ExecuteUbergraph_W_SQMapGridLinePerZoomLevel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapGridLinePerZoomLevel_C::ExecuteUbergraph_W_SQMapGridLinePerZoomLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C.ExecuteUbergraph_W_SQMapGridLinePerZoomLevel");

	UW_SQMapGridLinePerZoomLevel_C_ExecuteUbergraph_W_SQMapGridLinePerZoomLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
