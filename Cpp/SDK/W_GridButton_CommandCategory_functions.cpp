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

// Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Get Actions
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_CommandCategory_C::Get_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Get Actions");

	UW_GridButton_CommandCategory_C_Get_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GridButton_CommandCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Construct");

	UW_GridButton_CommandCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Init Actions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Category_ID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_CommandCategory_C::Init_Actions(int Category_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Init Actions");

	UW_GridButton_CommandCategory_C_Init_Actions_Params params;
	params.Category_ID = Category_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Draw List
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_CommandCategory_C::Draw_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.Draw List");

	UW_GridButton_CommandCategory_C_Draw_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.ExecuteUbergraph_W_GridButton_CommandCategory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_CommandCategory_C::ExecuteUbergraph_W_GridButton_CommandCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_CommandCategory.W_GridButton_CommandCategory_C.ExecuteUbergraph_W_GridButton_CommandCategory");

	UW_GridButton_CommandCategory_C_ExecuteUbergraph_W_GridButton_CommandCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
