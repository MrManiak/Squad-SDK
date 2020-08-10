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

// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Set Main Health
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQVehicle*              Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Limit_Reached                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Max_Health                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableItem_HelicopterRepair_C::Set_Main_Health(class ASQVehicle* Vehicle, bool* Limit_Reached, bool* Max_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Set Main Health");

	UW_InteractableItem_HelicopterRepair_C_Set_Main_Health_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Limit_Reached != nullptr)
		*Limit_Reached = params.Limit_Reached;
	if (Max_Health != nullptr)
		*Max_Health = params.Max_Health;

}


// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Get Format Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          FormatBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_HelicopterRepair_C::Get_Format_Box(class UHorizontalBox** FormatBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Get Format Box");

	UW_InteractableItem_HelicopterRepair_C_Get_Format_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormatBox != nullptr)
		*FormatBox = params.FormatBox;

}


// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Update Vehicle Health
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_HelicopterRepair_C::Update_Vehicle_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Update Vehicle Health");

	UW_InteractableItem_HelicopterRepair_C_Update_Vehicle_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Format Text
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_HelicopterRepair_C::Format_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.Format Text");

	UW_InteractableItem_HelicopterRepair_C_Format_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.ExecuteUbergraph_W_InteractableItem_HelicopterRepair
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_HelicopterRepair_C::ExecuteUbergraph_W_InteractableItem_HelicopterRepair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C.ExecuteUbergraph_W_InteractableItem_HelicopterRepair");

	UW_InteractableItem_HelicopterRepair_C_ExecuteUbergraph_W_InteractableItem_HelicopterRepair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
