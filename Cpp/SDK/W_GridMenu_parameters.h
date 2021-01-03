#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function W_GridMenu.W_GridMenu_C.OnMouseButtonDown
struct UW_GridMenu_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_GridMenu.W_GridMenu_C.Place Map Marker
struct UW_GridMenu_C_Place_Map_Marker_Params
{
	class USQMapMarkerDataAsset*                       Map_Marker_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FireTeamId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridMenu.W_GridMenu_C.Get Traced Map Location
struct UW_GridMenu_C_Get_Traced_Map_Location_Params
{
	struct FVector                                     Zero;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Local;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridMenu.W_GridMenu_C.Place Marker
struct UW_GridMenu_C_Place_Marker_Params
{
	class UClass*                                      MarkerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FireTeamId;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridMenu.W_GridMenu_C.Remove Self
struct UW_GridMenu_C_Remove_Self_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Close All Actions
struct UW_GridMenu_C_Close_All_Actions_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Close All Headers
struct UW_GridMenu_C_Close_All_Headers_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Add Self to Viewport
struct UW_GridMenu_C_Add_Self_to_Viewport_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Remove Headers
struct UW_GridMenu_C_Remove_Headers_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Add Header
struct UW_GridMenu_C_Add_Header_Params
{
	bool                                               Double_Child;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_HeaderDirection>                     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Button_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Edge_Alpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridMenu.W_GridMenu_C.Build Grid
struct UW_GridMenu_C_Build_Grid_Params
{
	struct FGeometry                                   In_Geometry;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               In_Mouse_Event;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Zero_Based_World_Location;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GridMenu.W_GridMenu_C.Destruct
struct UW_GridMenu_C_Destruct_Params
{
};

// Function W_GridMenu.W_GridMenu_C.BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UW_GridMenu_C_BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Construct
struct UW_GridMenu_C_Construct_Params
{
};

// Function W_GridMenu.W_GridMenu_C.Grid Main Action
struct UW_GridMenu_C_Grid_Main_Action_Params
{
};

// Function W_GridMenu.W_GridMenu_C.ExecuteUbergraph_W_GridMenu
struct UW_GridMenu_C_ExecuteUbergraph_W_GridMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
