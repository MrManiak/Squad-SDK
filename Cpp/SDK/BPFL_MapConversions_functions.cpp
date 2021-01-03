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

// Function BPFL_MapConversions.BPFL_MapConversions_C.Get World Distance to Pixel Distance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          In_Centimetres                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pixel                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Get_World_Distance_to_Pixel_Distance(float In_Centimetres, class UObject* __WorldContext, float* Pixel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get World Distance to Pixel Distance");

	UBPFL_MapConversions_C_Get_World_Distance_to_Pixel_Distance_Params params;
	params.In_Centimetres = In_Centimetres;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pixel != nullptr)
		*Pixel = params.Pixel;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Get Map Distance to Pixel Distance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Map_Distance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pixel_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Get_Map_Distance_to_Pixel_Distance(float Map_Distance, class UObject* __WorldContext, float* Pixel_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get Map Distance to Pixel Distance");

	UBPFL_MapConversions_C_Get_Map_Distance_to_Pixel_Distance_Params params;
	params.Map_Distance = Map_Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pixel_Distance != nullptr)
		*Pixel_Distance = params.Pixel_Distance;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Get Pixel Distance to World Distance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Pixel_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          World_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Get_Pixel_Distance_to_World_Distance(float Pixel_Distance, class UObject* __WorldContext, float* World_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get Pixel Distance to World Distance");

	UBPFL_MapConversions_C_Get_Pixel_Distance_to_World_Distance_Params params;
	params.Pixel_Distance = Pixel_Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (World_Distance != nullptr)
		*World_Distance = params.World_Distance;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Mouse Position to World Location
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Mouse_Screen_Position          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UBPFL_MapConversions_C::STATIC_Mouse_Position_to_World_Location(const struct FVector2D& Mouse_Screen_Position, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Mouse Position to World Location");

	UBPFL_MapConversions_C_Mouse_Position_to_World_Location_Params params;
	params.Mouse_Screen_Position = Mouse_Screen_Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Map Position to World Location
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Relative_Map_Position          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 World_Location__XY_            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Map_Position_to_World_Location(const struct FVector2D& Relative_Map_Position, class UObject* __WorldContext, struct FVector* World_Location__XY_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Map Position to World Location");

	UBPFL_MapConversions_C_Map_Position_to_World_Location_Params params;
	params.Relative_Map_Position = Relative_Map_Position;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (World_Location__XY_ != nullptr)
		*World_Location__XY_ = params.World_Location__XY_;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Get Pixel Distance from Relative Origin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Relative_Map_Position          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Map_Body                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pixel_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Get_Pixel_Distance_from_Relative_Origin(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* Pixel_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get Pixel Distance from Relative Origin");

	UBPFL_MapConversions_C_Get_Pixel_Distance_from_Relative_Origin_Params params;
	params.Relative_Map_Position = Relative_Map_Position;
	params.Map_Body = Map_Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pixel_Distance != nullptr)
		*Pixel_Distance = params.Pixel_Distance;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Get Angle From Mouse Vector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Relative_Map_Position          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Map_Body                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                World_Rotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_MapConversions_C::STATIC_Get_Angle_From_Mouse_Vector(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* Angle, struct FRotator* World_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get Angle From Mouse Vector");

	UBPFL_MapConversions_C_Get_Angle_From_Mouse_Vector_Params params;
	params.Relative_Map_Position = Relative_Map_Position;
	params.Map_Body = Map_Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
	if (World_Rotation != nullptr)
		*World_Rotation = params.World_Rotation;

}


// Function BPFL_MapConversions.BPFL_MapConversions_C.Get World Distance from Relative Origin
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Relative_Map_Position          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Map_Body                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          World_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapConversions_C::STATIC_Get_World_Distance_from_Relative_Origin(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* World_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapConversions.BPFL_MapConversions_C.Get World Distance from Relative Origin");

	UBPFL_MapConversions_C_Get_World_Distance_from_Relative_Origin_Params params;
	params.Relative_Map_Position = Relative_Map_Position;
	params.Map_Body = Map_Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (World_Distance != nullptr)
		*World_Distance = params.World_Distance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
