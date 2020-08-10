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

// WidgetBlueprintGeneratedClass W_Vehicle_Tutorial.W_Vehicle_Tutorial_C
// 0x0130 (0x0310 - 0x01E0)
public class UW_Vehicle_Tutorial_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UHorizontalBox>                    _offCockpitZoom                                                = new ExternalOffset<UHorizontalBox>(0x0238, true);            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offCollective                                                 = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offDesignateBox                                               = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFocusBox                                                   = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offLandingCam                                                 = new ExternalOffset<UHorizontalBox>(0x0258, true);            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offSmokeBox                                                   = new ExternalOffset<UHorizontalBox>(0x0260, true);            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offStabiliseBox                                               = new ExternalOffset<UHorizontalBox>(0x0268, true);            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Engine_State                                            = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Keys                                                    = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offToggleEngineBox                                            = new ExternalOffset<UHorizontalBox>(0x0280, true);            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offViewDesignatedBox                                          = new ExternalOffset<UHorizontalBox>(0x0288, true);            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem                                         = new ExternalOffset<UW_ParseKeybindItem_C>(0x0290, true);     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_2                                       = new ExternalOffset<UW_ParseKeybindItem_C>(0x0298, true);     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_3                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02A0, true);     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_4                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02A8, true);     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_6                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02B0, true);     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_7                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02B8, true);     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_8                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02C0, true);     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_9                                     = new ExternalOffset<UW_ParseKeybindItem_C>(0x02C8, true);     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_10                                    = new ExternalOffset<UW_ParseKeybindItem_C>(0x02D0, true);     // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_11                                    = new ExternalOffset<UW_ParseKeybindItem_C>(0x02D8, true);     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ParseKeybindItem_C>             _offW_ParseKeybindItem_C_12                                    = new ExternalOffset<UW_ParseKeybindItem_C>(0x02E0, true);     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offZoomBox                                                    = new ExternalOffset<UHorizontalBox>(0x02E8, true);            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offZoomwhileADSBox                                            = new ExternalOffset<UHorizontalBox>(0x02F0, true);            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offPC                                                         = new ExternalOffset<ASQPlayerController>(0x02F8, true);       // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicle>                        _offMy_Vehicle                                                 = new ExternalOffset<ASQVehicle>(0x0300, true);                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_GenericDeployableTripodVehicle_C> _offEmplacedTripodRef                                          = new ExternalOffset<ABP_GenericDeployableTripodVehicle_C>(0x0308, true); // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UHorizontalBox                                     CockpitZoom                                                    => _offCockpitZoom.GetValue();
	public UHorizontalBox                                     Collective                                                     => _offCollective.GetValue();
	public UHorizontalBox                                     DesignateBox                                                   => _offDesignateBox.GetValue();
	public UHorizontalBox                                     FocusBox                                                       => _offFocusBox.GetValue();
	public UHorizontalBox                                     LandingCam                                                     => _offLandingCam.GetValue();
	public UHorizontalBox                                     SmokeBox                                                       => _offSmokeBox.GetValue();
	public UHorizontalBox                                     StabiliseBox                                                   => _offStabiliseBox.GetValue();
	public UTextBlock                                         TB_Engine_State                                                => _offTB_Engine_State.GetValue();
	public UTextBlock                                         TB_Keys                                                        => _offTB_Keys.GetValue();
	public UHorizontalBox                                     ToggleEngineBox                                                => _offToggleEngineBox.GetValue();
	public UHorizontalBox                                     ViewDesignatedBox                                              => _offViewDesignatedBox.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem                                             => _offW_ParseKeybindItem.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_2                                           => _offW_ParseKeybindItem_2.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_3                                         => _offW_ParseKeybindItem_C_3.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_4                                         => _offW_ParseKeybindItem_C_4.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_6                                         => _offW_ParseKeybindItem_C_6.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_7                                         => _offW_ParseKeybindItem_C_7.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_8                                         => _offW_ParseKeybindItem_C_8.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_9                                         => _offW_ParseKeybindItem_C_9.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_10                                        => _offW_ParseKeybindItem_C_10.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_11                                        => _offW_ParseKeybindItem_C_11.GetValue();
	public UW_ParseKeybindItem_C                              W_ParseKeybindItem_C_12                                        => _offW_ParseKeybindItem_C_12.GetValue();
	public UHorizontalBox                                     ZoomBox                                                        => _offZoomBox.GetValue();
	public UHorizontalBox                                     ZoomwhileADSBox                                                => _offZoomwhileADSBox.GetValue();
	public ASQPlayerController                                PC                                                             => _offPC.GetValue();
	public ASQVehicle                                         My_Vehicle                                                     => _offMy_Vehicle.GetValue();
	public ABP_GenericDeployableTripodVehicle_C               EmplacedTripodRef                                              => _offEmplacedTripodRef.GetValue();
	#endregion


}


}