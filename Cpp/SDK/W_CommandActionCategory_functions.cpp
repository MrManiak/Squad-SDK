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

// Function W_CommandActionCategory.W_CommandActionCategory_C.Check Interaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CommandActionCategory_C::Check_Interaction(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.Check Interaction");

	UW_CommandActionCategory_C_Check_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;

}


// Function W_CommandActionCategory.W_CommandActionCategory_C.Update Category
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandActionCategory_C::Update_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.Update Category");

	UW_CommandActionCategory_C_Update_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionCategory.W_CommandActionCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandActionCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.Construct");

	UW_CommandActionCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionCategory.W_CommandActionCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.Tick");

	UW_CommandActionCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionCategory.W_CommandActionCategory_C.Init
// (BlueprintCallable, BlueprintEvent)
void UW_CommandActionCategory_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.Init");

	UW_CommandActionCategory_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandActionCategory.W_CommandActionCategory_C.ExecuteUbergraph_W_CommandActionCategory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandActionCategory_C::ExecuteUbergraph_W_CommandActionCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandActionCategory.W_CommandActionCategory_C.ExecuteUbergraph_W_CommandActionCategory");

	UW_CommandActionCategory_C_ExecuteUbergraph_W_CommandActionCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
