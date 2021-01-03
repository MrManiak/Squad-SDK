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

// Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess A Menu Cam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MainMenu_PC_C::Possess_A_Menu_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess A Menu Cam");

	ABP_MainMenu_PC_C_Possess_A_Menu_Cam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_PC.BP_MainMenu_PC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MainMenu_PC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PC.BP_MainMenu_PC_C.ReceiveBeginPlay");

	ABP_MainMenu_PC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess Menu Cam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuCamPawn_C*          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MainMenu_PC_C::Possess_Menu_Cam(class AMenuCamPawn_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PC.BP_MainMenu_PC_C.Possess Menu Cam");

	ABP_MainMenu_PC_C_Possess_Menu_Cam_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_PC.BP_MainMenu_PC_C.ExecuteUbergraph_BP_MainMenu_PC
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MainMenu_PC_C::ExecuteUbergraph_BP_MainMenu_PC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PC.BP_MainMenu_PC_C.ExecuteUbergraph_BP_MainMenu_PC");

	ABP_MainMenu_PC_C_ExecuteUbergraph_BP_MainMenu_PC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_PC.BP_MainMenu_PC_C.PossessedMenuCam__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuCamPawn_C*          NewMenuCam                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MainMenu_PC_C::PossessedMenuCam__DelegateSignature(class AMenuCamPawn_C* NewMenuCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PC.BP_MainMenu_PC_C.PossessedMenuCam__DelegateSignature");

	ABP_MainMenu_PC_C_PossessedMenuCam__DelegateSignature_Params params;
	params.NewMenuCam = NewMenuCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
