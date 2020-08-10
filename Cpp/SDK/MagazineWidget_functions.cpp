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

// Function MagazineWidget.MagazineWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMagazineWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineWidget.MagazineWidget_C.Construct");

	UMagazineWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagazineWidget.MagazineWidget_C.BPInit
// (Event, Public, BlueprintEvent)
void UMagazineWidget_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineWidget.MagazineWidget_C.BPInit");

	UMagazineWidget_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagazineWidget.MagazineWidget_C.ExecuteUbergraph_MagazineWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMagazineWidget_C::ExecuteUbergraph_MagazineWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineWidget.MagazineWidget_C.ExecuteUbergraph_MagazineWidget");

	UMagazineWidget_C_ExecuteUbergraph_MagazineWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
