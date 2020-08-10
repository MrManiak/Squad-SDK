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

// WidgetBlueprintGeneratedClass BaseRadialMenu.BaseRadialMenu_C
// 0x0190 (0x0370 - 0x01E0)
public class UBaseRadialMenu_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UNamedSlot>                        _offCenterSlot                                                 = new ExternalOffset<UNamedSlot>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offCursorRing                                                 = new ExternalOffset<UBorder>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offPanel                                                      = new ExternalOffset<UCanvasPanel>(0x0250, true);              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offRightClickTooltip                                          = new ExternalOffset<UOverlay>(0x0258, true);                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRingBG                                                     = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offRingWidgetsPanel                                           = new ExternalOffset<UCanvasPanel>(0x0268, true);              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_2                                                = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<USQRadialButton>>           _offOuterRingWidgets                                           = new ExternalOffset<TArray<USQRadialButton>>(0x0278, false);  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<USQRadialButton>                   _offCenter_Widget                                              = new ExternalOffset<USQRadialButton>(0x0288, true);           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxOuterDistance                                           = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offActiveOuterRingDistance                                    = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offInactiveOuterRingDistance                                  = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnOptionClicked                                            = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCenterClicked                                            = new ExternalOffset<FScriptMulticastDelegate>(0x02B0, false); // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FName>                             _offCloseMenuActionName                                        = new ExternalOffset<FName>(0x02C0, false);                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offInactive                                                   = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offRadialMenuModel                                            = new ExternalOffset<UClass>(0x02D0, true);                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UObject>                           _offContext                                                    = new ExternalOffset<UObject>(0x02D8, true);                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCurveFloat>                       _offRingScale                                                  = new ExternalOffset<UCurveFloat>(0x02E0, true);               // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxDistanceFromContext                                     = new ExternalOffset<float>(0x02E8);                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRadialSize                                                 = new ExternalOffset<float>(0x02EC);                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offHoverWidgetChanged                                         = new ExternalOffset<FScriptMulticastDelegate>(0x02F0, false); // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<USoundBase>                        _offMouseClickSoundCue                                         = new ExternalOffset<USoundBase>(0x0300, true);                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDesired_Angle                                              = new ExternalOffset<float>(0x0308);                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMouse_Speed_Threshold                                      = new ExternalOffset<float>(0x030C);                           // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offLastMousePos                                               = new ExternalOffset<FVector2D>(0x0310, false);                // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offLast_Hover_Index                                           = new ExternalOffset<int>(0x0318);                             // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offLast_Radial_Models                                         = new ExternalOffset<TArray<UClass>>(0x0320, false);           // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offCentre_Hover_Changed                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0330, false); // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offHovering_Centre                                            = new ExternalOffset<byte/*(bool)*/>(0x0340);                  // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRadialMenuDestroyed                                      = new ExternalOffset<FScriptMulticastDelegate>(0x0348, false); // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<UBP_RadialItemModel_C>>     _offOuterRingModels                                            = new ExternalOffset<TArray<UBP_RadialItemModel_C>>(0x0358, false); // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Open                                                    = new ExternalOffset<byte/*(bool)*/>(0x0368);                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offRadial_Centre_Hover_Division                               = new ExternalOffset<float>(0x036C);                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UNamedSlot                                         CenterSlot                                                     => _offCenterSlot.GetValue();
	public UBorder                                            CursorRing                                                     => _offCursorRing.GetValue();
	public UCanvasPanel                                       Panel                                                          => _offPanel.GetValue();
	public UOverlay                                           RightClickTooltip                                              => _offRightClickTooltip.GetValue();
	public UImage                                             RingBG                                                         => _offRingBG.GetValue();
	public UCanvasPanel                                       RingWidgetsPanel                                               => _offRingWidgetsPanel.GetValue();
	public UTextBlock                                         TextBlock_2                                                    => _offTextBlock_2.GetValue();
	public TArray<USQRadialButton>                            OuterRingWidgets                                               => _offOuterRingWidgets.GetValue();
	public USQRadialButton                                    Center_Widget                                                  => _offCenter_Widget.GetValue();
	public float                                              MaxOuterDistance                                               => _offMaxOuterDistance.GetValue();
	public float                                              ActiveOuterRingDistance                                        => _offActiveOuterRingDistance.GetValue();
	public float                                              InactiveOuterRingDistance                                      => _offInactiveOuterRingDistance.GetValue();
	public FScriptMulticastDelegate                           OnOptionClicked                                                => _offOnOptionClicked.GetValue();
	public FScriptMulticastDelegate                           OnCenterClicked                                                => _offOnCenterClicked.GetValue();
	public FName                                              CloseMenuActionName                                            => _offCloseMenuActionName.GetValue();
	public byte/*(bool)*/                                     Inactive                                                       => _offInactive.GetValue();
	public UClass                                             RadialMenuModel                                                => _offRadialMenuModel.GetValue();
	public UObject                                            Context                                                        => _offContext.GetValue();
	public UCurveFloat                                        RingScale                                                      => _offRingScale.GetValue();
	public float                                              MaxDistanceFromContext                                         => _offMaxDistanceFromContext.GetValue();
	public float                                              RadialSize                                                     => _offRadialSize.GetValue();
	public FScriptMulticastDelegate                           HoverWidgetChanged                                             => _offHoverWidgetChanged.GetValue();
	public USoundBase                                         MouseClickSoundCue                                             => _offMouseClickSoundCue.GetValue();
	public float                                              Desired_Angle                                                  => _offDesired_Angle.GetValue();
	public float                                              Mouse_Speed_Threshold                                          => _offMouse_Speed_Threshold.GetValue();
	public FVector2D                                          LastMousePos                                                   => _offLastMousePos.GetValue();
	public int                                                Last_Hover_Index                                               => _offLast_Hover_Index.GetValue();
	public TArray<UClass>                                     Last_Radial_Models                                             => _offLast_Radial_Models.GetValue();
	public FScriptMulticastDelegate                           Centre_Hover_Changed                                           => _offCentre_Hover_Changed.GetValue();
	public byte/*(bool)*/                                     Hovering_Centre                                                => _offHovering_Centre.GetValue();
	public FScriptMulticastDelegate                           OnRadialMenuDestroyed                                          => _offOnRadialMenuDestroyed.GetValue();
	public TArray<UBP_RadialItemModel_C>                      OuterRingModels                                                => _offOuterRingModels.GetValue();
	public byte/*(bool)*/                                     Is_Open                                                        => _offIs_Open.GetValue();
	public float                                              Radial_Centre_Hover_Division                                   => _offRadial_Centre_Hover_Division.GetValue();
	#endregion


}


}