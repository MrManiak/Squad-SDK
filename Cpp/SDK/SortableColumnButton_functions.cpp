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

// Function SortableColumnButton.SortableColumnButton_C.Set Sort State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQSortStates                  SortState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USortableColumnButton_C::Set_Sort_State(ESQSortStates SortState, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Set Sort State");

	USortableColumnButton_C_Set_Sort_State_Params params;
	params.SortState = SortState;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.Set Arrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility USortableColumnButton_C::Set_Arrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Set Arrow");

	USortableColumnButton_C_Set_Arrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SortableColumnButton.SortableColumnButton_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USortableColumnButton_C::Set_Text(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Set Text");

	USortableColumnButton_C_Set_Text_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.Update Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USortableColumnButton_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Update Widget");

	USortableColumnButton_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USortableColumnButton_C::Set_Selected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Set Selected");

	USortableColumnButton_C_Set_Selected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USortableColumnButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	USortableColumnButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USortableColumnButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.PreConstruct");

	USortableColumnButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USortableColumnButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Tick");

	USortableColumnButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USortableColumnButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.Construct");

	USortableColumnButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.ExecuteUbergraph_SortableColumnButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USortableColumnButton_C::ExecuteUbergraph_SortableColumnButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.ExecuteUbergraph_SortableColumnButton");

	USortableColumnButton_C_ExecuteUbergraph_SortableColumnButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USortableColumnButton_C::OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.OnHover__DelegateSignature");

	USortableColumnButton_C_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SortableColumnButton.SortableColumnButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAscending                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SortType>        Sort_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USortableColumnButton_C::OnClicked__DelegateSignature(bool bIsAscending, TEnumAsByte<E_SortType> Sort_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortableColumnButton.SortableColumnButton_C.OnClicked__DelegateSignature");

	USortableColumnButton_C_OnClicked__DelegateSignature_Params params;
	params.bIsAscending = bIsAscending;
	params.Sort_Type = Sort_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
