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

// Function BP_HUD.BP_HUD_C.Get Showing Main Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Showing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Get_Showing_Main_Menu(bool* Showing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Showing Main Menu");

	ABP_HUD_C_Get_Showing_Main_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Showing != nullptr)
		*Showing = params.Showing;

}


// Function BP_HUD.BP_HUD_C.Get Interactable Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQInteractableWidgetList* Interact_Widget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Interactable_Widget(class USQInteractableWidgetList** Interact_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Interactable Widget");

	ABP_HUD_C_Get_Interactable_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interact_Widget != nullptr)
		*Interact_Widget = params.Interact_Widget;

}


// Function BP_HUD.BP_HUD_C.Get UI Input Stacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSQInputState>   Input_Stacks                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void ABP_HUD_C::Get_UI_Input_Stacks(TArray<struct FSQInputState>* Input_Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get UI Input Stacks");

	ABP_HUD_C_Get_UI_Input_Stacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input_Stacks != nullptr)
		*Input_Stacks = params.Input_Stacks;

}


// Function BP_HUD.BP_HUD_C.Get Scoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQScoreboard*           ScoreBoard                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Scoreboard(class USQScoreboard** ScoreBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Scoreboard");

	ABP_HUD_C_Get_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreBoard != nullptr)
		*ScoreBoard = params.ScoreBoard;

}


// Function BP_HUD.BP_HUD_C.Get Map Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* Map_Component                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Map_Component(class USQCoreStateMapComponent** Map_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Map Component");

	ABP_HUD_C_Get_Map_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map_Component != nullptr)
		*Map_Component = params.Map_Component;

}


// Function BP_HUD.BP_HUD_C.Get Map Core
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SQMapCore_C*          Map_Core                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Map_Core(class UW_SQMapCore_C** Map_Core)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Map Core");

	ABP_HUD_C_Get_Map_Core_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map_Core != nullptr)
		*Map_Core = params.Map_Core;

}


// Function BP_HUD.BP_HUD_C.Get Is Showing Settings Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Showing_Main_Menu              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Get_Is_Showing_Settings_Menu(bool* Showing_Main_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Is Showing Settings Menu");

	ABP_HUD_C_Get_Is_Showing_Settings_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Showing_Main_Menu != nullptr)
		*Showing_Main_Menu = params.Showing_Main_Menu;

}


// Function BP_HUD.BP_HUD_C.Get Main Menus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Deployment                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*         Command                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MenuBase_C*         Roaming                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Main_Menus(class UUMG_MenuBase_C** Deployment, class UUMG_MenuBase_C** Command, class UUMG_MenuBase_C** Roaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Main Menus");

	ABP_HUD_C_Get_Main_Menus_Params params;

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


// Function BP_HUD.BP_HUD_C.Get Radial Menu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial_Menu                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Radial_Menu(class UBaseRadialMenu_C** Radial_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Radial Menu");

	ABP_HUD_C_Get_Radial_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radial_Menu != nullptr)
		*Radial_Menu = params.Radial_Menu;

}


// Function BP_HUD.BP_HUD_C.Get Deployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Deployable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Get_Deployable(class UClass** Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Deployable");

	ABP_HUD_C_Get_Deployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployable != nullptr)
		*Deployable = params.Deployable;

}


// Function BP_HUD.BP_HUD_C.Remove All Interactable Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Remove_All_Interactable_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Remove All Interactable Widgets");

	ABP_HUD_C_Remove_All_Interactable_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateVoiceMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::CreateVoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateVoiceMenu");

	ABP_HUD_C_CreateVoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Get Interactor Display Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (Parm, OutParm)
void ABP_HUD_C::Get_Interactor_Display_Name(class AActor* Actor, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Get Interactor Display Name");

	ABP_HUD_C_Get_Interactor_Display_Name_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_HUD.BP_HUD_C.Draw Interact Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Draw_Interact_Widget(class AActor* Actor, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Draw Interact Widget");

	ABP_HUD_C_Draw_Interact_Widget_Params params;
	params.Actor = Actor;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Close Radial Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Close_Radial_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Close Radial Menu");

	ABP_HUD_C_Close_Radial_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Load Icon Scale
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Load_Icon_Scale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Load Icon Scale");

	ABP_HUD_C_Load_Icon_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show Spawn Points
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Show_Spawn_Points()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show Spawn Points");

	ABP_HUD_C_Show_Spawn_Points_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Create Deployment
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Create_Deployment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Create Deployment");

	ABP_HUD_C_Create_Deployment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ZoomMapWithWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WheelAxis                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::ZoomMapWithWheel(float WheelAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ZoomMapWithWheel");

	ABP_HUD_C_ZoomMapWithWheel_Params params;
	params.WheelAxis = WheelAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Remove Menus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Remove_Menus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Remove Menus");

	ABP_HUD_C_Remove_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Configure Map
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SQMapCore_C*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Configure_Map(class UW_SQMapCore_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Configure Map");

	ABP_HUD_C_Configure_Map_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Call Zoom Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Zoom_Amount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Call_Zoom_Update(float Zoom_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Call Zoom Update");

	ABP_HUD_C_Call_Zoom_Update_Params params;
	params.Zoom_Amount = Zoom_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Remove SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Remove_SL_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Remove SL Menu");

	ABP_HUD_C_Remove_SL_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Close All Menus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Close_All_Menus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Close All Menus");

	ABP_HUD_C_Close_All_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Create RoamingMap
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Create_RoamingMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Create RoamingMap");

	ABP_HUD_C_Create_RoamingMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Create Command
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Create_Command()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Create Command");

	ABP_HUD_C_Create_Command_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Clear Floating Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Clear_Floating_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Clear Floating Widgets");

	ABP_HUD_C_Clear_Floating_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Toggle Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_MenuBase_C*         In_Menu                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show_Mouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Toggle_Menu(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Toggle Menu");

	ABP_HUD_C_Toggle_Menu_Params params;
	params.Instant = Instant;
	params.In_Menu = In_Menu;
	params.Show_Mouse = Show_Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateChat
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::CreateChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateChat");

	ABP_HUD_C_CreateChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::CreateScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateScoreboard");

	ABP_HUD_C_CreateScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawCurrentMapMarker
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::DrawCurrentMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawCurrentMapMarker");

	ABP_HUD_C_DrawCurrentMapMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.GetPlayerStateFromSoldier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*            PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::GetPlayerStateFromSoldier(class APawn* Pawn, class APlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.GetPlayerStateFromSoldier");

	ABP_HUD_C_GetPlayerStateFromSoldier_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;

}


// Function BP_HUD.BP_HUD_C.ToggleMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::ToggleMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ToggleMainMenu");

	ABP_HUD_C_ToggleMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DestroyRadialMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::DestroyRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DestroyRadialMenu");

	ABP_HUD_C_DestroyRadialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DestroyCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::DestroyCommandMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DestroyCommandMenu");

	ABP_HUD_C_DestroyCommandMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateRadialMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   CloseWindowCommand             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::CreateRadialMenu(class UClass* Model, const struct FName& CloseWindowCommand, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateRadialMenu");

	ABP_HUD_C_CreateRadialMenu_Params params;
	params.Model = Model;
	params.CloseWindowCommand = CloseWindowCommand;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::CreateCommandMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateCommandMenu");

	ABP_HUD_C_CreateCommandMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ShowHideMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::ShowHideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowHideMainMenu");

	ABP_HUD_C_ShowHideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateMainMenu");

	ABP_HUD_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawNametag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::DrawNametag(class APawn* Soldier, const struct FVector2D& Scale, const struct FLinearColor& Color, const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawNametag");

	ABP_HUD_C_DrawNametag_Params params;
	params.Soldier = Soldier;
	params.Scale = Scale;
	params.Color = Color;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ZoomMap
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::ZoomMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ZoomMap");

	ABP_HUD_C_ZoomMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Close Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Target_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Close_Menu(class UUMG_MenuBase_C* Target_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Close Menu");

	ABP_HUD_C_Close_Menu_Params params;
	params.Target_Menu = Target_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Open Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Target_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show_Mouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Open_Menu(class UUMG_MenuBase_C* Target_Menu, bool Show_Mouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Open Menu");

	ABP_HUD_C_Open_Menu_Params params;
	params.Target_Menu = Target_Menu;
	params.Show_Mouse = Show_Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::DrawHUD(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawHUD");

	ABP_HUD_C_DrawHUD_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawHealthIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size_X                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Size_Y                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::DrawHealthIcon(float Size_X, float Size_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawHealthIcon");

	ABP_HUD_C_DrawHealthIcon_Params params;
	params.Size_X = Size_X;
	params.Size_Y = Size_Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CalculateHitIndicatorOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::CalculateHitIndicatorOpacity(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CalculateHitIndicatorOpacity");

	ABP_HUD_C_CalculateHitIndicatorOpacity_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size_X                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Size_Y                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::DrawHitIndicator(float Size_X, float Size_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawHitIndicator");

	ABP_HUD_C_DrawHitIndicator_Params params;
	params.Size_X = Size_X;
	params.Size_Y = Size_Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DrawTicketCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size_X                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::DrawTicketCount(float Size_X)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DrawTicketCount");

	ABP_HUD_C_DrawTicketCount_Params params;
	params.Size_X = Size_X;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Open Deployment
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Open_Deployment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Open Deployment");

	ABP_HUD_C_Open_Deployment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Set Commander Max Cooldowns
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Set_Commander_Max_Cooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Set Commander Max Cooldowns");

	ABP_HUD_C_Set_Commander_Max_Cooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int                            SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::ReceiveDrawHUD(int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDrawHUD");

	ABP_HUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveTick");

	ABP_HUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.BlueprintNotifyHit
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APawn*                   PawnInstigator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::BlueprintNotifyHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.BlueprintNotifyHit");

	ABP_HUD_C_BlueprintNotifyHit_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveBeginPlay");

	ABP_HUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.HideMarkerPlacement_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::HideMarkerPlacement_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideMarkerPlacement_Event");

	ABP_HUD_C_HideMarkerPlacement_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.VehicleCreateOverlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_HUD_C::VehicleCreateOverlay(class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.VehicleCreateOverlay");

	ABP_HUD_C_VehicleCreateOverlay_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DisplayAmmoBagOverlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableAmmoBag*    ammobag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bCanPickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::DisplayAmmoBagOverlay(class ASQDeployableAmmoBag* ammobag, bool bCanPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DisplayAmmoBagOverlay");

	ABP_HUD_C_DisplayAmmoBagOverlay_Params params;
	params.ammobag = ammobag;
	params.bCanPickup = bCanPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.HideAmmoBagOverlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableAmmoBag*    ammobag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::HideAmmoBagOverlay(class ASQDeployableAmmoBag* ammobag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideAmmoBagOverlay");

	ABP_HUD_C_HideAmmoBagOverlay_Params params;
	params.ammobag = ammobag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Force Update Zoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Zoom_Amount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Force_Update_Zoom(float Zoom_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Force Update Zoom");

	ABP_HUD_C_Force_Update_Zoom_Params params;
	params.Zoom_Amount = Zoom_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.OnDied
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnDied");

	ABP_HUD_C_OnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveEndPlay");

	ABP_HUD_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_HUD_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDestroyed");

	ABP_HUD_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.BPOnSetHudWidgetsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::BPOnSetHudWidgetsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.BPOnSetHudWidgetsEnabled");

	ABP_HUD_C_BPOnSetHudWidgetsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.BPOnUsableVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::BPOnUsableVisible(class AActor* Actor, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.BPOnUsableVisible");

	ABP_HUD_C_BPOnUsableVisible_Params params;
	params.Actor = Actor;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show End Round Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Winning_Team                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Losing_Team                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Winning_Tickets                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Losing_Tickets                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Show_End_Round_Widget(int Winning_Team, int Losing_Team, int Winning_Tickets, int Losing_Tickets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show End Round Widget");

	ABP_HUD_C_Show_End_Round_Widget_Params params;
	params.Winning_Team = Winning_Team;
	params.Losing_Team = Losing_Team;
	params.Winning_Tickets = Winning_Tickets;
	params.Losing_Tickets = Losing_Tickets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show Scoreboard
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Show_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show Scoreboard");

	ABP_HUD_C_Show_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Hide Scoreboard
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Hide_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Hide Scoreboard");

	ABP_HUD_C_Hide_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Toggle Scoreboard
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Toggle_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Toggle Scoreboard");

	ABP_HUD_C_Toggle_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Open Voice Model
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Open_Voice_Model()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Open Voice Model");

	ABP_HUD_C_Open_Voice_Model_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show 3D Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQMapMarker*            Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Show_3D_Marker(class ASQMapMarker* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show 3D Marker");

	ABP_HUD_C_Show_3D_Marker_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Create Radial Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Close_Command                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Create_Radial_Menu(class UClass* Model, const struct FName& Close_Command, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Create Radial Menu");

	ABP_HUD_C_Create_Radial_Menu_Params params;
	params.Model = Model;
	params.Close_Command = Close_Command;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show End Scoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Show_End_Scoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show End Scoreboard");

	ABP_HUD_C_Show_End_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Clear All Floating Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Clear_All_Floating_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Clear All Floating Widgets");

	ABP_HUD_C_Clear_All_Floating_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Toggle Main Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Toggle_Main_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Toggle Main Menu");

	ABP_HUD_C_Toggle_Main_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Menu Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Menu_Close(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Menu Close");

	ABP_HUD_C_Menu_Close_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Create SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Create_SL_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Create SL Menu");

	ABP_HUD_C_Create_SL_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Destroy SL Menu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Destroy_SL_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Destroy SL Menu");

	ABP_HUD_C_Destroy_SL_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Close Radial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Close_Radial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Close Radial");

	ABP_HUD_C_Close_Radial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Show Leaderboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Show_Leaderboard(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Show Leaderboard");

	ABP_HUD_C_Show_Leaderboard_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Toggle Leaderboard
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Toggle_Leaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Toggle Leaderboard");

	ABP_HUD_C_Toggle_Leaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Menu Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_MenuBase_C*         In_Menu                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show_Mouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HUD_C::Menu_Toggle(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Menu Toggle");

	ABP_HUD_C_Menu_Toggle_Params params;
	params.Instant = Instant;
	params.In_Menu = In_Menu;
	params.Show_Mouse = Show_Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Player Died
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Player_Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Player Died");

	ABP_HUD_C_Player_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Game State Became Valid
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Game_State_Became_Valid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Game State Became Valid");

	ABP_HUD_C_Game_State_Became_Valid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.End Match
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Winning_Team                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Losing_Team                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Winning_Tickets                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loser_Tickets                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::End_Match(int Winning_Team, int Losing_Team, int Winning_Tickets, int Loser_Tickets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.End Match");

	ABP_HUD_C_End_Match_Params params;
	params.Winning_Team = Winning_Team;
	params.Losing_Team = Losing_Team;
	params.Winning_Tickets = Winning_Tickets;
	params.Loser_Tickets = Loser_Tickets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Close Menus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Close_Menus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Close Menus");

	ABP_HUD_C_Close_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Destroy Radial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Destroy_Radial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Destroy Radial");

	ABP_HUD_C_Destroy_Radial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Zoom In Map
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Zoom_In_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Zoom In Map");

	ABP_HUD_C_Zoom_In_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Zoom In Map Wheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Zoom_In_Map_Wheel(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Zoom In Map Wheel");

	ABP_HUD_C_Zoom_In_Map_Wheel_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ShowMarkerOnHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSQMapMarkerVisualData  MapMarkerVisualData            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABP_HUD_C::ShowMarkerOnHUD(const struct FSQMapMarkerVisualData& MapMarkerVisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowMarkerOnHUD");

	ABP_HUD_C_ShowMarkerOnHUD_Params params;
	params.MapMarkerVisualData = MapMarkerVisualData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.CreateMapMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQMapMarkerVisualData  MapMarkerVisualData            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABP_HUD_C::CreateMapMarker(const struct FSQMapMarkerVisualData& MapMarkerVisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateMapMarker");

	ABP_HUD_C_CreateMapMarker_Params params;
	params.MapMarkerVisualData = MapMarkerVisualData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.InvalidateMapMarker_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::InvalidateMapMarker_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.InvalidateMapMarker_Event");

	ABP_HUD_C_InvalidateMapMarker_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.DeleteMarkerOnHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::DeleteMarkerOnHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.DeleteMarkerOnHUD");

	ABP_HUD_C_DeleteMarkerOnHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::ExecuteUbergraph_BP_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD");

	ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.OnMapCoreChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::OnMapCoreChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnMapCoreChanged__DelegateSignature");

	ABP_HUD_C_OnMapCoreChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.HUD Can Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::HUD_Can_Start__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HUD Can Start__DelegateSignature");

	ABP_HUD_C_HUD_Can_Start__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Menu Opened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Menu_Opened__DelegateSignature(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Menu Opened__DelegateSignature");

	ABP_HUD_C_Menu_Opened__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Menu Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MenuBase_C*         Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Menu_Closed__DelegateSignature(class UUMG_MenuBase_C* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Menu Closed__DelegateSignature");

	ABP_HUD_C_Menu_Closed__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Clear Widgets__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_HUD_C::Clear_Widgets__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Clear Widgets__DelegateSignature");

	ABP_HUD_C_Clear_Widgets__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD.BP_HUD_C.Zoom Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Zoom_Amount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_C::Zoom_Updated__DelegateSignature(float Zoom_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.Zoom Updated__DelegateSignature");

	ABP_HUD_C_Zoom_Updated__DelegateSignature_Params params;
	params.Zoom_Amount = Zoom_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
