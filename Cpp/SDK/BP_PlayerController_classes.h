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

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x01E8 (FullSize[0x0B90] - InheritedSize[0x09A8])
class ABP_PlayerController_C : public ASQPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComp_VehicleBayHandler_C*                   Comp_VehicleBayHandler;                                    // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_ResourceControl_C*                     Comp_ResourceControl;                                      // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       MapPostProcess;                                            // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       UIBlurPostProcess;                                         // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TraceInterestRadius;                                       // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RK12[0x4];                                     // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASQSoldier*>                          PawnsWithinRadius;                                         // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       RoleCategory;                                              // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InvalidPlacementColor;                                     // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PawnHidden;                                                // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8PL6[0xF];                                     // 0x0A01(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SavedActorTransform;                                       // 0x0A10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                                TimerCheckValidGhost;                                      // 0x0A40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPhysicsHandleComponent*                     DraggingPhysicsHandle;                                     // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQMapWidgetMapMarkerSelectable*             LastSQMarker;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Spot_Markers;                                          // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Action_Markers;                                        // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_POI_Markers;                                           // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Fireteam_Markers;                                      // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Request_Markers;                                       // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CWI0[0x4];                                     // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              FireteamMarkers;                                           // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Opened_Chat;                                               // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_MapMarker_CommandMaster_C*               Last_Command_Request_Marker;                               // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Command_Spot_Markers;                                  // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Command_Request_Markers;                               // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MapMarker_DirectorMaster_C*>      Director_Markers;                                          // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Max_Director_Markers;                                      // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DM7Y[0x4];                                     // 0x0AB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Marker_Created;                                            // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bAllowAdminCam;                                            // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VLGF[0x7];                                     // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Out_of_Bounds_Timer;                                       // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Command_Action_Conditions;                                 // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Last_Command_Request_Time;                                 // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Command_Request_Interval;                                  // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MapMarker_Selectable_C*                  SelectedMapMarker;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class USQMapMarkerDataAsset*>  SL_TraceMarkerMapping;                                     // 0x0AF0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class USQMapMarkerDataAsset*>  FTL_TraceMarkerMapping;                                    // 0x0B40(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}



	void bCanRemoveMapMarkerNew(class UBP_MapMarker_Selectable_C* Map_Marker, bool* Can_Remove);
	void Get_Command_Request_Available(bool* Available, float* Remaining_Time);
	void Get_Command_Action_Condition(class UClass** Condition_Class);
	void Get_Last_Selected_Marker(class USQMapWidgetMapMarkerSelectable** Marker);
	void bCan_Remove_Marker(bool* Can_Remove);
	void bCan_Place_Marker(bool* Can_Place);
	void CanOpenRadialMenu(bool* CanOpenRadialMenu);
	void Set_Out_of_Bounds_Notification(bool Show);
	void PossessAdminCam();
	void Get_Deployable(class UClass** Deployable);
	void Create_Director_Marker(class UClass* Action, const struct FTransform& Transform, float distance, int Squad);
	void Create_Command_Request(class UClass* Action, const struct FTransform& Transform, float distance);
	void Remove_Last_Command_Request_Marker();
	void Try_to_Open_Menu();
	void Cancel_Spawn();
	void Force_Show_Spawns_on_Map();
	void Remove_Fireteam_Markers(bool bAction);
	void MouseWheelZoomMapAction(float MouseWheelAxis);
	void Can_Place_Marker(bool* Valid);
	void Can_Remove_Marker();
	void CommandKeyAction();
	void Leave_Menu();
	void ClearFiring();
	void ManageMarkers(class ASQMapMarker* NewMarker);
	void TraceMarkerLocation(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* In_Marker, bool Hotkeyed, bool Emote, class UClass* MarkerClass);
	bool IsSoldierInAVehicle();
	void ZoomKeyAction();
	void RoamingMapKeyAction();
	void DeploymentKeyAction();
	bool OnAltFireWeaponOverride();
	bool OnFireWeaponOverride();
	void OnRep_Current_Kit();
	void HideGameMenus();
	void InpActEvt_InGameMenu_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SpawnMenu_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Map_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_ToggleScoreboard_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Shift_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_CommandMenu_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_CommandMenu_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MapZoom_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_CommandMap_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_ChatToAll_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_ChatToSquad_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_ChatToTeam_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VehicleToggleCamera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BlueprintOnMatchEnded(int WinningTeam, int LosingTeam, int WinnerTickets, int LoserTickets);
	void StopShowingTMenu();
	void BlueprintPlayerSpawned();
	void BlueprintPlayerDied();
	void ServerEnableCamera();
	void RequestPlaceMarker(class UClass* MarkerClass, const struct FVector& Location, int FireTeamId, bool Emote);
	void ServerHidePawn();
	void RequestRemoveMarker(class USQMapItemComponent* MarkerItem);
	void RemoveLastSelectedMarker();
	void BPTraceMarkerLocation(class UClass* MarkerClass, const struct FVector& Start, const struct FVector& End);
	void SERVER_Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref);
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void Client_Notification(const struct FText& Text, ESQNotificationTypes Type, class UTexture2D* Custom_Icon);
	void Request_Place_Command_Map_Marker(class UClass* Action, const struct FTransform& T, float distance);
	void Request_Place_Director_Marker(class UClass* Action, const struct FTransform& T, float distance, int Squad);
	void Server_Change_Role(class UObject* Context, float AmmoRequired, class USQRoleSettings* NewRole, bool bGivePartialAmmo);
	void Trace_Marker(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* Marker, bool Hotkey, bool Emote, class UClass* MarkerClass);
	void Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref);
	void Change_Role_from_RearmSource(class UObject* Context, float Ammo, class USQRoleSettings* Role, bool Partial_Ammo);
	void Clear_Selected_Marker();
	void SetAllowAdminCam(bool bAllowAdminCam);
	void Play_Emote(ESQEmotes Emote, const struct FName& Name);
	void OnOutOfMapBoundsChanged(float KillTimestamp, bool bIsOutOfBounds);
	void OutOfBoundsTimerCheck();
	void Request_Map_Marker(int Squad_ID, ESQTeam Team_ID, int Fire_Team_ID, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& DistanceRotation, class USQMapMarkerDataAsset* Map_Marker_Data);
	void Request_Marker(class UClass* Marker_Class, const struct FVector& Location, int Fire_Team_ID, bool Emote);
	void Request_Director_Marker(class UClass* Director_Marker, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, float distance, int Squad_ID);
	void Request_Command_Marker(class UClass* Command_Marker, const struct FTransform& Transform, float distance);
	void Remove_Selected_Marker();
	void Accept_Deny_Command_Request(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted);
	void Server_Accept_Deny_Command(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted);
	void Set_Last_Command_Request_Time();
	void Server_Remove_Map_Marker(unsigned char MapMarkerID);
	void Remove_Map_Marker_New(unsigned char MapMarkerID);
	void PickUpRally(class ABP_SquadRallyPoint_C* Rally);
	void ExecuteUbergraph_BP_PlayerController(int EntryPoint);
	void Marker_Created__DelegateSignature(int Squad_ID, class ASQMapMarker* Marker);
	void Opened_Chat__DelegateSignature(ESQChat Channel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
