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

// Function W_SQRoamingMap.W_SQRoamingMap_C.MouseWheelZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MouseWheelAxis                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQRoamingMap_C::MouseWheelZoom(float MouseWheelAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.MouseWheelZoom");

	UW_SQRoamingMap_C_MouseWheelZoom_Params params;
	params.MouseWheelAxis = MouseWheelAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.GetOwningPawnMapScreenPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQRoamingMap_C::GetOwningPawnMapScreenPosition(struct FVector2D* Result, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.GetOwningPawnMapScreenPosition");

	UW_SQRoamingMap_C_GetOwningPawnMapScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQRoamingMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.Tick");

	UW_SQRoamingMap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQRoamingMap_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.PreConstruct");

	UW_SQRoamingMap_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SQRoamingMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.Construct");

	UW_SQRoamingMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.Opened
// (BlueprintCallable, BlueprintEvent)
void UW_SQRoamingMap_C::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.Opened");

	UW_SQRoamingMap_C_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.Closed
// (BlueprintCallable, BlueprintEvent)
void UW_SQRoamingMap_C::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.Closed");

	UW_SQRoamingMap_C_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQRoamingMap.W_SQRoamingMap_C.ExecuteUbergraph_W_SQRoamingMap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQRoamingMap_C::ExecuteUbergraph_W_SQRoamingMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQRoamingMap.W_SQRoamingMap_C.ExecuteUbergraph_W_SQRoamingMap");

	UW_SQRoamingMap_C_ExecuteUbergraph_W_SQRoamingMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
