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

// Function SteamInventorySettings.SteamInventorySettings_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQWeaponSkinData*       InSkinData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Mesh1P                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::GetMesh(class USQWeaponSkinData* InSkinData, class USkeletalMeshComponent** Mesh1P)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.GetMesh");

	USteamInventorySettings_C_GetMesh_Params params;
	params.InSkinData = InSkinData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh1P != nullptr)
		*Mesh1P = params.Mesh1P;

}


// Function SteamInventorySettings.SteamInventorySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USteamInventorySettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.Construct");

	USteamInventorySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory
// (BlueprintCallable, BlueprintEvent)
void USteamInventorySettings_C::RefreshInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory");

	USteamInventorySettings_C_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.UpdateItems
// (BlueprintCallable, BlueprintEvent)
void USteamInventorySettings_C::UpdateItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.UpdateItems");

	USteamInventorySettings_C_UpdateItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USteamInventorySettings_C::OnItemHovered(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.OnItemHovered");

	USteamInventorySettings_C_OnItemHovered_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	USteamInventorySettings_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	USteamInventorySettings_C_BndEvt__MainMenu_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	USteamInventorySettings_C_BndEvt__MainPatchesTab_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.ExecuteUbergraph_SteamInventorySettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::ExecuteUbergraph_SteamInventorySettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.ExecuteUbergraph_SteamInventorySettings");

	USteamInventorySettings_C_ExecuteUbergraph_SteamInventorySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
