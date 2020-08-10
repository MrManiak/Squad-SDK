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

// WidgetBlueprintGeneratedClass UMG_BaseHUD.UMG_BaseHUD_C
// 0x0118 (0x03A8 - 0x0290)
public class UUMG_BaseHUD_C : USQBaseHudWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0290, false); // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UAmmoWidget_C>                     _offAmmoWidgetNew                                              = new ExternalOffset<UAmmoWidget_C>(0x0298, true);             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_Main                                           = new ExternalOffset<UCanvasPanel>(0x02A0, true);              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCaptureZoneStatusWidget_C>        _offCaptureZoneStatusWidget                                    = new ExternalOffset<UCaptureZoneStatusWidget_C>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UDebugScreenDot_C>                 _offDebugScreenDot                                             = new ExternalOffset<UDebugScreenDot_C>(0x02B0, true);         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UFOBStatusWidget_C>                _offFOBStatusWidgetNew                                         = new ExternalOffset<UFOBStatusWidget_C>(0x02B8, true);        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTravelQueueWidgetSmall_C>         _offTravelQueueWidgetSmall                                     = new ExternalOffset<UTravelQueueWidgetSmall_C>(0x02C0, true); // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_AmmoBagCounter_C>             _offUMG_AmmoBagCounter                                         = new ExternalOffset<UUMG_AmmoBagCounter_C>(0x02C8, true);     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_Compass_C>                    _offUMG_Compass                                                = new ExternalOffset<UUMG_Compass_C>(0x02D0, true);            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_NameTag_C>                    _offUMG_NameTag_94                                             = new ExternalOffset<UUMG_NameTag_C>(0x02D8, true);            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_NameTag_C>                    _offUMG_NameTagSL_120                                          = new ExternalOffset<UUMG_NameTag_C>(0x02E0, true);            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_SeatProgress_C>               _offUMG_ProgressBar                                            = new ExternalOffset<UUMG_SeatProgress_C>(0x02E8, true);       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_SightRange_C>                 _offUMG_SightRange                                             = new ExternalOffset<UUMG_SightRange_C>(0x02F0, true);         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_StagingTimerText_C>           _offUMG_StagingTimerText                                       = new ExternalOffset<UUMG_StagingTimerText_C>(0x02F8, true);   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_StaminaWidget_C>              _offUMG_StaminaWidget                                          = new ExternalOffset<UUMG_StaminaWidget_C>(0x0300, true);      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_StanceState_C>                _offUMG_StanceState                                            = new ExternalOffset<UUMG_StanceState_C>(0x0308, true);        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleSpeedo_C>              _offUMG_VehicleStats_194                                       = new ExternalOffset<UUMG_VehicleSpeedo_C>(0x0310, true);      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_Inventory_C>                  _offUMGInventory                                               = new ExternalOffset<UUMG_Inventory_C>(0x0318, true);          // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ChatBoxBaseHUD_C>               _offW_ChatBoxBaseHUD                                           = new ExternalOffset<UW_ChatBoxBaseHUD_C>(0x0320, true);       // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_DestructionObjectiveEvent_C>    _offW_DestructionObjectiveEvent                                = new ExternalOffset<UW_DestructionObjectiveEvent_C>(0x0328, true); // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_FlagCapturedEvent_C>            _offW_FlagCapturedEvent                                        = new ExternalOffset<UW_FlagCapturedEvent_C>(0x0330, true);    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_HelicopterStatus_C>             _offW_HelicopterStatus                                         = new ExternalOffset<UW_HelicopterStatus_C>(0x0338, true);     // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_InteractableItem_SelfHeal_C>    _offW_InteractableItem_SelfHeal                                = new ExternalOffset<UW_InteractableItem_SelfHeal_C>(0x0340, true); // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Medic_GiveUp_C>                 _offW_Medic_GiveUp                                             = new ExternalOffset<UW_Medic_GiveUp_C>(0x0348, true);         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_OutOfBounds_C>                  _offW_OutOfBounds                                              = new ExternalOffset<UW_OutOfBounds_C>(0x0350, true);          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_PacketLossIndicator_C>          _offW_PacketLossIndicator                                      = new ExternalOffset<UW_PacketLossIndicator_C>(0x0358, true);  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_LandingCamUI_C>                 _offW_UH60M_LandingCamUI                                       = new ExternalOffset<UW_LandingCamUI_C>(0x0360, true);         // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Vehicle_Tutorial_C>             _offW_Vehicle_Tutorial                                         = new ExternalOffset<UW_Vehicle_Tutorial_C>(0x0368, true);     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VehicleSeatList_C>              _offW_VehicleSeatList                                          = new ExternalOffset<UW_VehicleSeatList_C>(0x0370, true);      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VehicleStatus_C>                _offW_VehicleStatus                                            = new ExternalOffset<UW_VehicleStatus_C>(0x0378, true);        // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VoipOwningPlayer_C>             _offW_VoipOwningPlayer_188                                     = new ExternalOffset<UW_VoipOwningPlayer_C>(0x0380, true);     // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_NotificationPanel_C>            _offNotification_Widget                                        = new ExternalOffset<UW_NotificationPanel_C>(0x0388, true);    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_VoipList_C>                     _offVoip_Widget                                                = new ExternalOffset<UW_VoipList_C>(0x0390, true);             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offHeal_Prompt_Class_Widget                                   = new ExternalOffset<UClass>(0x0398, true);                    // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_HealPrompt_C>                   _offHeal_Prompt_Widget                                         = new ExternalOffset<UW_HealPrompt_C>(0x03A0, true);           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UAmmoWidget_C                                      AmmoWidgetNew                                                  => _offAmmoWidgetNew.GetValue();
	public UCanvasPanel                                       CanvasPanel_Main                                               => _offCanvasPanel_Main.GetValue();
	public UCaptureZoneStatusWidget_C                         CaptureZoneStatusWidget                                        => _offCaptureZoneStatusWidget.GetValue();
	public UDebugScreenDot_C                                  DebugScreenDot                                                 => _offDebugScreenDot.GetValue();
	public UFOBStatusWidget_C                                 FOBStatusWidgetNew                                             => _offFOBStatusWidgetNew.GetValue();
	public UTravelQueueWidgetSmall_C                          TravelQueueWidgetSmall                                         => _offTravelQueueWidgetSmall.GetValue();
	public UUMG_AmmoBagCounter_C                              UMG_AmmoBagCounter                                             => _offUMG_AmmoBagCounter.GetValue();
	public UUMG_Compass_C                                     UMG_Compass                                                    => _offUMG_Compass.GetValue();
	public UUMG_NameTag_C                                     UMG_NameTag_94                                                 => _offUMG_NameTag_94.GetValue();
	public UUMG_NameTag_C                                     UMG_NameTagSL_120                                              => _offUMG_NameTagSL_120.GetValue();
	public UUMG_SeatProgress_C                                UMG_ProgressBar                                                => _offUMG_ProgressBar.GetValue();
	public UUMG_SightRange_C                                  UMG_SightRange                                                 => _offUMG_SightRange.GetValue();
	public UUMG_StagingTimerText_C                            UMG_StagingTimerText                                           => _offUMG_StagingTimerText.GetValue();
	public UUMG_StaminaWidget_C                               UMG_StaminaWidget                                              => _offUMG_StaminaWidget.GetValue();
	public UUMG_StanceState_C                                 UMG_StanceState                                                => _offUMG_StanceState.GetValue();
	public UUMG_VehicleSpeedo_C                               UMG_VehicleStats_194                                           => _offUMG_VehicleStats_194.GetValue();
	public UUMG_Inventory_C                                   UMGInventory                                                   => _offUMGInventory.GetValue();
	public UW_ChatBoxBaseHUD_C                                W_ChatBoxBaseHUD                                               => _offW_ChatBoxBaseHUD.GetValue();
	public UW_DestructionObjectiveEvent_C                     W_DestructionObjectiveEvent                                    => _offW_DestructionObjectiveEvent.GetValue();
	public UW_FlagCapturedEvent_C                             W_FlagCapturedEvent                                            => _offW_FlagCapturedEvent.GetValue();
	public UW_HelicopterStatus_C                              W_HelicopterStatus                                             => _offW_HelicopterStatus.GetValue();
	public UW_InteractableItem_SelfHeal_C                     W_InteractableItem_SelfHeal                                    => _offW_InteractableItem_SelfHeal.GetValue();
	public UW_Medic_GiveUp_C                                  W_Medic_GiveUp                                                 => _offW_Medic_GiveUp.GetValue();
	public UW_OutOfBounds_C                                   W_OutOfBounds                                                  => _offW_OutOfBounds.GetValue();
	public UW_PacketLossIndicator_C                           W_PacketLossIndicator                                          => _offW_PacketLossIndicator.GetValue();
	public UW_LandingCamUI_C                                  W_UH60M_LandingCamUI                                           => _offW_UH60M_LandingCamUI.GetValue();
	public UW_Vehicle_Tutorial_C                              W_Vehicle_Tutorial                                             => _offW_Vehicle_Tutorial.GetValue();
	public UW_VehicleSeatList_C                               W_VehicleSeatList                                              => _offW_VehicleSeatList.GetValue();
	public UW_VehicleStatus_C                                 W_VehicleStatus                                                => _offW_VehicleStatus.GetValue();
	public UW_VoipOwningPlayer_C                              W_VoipOwningPlayer_188                                         => _offW_VoipOwningPlayer_188.GetValue();
	public UW_NotificationPanel_C                             Notification_Widget                                            => _offNotification_Widget.GetValue();
	public UW_VoipList_C                                      Voip_Widget                                                    => _offVoip_Widget.GetValue();
	public UClass                                             Heal_Prompt_Class_Widget                                       => _offHeal_Prompt_Class_Widget.GetValue();
	public UW_HealPrompt_C                                    Heal_Prompt_Widget                                             => _offHeal_Prompt_Widget.GetValue();
	#endregion


}


}