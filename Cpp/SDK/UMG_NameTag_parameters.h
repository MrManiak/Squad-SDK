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

// Function UMG_NameTag.UMG_NameTag_C.Update FT Save Data
struct UUMG_NameTag_C_Update_FT_Save_Data_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Update SL Save Data
struct UUMG_NameTag_C_Update_SL_Save_Data_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Cache Data
struct UUMG_NameTag_C_Cache_Data_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Refresh Tag
struct UUMG_NameTag_C_Refresh_Tag_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Get SL In Vehicle
struct UUMG_NameTag_C_Get_SL_In_Vehicle_Params
{
	class ASQVehicle*                                  V;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              SL;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.GetContentColor_BOTTOM
struct UUMG_NameTag_C_GetContentColor_BOTTOM_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.GetContentColor_TOP
struct UUMG_NameTag_C_GetContentColor_TOP_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Calc Target Info
struct UUMG_NameTag_C_Calc_Target_Info_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASQSquadState*                               SquadState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              SQ_Player_State;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       PlayerName;                                                // (Parm, OutParm)
	bool                                               SL;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Same_Squad;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Vehicle_Occupants;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Get Tag Test Location
struct UUMG_NameTag_C_Get_Tag_Test_Location_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Get_Kit_Image
struct UUMG_NameTag_C_Get_Kit_Image_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UMG_NameTag.UMG_NameTag_C.Get ADS
struct UUMG_NameTag_C_Get_ADS_Params
{
	bool                                               In_ADS;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UMG_NameTag.UMG_NameTag_C.Find Target
struct UUMG_NameTag_C_Find_Target_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Update Opacity
struct UUMG_NameTag_C_Update_Opacity_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Get_Color
struct UUMG_NameTag_C_Get_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Load Saved Settings
struct UUMG_NameTag_C_Load_Saved_Settings_Params
{
	class USQGameUserSettings*                         UserSettings;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Get Local State
struct UUMG_NameTag_C_Get_Local_State_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Tick
struct UUMG_NameTag_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_NameTag.UMG_NameTag_C.Timer Check Threshold
struct UUMG_NameTag_C_Timer_Check_Threshold_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Construct
struct UUMG_NameTag_C_Construct_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.Looping Refresh
struct UUMG_NameTag_C_Looping_Refresh_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.FindTargetEvent
struct UUMG_NameTag_C_FindTargetEvent_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.RefreshTagEvent
struct UUMG_NameTag_C_RefreshTagEvent_Params
{
};

// Function UMG_NameTag.UMG_NameTag_C.ExecuteUbergraph_UMG_NameTag
struct UUMG_NameTag_C_ExecuteUbergraph_UMG_NameTag_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
