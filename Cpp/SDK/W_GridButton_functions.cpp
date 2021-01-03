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

// Function W_GridButton.W_GridButton_C.Get Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UW_GridButton_C::Get_Text(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Get Text");

	UW_GridButton_C_Get_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function W_GridButton.W_GridButton_C.Get Squad ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_C::Get_Squad_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Get Squad ID");

	UW_GridButton_C_Get_Squad_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_GridButton.W_GridButton_C.Get Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Icon_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_C::Get_Color(struct FLinearColor* Icon_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Get Color");

	UW_GridButton_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon_Color != nullptr)
		*Icon_Color = params.Icon_Color;

}


// Function W_GridButton.W_GridButton_C.Draw List
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_C::Draw_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Draw List");

	UW_GridButton_C_Draw_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_C::Get_Fireteam_ID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Get Fireteam ID");

	UW_GridButton_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_GridButton.W_GridButton_C.Get_Button_Main_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_GridButton_C::Get_Button_Main_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Get_Button_Main_ToolTipWidget_1");

	UW_GridButton_C_Get_Button_Main_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_GridButton.W_GridButton_C.Close Actions
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_C::Close_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Close Actions");

	UW_GridButton_C_Close_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.Show Actions
// (Public, BlueprintCallable, BlueprintEvent)
void UW_GridButton_C::Show_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Show Actions");

	UW_GridButton_C_Show_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.Update Appearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_GridButton_C::Update_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Update Appearance");

	UW_GridButton_C_Update_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GridButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.PreConstruct");

	UW_GridButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_GridButton_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UW_GridButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_GridButton_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_GridButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.Grid Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_GridButton_C::Grid_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.Grid Button Pressed");

	UW_GridButton_C_Grid_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GridButton.W_GridButton_C.ExecuteUbergraph_W_GridButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GridButton_C::ExecuteUbergraph_W_GridButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GridButton.W_GridButton_C.ExecuteUbergraph_W_GridButton");

	UW_GridButton_C_ExecuteUbergraph_W_GridButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
