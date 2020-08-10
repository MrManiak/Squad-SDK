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

// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Protected Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Protected_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Protected Visibility");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Protected_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Touching Start
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Touching_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Touching Start");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Touching_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Bind BPHUD Events
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Bind_BPHUD_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Bind BPHUD Events");

	UBP_MarkerWidget_CaptureZoneTC_C_Bind_BPHUD_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Visibility from Save Data
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Visibility_from_Save_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Visibility from Save Data");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Visibility_from_Save_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get POI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MarkerWidget_CaptureZoneTC_C::Get_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get POI");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBP_MarkerWidget_CaptureZoneTC_C::Get_Hex_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Text");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Owning Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  OwningTeam                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Hex_Owning_Team(unsigned char* OwningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Owning Team");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Owning_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningTeam != nullptr)
		*OwningTeam = params.OwningTeam;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Can Cap Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATC_HexZone_C*           Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Friendly                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Neutral                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Can_Cap_Team(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Can Cap Team");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Can_Cap_Team_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Captor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATC_HexZone_C*           Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Friendly                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Neutral                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Captor(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Captor");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Captor_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Owner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATC_HexZone_C*           Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Friendly                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Neutral                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Owner(class ATC_HexZone_C* Zone, bool* Friendly, bool* Enemy, bool* Neutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Owner");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Owner_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Frontline
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Frontline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Frontline");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Frontline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Nearby Zones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Team_1_Nearby                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Team_2_Nearby                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Nearby_Zones(bool* Team_1_Nearby, bool* Team_2_Nearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Nearby Zones");

	UBP_MarkerWidget_CaptureZoneTC_C_Nearby_Zones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Team_1_Nearby != nullptr)
		*Team_1_Nearby = params.Team_1_Nearby;
	if (Team_2_Nearby != nullptr)
		*Team_2_Nearby = params.Team_2_Nearby;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Zone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Hex_Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Hex Zone");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Hex_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Anchor Visual
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Anchor_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Anchor Visual");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Anchor_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Can Cap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATC_HexZone_C*           Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Self_Team                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Can_Cap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Can_Cap(class ATC_HexZone_C* Zone, bool Self_Team, bool* Can_Cap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Can Cap");

	UBP_MarkerWidget_CaptureZoneTC_C_Can_Cap_Params params;
	params.Zone = Zone;
	params.Self_Team = Self_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Cap != nullptr)
		*Can_Cap = params.Can_Cap;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Same Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_CaptureZoneTC_C::Get_Same_Team(bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Get Same Team");

	UBP_MarkerWidget_CaptureZoneTC_C_Get_Same_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Capture Bar
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Capture_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Capture Bar");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Capture_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Hex Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Hex_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Hex Color");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Hex_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Widget
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Update Widget");

	UBP_MarkerWidget_CaptureZoneTC_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Tick");

	UBP_MarkerWidget_CaptureZoneTC_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnFlagNameChanged
// (Event, Protected, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::OnFlagNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnFlagNameChanged");

	UBP_MarkerWidget_CaptureZoneTC_C_OnFlagNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnScaleChanged");

	UBP_MarkerWidget_CaptureZoneTC_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Set Name Via Grid Ref
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Set_Name_Via_Grid_Ref()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Set Name Via Grid Ref");

	UBP_MarkerWidget_CaptureZoneTC_C_Set_Name_Via_Grid_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Destruct");

	UBP_MarkerWidget_CaptureZoneTC_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Reset Hex Opacity
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Reset_Hex_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Reset Hex Opacity");

	UBP_MarkerWidget_CaptureZoneTC_C_Reset_Hex_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnCapturePercentChanged
// (Event, Protected, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::OnCapturePercentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.OnCapturePercentChanged");

	UBP_MarkerWidget_CaptureZoneTC_C_OnCapturePercentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Play Capture Fade Animation
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Play_Capture_Fade_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Play Capture Fade Animation");

	UBP_MarkerWidget_CaptureZoneTC_C_Play_Capture_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.UpdateState");

	UBP_MarkerWidget_CaptureZoneTC_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Start Timer Update Hex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::Start_Timer_Update_Hex(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Start Timer Update Hex");

	UBP_MarkerWidget_CaptureZoneTC_C_Start_Timer_Update_Hex_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Stop Timer Update Hex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::Stop_Timer_Update_Hex(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Stop Timer Update Hex");

	UBP_MarkerWidget_CaptureZoneTC_C_Stop_Timer_Update_Hex_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.Construct");

	UBP_MarkerWidget_CaptureZoneTC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_CaptureZoneTC_C::ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC");

	UBP_MarkerWidget_CaptureZoneTC_C_ExecuteUbergraph_BP_MarkerWidget_CaptureZoneTC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_CaptureZoneTC_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_CaptureZoneTC.BP_MarkerWidget_CaptureZoneTC_C.CloseTooltip__DelegateSignature");

	UBP_MarkerWidget_CaptureZoneTC_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
