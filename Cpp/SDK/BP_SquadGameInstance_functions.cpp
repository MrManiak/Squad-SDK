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

// Function BP_SquadGameInstance.BP_SquadGameInstance_C.Get UI Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          AsSave_Data_UI                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SquadGameInstance_C::Get_UI_Data(class USaveData_UI_C** AsSave_Data_UI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadGameInstance.BP_SquadGameInstance_C.Get UI Data");

	UBP_SquadGameInstance_C_Get_UI_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSave_Data_UI != nullptr)
		*AsSave_Data_UI = params.AsSave_Data_UI;

}


// Function BP_SquadGameInstance.BP_SquadGameInstance_C.Set UI Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          UISaveData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SquadGameInstance_C::Set_UI_Data(class USaveData_UI_C* UISaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadGameInstance.BP_SquadGameInstance_C.Set UI Data");

	UBP_SquadGameInstance_C_Set_UI_Data_Params params;
	params.UISaveData = UISaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadGameInstance.BP_SquadGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UBP_SquadGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadGameInstance.BP_SquadGameInstance_C.ReceiveInit");

	UBP_SquadGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadGameInstance.BP_SquadGameInstance_C.ExecuteUbergraph_BP_SquadGameInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SquadGameInstance_C::ExecuteUbergraph_BP_SquadGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadGameInstance.BP_SquadGameInstance_C.ExecuteUbergraph_BP_SquadGameInstance");

	UBP_SquadGameInstance_C_ExecuteUbergraph_BP_SquadGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadGameInstance.BP_SquadGameInstance_C.UI Data Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SquadGameInstance_C::UI_Data_Changed__DelegateSignature(class USaveData_UI_C* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadGameInstance.BP_SquadGameInstance_C.UI Data Changed__DelegateSignature");

	UBP_SquadGameInstance_C_UI_Data_Changed__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
