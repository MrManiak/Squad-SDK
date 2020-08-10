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

// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQMapMarkerDataAsset*   MapMarkerData                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       RadialMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  MapMarkerClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlaceMarkerAction_C::DoAction_Event(class USQMapMarkerDataAsset* MapMarkerData, class UBaseRadialMenu_C* RadialMenu, class UClass* MapMarkerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction_Event");

	UBP_PlaceMarkerAction_C_DoAction_Event_Params params;
	params.MapMarkerData = MapMarkerData;
	params.RadialMenu = RadialMenu;
	params.MapMarkerClass = MapMarkerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.ExecuteUbergraph_BP_PlaceMarkerAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlaceMarkerAction_C::ExecuteUbergraph_BP_PlaceMarkerAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.ExecuteUbergraph_BP_PlaceMarkerAction");

	UBP_PlaceMarkerAction_C_ExecuteUbergraph_BP_PlaceMarkerAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlaceMarkerAction_C::DoAction__DelegateSignature(class UClass* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceMarkerAction.BP_PlaceMarkerAction_C.DoAction__DelegateSignature");

	UBP_PlaceMarkerAction_C_DoAction__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
