// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x01E8 (0x0B80 - 0x0998)
public class ABP_PlayerController_C : ASQPlayerController
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0998, false); // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UComp_VehicleBayHandler_C>         _offComp_VehicleBayHandler                                     = new ExternalOffset<UComp_VehicleBayHandler_C>(0x09A0, true); // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UComp_ResourceControl_C>           _offComp_ResourceControl                                       = new ExternalOffset<UComp_ResourceControl_C>(0x09A8, true);   // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPostProcessComponent>             _offMapPostProcess                                             = new ExternalOffset<UPostProcessComponent>(0x09B0, true);     // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPostProcessComponent>             _offUIBlurPostProcess                                          = new ExternalOffset<UPostProcessComponent>(0x09B8, true);     // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTraceInterestRadius                                        = new ExternalOffset<float>(0x09C0);                           // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<ASQSoldier>>                _offPawnsWithinRadius                                          = new ExternalOffset<TArray<ASQSoldier>>(0x09C8, false);       // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<FName>                             _offRoleCategory                                               = new ExternalOffset<FName>(0x09D8, false);                    // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offInvalidPlacementColor                                      = new ExternalOffset<FLinearColor>(0x09E0, false);             // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offPawnHidden                                                 = new ExternalOffset<byte/*(bool)*/>(0x09F0);                  // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTransform>                        _offSavedActorTransform                                        = new ExternalOffset<FTransform>(0x0A00, false);               // 0x0A00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offTimerCheckValidGhost                                       = new ExternalOffset<FTimerHandle>(0x0A30, false);             // 0x0A30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPhysicsHandleComponent>           _offDraggingPhysicsHandle                                      = new ExternalOffset<UPhysicsHandleComponent>(0x0A38, true);   // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapWidgetMapMarkerSelectable>   _offLastSQMarker                                               = new ExternalOffset<USQMapWidgetMapMarkerSelectable>(0x0A40, true); // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Spot_Markers                                           = new ExternalOffset<int>(0x0A48);                             // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Action_Markers                                         = new ExternalOffset<int>(0x0A4C);                             // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_POI_Markers                                            = new ExternalOffset<int>(0x0A50);                             // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Fireteam_Markers                                       = new ExternalOffset<int>(0x0A54);                             // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Request_Markers                                        = new ExternalOffset<int>(0x0A58);                             // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offFireteamMarkers                                            = new ExternalOffset<TArray<UClass>>(0x0A60, false);           // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offOpened_Chat                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0A70, false); // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<ABP_MapMarker_CommandMaster_C>     _offLast_Command_Request_Marker                                = new ExternalOffset<ABP_MapMarker_CommandMaster_C>(0x0A80, true); // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Command_Spot_Markers                                   = new ExternalOffset<int>(0x0A88);                             // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMax_Command_Request_Markers                                = new ExternalOffset<int>(0x0A8C);                             // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<ABP_MapMarker_DirectorMaster_C>> _offDirector_Markers                                           = new ExternalOffset<TArray<ABP_MapMarker_DirectorMaster_C>>(0x0A90, false); // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<int>                               _offMax_Director_Markers                                       = new ExternalOffset<int>(0x0AA0);                             // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offMarker_Created                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0AA8, false); // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowAdminCam                                             = new ExternalOffset<byte/*(bool)*/>(0x0AB8);                  // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offOut_of_Bounds_Timer                                        = new ExternalOffset<FTimerHandle>(0x0AC0, false);             // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offCommand_Action_Conditions                                  = new ExternalOffset<UClass>(0x0AC8, true);                    // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLast_Command_Request_Time                                  = new ExternalOffset<float>(0x0AD0);                           // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCommand_Request_Interval                                   = new ExternalOffset<float>(0x0AD4);                           // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_MapMarker_Selectable_C>        _offSelectedMapMarker                                          = new ExternalOffset<UBP_MapMarker_Selectable_C>(0x0AD8, true); // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//	private TMap<class UClass*, class USQMapMarkerDataAsset*> _offSL_TraceMarkerMapping                                      = new ExternalOffset<TMap<USQMapMarkerDataAsset>>(0x0AE0, false); // 0x0AE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
//	private TMap<class UClass*, class USQMapMarkerDataAsset*> _offFTL_TraceMarkerMapping                                     = new ExternalOffset<TMap<USQMapMarkerDataAsset>>(0x0B30, false); // 0x0B30(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UComp_VehicleBayHandler_C                          Comp_VehicleBayHandler                                         => _offComp_VehicleBayHandler.GetValue();
	public UComp_ResourceControl_C                            Comp_ResourceControl                                           => _offComp_ResourceControl.GetValue();
	public UPostProcessComponent                              MapPostProcess                                                 => _offMapPostProcess.GetValue();
	public UPostProcessComponent                              UIBlurPostProcess                                              => _offUIBlurPostProcess.GetValue();
	public float                                              TraceInterestRadius                                            => _offTraceInterestRadius.GetValue();
	public TArray<ASQSoldier>                                 PawnsWithinRadius                                              => _offPawnsWithinRadius.GetValue();
	public FName                                              RoleCategory                                                   => _offRoleCategory.GetValue();
	public FLinearColor                                       InvalidPlacementColor                                          => _offInvalidPlacementColor.GetValue();
	public byte/*(bool)*/                                     PawnHidden                                                     => _offPawnHidden.GetValue();
	public FTransform                                         SavedActorTransform                                            => _offSavedActorTransform.GetValue();
	public FTimerHandle                                       TimerCheckValidGhost                                           => _offTimerCheckValidGhost.GetValue();
	public UPhysicsHandleComponent                            DraggingPhysicsHandle                                          => _offDraggingPhysicsHandle.GetValue();
	public USQMapWidgetMapMarkerSelectable                    LastSQMarker                                                   => _offLastSQMarker.GetValue();
	public int                                                Max_Spot_Markers                                               => _offMax_Spot_Markers.GetValue();
	public int                                                Max_Action_Markers                                             => _offMax_Action_Markers.GetValue();
	public int                                                Max_POI_Markers                                                => _offMax_POI_Markers.GetValue();
	public int                                                Max_Fireteam_Markers                                           => _offMax_Fireteam_Markers.GetValue();
	public int                                                Max_Request_Markers                                            => _offMax_Request_Markers.GetValue();
	public TArray<UClass>                                     FireteamMarkers                                                => _offFireteamMarkers.GetValue();
	public FScriptMulticastDelegate                           Opened_Chat                                                    => _offOpened_Chat.GetValue();
	public ABP_MapMarker_CommandMaster_C                      Last_Command_Request_Marker                                    => _offLast_Command_Request_Marker.GetValue();
	public int                                                Max_Command_Spot_Markers                                       => _offMax_Command_Spot_Markers.GetValue();
	public int                                                Max_Command_Request_Markers                                    => _offMax_Command_Request_Markers.GetValue();
	public TArray<ABP_MapMarker_DirectorMaster_C>             Director_Markers                                               => _offDirector_Markers.GetValue();
	public int                                                Max_Director_Markers                                           => _offMax_Director_Markers.GetValue();
	public FScriptMulticastDelegate                           Marker_Created                                                 => _offMarker_Created.GetValue();
	public byte/*(bool)*/                                     bAllowAdminCam                                                 => _offbAllowAdminCam.GetValue();
	public FTimerHandle                                       Out_of_Bounds_Timer                                            => _offOut_of_Bounds_Timer.GetValue();
	public UClass                                             Command_Action_Conditions                                      => _offCommand_Action_Conditions.GetValue();
	public float                                              Last_Command_Request_Time                                      => _offLast_Command_Request_Time.GetValue();
	public float                                              Command_Request_Interval                                       => _offCommand_Request_Interval.GetValue();
	public UBP_MapMarker_Selectable_C                         SelectedMapMarker                                              => _offSelectedMapMarker.GetValue();
	#endregion


}


}