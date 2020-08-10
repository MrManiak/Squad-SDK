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

// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Set View Cone Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Set_View_Cone_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Set View Cone Visibility");

	UBP_MapWidgetSoldier_C_Set_View_Cone_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Refresh Element Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Refresh_Element_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Refresh Element Visibility");

	UBP_MapWidgetSoldier_C_Refresh_Element_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Set Show Fireteam Letter
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Set_Show_Fireteam_Letter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Set Show Fireteam Letter");

	UBP_MapWidgetSoldier_C_Set_Show_Fireteam_Letter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Tooltip Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Tooltip_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Tooltip Color");

	UBP_MapWidgetSoldier_C_Update_Tooltip_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Color");

	UBP_MapWidgetSoldier_C_Update_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Wounded Opacity
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Wounded_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Wounded Opacity");

	UBP_MapWidgetSoldier_C_Update_Wounded_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update ID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_ID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update ID");

	UBP_MapWidgetSoldier_C_Update_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Is Medic Icon
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Is_Medic_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Is Medic Icon");

	UBP_MapWidgetSoldier_C_Update_Is_Medic_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetSoldier_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnMouseButtonUp");

	UBP_MapWidgetSoldier_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Same Fireteam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MapWidgetSoldier_C::Same_Fireteam(bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Same Fireteam");

	UBP_MapWidgetSoldier_C_Same_Fireteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Role Icon
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Role_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Role Icon");

	UBP_MapWidgetSoldier_C_Update_Role_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Role Info
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Role_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Role Info");

	UBP_MapWidgetSoldier_C_Update_Role_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.On_TooltipHitBox_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetSoldier_C::On_TooltipHitBox_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.On_TooltipHitBox_MouseButtonDown_1");

	UBP_MapWidgetSoldier_C_On_TooltipHitBox_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MapWidgetSoldier_C::Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Tooltip");

	UBP_MapWidgetSoldier_C_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Icon Size
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Icon_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Icon Size");

	UBP_MapWidgetSoldier_C_Update_Icon_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Player Image
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Update_Player_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Update Player Image");

	UBP_MapWidgetSoldier_C_Update_Player_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnTintValueChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnTintValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnTintValueChanged");

	UBP_MapWidgetSoldier_C_OnTintValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnShowBleedingChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnShowBleedingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnShowBleedingChanged");

	UBP_MapWidgetSoldier_C_OnShowBleedingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnShowIncapChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnShowIncapChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnShowIncapChanged");

	UBP_MapWidgetSoldier_C_OnShowIncapChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsMedicChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsMedicChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsMedicChanged");

	UBP_MapWidgetSoldier_C_OnIsMedicChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsOwnedBySelfChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsOwnedBySelfChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsOwnedBySelfChanged");

	UBP_MapWidgetSoldier_C_OnIsOwnedBySelfChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInVehicleChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsInVehicleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInVehicleChanged");

	UBP_MapWidgetSoldier_C_OnIsInVehicleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSquadIdChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnSquadIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSquadIdChanged");

	UBP_MapWidgetSoldier_C_OnSquadIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCameraRotationYawChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnCameraRotationYawChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCameraRotationYawChanged");

	UBP_MapWidgetSoldier_C_OnCameraRotationYawChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSoldierInfoChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnSoldierInfoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSoldierInfoChanged");

	UBP_MapWidgetSoldier_C_OnSoldierInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSelectionStateChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnSelectionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnSelectionStateChanged");

	UBP_MapWidgetSoldier_C_OnSelectionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetSoldier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.Construct");

	UBP_MapWidgetSoldier_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCurrentRoleChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnCurrentRoleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCurrentRoleChanged");

	UBP_MapWidgetSoldier_C_OnCurrentRoleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetSoldier_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnScaleChanged");

	UBP_MapWidgetSoldier_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsWoundedChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsWoundedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsWoundedChanged");

	UBP_MapWidgetSoldier_C_OnIsWoundedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnFireteamIdChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnFireteamIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnFireteamIdChanged");

	UBP_MapWidgetSoldier_C_OnFireteamIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnFireTeamIndexChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnFireTeamIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnFireTeamIndexChanged");

	UBP_MapWidgetSoldier_C_OnFireTeamIndexChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnAngleChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnAngleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnAngleChanged");

	UBP_MapWidgetSoldier_C_OnAngleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInSelfSquad
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsInSelfSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInSelfSquad");

	UBP_MapWidgetSoldier_C_OnIsInSelfSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInSelfTeam
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnIsInSelfTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnIsInSelfTeam");

	UBP_MapWidgetSoldier_C_OnIsInSelfTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCommanderChangedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetSoldier_C::OnCommanderChangedEvent_Event_1(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnCommanderChangedEvent_Event_1");

	UBP_MapWidgetSoldier_C_OnCommanderChangedEvent_Event_1_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnLeaderStateChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSoldier_C::OnLeaderStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.OnLeaderStateChanged");

	UBP_MapWidgetSoldier_C_OnLeaderStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.ExecuteUbergraph_BP_MapWidgetSoldier
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetSoldier_C::ExecuteUbergraph_BP_MapWidgetSoldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSoldier.BP_MapWidgetSoldier_C.ExecuteUbergraph_BP_MapWidgetSoldier");

	UBP_MapWidgetSoldier_C_ExecuteUbergraph_BP_MapWidgetSoldier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
