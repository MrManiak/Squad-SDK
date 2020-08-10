#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function SortableColumnButton.SortableColumnButton_C.Set Sort State
struct USortableColumnButton_C_Set_Sort_State_Params
{
	ESQSortStates                                      SortState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SortableColumnButton.SortableColumnButton_C.Set Arrow
struct USortableColumnButton_C_Set_Arrow_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SortableColumnButton.SortableColumnButton_C.Set Text
struct USortableColumnButton_C_Set_Text_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SortableColumnButton.SortableColumnButton_C.Update Widget
struct USortableColumnButton_C_Update_Widget_Params
{
};

// Function SortableColumnButton.SortableColumnButton_C.Set Selected
struct USortableColumnButton_C_Set_Selected_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SortableColumnButton.SortableColumnButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct USortableColumnButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SortableColumnButton.SortableColumnButton_C.PreConstruct
struct USortableColumnButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SortableColumnButton.SortableColumnButton_C.Tick
struct USortableColumnButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SortableColumnButton.SortableColumnButton_C.Construct
struct USortableColumnButton_C_Construct_Params
{
};

// Function SortableColumnButton.SortableColumnButton_C.ExecuteUbergraph_SortableColumnButton
struct USortableColumnButton_C_ExecuteUbergraph_SortableColumnButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SortableColumnButton.SortableColumnButton_C.OnHover__DelegateSignature
struct USortableColumnButton_C_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SortableColumnButton.SortableColumnButton_C.OnClicked__DelegateSignature
struct USortableColumnButton_C_OnClicked__DelegateSignature_Params
{
	bool                                               bIsAscending;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SortType>                            Sort_Type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
