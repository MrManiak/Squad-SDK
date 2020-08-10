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

// Function BPI_HUD.BPI_HUD_C.Zoom In Map Wheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Zoom_In_Map_Wheel(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Zoom In Map Wheel");

	UBPI_HUD_C_Zoom_In_Map_Wheel_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Showing Main Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Showing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HUD_C::Get_Showing_Main_Menu(bool* Showing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Showing Main Menu");

	UBPI_HUD_C_Get_Showing_Main_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Showing != nullptr)
		*Showing = params.Showing;

}


// Function BPI_HUD.BPI_HUD_C.Zoom In Map
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Zoom_In_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Zoom In Map");

	UBPI_HUD_C_Zoom_In_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Destroy Radial
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Destroy_Radial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Destroy Radial");

	UBPI_HUD_C_Destroy_Radial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Close Menus
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Close_Menus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Close Menus");

	UBPI_HUD_C_Close_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Interactable Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQInteractableWidgetList* Interact_Widget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Interactable_Widget(class USQInteractableWidgetList** Interact_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Interactable Widget");

	UBPI_HUD_C_Get_Interactable_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interact_Widget != nullptr)
		*Interact_Widget = params.Interact_Widget;

}


// Function BPI_HUD.BPI_HUD_C.Get UI Input Stacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSQInputState>   Input_Stacks                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UBPI_HUD_C::Get_UI_Input_Stacks(TArray<struct FSQInputState>* Input_Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get UI Input Stacks");

	UBPI_HUD_C_Get_UI_Input_Stacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input_Stacks != nullptr)
		*Input_Stacks = params.Input_Stacks;

}


// Function BPI_HUD.BPI_HUD_C.Player Died
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Player_Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Player Died");

	UBPI_HUD_C_Player_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Set Commander Max Cooldowns
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Set_Commander_Max_Cooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Set Commander Max Cooldowns");

	UBPI_HUD_C_Set_Commander_Max_Cooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Scoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQScoreboard*           ScoreBoard                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Scoreboard(class USQScoreboard** ScoreBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Scoreboard");

	UBPI_HUD_C_Get_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreBoard != nullptr)
		*ScoreBoard = params.ScoreBoard;

}


// Function BPI_HUD.BPI_HUD_C.Toggle Leaderboard
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Toggle_Leaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Toggle Leaderboard");

	UBPI_HUD_C_Toggle_Leaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Show Leaderboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HUD_C::Show_Leaderboard(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show Leaderboard");

	UBPI_HUD_C_Show_Leaderboard_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Close Radial
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Close_Radial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Close Radial");

	UBPI_HUD_C_Close_Radial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Destroy SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Destroy_SL_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Destroy SL Menu");

	UBPI_HUD_C_Destroy_SL_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Create SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Create_SL_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Create SL Menu");

	UBPI_HUD_C_Create_SL_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.End Match
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Winning_Team                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Losing_Team                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Winning_Tickets                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loser_Tickets                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::End_Match(int Winning_Team, int Losing_Team, int Winning_Tickets, int Loser_Tickets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.End Match");

	UBPI_HUD_C_End_Match_Params params;
	params.Winning_Team = Winning_Team;
	params.Losing_Team = Losing_Team;
	params.Winning_Tickets = Winning_Tickets;
	params.Loser_Tickets = Loser_Tickets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Menu Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Menu_Close(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Menu Close");

	UBPI_HUD_C_Menu_Close_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Toggle Main Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Toggle_Main_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Toggle Main Menu");

	UBPI_HUD_C_Toggle_Main_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Clear All Floating Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Clear_All_Floating_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Clear All Floating Widgets");

	UBPI_HUD_C_Clear_All_Floating_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Menu Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_MenuBase_C*         In_Menu                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show_Mouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HUD_C::Menu_Toggle(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Menu Toggle");

	UBPI_HUD_C_Menu_Toggle_Params params;
	params.Instant = Instant;
	params.In_Menu = In_Menu;
	params.Show_Mouse = Show_Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Map Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* Map_Component                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Map_Component(class USQCoreStateMapComponent** Map_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Map Component");

	UBPI_HUD_C_Get_Map_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map_Component != nullptr)
		*Map_Component = params.Map_Component;

}


// Function BPI_HUD.BPI_HUD_C.Get Map Core
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SQMapCore_C*          Map_Core                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Map_Core(class UW_SQMapCore_C** Map_Core)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Map Core");

	UBPI_HUD_C_Get_Map_Core_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map_Core != nullptr)
		*Map_Core = params.Map_Core;

}


// Function BPI_HUD.BPI_HUD_C.Get Is Showing Settings Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Showing_Main_Menu              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HUD_C::Get_Is_Showing_Settings_Menu(bool* Showing_Main_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Is Showing Settings Menu");

	UBPI_HUD_C_Get_Is_Showing_Settings_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Showing_Main_Menu != nullptr)
		*Showing_Main_Menu = params.Showing_Main_Menu;

}


// Function BPI_HUD.BPI_HUD_C.Show End Scoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Show_End_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show End Scoreboard");

	UBPI_HUD_C_Show_End_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Main Menus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Deployment                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*         Command                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*         Roaming                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Main_Menus(class UUMG_MenuBase_C** Deployment, class UUMG_MenuBase_C** Command, class UUMG_MenuBase_C** Roaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Main Menus");

	UBPI_HUD_C_Get_Main_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployment != nullptr)
		*Deployment = params.Deployment;
	if (Command != nullptr)
		*Command = params.Command;
	if (Roaming != nullptr)
		*Roaming = params.Roaming;

}


// Function BPI_HUD.BPI_HUD_C.Show 3D Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQMapMarker*            Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Show_3D_Marker(class ASQMapMarker* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show 3D Marker");

	UBPI_HUD_C_Show_3D_Marker_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Get Radial Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial_Menu                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Get_Radial_Menu(class UBaseRadialMenu_C** Radial_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Radial Menu");

	UBPI_HUD_C_Get_Radial_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radial_Menu != nullptr)
		*Radial_Menu = params.Radial_Menu;

}


// Function BPI_HUD.BPI_HUD_C.Create Radial Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Close_Command                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_HUD_C::Create_Radial_Menu(class UClass* Model, const struct FName& Close_Command, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Create Radial Menu");

	UBPI_HUD_C_Create_Radial_Menu_Params params;
	params.Model = Model;
	params.Close_Command = Close_Command;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HUD.BPI_HUD_C.Open Deployment
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HUD_C::Open_Deployment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Open Deployment");

	UBPI_HUD_C_Open_Deployment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
