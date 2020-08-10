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

// Function W_MapVehicleList.W_MapVehicleList_C.Cache KillDeath Ruleset
// (Public, BlueprintCallable, BlueprintEvent)
void UW_MapVehicleList_C::Cache_KillDeath_Ruleset()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Cache KillDeath Ruleset");

	UW_MapVehicleList_C_Cache_KillDeath_Ruleset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapVehicleList.W_MapVehicleList_C.Sort Vics by Cost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_VehicleListData> To_Sort                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_VehicleListData> Out_Sorted                     (Parm, OutParm, ZeroConstructor)
void UW_MapVehicleList_C::Sort_Vics_by_Cost(TArray<struct FS_VehicleListData>* To_Sort, TArray<struct FS_VehicleListData>* Out_Sorted)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Sort Vics by Cost");

	UW_MapVehicleList_C_Sort_Vics_by_Cost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (To_Sort != nullptr)
		*To_Sort = params.To_Sort;
	if (Out_Sorted != nullptr)
		*Out_Sorted = params.Out_Sorted;

}


// Function W_MapVehicleList.W_MapVehicleList_C.Draw Sorted Vehicle Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_MapVehicleList_C::Draw_Sorted_Vehicle_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Draw Sorted Vehicle Data");

	UW_MapVehicleList_C_Draw_Sorted_Vehicle_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapVehicleList.W_MapVehicleList_C.Get Tickets For Vehicle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Vehicle_Ref                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Tickets_Lost_on_Vehicle_Destroy (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapVehicleList_C::Get_Tickets_For_Vehicle(int Team, class UClass* Vehicle_Ref, int* Tickets_Lost_on_Vehicle_Destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Get Tickets For Vehicle");

	UW_MapVehicleList_C_Get_Tickets_For_Vehicle_Params params;
	params.Team = Team;
	params.Vehicle_Ref = Vehicle_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tickets_Lost_on_Vehicle_Destroy != nullptr)
		*Tickets_Lost_on_Vehicle_Destroy = params.Tickets_Lost_on_Vehicle_Destroy;

}


// Function W_MapVehicleList.W_MapVehicleList_C.Collect Vehicle Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_MapVehicleList_C::Collect_Vehicle_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Collect Vehicle Data");

	UW_MapVehicleList_C_Collect_Vehicle_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapVehicleList.W_MapVehicleList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapVehicleList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.Construct");

	UW_MapVehicleList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapVehicleList.W_MapVehicleList_C.ExecuteUbergraph_W_MapVehicleList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapVehicleList_C::ExecuteUbergraph_W_MapVehicleList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapVehicleList.W_MapVehicleList_C.ExecuteUbergraph_W_MapVehicleList");

	UW_MapVehicleList_C_ExecuteUbergraph_W_MapVehicleList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
