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

// Function W_PopupOptionBox.W_PopupOptionBox_C.PreConstruct
struct UW_PopupOptionBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Construct
struct UW_PopupOptionBox_C_Construct_Params
{
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Tick
struct UW_PopupOptionBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Selector Event
struct UW_PopupOptionBox_C_Selector_Event_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Refresh Position
struct UW_PopupOptionBox_C_Refresh_Position_Params
{
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Clear
struct UW_PopupOptionBox_C_Clear_Params
{
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.ExecuteUbergraph_W_PopupOptionBox
struct UW_PopupOptionBox_C_ExecuteUbergraph_W_PopupOptionBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PopupOptionBox.W_PopupOptionBox_C.Option Clicked__DelegateSignature
struct UW_PopupOptionBox_C_Option_Clicked__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
