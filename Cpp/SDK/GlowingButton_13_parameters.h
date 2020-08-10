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

// Function GlowingButton_13.GlowingButton_12_C.SetText
struct UGlowingButton_12_C_SetText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GlowingButton_13.GlowingButton_12_C.UpdateButtonColor
struct UGlowingButton_12_C_UpdateButtonColor_Params
{
};

// Function GlowingButton_13.GlowingButton_12_C.SetSelected
struct UGlowingButton_12_C_SetSelected_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingButton_13.GlowingButton_12_C.Construct
struct UGlowingButton_12_C_Construct_Params
{
};

// Function GlowingButton_13.GlowingButton_12_C.Tick
struct UGlowingButton_12_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlowingButton_13.GlowingButton_12_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UGlowingButton_12_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GlowingButton_13.GlowingButton_12_C.PreConstruct
struct UGlowingButton_12_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingButton_13.GlowingButton_12_C.ExecuteUbergraph_GlowingButton_13
struct UGlowingButton_12_C_ExecuteUbergraph_GlowingButton_13_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlowingButton_13.GlowingButton_12_C.OnHover__DelegateSignature
struct UGlowingButton_12_C_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GlowingButton_13.GlowingButton_12_C.OnClicked__DelegateSignature
struct UGlowingButton_12_C_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGlowingButton_12_C*                         Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
