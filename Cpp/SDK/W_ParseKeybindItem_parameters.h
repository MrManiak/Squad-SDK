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

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Get Short Name
struct UW_ParseKeybindItem_C_Get_Short_Name_Params
{
	struct FName                                       Action_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Short_Name;                                                // (Parm, OutParm)
};

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Parse Keybind
struct UW_ParseKeybindItem_C_Parse_Keybind_Params
{
	struct FString                                     inString;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Short_Name;                                                // (Parm, OutParm)
};

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Tick
struct UW_ParseKeybindItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.PreConstruct
struct UW_ParseKeybindItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.ExecuteUbergraph_W_ParseKeybindItem
struct UW_ParseKeybindItem_C_ExecuteUbergraph_W_ParseKeybindItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
