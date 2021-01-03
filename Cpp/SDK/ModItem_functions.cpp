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

// Function ModItem.ModItem_C.Refresh Mod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UModItem_C::Refresh_Mod()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.Refresh Mod");

	UModItem_C_Refresh_Mod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.OnFail_8A86417A45928AEC81E697912B573E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModItem_C::OnFail_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.OnFail_8A86417A45928AEC81E697912B573E34");

	UModItem_C_OnFail_8A86417A45928AEC81E697912B573E34_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.OnSuccess_8A86417A45928AEC81E697912B573E34
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModItem_C::OnSuccess_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.OnSuccess_8A86417A45928AEC81E697912B573E34");

	UModItem_C_OnSuccess_8A86417A45928AEC81E697912B573E34_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UModItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.PreConstruct");

	UModItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UModItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.Construct");

	UModItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UModItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UModItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModItem_C::BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature");

	UModItem_C_BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UModItem_C::BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature");

	UModItem_C_BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UModItem_C::BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature");

	UModItem_C_BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.ExecuteUbergraph_ModItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModItem_C::ExecuteUbergraph_ModItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.ExecuteUbergraph_ModItem");

	UModItem_C_ExecuteUbergraph_ModItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModItem.ModItem_C.Mod Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModdingRuntimeModInfoDetails ModInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UModItem_C::Mod_Selected__DelegateSignature(const struct FModdingRuntimeModInfoDetails& ModInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModItem.ModItem_C.Mod Selected__DelegateSignature");

	UModItem_C_Mod_Selected__DelegateSignature_Params params;
	params.ModInfo = ModInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
