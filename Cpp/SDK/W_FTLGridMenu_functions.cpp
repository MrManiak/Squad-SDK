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

// Function W_FTLGridMenu.W_FTLGridMenu_C.Build Grid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               In_Geometry                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           In_Mouse_Event                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Zero_Based_World_Location      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FTLGridMenu_C::Build_Grid(const struct FGeometry& In_Geometry, const struct FPointerEvent& In_Mouse_Event, const struct FVector& Zero_Based_World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FTLGridMenu.W_FTLGridMenu_C.Build Grid");

	UW_FTLGridMenu_C_Build_Grid_Params params;
	params.In_Geometry = In_Geometry;
	params.In_Mouse_Event = In_Mouse_Event;
	params.Zero_Based_World_Location = Zero_Based_World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FTLGridMenu.W_FTLGridMenu_C.Grid Main Action
// (BlueprintCallable, BlueprintEvent)
void UW_FTLGridMenu_C::Grid_Main_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FTLGridMenu.W_FTLGridMenu_C.Grid Main Action");

	UW_FTLGridMenu_C_Grid_Main_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_FTLGridMenu.W_FTLGridMenu_C.ExecuteUbergraph_W_FTLGridMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_FTLGridMenu_C::ExecuteUbergraph_W_FTLGridMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FTLGridMenu.W_FTLGridMenu_C.ExecuteUbergraph_W_FTLGridMenu");

	UW_FTLGridMenu_C_ExecuteUbergraph_W_FTLGridMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
