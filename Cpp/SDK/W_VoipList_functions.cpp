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

// Function W_VoipList.W_VoipList_C.Refresh Speaker Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void UW_VoipList_C::Refresh_Speaker_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipList.W_VoipList_C.Refresh Speaker Widgets");

	UW_VoipList_C_Refresh_Speaker_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipList.W_VoipList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VoipList_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipList.W_VoipList_C.PreConstruct");

	UW_VoipList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipList.W_VoipList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VoipList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipList.W_VoipList_C.Construct");

	UW_VoipList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipList.W_VoipList_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_VoipList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipList.W_VoipList_C.Refresh");

	UW_VoipList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipList.W_VoipList_C.ExecuteUbergraph_W_VoipList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VoipList_C::ExecuteUbergraph_W_VoipList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipList.W_VoipList_C.ExecuteUbergraph_W_VoipList");

	UW_VoipList_C_ExecuteUbergraph_W_VoipList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
