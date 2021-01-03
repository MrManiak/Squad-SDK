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

// Function BP_RadialMenuModel.BP_RadialMenuModel_C.GetModelReferencesFromClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ModelClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   AsBP_Radial_Item_Model         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPRadialPopulatorIcon_C* AsBPRadial_Populator_Icon      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialMenuModel_C::GetModelReferencesFromClass(class UClass* ModelClass, class UBP_RadialItemModel_C** AsBP_Radial_Item_Model, class UBPRadialPopulatorIcon_C** AsBPRadial_Populator_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuModel.BP_RadialMenuModel_C.GetModelReferencesFromClass");

	UBP_RadialMenuModel_C_GetModelReferencesFromClass_Params params;
	params.ModelClass = ModelClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBP_Radial_Item_Model != nullptr)
		*AsBP_Radial_Item_Model = params.AsBP_Radial_Item_Model;
	if (AsBPRadial_Populator_Icon != nullptr)
		*AsBPRadial_Populator_Icon = params.AsBPRadial_Populator_Icon;

}


// Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateRadialChildWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadialMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   WidgetModel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPRadialPopulatorIcon_C* Populator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQUserWidget*           CreatedWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialMenuModel_C::CreateRadialChildWidget(class UBaseRadialMenu_C* BaseRadialMenu, class UBP_RadialItemModel_C* WidgetModel, class UBPRadialPopulatorIcon_C* Populator, class USQUserWidget** CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateRadialChildWidget");

	UBP_RadialMenuModel_C_CreateRadialChildWidget_Params params;
	params.BaseRadialMenu = BaseRadialMenu;
	params.WidgetModel = WidgetModel;
	params.Populator = Populator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;

}


// Function BP_RadialMenuModel.BP_RadialMenuModel_C.Center Button Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialMenuModel_C::Center_Button_Hit(class UBaseRadialMenu_C* Radial_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuModel.BP_RadialMenuModel_C.Center Button Hit");

	UBP_RadialMenuModel_C_Center_Button_Hit_Params params;
	params.Radial_Menu = Radial_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateChildWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadialMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialMenuModel_C::CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuModel.BP_RadialMenuModel_C.CreateChildWidgets");

	UBP_RadialMenuModel_C_CreateChildWidgets_Params params;
	params.BaseRadialMenu = BaseRadialMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialMenuModel.BP_RadialMenuModel_C.ExecuteUbergraph_BP_RadialMenuModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialMenuModel_C::ExecuteUbergraph_BP_RadialMenuModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialMenuModel.BP_RadialMenuModel_C.ExecuteUbergraph_BP_RadialMenuModel");

	UBP_RadialMenuModel_C_ExecuteUbergraph_BP_RadialMenuModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
