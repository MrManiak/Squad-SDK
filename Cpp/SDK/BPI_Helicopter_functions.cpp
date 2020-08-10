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

// Function BPI_Helicopter.BPI_Helicopter_C.Set Landing Camera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Helicopter_C::Set_Landing_Camera(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Helicopter.BPI_Helicopter_C.Set Landing Camera");

	UBPI_Helicopter_C_Set_Landing_Camera_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Helicopter.BPI_Helicopter_C.Get UI Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Helicopter_C::Get_UI_Tint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Helicopter.BPI_Helicopter_C.Get UI Tint");

	UBPI_Helicopter_C_Get_UI_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPI_Helicopter.BPI_Helicopter_C.Is Using Landing Camera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Landing_Camera           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Helicopter_C::Is_Using_Landing_Camera(bool* Using_Landing_Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Helicopter.BPI_Helicopter_C.Is Using Landing Camera");

	UBPI_Helicopter_C_Is_Using_Landing_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Using_Landing_Camera != nullptr)
		*Using_Landing_Camera = params.Using_Landing_Camera;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
