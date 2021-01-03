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

// Function W_UAV_UI.W_UAV_UI_C.Update Lock Text
// (Public, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Update_Lock_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Update Lock Text");

	UW_UAV_UI_C_Update_Lock_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Manage Animations
// (Public, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Manage_Animations()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Manage Animations");

	UW_UAV_UI_C_Manage_Animations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Zoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Zoom");

	UW_UAV_UI_C_Set_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Elevation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Elevation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Elevation");

	UW_UAV_UI_C_Set_Elevation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Self Grid Ref
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Self_Grid_Ref()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Self Grid Ref");

	UW_UAV_UI_C_Set_Self_Grid_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Pitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Pitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Pitch");

	UW_UAV_UI_C_Set_Pitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Fuel
// (Public, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Fuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Fuel");

	UW_UAV_UI_C_Set_Fuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Update Compass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Update_Compass()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Update Compass");

	UW_UAV_UI_C_Update_Compass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Time");

	UW_UAV_UI_C_Set_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Set Grid Ref
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Set_Grid_Ref()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Set Grid Ref");

	UW_UAV_UI_C_Set_Grid_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Get Cam Delta
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Mouse_Coordinate               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UAV_UI_C::Get_Cam_Delta(const struct FVector2D& Mouse_Coordinate, const struct FGeometry& Geometry, float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Get Cam Delta");

	UW_UAV_UI_C_Get_Cam_Delta_Params params;
	params.Mouse_Coordinate = Mouse_Coordinate;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function W_UAV_UI.W_UAV_UI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UAV_UI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Tick");

	UW_UAV_UI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_UAV_UI_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_UAV_UI_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.Close Animation
// (BlueprintCallable, BlueprintEvent)
void UW_UAV_UI_C::Close_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.Close Animation");

	UW_UAV_UI_C_Close_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UAV_UI.W_UAV_UI_C.ExecuteUbergraph_W_UAV_UI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UAV_UI_C::ExecuteUbergraph_W_UAV_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UAV_UI.W_UAV_UI_C.ExecuteUbergraph_W_UAV_UI");

	UW_UAV_UI_C_ExecuteUbergraph_W_UAV_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
