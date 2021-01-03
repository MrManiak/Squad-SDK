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

// Function W_SQMapCore.W_SQMapCore_C.Create Fireteam Actions Menu
struct UW_SQMapCore_C_Create_Fireteam_Actions_Menu_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Can Place Map Menu
struct UW_SQMapCore_C_Can_Place_Map_Menu_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQMapCore.W_SQMapCore_C.FindZoomLocation
struct UW_SQMapCore_C_FindZoomLocation_Params
{
	struct FVector2D                                   OutScreenLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.SetMapTexture
struct UW_SQMapCore_C_SetMapTexture_Params
{
	class UTexture*                                    Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.InitializeZoomLevels
struct UW_SQMapCore_C_InitializeZoomLevels_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.AdjustVerticalBarPadding
struct UW_SQMapCore_C_AdjustVerticalBarPadding_Params
{
	float                                              TargetZoom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.AdjustHorizontalBarPadding
struct UW_SQMapCore_C_AdjustHorizontalBarPadding_Params
{
	float                                              TargetZoom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Remove Mouse Pos
struct UW_SQMapCore_C_Remove_Mouse_Pos_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseWheel
struct UW_SQMapCore_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseWheelZoom
struct UW_SQMapCore_C_OnMouseWheelZoom_Params
{
	float                                              MouseAxis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.UpdatePlayerCoordinates
struct UW_SQMapCore_C_UpdatePlayerCoordinates_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.UpdateCursorGridLocationString
struct UW_SQMapCore_C_UpdateCursorGridLocationString_Params
{
	struct FPointerEvent                               MouseInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_SQMapCore.W_SQMapCore_C.ScreenLocationToMapLocation
struct UW_SQMapCore_C_ScreenLocationToMapLocation_Params
{
	struct FVector2D                                   ScreenLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MapLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Setup
struct UW_SQMapCore_C_Setup_Params
{
	class USQCoreStateMapComponent*                    MapComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.PerformFollow
struct UW_SQMapCore_C_PerformFollow_Params
{
	class UPanelWidget*                                PanLayer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FocusPosition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RelativePosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CacheScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 RootLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.PerformPan
struct UW_SQMapCore_C_PerformPan_Params
{
	struct FVector2D                                   Vector;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScreenDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CacheScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 RootLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                PanLayer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.PerformZoom
struct UW_SQMapCore_C_PerformZoom_Params
{
	float                                              TargetZoom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ZoomPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 RootLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                ZoomLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                PanLayer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ZoomWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ZoomHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQMapCore.W_SQMapCore_C.GetElementRoot
struct UW_SQMapCore_C_GetElementRoot_Params
{
	class UPanelWidget*                                Out_Root;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Clear Selections
struct UW_SQMapCore_C_Clear_Selections_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.UpdateFollow
struct UW_SQMapCore_C_UpdateFollow_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.UpdateZoom
struct UW_SQMapCore_C_UpdateZoom_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Unfollow
struct UW_SQMapCore_C_Unfollow_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.ScreenToPanPosition
struct UW_SQMapCore_C_ScreenToPanPosition_Params
{
	struct FVector2D                                   ScreenPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   PanPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Follow
struct UW_SQMapCore_C_Follow_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   FocusPosition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RelativePosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClampCacheScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.ClampPanPosition
struct UW_SQMapCore_C_ClampPanPosition_Params
{
	struct FVector2D                                   Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CacheScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 RootLayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                PanLayer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.ScreenToPanVector
struct UW_SQMapCore_C_ScreenToPanVector_Params
{
	struct FVector2D                                   ScreenVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                PanLayer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   PanVector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.MovePan
struct UW_SQMapCore_C_MovePan_Params
{
	struct FVector2D                                   Delta;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScreenDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClampCacheScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseMove
struct UW_SQMapCore_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonUp
struct UW_SQMapCore_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SQMapCore.W_SQMapCore_C.EndPan
struct UW_SQMapCore_C_EndPan_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.StartPan
struct UW_SQMapCore_C_StartPan_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Remove Floating Widgets
struct UW_SQMapCore_C_Remove_Floating_Widgets_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Create Actions Menu
struct UW_SQMapCore_C_Create_Actions_Menu_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Hide SL Menu
struct UW_SQMapCore_C_Hide_SL_Menu_Params
{
	bool                                               New_Visible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                                   Visible_Geometry;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseButtonDown
struct UW_SQMapCore_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_SQMapCore.W_SQMapCore_C.InitialiseMapTexture
struct UW_SQMapCore_C_InitialiseMapTexture_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Zoom
struct UW_SQMapCore_C_Zoom_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SQMapCore.W_SQMapCore_C.Construct
struct UW_SQMapCore_C_Construct_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.OnMouseLeave
struct UW_SQMapCore_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_SQMapCore.W_SQMapCore_C.Tick
struct UW_SQMapCore_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.Allow Ping
struct UW_SQMapCore_C_Allow_Ping_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.ExecuteUbergraph_W_SQMapCore
struct UW_SQMapCore_C_ExecuteUbergraph_W_SQMapCore_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SQMapCore.W_SQMapCore_C.OnUpdateZoom__DelegateSignature
struct UW_SQMapCore_C_OnUpdateZoom__DelegateSignature_Params
{
};

// Function W_SQMapCore.W_SQMapCore_C.Mouse Down__DelegateSignature
struct UW_SQMapCore_C_Mouse_Down__DelegateSignature_Params
{
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     World_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
