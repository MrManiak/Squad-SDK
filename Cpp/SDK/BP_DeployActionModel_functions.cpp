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

// Function BP_DeployActionModel.BP_DeployActionModel_C.Get Deployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Deployable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeployActionModel_C::Get_Deployable(class UClass** Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployActionModel.BP_DeployActionModel_C.Get Deployable");

	UBP_DeployActionModel_C_Get_Deployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployable != nullptr)
		*Deployable = params.Deployable;

}


// Function BP_DeployActionModel.BP_DeployActionModel_C.Open Voice Model
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_DeployActionModel_C::Open_Voice_Model()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployActionModel.BP_DeployActionModel_C.Open Voice Model");

	UBP_DeployActionModel_C_Open_Voice_Model_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DeployActionModel.BP_DeployActionModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeployActionModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployActionModel.BP_DeployActionModel_C.OnClicked");

	UBP_DeployActionModel_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DeployActionModel.BP_DeployActionModel_C.ExecuteUbergraph_BP_DeployActionModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeployActionModel_C::ExecuteUbergraph_BP_DeployActionModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployActionModel.BP_DeployActionModel_C.ExecuteUbergraph_BP_DeployActionModel");

	UBP_DeployActionModel_C_ExecuteUbergraph_BP_DeployActionModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
