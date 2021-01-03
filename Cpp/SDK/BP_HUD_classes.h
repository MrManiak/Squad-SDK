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

// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// 0x0180 (FullSize[0x0B28] - InheritedSize[0x09A8])
class ABP_HUD_C : public ASQHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Events_Component_C*                      UI_Events_Component;                                       // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  SquadLeadSymbolTexture;                                    // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                           RadialMenu;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageIndicatorOpacity;                                    // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageIndicatorFadeOutTime;                                // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HiddenWidgets;                                             // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0B0F[0x7];                                     // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMainMenuScreen_C*                           MainMenu_Widget;                                           // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowingMainMenu;                                          // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_13OQ[0x7];                                     // 0x09E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ShowMarkerPlacementResetTimer;                             // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              NewMarkerShowTime;                                         // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HudMarkerScaleTime;                                        // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HudMarkerSolidTime;                                        // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M36A[0x4];                                     // 0x0A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMG_Compass_C*                              CompassWidgetNewUMG;                                       // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MarkerStartFadeDistance;                                   // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MarkerEndFadeDistance;                                     // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MarkerScaleSizeMultiplier;                                 // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N31S[0x4];                                     // 0x0A1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              WidgetTypesToHideOnMainMenu;                               // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUMG_MenuBase_C*                             Deployment;                                                // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             Command;                                                   // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SQ_Base_HUD_Class;                                         // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MenuBase_C*                             RoamingMap;                                                // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OpenMutex;                                                 // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JT7M[0x7];                                     // 0x0A51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Zoom_Updated;                                              // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_SQMapCore_C*                              MapCore;                                                   // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Command_Widget_Class;                                      // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Deployment_Widget_Class;                                   // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Roaming_Widget_Class;                                      // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_MenuBase_C*>                     All_Menus;                                                 // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class ASQMapMarker*                                Last_HUD_Marker;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WorldMarker_C*                            Last_Widget_Marker;                                        // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Clear_Widgets;                                             // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USQNotificationData*                         Notification_Data;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Interact_Widget_Class;                                     // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQInteractableWidgetList*                   Interact_Widget;                                           // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      End_Round_Widget_Class;                                    // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  Data_Table_Modes;                                          // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Menu_Closed;                                               // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Menu_Opened;                                               // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    HUD_Can_Start;                                             // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                      Default_Voice_Radial;                                      // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnMapCoreChanged;                                          // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD.BP_HUD_C");
		return ptr;
	}



	void Get_Showing_Main_Menu(bool* Showing);
	void Get_Interactable_Widget(class USQInteractableWidgetList** Interact_Widget);
	void Get_UI_Input_Stacks(TArray<struct FSQInputState>* Input_Stacks);
	void Get_Scoreboard(class USQScoreboard** ScoreBoard);
	void Get_Map_Component(class USQCoreStateMapComponent** Map_Component);
	void Get_Map_Core(class UW_SQMapCore_C** Map_Core);
	void Get_Is_Showing_Settings_Menu(bool* Showing_Main_Menu);
	void Get_Main_Menus(class UUMG_MenuBase_C** Deployment, class UUMG_MenuBase_C** Command, class UUMG_MenuBase_C** Roaming);
	void Get_Radial_Menu(class UBaseRadialMenu_C** Radial_Menu);
	void Get_Deployable(class UClass** Deployable);
	void Remove_All_Interactable_Widgets();
	void CreateVoiceMenu();
	void Get_Interactor_Display_Name(class AActor* Actor, struct FText* Name);
	void Draw_Interact_Widget(class AActor* Actor, bool Add);
	void Close_Radial_Menu();
	void Load_Icon_Scale();
	void Show_Spawn_Points();
	void Create_Deployment();
	void ZoomMapWithWheel(float WheelAxis);
	void Remove_Menus();
	void Configure_Map(class UW_SQMapCore_C* Target);
	void Call_Zoom_Update(float Zoom_Amount);
	void Remove_SL_Menu();
	void Close_All_Menus();
	void Create_RoamingMap();
	void Create_Command();
	void Clear_Floating_Widgets();
	void Toggle_Menu(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse);
	void CreateChat();
	void CreateScoreboard();
	void DrawCurrentMapMarker();
	void GetPlayerStateFromSoldier(class APawn* Pawn, class APlayerState** PlayerState);
	void ToggleMainMenu();
	void DestroyRadialMenu();
	void DestroyCommandMenu();
	void CreateRadialMenu(class UClass* Model, const struct FName& CloseWindowCommand, class UObject* Context);
	void CreateCommandMenu();
	void ShowHideMainMenu();
	void CreateMainMenu();
	void DrawNametag(class APawn* Soldier, const struct FVector2D& Scale, const struct FLinearColor& Color, const struct FVector2D& Location);
	void ZoomMap();
	void Close_Menu(class UUMG_MenuBase_C* Target_Menu);
	void Open_Menu(class UUMG_MenuBase_C* Target_Menu, bool Show_Mouse);
	void DrawHUD(int Width, int Height);
	void DrawHealthIcon(float Size_X, float Size_Y);
	void CalculateHitIndicatorOpacity(float Delta_Time);
	void DrawHitIndicator(float Size_X, float Size_Y);
	void DrawTicketCount(float Size_X);
	void Open_Deployment();
	void Set_Commander_Max_Cooldowns();
	void ReceiveDrawHUD(int SizeX, int SizeY);
	void ReceiveTick(float DeltaSeconds);
	void BlueprintNotifyHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator);
	void ReceiveBeginPlay();
	void HideMarkerPlacement_Event();
	void VehicleCreateOverlay(class UClass* WidgetClass);
	void DisplayAmmoBagOverlay(class ASQDeployableAmmoBag* ammobag, bool bCanPickup);
	void HideAmmoBagOverlay(class ASQDeployableAmmoBag* ammobag);
	void Force_Update_Zoom(float Zoom_Amount);
	void OnDied();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void BPOnSetHudWidgetsEnabled(bool bEnabled);
	void BPOnUsableVisible(class AActor* Actor, bool bIsVisible);
	void Show_End_Round_Widget(int Winning_Team, int Losing_Team, int Winning_Tickets, int Losing_Tickets);
	void Show_Scoreboard();
	void Hide_Scoreboard();
	void Toggle_Scoreboard();
	void Open_Voice_Model();
	void Show_3D_Marker(class ASQMapMarker* Marker);
	void Create_Radial_Menu(class UClass* Model, const struct FName& Close_Command, class UObject* Context);
	void Show_End_Scoreboard();
	void Clear_All_Floating_Widgets();
	void Toggle_Main_Menu();
	void Menu_Close(class UUMG_MenuBase_C* Menu);
	void Create_SL_Menu();
	void Destroy_SL_Menu();
	void Close_Radial();
	void Show_Leaderboard(bool Show);
	void Toggle_Leaderboard();
	void Menu_Toggle(bool Instant, class UUMG_MenuBase_C* In_Menu, bool Show_Mouse);
	void Player_Died();
	void Game_State_Became_Valid();
	void End_Match(int Winning_Team, int Losing_Team, int Winning_Tickets, int Loser_Tickets);
	void Close_Menus();
	void Destroy_Radial();
	void Zoom_In_Map();
	void Zoom_In_Map_Wheel(float Axis);
	void ShowMarkerOnHUD(const struct FSQMapMarkerVisualData& MapMarkerVisualData);
	void CreateMapMarker(const struct FSQMapMarkerVisualData& MapMarkerVisualData);
	void InvalidateMapMarker_Event();
	void DeleteMarkerOnHUD();
	void ExecuteUbergraph_BP_HUD(int EntryPoint);
	void OnMapCoreChanged__DelegateSignature();
	void HUD_Can_Start__DelegateSignature();
	void Menu_Opened__DelegateSignature(class UUMG_MenuBase_C* Menu);
	void Menu_Closed__DelegateSignature(class UUMG_MenuBase_C* Menu);
	void Clear_Widgets__DelegateSignature();
	void Zoom_Updated__DelegateSignature(float Zoom_Amount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
