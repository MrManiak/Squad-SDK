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

// Function UMG_NameTag.UMG_NameTag_C.Update FT Save Data
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Update_FT_Save_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Update FT Save Data");

	UUMG_NameTag_C_Update_FT_Save_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Update SL Save Data
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Update_SL_Save_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Update SL Save Data");

	UUMG_NameTag_C_Update_SL_Save_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Cache Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Cache_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Cache Data");

	UUMG_NameTag_C_Cache_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Refresh Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Refresh_Tag()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Refresh Tag");

	UUMG_NameTag_C_Refresh_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Get SL In Vehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQVehicle*              V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          SL                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::Get_SL_In_Vehicle(class ASQVehicle* V, class ASQPlayerState** SL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get SL In Vehicle");

	UUMG_NameTag_C_Get_SL_In_Vehicle_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SL != nullptr)
		*SL = params.SL;

}


// Function UMG_NameTag.UMG_NameTag_C.GetContentColor_BOTTOM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUMG_NameTag_C::GetContentColor_BOTTOM()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.GetContentColor_BOTTOM");

	UUMG_NameTag_C_GetContentColor_BOTTOM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_NameTag.UMG_NameTag_C.GetContentColor_TOP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUMG_NameTag_C::GetContentColor_TOP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.GetContentColor_TOP");

	UUMG_NameTag_C_GetContentColor_TOP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_NameTag.UMG_NameTag_C.Calc Target Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASQSquadState*           SquadState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          SQ_Player_State                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   PlayerName                     (Parm, OutParm)
// bool                           SL                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Same_Squad                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Vehicle_Occupants              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::Calc_Target_Info(bool* Success, class ASQSquadState** SquadState, class ASQPlayerState** SQ_Player_State, struct FText* PlayerName, bool* SL, bool* Same_Squad, int* Vehicle_Occupants)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Calc Target Info");

	UUMG_NameTag_C_Calc_Target_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SquadState != nullptr)
		*SquadState = params.SquadState;
	if (SQ_Player_State != nullptr)
		*SQ_Player_State = params.SQ_Player_State;
	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
	if (SL != nullptr)
		*SL = params.SL;
	if (Same_Squad != nullptr)
		*Same_Squad = params.Same_Squad;
	if (Vehicle_Occupants != nullptr)
		*Vehicle_Occupants = params.Vehicle_Occupants;

}


// Function UMG_NameTag.UMG_NameTag_C.Get Tag Test Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::Get_Tag_Test_Location(class APawn* Pawn, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get Tag Test Location");

	UUMG_NameTag_C_Get_Tag_Test_Location_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function UMG_NameTag.UMG_NameTag_C.Get_Kit_Image
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UUMG_NameTag_C::Get_Kit_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get_Kit_Image");

	UUMG_NameTag_C_Get_Kit_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_NameTag.UMG_NameTag_C.Get ADS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           In_ADS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_NameTag_C::Get_ADS(bool* In_ADS)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get ADS");

	UUMG_NameTag_C_Get_ADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_ADS != nullptr)
		*In_ADS = params.In_ADS;

}


// Function UMG_NameTag.UMG_NameTag_C.Find Target
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Find_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Find Target");

	UUMG_NameTag_C_Find_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Update Opacity
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Update_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Update Opacity");

	UUMG_NameTag_C_Update_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Get_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUMG_NameTag_C::Get_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get_Color");

	UUMG_NameTag_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_NameTag.UMG_NameTag_C.Load Saved Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQGameUserSettings*     UserSettings                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::Load_Saved_Settings(class USQGameUserSettings* UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Load Saved Settings");

	UUMG_NameTag_C_Load_Saved_Settings_Params params;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Get Local State
// (BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Get_Local_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Get Local State");

	UUMG_NameTag_C_Get_Local_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Tick");

	UUMG_NameTag_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Timer Check Threshold
// (BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Timer_Check_Threshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Timer Check Threshold");

	UUMG_NameTag_C_Timer_Check_Threshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_NameTag_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Construct");

	UUMG_NameTag_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.Looping Refresh
// (BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::Looping_Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.Looping Refresh");

	UUMG_NameTag_C_Looping_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.FindTargetEvent
// (BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::FindTargetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.FindTargetEvent");

	UUMG_NameTag_C_FindTargetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.RefreshTagEvent
// (BlueprintCallable, BlueprintEvent)
void UUMG_NameTag_C::RefreshTagEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.RefreshTagEvent");

	UUMG_NameTag_C_RefreshTagEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_NameTag.UMG_NameTag_C.ExecuteUbergraph_UMG_NameTag
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_NameTag_C::ExecuteUbergraph_UMG_NameTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_NameTag.UMG_NameTag_C.ExecuteUbergraph_UMG_NameTag");

	UUMG_NameTag_C_ExecuteUbergraph_UMG_NameTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
