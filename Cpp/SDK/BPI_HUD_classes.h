#pragma once

// Name: S, Version: b


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_HUD.BPI_HUD_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_HUD_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HUD.BPI_HUD_C");
		return ptr;
	}



	void Zoom_In_Map_Wheel(float Axis);
	void Get_Showing_Main_Menu(bool* Showing);
	void Zoom_In_Map();
	void Destroy_Radial();
	void Close_Menus();
	void Get_Interactable_Widget(class USQInteractableWidgetList** Interact_Widget);
	void Get_UI_Input_Stacks(TArray<struct FSQInputState>* Input_Stacks);
	void Player_Died();
	void Set_Commander_Max_Cooldowns();
	void Get_Scoreboard(class USQScoreboard** ScoreBoard);
	void Toggle_Leaderboard();
	void Show_Leaderboard(bool Show);
	void Close_Radial();
	void Destroy_SL_Menu();
	void Create_SL_Menu();
	void End_Match(int Winning_Team, int Losing_Team, int Winning_Tickets, int Loser_Tickets);
	void Menu_Close(class UUMG_MenuBase_C* Menu);
	void Toggle_Main_Menu();
	void Clear_All_Floating_Widgets();
	void Menu_Toggle(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse);
	void Get_Map_Component(class USQCoreStateMapComponent** Map_Component);
	void Get_Map_Core(class UW_SQMapCore_C** Map_Core);
	void Get_Is_Showing_Settings_Menu(bool* Showing_Main_Menu);
	void Show_End_Scoreboard();
	void Get_Main_Menus(class UUMG_MenuBase_C** Deployment, class UUMG_MenuBase_C** Command, class UUMG_MenuBase_C** Roaming);
	void Show_3D_Marker(class ASQMapMarker* Marker);
	void Get_Radial_Menu(class UBaseRadialMenu_C** Radial_Menu);
	void Create_Radial_Menu(class UClass* Model, const struct FName& Close_Command, class UObject* Context);
	void Open_Deployment();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
