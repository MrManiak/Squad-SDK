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

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.GetModelReferencesFromClass
struct UBP_RadialMenuModel_C_GetModelReferencesFromClass_Params
{
	class UClass*                                      ModelClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                       AsBP_Radial_Item_Model;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorIcon_C*                    AsBPRadial_Populator_Icon;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateRadialChildWidget
struct UBP_RadialMenuModel_C_CreateRadialChildWidget_Params
{
	class UBaseRadialMenu_C*                           BaseRadialMenu;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                       WidgetModel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPRadialPopulatorIcon_C*                    Populator;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQUserWidget*                               CreatedWidget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.Center Button Hit
struct UBP_RadialMenuModel_C_Center_Button_Hit_Params
{
	class UBaseRadialMenu_C*                           Radial_Menu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateChildWidgets
struct UBP_RadialMenuModel_C_CreateChildWidgets_Params
{
	class UBaseRadialMenu_C*                           BaseRadialMenu;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.ExecuteUbergraph_BP_RadialMenuModel
struct UBP_RadialMenuModel_C_ExecuteUbergraph_BP_RadialMenuModel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
