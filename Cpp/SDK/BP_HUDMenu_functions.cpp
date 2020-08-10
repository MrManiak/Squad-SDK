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

// Function BP_HUDMenu.BP_HUDMenu_C.CreateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUDMenu_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDMenu.BP_HUDMenu_C.CreateMainMenu");

	ABP_HUDMenu_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUDMenu.BP_HUDMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HUDMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDMenu.BP_HUDMenu_C.ReceiveBeginPlay");

	ABP_HUDMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUDMenu.BP_HUDMenu_C.Check Cursor
// (BlueprintCallable, BlueprintEvent)
void ABP_HUDMenu_C::Check_Cursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDMenu.BP_HUDMenu_C.Check Cursor");

	ABP_HUDMenu_C_Check_Cursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUDMenu.BP_HUDMenu_C.ExecuteUbergraph_BP_HUDMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUDMenu_C::ExecuteUbergraph_BP_HUDMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDMenu.BP_HUDMenu_C.ExecuteUbergraph_BP_HUDMenu");

	ABP_HUDMenu_C_ExecuteUbergraph_BP_HUDMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
