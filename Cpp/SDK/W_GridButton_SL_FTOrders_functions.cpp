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

// Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Get Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UW_GridButton_SL_FTOrders_C::Get_Text(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Get Text");

	UW_GridButton_SL_FTOrders_C_Get_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Get Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Icon_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_SL_FTOrders_C::Get_Color(struct FLinearColor* Icon_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Get Color");

	UW_GridButton_SL_FTOrders_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon_Color != nullptr)
		*Icon_Color = params.Icon_Color;

}


// Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Update Appearance
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_SL_FTOrders_C::Update_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.Update Appearance");

	UW_GridButton_SL_FTOrders_C_Update_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.ExecuteUbergraph_W_GridButton_SL_FTOrders
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_SL_FTOrders_C::ExecuteUbergraph_W_GridButton_SL_FTOrders(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C.ExecuteUbergraph_W_GridButton_SL_FTOrders");

	UW_GridButton_SL_FTOrders_C_ExecuteUbergraph_W_GridButton_SL_FTOrders_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
