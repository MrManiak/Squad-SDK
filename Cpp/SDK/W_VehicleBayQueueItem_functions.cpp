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

// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Update Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_Active                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VehicleBayQueueItem_C::Update_Info(class UClass* Class, bool Is_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Update Info");

	UW_VehicleBayQueueItem_C_Update_Info_Params params;
	params.Class = Class;
	params.Is_Active = Is_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Get Active Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UW_VehicleBayQueueItem_C::Get_Active_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Get Active Color");

	UW_VehicleBayQueueItem_C_Get_Active_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleBayQueueItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Tick");

	UW_VehicleBayQueueItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VehicleBayQueueItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.Construct");

	UW_VehicleBayQueueItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.ExecuteUbergraph_W_VehicleBayQueueItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VehicleBayQueueItem_C::ExecuteUbergraph_W_VehicleBayQueueItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VehicleBayQueueItem.W_VehicleBayQueueItem_C.ExecuteUbergraph_W_VehicleBayQueueItem");

	UW_VehicleBayQueueItem_C_ExecuteUbergraph_W_VehicleBayQueueItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
