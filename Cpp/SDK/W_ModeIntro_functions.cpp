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

// Function W_ModeIntro.W_ModeIntro_C.Get Mode Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModeIntro_C::Get_Mode_Info(int Team_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModeIntro.W_ModeIntro_C.Get Mode Info");

	UW_ModeIntro_C_Get_Mode_Info_Params params;
	params.Team_ID = Team_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModeIntro.W_ModeIntro_C.OnLoaded_E3FFE2DA447448FE9067F19C6677E6FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModeIntro_C::OnLoaded_E3FFE2DA447448FE9067F19C6677E6FF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModeIntro.W_ModeIntro_C.OnLoaded_E3FFE2DA447448FE9067F19C6677E6FF");

	UW_ModeIntro_C_OnLoaded_E3FFE2DA447448FE9067F19C6677E6FF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModeIntro.W_ModeIntro_C.Team Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModeIntro_C::Team_Selected(int Team_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModeIntro.W_ModeIntro_C.Team Selected");

	UW_ModeIntro_C_Team_Selected_Params params;
	params.Team_ID = Team_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ModeIntro.W_ModeIntro_C.ExecuteUbergraph_W_ModeIntro
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ModeIntro_C::ExecuteUbergraph_W_ModeIntro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ModeIntro.W_ModeIntro_C.ExecuteUbergraph_W_ModeIntro");

	UW_ModeIntro_C_ExecuteUbergraph_W_ModeIntro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
