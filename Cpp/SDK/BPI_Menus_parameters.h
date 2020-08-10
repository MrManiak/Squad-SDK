#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BPI_Menus.BPI_Menus_C.Key Action
struct UBPI_Menus_C_Key_Action_Params
{
};

// Function BPI_Menus.BPI_Menus_C.Close UI Element
struct UBPI_Menus_C_Close_UI_Element_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Menus.BPI_Menus_C.Open UI Element
struct UBPI_Menus_C_Open_UI_Element_Params
{
	class USQCoreStateMapComponent*                    Map_Component;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
