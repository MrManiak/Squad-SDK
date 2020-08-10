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

// Function ModDetails.ModDetails_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModdingRuntimeModInfoDetails New_Info                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UModDetails_C::Refresh(const struct FModdingRuntimeModInfoDetails& New_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.Refresh");

	UModDetails_C_Refresh_Params params;
	params.New_Info = New_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.OnFail_D99CC5A5414F1A0E142CABB84BB5A40B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::OnFail_D99CC5A5414F1A0E142CABB84BB5A40B(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.OnFail_D99CC5A5414F1A0E142CABB84BB5A40B");

	UModDetails_C_OnFail_D99CC5A5414F1A0E142CABB84BB5A40B_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B");

	UModDetails_C_OnSuccess_D99CC5A5414F1A0E142CABB84BB5A40B_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UModDetails_C_BndEvt__ButtonLIKE_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	UModDetails_C_BndEvt__ButtonDISLIKE_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.Get Image
// (BlueprintCallable, BlueprintEvent)
void UModDetails_C::Get_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.Get Image");

	UModDetails_C_Get_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");

	UModDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ModDetails.ModDetails_C.ExecuteUbergraph_ModDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UModDetails_C::ExecuteUbergraph_ModDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModDetails.ModDetails_C.ExecuteUbergraph_ModDetails");

	UModDetails_C_ExecuteUbergraph_ModDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
