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

// Function W_RoleQuickList.W_RoleQuickList_C.IsRoleListWidgetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_RoleQuickList_C::IsRoleListWidgetValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickList.W_RoleQuickList_C.IsRoleListWidgetValid");

	UW_RoleQuickList_C_IsRoleListWidgetValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_RoleQuickList.W_RoleQuickList_C.CreateRoleListWidgetArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UW_RoleGroup_C*>  Array                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UW_RoleQuickList_C::CreateRoleListWidgetArray(TArray<class UW_RoleGroup_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickList.W_RoleQuickList_C.CreateRoleListWidgetArray");

	UW_RoleQuickList_C_CreateRoleListWidgetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function W_RoleQuickList.W_RoleQuickList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleQuickList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickList.W_RoleQuickList_C.Tick");

	UW_RoleQuickList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleQuickList.W_RoleQuickList_C.ExecuteUbergraph_W_RoleQuickList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleQuickList_C::ExecuteUbergraph_W_RoleQuickList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleQuickList.W_RoleQuickList_C.ExecuteUbergraph_W_RoleQuickList");

	UW_RoleQuickList_C_ExecuteUbergraph_W_RoleQuickList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
