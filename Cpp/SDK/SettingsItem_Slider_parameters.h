#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function SettingsItem_Slider.SettingsItem_Slider_C.RemovePercentage
struct USettingsItem_Slider_C_RemovePercentage_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       OutText;                                                   // (Parm, OutParm)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.Get_SpacerImg_Brush_1
struct USettingsItem_Slider_C_Get_SpacerImg_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderValue
struct USettingsItem_Slider_C_UpdateSliderValue_Params
{
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.UpdateSliderTextValue
struct USettingsItem_Slider_C_UpdateSliderTextValue_Params
{
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.SetValue
struct USettingsItem_Slider_C_SetValue_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature
struct USettingsItem_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_361_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature
struct USettingsItem_Slider_C_BndEvt__SliderText_K2Node_ComponentBoundEvent_191_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature
struct USettingsItem_Slider_C_BndEvt__SliderText_K2Node_ComponentBoundEvent_275_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.Construct
struct USettingsItem_Slider_C_Construct_Params
{
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.PreConstruct
struct USettingsItem_Slider_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature
struct USettingsItem_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_15_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.ExecuteUbergraph_SettingsItem_Slider
struct USettingsItem_Slider_C_ExecuteUbergraph_SettingsItem_Slider_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.OnCaptureEnd__DelegateSignature
struct USettingsItem_Slider_C_OnCaptureEnd__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_Slider.SettingsItem_Slider_C.OnValueChanged__DelegateSignature
struct USettingsItem_Slider_C_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
