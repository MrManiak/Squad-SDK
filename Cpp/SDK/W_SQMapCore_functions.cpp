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
// Functions
//---------------------------------------------------------------------------

// Function W_SQMapCore.W_SQMapCore_C.Create Fireteam Actions Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Create_Fireteam_Actions_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Create Fireteam Actions Menu");

	UW_SQMapCore_C_Create_Fireteam_Actions_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Can Place Map Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapCore_C::Can_Place_Map_Menu(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Can Place Map Menu");

	UW_SQMapCore_C_Can_Place_Map_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function W_SQMapCore.W_SQMapCore_C.FindZoomLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               OutScreenLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::FindZoomLocation(struct FVector2D* OutScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.FindZoomLocation");

	UW_SQMapCore_C_FindZoomLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutScreenLocation != nullptr)
		*OutScreenLocation = params.OutScreenLocation;

}


// Function W_SQMapCore.W_SQMapCore_C.SetMapTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::SetMapTexture(class UTexture* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.SetMapTexture");

	UW_SQMapCore_C_SetMapTexture_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.InitializeZoomLevels
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::InitializeZoomLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.InitializeZoomLevels");

	UW_SQMapCore_C_InitializeZoomLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.AdjustVerticalBarPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetZoom                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::AdjustVerticalBarPadding(float TargetZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.AdjustVerticalBarPadding");

	UW_SQMapCore_C_AdjustVerticalBarPadding_Params params;
	params.TargetZoom = TargetZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.AdjustHorizontalBarPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetZoom                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::AdjustHorizontalBarPadding(float TargetZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.AdjustHorizontalBarPadding");

	UW_SQMapCore_C_AdjustHorizontalBarPadding_Params params;
	params.TargetZoom = TargetZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Remove Mouse Pos
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Remove_Mouse_Pos()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Remove Mouse Pos");

	UW_SQMapCore_C_Remove_Mouse_Pos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SQMapCore_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseWheel");

	UW_SQMapCore_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseWheelZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MouseAxis                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::OnMouseWheelZoom(float MouseAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseWheelZoom");

	UW_SQMapCore_C_OnMouseWheelZoom_Params params;
	params.MouseAxis = MouseAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.UpdatePlayerCoordinates
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::UpdatePlayerCoordinates()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.UpdatePlayerCoordinates");

	UW_SQMapCore_C_UpdatePlayerCoordinates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.UpdateCursorGridLocationString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseInput                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_SQMapCore_C::UpdateCursorGridLocationString(const struct FPointerEvent& MouseInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.UpdateCursorGridLocationString");

	UW_SQMapCore_C_UpdateCursorGridLocationString_Params params;
	params.MouseInput = MouseInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.ScreenLocationToMapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ScreenLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               MapLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::ScreenLocationToMapLocation(const struct FVector2D& ScreenLocation, struct FVector2D* MapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.ScreenLocationToMapLocation");

	UW_SQMapCore_C_ScreenLocationToMapLocation_Params params;
	params.ScreenLocation = ScreenLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapLocation != nullptr)
		*MapLocation = params.MapLocation;

}


// Function W_SQMapCore.W_SQMapCore_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* MapComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::Setup(class USQCoreStateMapComponent* MapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Setup");

	UW_SQMapCore_C_Setup_Params params;
	params.MapComponent = MapComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.PerformFollow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            PanLayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               FocusPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RelativePosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CacheScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             RootLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::PerformFollow(class UPanelWidget* PanLayer, const struct FVector2D& FocusPosition, bool RelativePosition, float CacheScale, class UUserWidget* RootLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.PerformFollow");

	UW_SQMapCore_C_PerformFollow_Params params;
	params.PanLayer = PanLayer;
	params.FocusPosition = FocusPosition;
	params.RelativePosition = RelativePosition;
	params.CacheScale = CacheScale;
	params.RootLayer = RootLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.PerformPan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScreenDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CacheScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             RootLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            PanLayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::PerformPan(const struct FVector2D& Vector, bool IsScreenDelta, float CacheScale, class UUserWidget* RootLayer, class UPanelWidget* PanLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.PerformPan");

	UW_SQMapCore_C_PerformPan_Params params;
	params.Vector = Vector;
	params.IsScreenDelta = IsScreenDelta;
	params.CacheScale = CacheScale;
	params.RootLayer = RootLayer;
	params.PanLayer = PanLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.PerformZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetZoom                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ZoomPosition                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             RootLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            ZoomLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            PanLayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ZoomWidth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ZoomHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapCore_C::PerformZoom(float TargetZoom, const struct FVector2D& ZoomPosition, class UUserWidget* RootLayer, class UPanelWidget* ZoomLayer, class UPanelWidget* PanLayer, bool ZoomWidth, bool ZoomHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.PerformZoom");

	UW_SQMapCore_C_PerformZoom_Params params;
	params.TargetZoom = TargetZoom;
	params.ZoomPosition = ZoomPosition;
	params.RootLayer = RootLayer;
	params.ZoomLayer = ZoomLayer;
	params.PanLayer = PanLayer;
	params.ZoomWidth = ZoomWidth;
	params.ZoomHeight = ZoomHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.GetElementRoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            Out_Root                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::GetElementRoot(class UPanelWidget** Out_Root)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.GetElementRoot");

	UW_SQMapCore_C_GetElementRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Root != nullptr)
		*Out_Root = params.Out_Root;

}


// Function W_SQMapCore.W_SQMapCore_C.Clear Selections
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Clear_Selections()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Clear Selections");

	UW_SQMapCore_C_Clear_Selections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.UpdateFollow
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::UpdateFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.UpdateFollow");

	UW_SQMapCore_C_UpdateFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.UpdateZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::UpdateZoom(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.UpdateZoom");

	UW_SQMapCore_C_UpdateZoom_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Unfollow
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Unfollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Unfollow");

	UW_SQMapCore_C_Unfollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.ScreenToPanPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ScreenPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               PanPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::ScreenToPanPosition(const struct FVector2D& ScreenPosition, struct FVector2D* PanPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.ScreenToPanPosition");

	UW_SQMapCore_C_ScreenToPanPosition_Params params;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PanPosition != nullptr)
		*PanPosition = params.PanPosition;

}


// Function W_SQMapCore.W_SQMapCore_C.Follow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               FocusPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RelativePosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ClampCacheScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::Follow(bool Instant, const struct FVector2D& FocusPosition, bool RelativePosition, float ClampCacheScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Follow");

	UW_SQMapCore_C_Follow_Params params;
	params.Instant = Instant;
	params.FocusPosition = FocusPosition;
	params.RelativePosition = RelativePosition;
	params.ClampCacheScale = ClampCacheScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.ClampPanPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CacheScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             RootLayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            PanLayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::ClampPanPosition(const struct FVector2D& Position, float CacheScale, class UUserWidget* RootLayer, class UPanelWidget* PanLayer, struct FVector2D* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.ClampPanPosition");

	UW_SQMapCore_C_ClampPanPosition_Params params;
	params.Position = Position;
	params.CacheScale = CacheScale;
	params.RootLayer = RootLayer;
	params.PanLayer = PanLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function W_SQMapCore.W_SQMapCore_C.ScreenToPanVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ScreenVector                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            PanLayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               PanVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::ScreenToPanVector(const struct FVector2D& ScreenVector, class UPanelWidget* PanLayer, struct FVector2D* PanVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.ScreenToPanVector");

	UW_SQMapCore_C_ScreenToPanVector_Params params;
	params.ScreenVector = ScreenVector;
	params.PanLayer = PanLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PanVector != nullptr)
		*PanVector = params.PanVector;

}


// Function W_SQMapCore.W_SQMapCore_C.MovePan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsScreenDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ClampCacheScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::MovePan(const struct FVector2D& Delta, bool IsScreenDelta, float ClampCacheScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.MovePan");

	UW_SQMapCore_C_MovePan_Params params;
	params.Delta = Delta;
	params.IsScreenDelta = IsScreenDelta;
	params.ClampCacheScale = ClampCacheScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SQMapCore_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseMove");

	UW_SQMapCore_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SQMapCore_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonUp");

	UW_SQMapCore_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapCore.W_SQMapCore_C.EndPan
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::EndPan()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.EndPan");

	UW_SQMapCore_C_EndPan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.StartPan
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::StartPan()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.StartPan");

	UW_SQMapCore_C_StartPan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Remove Floating Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Remove_Floating_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Remove Floating Widgets");

	UW_SQMapCore_C_Remove_Floating_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Create Actions Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Create_Actions_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Create Actions Menu");

	UW_SQMapCore_C_Create_Actions_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Hide SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Visible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry               Visible_Geometry               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_SQMapCore_C::Hide_SL_Menu(bool New_Visible, const struct FGeometry& Visible_Geometry, const struct FPointerEvent& Mouse_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Hide SL Menu");

	UW_SQMapCore_C_Hide_SL_Menu_Params params;
	params.New_Visible = New_Visible;
	params.Visible_Geometry = Visible_Geometry;
	params.Mouse_Event = Mouse_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SQMapCore_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonDown");

	UW_SQMapCore_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapCore.W_SQMapCore_C.InitialiseMapTexture
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::InitialiseMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.InitialiseMapTexture");

	UW_SQMapCore_C_InitialiseMapTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapCore_C::Zoom(bool Instant, float Amount, bool IsUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Zoom");

	UW_SQMapCore_C_Zoom_Params params;
	params.Instant = Instant;
	params.Amount = Amount;
	params.IsUpdate = IsUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQMapCore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Construct");

	UW_SQMapCore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_SQMapCore_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnMouseLeave");

	UW_SQMapCore_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Tick");

	UW_SQMapCore_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Allow Ping
// (BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::Allow_Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Allow Ping");

	UW_SQMapCore_C_Allow_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.ExecuteUbergraph_W_SQMapCore
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::ExecuteUbergraph_W_SQMapCore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.ExecuteUbergraph_W_SQMapCore");

	UW_SQMapCore_C_ExecuteUbergraph_W_SQMapCore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.OnUpdateZoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_SQMapCore_C::OnUpdateZoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.OnUpdateZoom__DelegateSignature");

	UW_SQMapCore_C_OnUpdateZoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapCore.W_SQMapCore_C.Mouse Down__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapCore_C::Mouse_Down__DelegateSignature(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapCore.W_SQMapCore_C.Mouse Down__DelegateSignature");

	UW_SQMapCore_C_Mouse_Down__DelegateSignature_Params params;
	params.Mouse_Event = Mouse_Event;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
