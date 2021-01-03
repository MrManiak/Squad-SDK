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

// Function W_SQMapBody.W_SQMapBody_C.Get Relative Location
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 In_Location                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Relative                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapBody_C::Get_Relative_Location(const struct FVector& In_Location, struct FVector2D* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.Get Relative Location");

	UW_SQMapBody_C_Get_Relative_Location_Params params;
	params.In_Location = In_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;

}


// Function W_SQMapBody.W_SQMapBody_C.Map Corner Bounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Extent                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapBody_C::Map_Corner_Bounds(struct FVector* Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.Map Corner Bounds");

	UW_SQMapBody_C_Map_Corner_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Extent != nullptr)
		*Extent = params.Extent;

}


// Function W_SQMapBody.W_SQMapBody_C.Init Map Boundary
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SQMapBody_C::Init_Map_Boundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.Init Map Boundary");

	UW_SQMapBody_C_Init_Map_Boundary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapBody.W_SQMapBody_C.RemoveMarkerWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapMarkerBase*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_SQMapBody_C::RemoveMarkerWidget(class USQMapMarkerBase* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.RemoveMarkerWidget");

	UW_SQMapBody_C_RemoveMarkerWidget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapBody.W_SQMapBody_C.CreateMarkerWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQMapMarkerVisualData  MapMarkerVisualData            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USQMapMarkerBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USQMapMarkerBase* UW_SQMapBody_C::CreateMarkerWidget(const struct FSQMapMarkerVisualData& MapMarkerVisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.CreateMarkerWidget");

	UW_SQMapBody_C_CreateMarkerWidget_Params params;
	params.MapMarkerVisualData = MapMarkerVisualData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SQMapBody.W_SQMapBody_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapBody_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.PreConstruct");

	UW_SQMapBody_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapBody.W_SQMapBody_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQMapBody_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.Construct");

	UW_SQMapBody_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapBody.W_SQMapBody_C.InitializeLattice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* MapComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapBody_C::InitializeLattice(class USQCoreStateMapComponent* MapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.InitializeLattice");

	UW_SQMapBody_C_InitializeLattice_Params params;
	params.MapComponent = MapComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapBody.W_SQMapBody_C.Set Flag Lattice Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapBody_C::Set_Flag_Lattice_Visibility(bool InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.Set Flag Lattice Visibility");

	UW_SQMapBody_C_Set_Flag_Lattice_Visibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapBody.W_SQMapBody_C.ExecuteUbergraph_W_SQMapBody
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapBody_C::ExecuteUbergraph_W_SQMapBody(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapBody.W_SQMapBody_C.ExecuteUbergraph_W_SQMapBody");

	UW_SQMapBody_C_ExecuteUbergraph_W_SQMapBody_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
