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

// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.InitializeMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQHelicopter2*          OwningVehicle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Helicopter_MiniMap_C::InitializeMap(class ASQHelicopter2* OwningVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.InitializeMap");

	UW_Helicopter_MiniMap_C_InitializeMap_Params params;
	params.OwningVehicle = OwningVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Helicopter_MiniMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Tick");

	UW_Helicopter_MiniMap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayOpenAnim
// (BlueprintCallable, BlueprintEvent)
void UW_Helicopter_MiniMap_C::PlayOpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayOpenAnim");

	UW_Helicopter_MiniMap_C_PlayOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.FinishOpen
// (BlueprintCallable, BlueprintEvent)
void UW_Helicopter_MiniMap_C::FinishOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.FinishOpen");

	UW_Helicopter_MiniMap_C_FinishOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayCloseAnim
// (BlueprintCallable, BlueprintEvent)
void UW_Helicopter_MiniMap_C::PlayCloseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.PlayCloseAnim");

	UW_Helicopter_MiniMap_C_PlayCloseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Get World
// (BlueprintCallable, BlueprintEvent)
void UW_Helicopter_MiniMap_C::Get_World()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.Get World");

	UW_Helicopter_MiniMap_C_Get_World_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.ExecuteUbergraph_W_Helicopter_MiniMap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Helicopter_MiniMap_C::ExecuteUbergraph_W_Helicopter_MiniMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Helicopter_MiniMap.W_Helicopter_MiniMap_C.ExecuteUbergraph_W_Helicopter_MiniMap");

	UW_Helicopter_MiniMap_C_ExecuteUbergraph_W_Helicopter_MiniMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
