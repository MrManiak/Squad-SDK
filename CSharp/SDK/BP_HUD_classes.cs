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

// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// 0x0180 (0x0B28 - 0x09A8)
public class ABP_HUD_C : ASQHUD
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x09A8, false); // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UUI_Events_Component_C>            _offUI_Events_Component                                        = new ExternalOffset<UUI_Events_Component_C>(0x09B0, true);    // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x09B8, true);           // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offSquadLeadSymbolTexture                                     = new ExternalOffset<UTexture2D>(0x09C0, true);                // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBaseRadialMenu_C>                 _offRadialMenu                                                 = new ExternalOffset<UBaseRadialMenu_C>(0x09C8, true);         // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDamageIndicatorOpacity                                     = new ExternalOffset<float>(0x09D0);                           // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDamageIndicatorFadeOutTime                                 = new ExternalOffset<float>(0x09D4);                           // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offHiddenWidgets                                              = new ExternalOffset<byte/*(bool)*/>(0x09D8);                  // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UMainMenuScreen_C>                 _offMainMenu_Widget                                            = new ExternalOffset<UMainMenuScreen_C>(0x09E0, true);         // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowingMainMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x09E8);                  // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offShowMarkerPlacementResetTimer                              = new ExternalOffset<FTimerHandle>(0x09F0, false);             // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offNewMarkerShowTime                                          = new ExternalOffset<float>(0x09F8);                           // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offHudMarkerScaleTime                                         = new ExternalOffset<float>(0x09FC);                           // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offHudMarkerSolidTime                                         = new ExternalOffset<float>(0x0A00);                           // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UUMG_Compass_C>                    _offCompassWidgetNewUMG                                        = new ExternalOffset<UUMG_Compass_C>(0x0A08, true);            // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMarkerStartFadeDistance                                    = new ExternalOffset<float>(0x0A10);                           // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMarkerEndFadeDistance                                      = new ExternalOffset<float>(0x0A14);                           // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMarkerScaleSizeMultiplier                                  = new ExternalOffset<float>(0x0A18);                           // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offWidgetTypesToHideOnMainMenu                                = new ExternalOffset<TArray<UClass>>(0x0A20, false);           // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<UUMG_MenuBase_C>                   _offDeployment                                                 = new ExternalOffset<UUMG_MenuBase_C>(0x0A30, true);           // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UUMG_MenuBase_C>                   _offCommand                                                    = new ExternalOffset<UUMG_MenuBase_C>(0x0A38, true);           // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSQ_Base_HUD_Class                                          = new ExternalOffset<UClass>(0x0A40, true);                    // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UUMG_MenuBase_C>                   _offRoamingMap                                                 = new ExternalOffset<UUMG_MenuBase_C>(0x0A48, true);           // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpenMutex                                                  = new ExternalOffset<byte/*(bool)*/>(0x0A50);                  // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offZoom_Updated                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0A58, false); // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UW_SQMapCore_C>                    _offMapCore                                                    = new ExternalOffset<UW_SQMapCore_C>(0x0A68, true);            // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offCommand_Widget_Class                                       = new ExternalOffset<UClass>(0x0A70, true);                    // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offDeployment_Widget_Class                                    = new ExternalOffset<UClass>(0x0A78, true);                    // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offRoaming_Widget_Class                                       = new ExternalOffset<UClass>(0x0A80, true);                    // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UUMG_MenuBase_C>>           _offAll_Menus                                                  = new ExternalOffset<TArray<UUMG_MenuBase_C>>(0x0A88, false);  // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<ASQMapMarker>                      _offLast_HUD_Marker                                            = new ExternalOffset<ASQMapMarker>(0x0A98, true);              // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_WorldMarker_C>                  _offLast_Widget_Marker                                         = new ExternalOffset<UW_WorldMarker_C>(0x0AA0, true);          // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offClear_Widgets                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0AA8, false); // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<USQNotificationData>               _offNotification_Data                                          = new ExternalOffset<USQNotificationData>(0x0AB8, true);       // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offInteract_Widget_Class                                      = new ExternalOffset<UClass>(0x0AC0, true);                    // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQInteractableWidgetList>         _offInteract_Widget                                            = new ExternalOffset<USQInteractableWidgetList>(0x0AC8, true); // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offEnd_Round_Widget_Class                                     = new ExternalOffset<UClass>(0x0AD0, true);                    // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDataTable>                        _offData_Table_Modes                                           = new ExternalOffset<UDataTable>(0x0AD8, true);                // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offMenu_Closed                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0AE0, false); // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offMenu_Opened                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0AF0, false); // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offHUD_Can_Start                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0B00, false); // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UClass>                            _offDefault_Voice_Radial                                       = new ExternalOffset<UClass>(0x0B10, true);                    // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMapCoreChanged                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0B18, false); // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UUI_Events_Component_C                             UI_Events_Component                                            => _offUI_Events_Component.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public UTexture2D                                         SquadLeadSymbolTexture                                         => _offSquadLeadSymbolTexture.GetValue();
	public UBaseRadialMenu_C                                  RadialMenu                                                     => _offRadialMenu.GetValue();
	public float                                              DamageIndicatorOpacity                                         => _offDamageIndicatorOpacity.GetValue();
	public float                                              DamageIndicatorFadeOutTime                                     => _offDamageIndicatorFadeOutTime.GetValue();
	public byte/*(bool)*/                                     HiddenWidgets                                                  => _offHiddenWidgets.GetValue();
	public UMainMenuScreen_C                                  MainMenu_Widget                                                => _offMainMenu_Widget.GetValue();
	public byte/*(bool)*/                                     bShowingMainMenu                                               => _offbShowingMainMenu.GetValue();
	public FTimerHandle                                       ShowMarkerPlacementResetTimer                                  => _offShowMarkerPlacementResetTimer.GetValue();
	public float                                              NewMarkerShowTime                                              => _offNewMarkerShowTime.GetValue();
	public float                                              HudMarkerScaleTime                                             => _offHudMarkerScaleTime.GetValue();
	public float                                              HudMarkerSolidTime                                             => _offHudMarkerSolidTime.GetValue();
	public UUMG_Compass_C                                     CompassWidgetNewUMG                                            => _offCompassWidgetNewUMG.GetValue();
	public float                                              MarkerStartFadeDistance                                        => _offMarkerStartFadeDistance.GetValue();
	public float                                              MarkerEndFadeDistance                                          => _offMarkerEndFadeDistance.GetValue();
	public float                                              MarkerScaleSizeMultiplier                                      => _offMarkerScaleSizeMultiplier.GetValue();
	public TArray<UClass>                                     WidgetTypesToHideOnMainMenu                                    => _offWidgetTypesToHideOnMainMenu.GetValue();
	public UUMG_MenuBase_C                                    Deployment                                                     => _offDeployment.GetValue();
	public UUMG_MenuBase_C                                    Command                                                        => _offCommand.GetValue();
	public UClass                                             SQ_Base_HUD_Class                                              => _offSQ_Base_HUD_Class.GetValue();
	public UUMG_MenuBase_C                                    RoamingMap                                                     => _offRoamingMap.GetValue();
	public byte/*(bool)*/                                     OpenMutex                                                      => _offOpenMutex.GetValue();
	public FScriptMulticastDelegate                           Zoom_Updated                                                   => _offZoom_Updated.GetValue();
	public UW_SQMapCore_C                                     MapCore                                                        => _offMapCore.GetValue();
	public UClass                                             Command_Widget_Class                                           => _offCommand_Widget_Class.GetValue();
	public UClass                                             Deployment_Widget_Class                                        => _offDeployment_Widget_Class.GetValue();
	public UClass                                             Roaming_Widget_Class                                           => _offRoaming_Widget_Class.GetValue();
	public TArray<UUMG_MenuBase_C>                            All_Menus                                                      => _offAll_Menus.GetValue();
	public ASQMapMarker                                       Last_HUD_Marker                                                => _offLast_HUD_Marker.GetValue();
	public UW_WorldMarker_C                                   Last_Widget_Marker                                             => _offLast_Widget_Marker.GetValue();
	public FScriptMulticastDelegate                           Clear_Widgets                                                  => _offClear_Widgets.GetValue();
	public USQNotificationData                                Notification_Data                                              => _offNotification_Data.GetValue();
	public UClass                                             Interact_Widget_Class                                          => _offInteract_Widget_Class.GetValue();
	public USQInteractableWidgetList                          Interact_Widget                                                => _offInteract_Widget.GetValue();
	public UClass                                             End_Round_Widget_Class                                         => _offEnd_Round_Widget_Class.GetValue();
	public UDataTable                                         Data_Table_Modes                                               => _offData_Table_Modes.GetValue();
	public FScriptMulticastDelegate                           Menu_Closed                                                    => _offMenu_Closed.GetValue();
	public FScriptMulticastDelegate                           Menu_Opened                                                    => _offMenu_Opened.GetValue();
	public FScriptMulticastDelegate                           HUD_Can_Start                                                  => _offHUD_Can_Start.GetValue();
	public UClass                                             Default_Voice_Radial                                           => _offDefault_Voice_Radial.GetValue();
	public FScriptMulticastDelegate                           OnMapCoreChanged                                               => _offOnMapCoreChanged.GetValue();
	#endregion


}


}