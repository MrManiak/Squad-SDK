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

// Function MagazineGroupWidget.MagazineGroupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMagazineGroupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineGroupWidget.MagazineGroupWidget_C.Construct");

	UMagazineGroupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagazineGroupWidget.MagazineGroupWidget_C.BPInit
// (Event, Public, BlueprintEvent)
void UMagazineGroupWidget_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineGroupWidget.MagazineGroupWidget_C.BPInit");

	UMagazineGroupWidget_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagazineGroupWidget.MagazineGroupWidget_C.ExecuteUbergraph_MagazineGroupWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMagazineGroupWidget_C::ExecuteUbergraph_MagazineGroupWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineGroupWidget.MagazineGroupWidget_C.ExecuteUbergraph_MagazineGroupWidget");

	UMagazineGroupWidget_C_ExecuteUbergraph_MagazineGroupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
