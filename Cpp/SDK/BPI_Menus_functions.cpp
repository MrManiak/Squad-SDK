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

// Function BPI_Menus.BPI_Menus_C.Key Action
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Menus_C::Key_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Menus.BPI_Menus_C.Key Action");

	UBPI_Menus_C_Key_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Menus.BPI_Menus_C.Close UI Element
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Menus_C::Close_UI_Element(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Menus.BPI_Menus_C.Close UI Element");

	UBPI_Menus_C_Close_UI_Element_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_Menus.BPI_Menus_C.Open UI Element
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* Map_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Menus_C::Open_UI_Element(class USQCoreStateMapComponent* Map_Component, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Menus.BPI_Menus_C.Open UI Element");

	UBPI_Menus_C_Open_UI_Element_Params params;
	params.Map_Component = Map_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
