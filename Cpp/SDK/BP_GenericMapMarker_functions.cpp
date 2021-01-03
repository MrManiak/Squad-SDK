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

// Function BP_GenericMapMarker.BP_GenericMapMarker_C.Remove FT Markers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericMapMarker_C::Remove_FT_Markers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.Remove FT Markers");

	ABP_GenericMapMarker_C_Remove_FT_Markers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.Tint
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericMapMarker_C::Tint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.Tint");

	ABP_GenericMapMarker_C_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.MarkerIsRelevant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericMapMarker_C::MarkerIsRelevant(class AController* Controller, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.MarkerIsRelevant");

	ABP_GenericMapMarker_C_MarkerIsRelevant_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericMapMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.UserConstructionScript");

	ABP_GenericMapMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.SetTexture
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMapMarker_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.SetTexture");

	ABP_GenericMapMarker_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GenericMapMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveBeginPlay");

	ABP_GenericMapMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_GenericMapMarker_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.ReceiveDestroyed");

	ABP_GenericMapMarker_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMapMarker.BP_GenericMapMarker_C.ExecuteUbergraph_BP_GenericMapMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMapMarker_C::ExecuteUbergraph_BP_GenericMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMapMarker.BP_GenericMapMarker_C.ExecuteUbergraph_BP_GenericMapMarker");

	ABP_GenericMapMarker_C_ExecuteUbergraph_BP_GenericMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
