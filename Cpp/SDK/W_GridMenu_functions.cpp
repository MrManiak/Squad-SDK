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

// Function W_GridMenu.W_GridMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_GridMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.OnMouseButtonDown");

	UW_GridMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_GridMenu.W_GridMenu_C.Place Map Marker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapMarkerDataAsset*   Map_Marker_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FireTeamId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::Place_Map_Marker(class USQMapMarkerDataAsset* Map_Marker_Data, int FireTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Place Map Marker");

	UW_GridMenu_C_Place_Map_Marker_Params params;
	params.Map_Marker_Data = Map_Marker_Data;
	params.FireTeamId = FireTeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Get Traced Map Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Zero                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Get Traced Map Location");

	UW_GridMenu_C_Get_Traced_Map_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Zero != nullptr)
		*Zero = params.Zero;
	if (Local != nullptr)
		*Local = params.Local;

}


// Function W_GridMenu.W_GridMenu_C.Place Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MarkerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FireTeamId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::Place_Marker(class UClass* MarkerClass, int FireTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Place Marker");

	UW_GridMenu_C_Place_Marker_Params params;
	params.MarkerClass = MarkerClass;
	params.FireTeamId = FireTeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Remove Self
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Remove_Self()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Remove Self");

	UW_GridMenu_C_Remove_Self_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Close All Actions
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Close_All_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Close All Actions");

	UW_GridMenu_C_Close_All_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Close All Headers
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Close_All_Headers()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Close All Headers");

	UW_GridMenu_C_Close_All_Headers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Add Self to Viewport
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Add_Self_to_Viewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Add Self to Viewport");

	UW_GridMenu_C_Add_Self_to_Viewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Remove Headers
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Remove_Headers()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Remove Headers");

	UW_GridMenu_C_Remove_Headers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Add Header
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Double_Child                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_HeaderDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Button_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Edge_Alpha                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::Add_Header(bool Double_Child, TEnumAsByte<E_HeaderDirection> Direction, int* Button_ID, const struct FVector2D& Edge_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Add Header");

	UW_GridMenu_C_Add_Header_Params params;
	params.Double_Child = Double_Child;
	params.Direction = Direction;
	params.Edge_Alpha = Edge_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button_ID != nullptr)
		*Button_ID = params.Button_ID;

}


// Function W_GridMenu.W_GridMenu_C.Build Grid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               In_Geometry                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           In_Mouse_Event                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Zero_Based_World_Location      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::Build_Grid(const struct FGeometry& In_Geometry, const struct FPointerEvent& In_Mouse_Event, const struct FVector& Zero_Based_World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Build Grid");

	UW_GridMenu_C_Build_Grid_Params params;
	params.In_Geometry = In_Geometry;
	params.In_Mouse_Event = In_Mouse_Event;
	params.Zero_Based_World_Location = Zero_Based_World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GridMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Destruct");

	UW_GridMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_GridMenu_C::BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UW_GridMenu_C_BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GridMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Construct");

	UW_GridMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.Grid Main Action
// (BlueprintCallable, BlueprintEvent)
void UW_GridMenu_C::Grid_Main_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.Grid Main Action");

	UW_GridMenu_C_Grid_Main_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridMenu.W_GridMenu_C.ExecuteUbergraph_W_GridMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridMenu_C::ExecuteUbergraph_W_GridMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridMenu.W_GridMenu_C.ExecuteUbergraph_W_GridMenu");

	UW_GridMenu_C_ExecuteUbergraph_W_GridMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
