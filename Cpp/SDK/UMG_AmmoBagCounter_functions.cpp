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

// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.Hide Widget
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_AmmoBagCounter_C::Hide_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.Hide Widget");

	UUMG_AmmoBagCounter_C_Hide_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.ShowAmmoBag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableAmmoBag*    ammobag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_AmmoBagCounter_C::ShowAmmoBag(class ASQDeployableAmmoBag* ammobag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.ShowAmmoBag");

	UUMG_AmmoBagCounter_C_ShowAmmoBag_Params params;
	params.ammobag = ammobag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.HideAmmoBag
// (BlueprintCallable, BlueprintEvent)
void UUMG_AmmoBagCounter_C::HideAmmoBag()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.HideAmmoBag");

	UUMG_AmmoBagCounter_C_HideAmmoBag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.UpdateAmmoBag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableAmmoBag*    ammobag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_AmmoBagCounter_C::UpdateAmmoBag(class ASQDeployableAmmoBag* ammobag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.UpdateAmmoBag");

	UUMG_AmmoBagCounter_C_UpdateAmmoBag_Params params;
	params.ammobag = ammobag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.BindToRadialMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       BaseRadial                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_AmmoBagCounter_C::BindToRadialMenu(class UBaseRadialMenu_C* BaseRadial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.BindToRadialMenu");

	UUMG_AmmoBagCounter_C_BindToRadialMenu_Params params;
	params.BaseRadial = BaseRadial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.ExecuteUbergraph_UMG_AmmoBagCounter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_AmmoBagCounter_C::ExecuteUbergraph_UMG_AmmoBagCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AmmoBagCounter.UMG_AmmoBagCounter_C.ExecuteUbergraph_UMG_AmmoBagCounter");

	UUMG_AmmoBagCounter_C_ExecuteUbergraph_UMG_AmmoBagCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
