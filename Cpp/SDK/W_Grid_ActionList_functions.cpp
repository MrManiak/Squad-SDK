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

// Function W_Grid_ActionList.W_Grid_ActionList_C.Get Squad ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_C::Get_Squad_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Get Squad ID");

	UW_Grid_ActionList_C_Get_Squad_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_C::Get_Fireteam_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Get Fireteam ID");

	UW_Grid_ActionList_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Tick");

	UW_Grid_ActionList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Grid_ActionList_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.PreConstruct");

	UW_Grid_ActionList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Close
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_ActionList_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Close");

	UW_Grid_ActionList_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Grid_ActionList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Construct");

	UW_Grid_ActionList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Populate List
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_ActionList_C::Populate_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Populate List");

	UW_Grid_ActionList_C_Populate_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.ExecuteUbergraph_W_Grid_ActionList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_ActionList_C::ExecuteUbergraph_W_Grid_ActionList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.ExecuteUbergraph_W_Grid_ActionList");

	UW_Grid_ActionList_C_ExecuteUbergraph_W_Grid_ActionList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_ActionList.W_Grid_ActionList_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_Grid_ActionList_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_ActionList.W_Grid_ActionList_C.Closed__DelegateSignature");

	UW_Grid_ActionList_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
