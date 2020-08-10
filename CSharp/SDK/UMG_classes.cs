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

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
public class UVisual : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.Widget
// 0x00E0 (0x0108 - 0x0028)
public class UWidget : UVisual
{
	#region Offsets
	private ExternalOffset<UPanelSlot>                        _offSlot                                                       = new ExternalOffset<UPanelSlot>(0x0028, true);                // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offbIsEnabledDelegate                                         = new ExternalOffset<FScriptDelegate>(0x0030, false);          // 0x0030(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offToolTipText                                                = new ExternalOffset<FText>(0x0040, false);                    // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offToolTipTextDelegate                                        = new ExternalOffset<FScriptDelegate>(0x0058, false);          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidget>                           _offToolTipWidget                                              = new ExternalOffset<UWidget>(0x0068, true);                   // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offToolTipWidgetDelegate                                      = new ExternalOffset<FScriptDelegate>(0x0070, false);          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offVisibilityDelegate                                         = new ExternalOffset<FScriptDelegate>(0x0080, false);          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetTransform>                  _offRenderTransform                                            = new ExternalOffset<FWidgetTransform>(0x0090, false);         // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offRenderTransformPivot                                       = new ExternalOffset<FVector2D>(0x00AC, false);                // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsVariable                                                = new ExternalOffset<char>(0x00B4, false);                     // 0x00B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCreatedByConstructionScript                               = new ExternalOffset<char>(0x00B4, false);                     // 0x00B4(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsEnabled                                                 = new ExternalOffset<char>(0x00B4, false);                     // 0x00B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_Cursor                                           = new ExternalOffset<char>(0x00B4, false);                     // 0x00B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateAccessibleWidgetData>        _offAccessibleWidgetData                                       = new ExternalOffset<USlateAccessibleWidgetData>(0x00B8, true); // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbIsVolatile                                                = new ExternalOffset<char>(0x00C0, false);                     // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EMouseCursor>>         _offcursor                                                     = new ExternalOffset<TEnumAsByte<EMouseCursor>>(0x00C1, false); // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EWidgetClipping>                   _offClipping                                                   = new ExternalOffset<EWidgetClipping>(0x00C2, false);          // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESlateVisibility>                  _offVisibility                                                 = new ExternalOffset<ESlateVisibility>(0x00C3, false);         // 0x00C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRenderOpacity                                              = new ExternalOffset<float>(0x00C4);                           // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidgetNavigation>                 _offNavigation                                                 = new ExternalOffset<UWidgetNavigation>(0x00C8, true);         // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EFlowDirectionPreference>          _offFlowDirectionPreference                                    = new ExternalOffset<EFlowDirectionPreference>(0x00D0, false); // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UPropertyBinding>>          _offNativeBindings                                             = new ExternalOffset<TArray<UPropertyBinding>>(0x00F8, false); // 0x00F8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UPanelSlot                                         Slot                                                           => _offSlot.GetValue();
	public FScriptDelegate                                    bIsEnabledDelegate                                             => _offbIsEnabledDelegate.GetValue();
	public FText                                              ToolTipText                                                    => _offToolTipText.GetValue();
	public FScriptDelegate                                    ToolTipTextDelegate                                            => _offToolTipTextDelegate.GetValue();
	public UWidget                                            ToolTipWidget                                                  => _offToolTipWidget.GetValue();
	public FScriptDelegate                                    ToolTipWidgetDelegate                                          => _offToolTipWidgetDelegate.GetValue();
	public FScriptDelegate                                    VisibilityDelegate                                             => _offVisibilityDelegate.GetValue();
	public FWidgetTransform                                   RenderTransform                                                => _offRenderTransform.GetValue();
	public FVector2D                                          RenderTransformPivot                                           => _offRenderTransformPivot.GetValue();
	public USlateAccessibleWidgetData                         AccessibleWidgetData                                           => _offAccessibleWidgetData.GetValue();
	public TEnumAsByte<EMouseCursor>                          cursor                                                         => _offcursor.GetValue();
	public EWidgetClipping                                    Clipping                                                       => _offClipping.GetValue();
	public ESlateVisibility                                   Visibility                                                     => _offVisibility.GetValue();
	public float                                              RenderOpacity                                                  => _offRenderOpacity.GetValue();
	public UWidgetNavigation                                  Navigation                                                     => _offNavigation.GetValue();
	public EFlowDirectionPreference                           FlowDirectionPreference                                        => _offFlowDirectionPreference.GetValue();
	public TArray<UPropertyBinding>                           NativeBindings                                                 => _offNativeBindings.GetValue();
	#endregion


}

// Class UMG.PanelWidget
// 0x0010 (0x0118 - 0x0108)
public class UPanelWidget : UWidget
{
	#region Offsets
	private ExternalOffset<TArray<UPanelSlot>>                _offSlots                                                      = new ExternalOffset<TArray<UPanelSlot>>(0x0108, false);       // 0x0108(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UPanelSlot>                                 Slots                                                          => _offSlots.GetValue();
	#endregion


}

// Class UMG.CanvasPanel
// 0x0008 (0x0120 - 0x0118)
public class UCanvasPanel : UPanelWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.UserWidget
// 0x00D8 (0x01E0 - 0x0108)
public class UUserWidget : UWidget
{
	#region Offsets
	private ExternalOffset<FLinearColor>                      _offColorAndOpacity                                            = new ExternalOffset<FLinearColor>(0x0110, false);             // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offColorAndOpacityDelegate                                    = new ExternalOffset<FScriptDelegate>(0x0120, false);          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x0130, false);              // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offForegroundColorDelegate                                    = new ExternalOffset<FScriptDelegate>(0x0158, false);          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0168, false);                  // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UUMGSequencePlayer>>        _offActiveSequencePlayers                                      = new ExternalOffset<TArray<UUMGSequencePlayer>>(0x0178, false); // 0x0178(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UUMGSequencePlayer>>        _offStoppedSequencePlayers                                     = new ExternalOffset<TArray<UUMGSequencePlayer>>(0x0188, false); // 0x0188(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FNamedSlotBinding>>         _offNamedSlotBindings                                          = new ExternalOffset<TArray<FNamedSlotBinding>>(0x0198, false); // 0x0198(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<UWidgetTree>                       _offWidgetTree                                                 = new ExternalOffset<UWidgetTree>(0x01A8, true);               // 0x01A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPriority                                                   = new ExternalOffset<int>(0x01B0);                             // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsKeyboardFocus                                     = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsFocusable                                               = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbStopAction                                                = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbHasScriptImplementedTick                                  = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbHasScriptImplementedPaint                                 = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCookedWidgetTree                                          = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EWidgetTickFrequency>              _offTickFrequency                                              = new ExternalOffset<EWidgetTickFrequency>(0x01C0, false);     // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UInputComponent>                   _offInputComponent                                             = new ExternalOffset<UInputComponent>(0x01C8, true);           // 0x01C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FAnimationEventBinding>>    _offAnimationCallbacks                                         = new ExternalOffset<TArray<FAnimationEventBinding>>(0x01D0, false); // 0x01D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FLinearColor                                       ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FScriptDelegate                                    ColorAndOpacityDelegate                                        => _offColorAndOpacityDelegate.GetValue();
	public FSlateColor                                        ForegroundColor                                                => _offForegroundColor.GetValue();
	public FScriptDelegate                                    ForegroundColorDelegate                                        => _offForegroundColorDelegate.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TArray<UUMGSequencePlayer>                         ActiveSequencePlayers                                          => _offActiveSequencePlayers.GetValue();
	public TArray<UUMGSequencePlayer>                         StoppedSequencePlayers                                         => _offStoppedSequencePlayers.GetValue();
	public TArray<FNamedSlotBinding>                          NamedSlotBindings                                              => _offNamedSlotBindings.GetValue();
	public UWidgetTree                                        WidgetTree                                                     => _offWidgetTree.GetValue();
	public int                                                Priority                                                       => _offPriority.GetValue();
	public EWidgetTickFrequency                               TickFrequency                                                  => _offTickFrequency.GetValue();
	public UInputComponent                                    InputComponent                                                 => _offInputComponent.GetValue();
	public TArray<FAnimationEventBinding>                     AnimationCallbacks                                             => _offAnimationCallbacks.GetValue();
	#endregion


}

// Class UMG.ContentWidget
// 0x0008 (0x0120 - 0x0118)
public class UContentWidget : UPanelWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.Button
// 0x02F8 (0x0418 - 0x0120)
public class UButton : UContentWidget
{
	#region Offsets
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0120, true);    // 0x0120(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FButtonStyle>                      _offWidgetStyle                                                = new ExternalOffset<FButtonStyle>(0x0128, false);             // 0x0128(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColorAndOpacity                                            = new ExternalOffset<FLinearColor>(0x03A0, false);             // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBackgroundColor                                            = new ExternalOffset<FLinearColor>(0x03B0, false);             // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EButtonClickMethod>>   _offClickMethod                                                = new ExternalOffset<TEnumAsByte<EButtonClickMethod>>(0x03C0, false); // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EButtonTouchMethod>>   _offTouchMethod                                                = new ExternalOffset<TEnumAsByte<EButtonTouchMethod>>(0x03C1, false); // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EButtonPressMethod>>   _offPressMethod                                                = new ExternalOffset<TEnumAsByte<EButtonPressMethod>>(0x03C2, false); // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsFocusable                                                = new ExternalOffset<byte/*(bool)*/>(0x03C3);                  // 0x03C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClicked                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x03C8, false); // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPressed                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x03D8, false); // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnReleased                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x03E8, false); // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHovered                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x03F8, false); // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUnhovered                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0408, false); // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public FButtonStyle                                       WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public FLinearColor                                       ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FLinearColor                                       BackgroundColor                                                => _offBackgroundColor.GetValue();
	public TEnumAsByte<EButtonClickMethod>                    ClickMethod                                                    => _offClickMethod.GetValue();
	public TEnumAsByte<EButtonTouchMethod>                    TouchMethod                                                    => _offTouchMethod.GetValue();
	public TEnumAsByte<EButtonPressMethod>                    PressMethod                                                    => _offPressMethod.GetValue();
	public byte/*(bool)*/                                     IsFocusable                                                    => _offIsFocusable.GetValue();
	public FScriptMulticastDelegate                           OnClicked                                                      => _offOnClicked.GetValue();
	public FScriptMulticastDelegate                           OnPressed                                                      => _offOnPressed.GetValue();
	public FScriptMulticastDelegate                           OnReleased                                                     => _offOnReleased.GetValue();
	public FScriptMulticastDelegate                           OnHovered                                                      => _offOnHovered.GetValue();
	public FScriptMulticastDelegate                           OnUnhovered                                                    => _offOnUnhovered.GetValue();
	#endregion


}

// Class UMG.Image
// 0x00CC (0x01D4 - 0x0108)
public class UImage : UWidget
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                       _offBrush                                                      = new ExternalOffset<FSlateBrush>(0x0108, false);              // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offBrushDelegate                                              = new ExternalOffset<FScriptDelegate>(0x0190, false);          // 0x0190(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColorAndOpacity                                            = new ExternalOffset<FLinearColor>(0x01A0, false);             // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offColorAndOpacityDelegate                                    = new ExternalOffset<FScriptDelegate>(0x01B0, false);          // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFlipForRightToLeftFlowDirection                           = new ExternalOffset<byte/*(bool)*/>(0x01C0);                  // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnMouseButtonDownEvent                                     = new ExternalOffset<FScriptDelegate>(0x01C4, false);          // 0x01C4(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                        Brush                                                          => _offBrush.GetValue();
	public FScriptDelegate                                    BrushDelegate                                                  => _offBrushDelegate.GetValue();
	public FLinearColor                                       ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FScriptDelegate                                    ColorAndOpacityDelegate                                        => _offColorAndOpacityDelegate.GetValue();
	public byte/*(bool)*/                                     bFlipForRightToLeftFlowDirection                               => _offbFlipForRightToLeftFlowDirection.GetValue();
	public FScriptDelegate                                    OnMouseButtonDownEvent                                         => _offOnMouseButtonDownEvent.GetValue();
	#endregion


}

// Class UMG.AsyncTaskDownloadImage
// 0x0028 (0x0050 - 0x0028)
public class UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFail                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFail                                                         => _offOnFail.GetValue();
	#endregion


}

// Class UMG.BackgroundBlur
// 0x00A8 (0x01C8 - 0x0120)
public class UBackgroundBlur : UContentWidget
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0120, false);                  // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0130, false); // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0131, false); // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbApplyAlphaToBlur                                          = new ExternalOffset<byte/*(bool)*/>(0x0132);                  // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offBlurStrength                                               = new ExternalOffset<float>(0x0134);                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbOverrideAutoRadiusCalculation                             = new ExternalOffset<byte/*(bool)*/>(0x0138);                  // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offBlurRadius                                                 = new ExternalOffset<int>(0x013C);                             // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offLowQualityFallbackBrush                                    = new ExternalOffset<FSlateBrush>(0x0140, false);              // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	public byte/*(bool)*/                                     bApplyAlphaToBlur                                              => _offbApplyAlphaToBlur.GetValue();
	public float                                              BlurStrength                                                   => _offBlurStrength.GetValue();
	public byte/*(bool)*/                                     bOverrideAutoRadiusCalculation                                 => _offbOverrideAutoRadiusCalculation.GetValue();
	public int                                                BlurRadius                                                     => _offBlurRadius.GetValue();
	public FSlateBrush                                        LowQualityFallbackBrush                                        => _offLowQualityFallbackBrush.GetValue();
	#endregion


}

// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
public class UPanelSlot : UVisual
{
	#region Offsets
	private ExternalOffset<UPanelWidget>                      _offParent                                                     = new ExternalOffset<UPanelWidget>(0x0028, true);              // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidget>                           _offContent                                                    = new ExternalOffset<UWidget>(0x0030, true);                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPanelWidget                                       Parent                                                         => _offParent.GetValue();
	public UWidget                                            Content                                                        => _offContent.GetValue();
	#endregion


}

// Class UMG.BackgroundBlurSlot
// 0x0012 (0x004A - 0x0038)
public class UBackgroundBlurSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.PropertyBinding
// 0x0040 (0x0068 - 0x0028)
public class UPropertyBinding : UObject
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<UObject>>           _offSourceObject                                               = new ExternalOffset<TWeakObjectPtr<UObject>>(0x0028, false);  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDynamicPropertyPath>              _offSourcePath                                                 = new ExternalOffset<FDynamicPropertyPath>(0x0030, false);     // 0x0030(0x0030) (NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offDestinationProperty                                        = new ExternalOffset<FName>(0x0060, false);                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TWeakObjectPtr<UObject>                            SourceObject                                                   => _offSourceObject.GetValue();
	public FDynamicPropertyPath                               SourcePath                                                     => _offSourcePath.GetValue();
	public FName                                              DestinationProperty                                            => _offDestinationProperty.GetValue();
	#endregion


}

// Class UMG.BoolBinding
// 0x0000 (0x0068 - 0x0068)
public class UBoolBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.Border
// 0x013C (0x025C - 0x0120)
public class UBorder : UContentWidget
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0120, false); // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0121, false); // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShowEffectWhenDisabled                                    = new ExternalOffset<char>(0x0122, false);                     // 0x0122(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offContentColorAndOpacity                                     = new ExternalOffset<FLinearColor>(0x0124, false);             // 0x0124(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offContentColorAndOpacityDelegate                             = new ExternalOffset<FScriptDelegate>(0x0134, false);          // 0x0134(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0144, false);                  // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offBackground                                                 = new ExternalOffset<FSlateBrush>(0x0158, false);              // 0x0158(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offBackgroundDelegate                                         = new ExternalOffset<FScriptDelegate>(0x01E0, false);          // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBrushColor                                                 = new ExternalOffset<FLinearColor>(0x01F0, false);             // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offBrushColorDelegate                                         = new ExternalOffset<FScriptDelegate>(0x0200, false);          // 0x0200(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offDesiredSizeScale                                           = new ExternalOffset<FVector2D>(0x0210, false);                // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFlipForRightToLeftFlowDirection                           = new ExternalOffset<byte/*(bool)*/>(0x0218);                  // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnMouseButtonDownEvent                                     = new ExternalOffset<FScriptDelegate>(0x021C, false);          // 0x021C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnMouseButtonUpEvent                                       = new ExternalOffset<FScriptDelegate>(0x022C, false);          // 0x022C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnMouseMoveEvent                                           = new ExternalOffset<FScriptDelegate>(0x023C, false);          // 0x023C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnMouseDoubleClickEvent                                    = new ExternalOffset<FScriptDelegate>(0x024C, false);          // 0x024C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	public FLinearColor                                       ContentColorAndOpacity                                         => _offContentColorAndOpacity.GetValue();
	public FScriptDelegate                                    ContentColorAndOpacityDelegate                                 => _offContentColorAndOpacityDelegate.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public FSlateBrush                                        Background                                                     => _offBackground.GetValue();
	public FScriptDelegate                                    BackgroundDelegate                                             => _offBackgroundDelegate.GetValue();
	public FLinearColor                                       BrushColor                                                     => _offBrushColor.GetValue();
	public FScriptDelegate                                    BrushColorDelegate                                             => _offBrushColorDelegate.GetValue();
	public FVector2D                                          DesiredSizeScale                                               => _offDesiredSizeScale.GetValue();
	public byte/*(bool)*/                                     bFlipForRightToLeftFlowDirection                               => _offbFlipForRightToLeftFlowDirection.GetValue();
	public FScriptDelegate                                    OnMouseButtonDownEvent                                         => _offOnMouseButtonDownEvent.GetValue();
	public FScriptDelegate                                    OnMouseButtonUpEvent                                           => _offOnMouseButtonUpEvent.GetValue();
	public FScriptDelegate                                    OnMouseMoveEvent                                               => _offOnMouseMoveEvent.GetValue();
	public FScriptDelegate                                    OnMouseDoubleClickEvent                                        => _offOnMouseDoubleClickEvent.GetValue();
	#endregion


}

// Class UMG.BorderSlot
// 0x0012 (0x004A - 0x0038)
public class UBorderSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.BrushBinding
// 0x0000 (0x0068 - 0x0068)
public class UBrushBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.ButtonSlot
// 0x0012 (0x004A - 0x0038)
public class UButtonSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.CanvasPanelSlot
// 0x0030 (0x0068 - 0x0038)
public class UCanvasPanelSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FAnchorData>                       _offLayoutData                                                 = new ExternalOffset<FAnchorData>(0x0038, false);              // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoSize                                                  = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offZOrder                                                     = new ExternalOffset<int>(0x0064);                             // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAnchorData                                        LayoutData                                                     => _offLayoutData.GetValue();
	public byte/*(bool)*/                                     bAutoSize                                                      => _offbAutoSize.GetValue();
	public int                                                ZOrder                                                         => _offZOrder.GetValue();
	#endregion


}

// Class UMG.CheckBox
// 0x0640 (0x0760 - 0x0120)
public class UCheckBox : UContentWidget
{
	#region Offsets
	private ExternalOffset<ECheckBoxState>                    _offCheckedState                                               = new ExternalOffset<ECheckBoxState>(0x0120, false);           // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offCheckedStateDelegate                                       = new ExternalOffset<FScriptDelegate>(0x0124, false);          // 0x0124(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FCheckBoxStyle>                    _offWidgetStyle                                                = new ExternalOffset<FCheckBoxStyle>(0x0138, false);           // 0x0138(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x06B8, true);    // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUncheckedImage                                             = new ExternalOffset<USlateBrushAsset>(0x06C0, true);          // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUncheckedHoveredImage                                      = new ExternalOffset<USlateBrushAsset>(0x06C8, true);          // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUncheckedPressedImage                                      = new ExternalOffset<USlateBrushAsset>(0x06D0, true);          // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offCheckedImage                                               = new ExternalOffset<USlateBrushAsset>(0x06D8, true);          // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offCheckedHoveredImage                                        = new ExternalOffset<USlateBrushAsset>(0x06E0, true);          // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offCheckedPressedImage                                        = new ExternalOffset<USlateBrushAsset>(0x06E8, true);          // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUndeterminedImage                                          = new ExternalOffset<USlateBrushAsset>(0x06F0, true);          // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUndeterminedHoveredImage                                   = new ExternalOffset<USlateBrushAsset>(0x06F8, true);          // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offUndeterminedPressedImage                                   = new ExternalOffset<USlateBrushAsset>(0x0700, true);          // 0x0700(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0708, false); // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x070C, false);                  // 0x070C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offBorderBackgroundColor                                      = new ExternalOffset<FSlateColor>(0x0720, false);              // 0x0720(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsFocusable                                                = new ExternalOffset<byte/*(bool)*/>(0x0748);                  // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCheckStateChanged                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0750, false); // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ECheckBoxState                                     CheckedState                                                   => _offCheckedState.GetValue();
	public FScriptDelegate                                    CheckedStateDelegate                                           => _offCheckedStateDelegate.GetValue();
	public FCheckBoxStyle                                     WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public USlateBrushAsset                                   UncheckedImage                                                 => _offUncheckedImage.GetValue();
	public USlateBrushAsset                                   UncheckedHoveredImage                                          => _offUncheckedHoveredImage.GetValue();
	public USlateBrushAsset                                   UncheckedPressedImage                                          => _offUncheckedPressedImage.GetValue();
	public USlateBrushAsset                                   CheckedImage                                                   => _offCheckedImage.GetValue();
	public USlateBrushAsset                                   CheckedHoveredImage                                            => _offCheckedHoveredImage.GetValue();
	public USlateBrushAsset                                   CheckedPressedImage                                            => _offCheckedPressedImage.GetValue();
	public USlateBrushAsset                                   UndeterminedImage                                              => _offUndeterminedImage.GetValue();
	public USlateBrushAsset                                   UndeterminedHoveredImage                                       => _offUndeterminedHoveredImage.GetValue();
	public USlateBrushAsset                                   UndeterminedPressedImage                                       => _offUndeterminedPressedImage.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public FSlateColor                                        BorderBackgroundColor                                          => _offBorderBackgroundColor.GetValue();
	public byte/*(bool)*/                                     IsFocusable                                                    => _offIsFocusable.GetValue();
	public FScriptMulticastDelegate                           OnCheckStateChanged                                            => _offOnCheckStateChanged.GetValue();
	#endregion


}

// Class UMG.CheckedStateBinding
// 0x0000 (0x0068 - 0x0068)
public class UCheckedStateBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.CircularThrobber
// 0x00A1 (0x01A9 - 0x0108)
public class UCircularThrobber : UWidget
{
	#region Offsets
	private ExternalOffset<int>                               _offNumberOfPieces                                             = new ExternalOffset<int>(0x0108);                             // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPeriod                                                     = new ExternalOffset<float>(0x010C);                           // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRadius                                                     = new ExternalOffset<float>(0x0110);                           // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offPieceImage                                                 = new ExternalOffset<USlateBrushAsset>(0x0118, true);          // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offImage                                                      = new ExternalOffset<FSlateBrush>(0x0120, false);              // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableRadius                                              = new ExternalOffset<byte/*(bool)*/>(0x01A8);                  // 0x01A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                NumberOfPieces                                                 => _offNumberOfPieces.GetValue();
	public float                                              Period                                                         => _offPeriod.GetValue();
	public float                                              Radius                                                         => _offRadius.GetValue();
	public USlateBrushAsset                                   PieceImage                                                     => _offPieceImage.GetValue();
	public FSlateBrush                                        Image                                                          => _offImage.GetValue();
	public byte/*(bool)*/                                     bEnableRadius                                                  => _offbEnableRadius.GetValue();
	#endregion


}

// Class UMG.ColorBinding
// 0x0000 (0x0068 - 0x0068)
public class UColorBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.ComboBox
// 0x0021 (0x0129 - 0x0108)
public class UComboBox : UWidget
{
	#region Offsets
	private ExternalOffset<TArray<UObject>>                   _offItems                                                      = new ExternalOffset<TArray<UObject>>(0x0108, false);          // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnGenerateWidgetEvent                                      = new ExternalOffset<FScriptDelegate>(0x0118, false);          // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsFocusable                                               = new ExternalOffset<byte/*(bool)*/>(0x0128);                  // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UObject>                                    Items                                                          => _offItems.GetValue();
	public FScriptDelegate                                    OnGenerateWidgetEvent                                          => _offOnGenerateWidgetEvent.GetValue();
	public byte/*(bool)*/                                     bIsFocusable                                                   => _offbIsFocusable.GetValue();
	#endregion


}

// Class UMG.ComboBoxString
// 0x0C88 (0x0D90 - 0x0108)
public class UComboBoxString : UWidget
{
	#region Offsets
	private ExternalOffset<TArray<FString>>                   _offDefaultOptions                                             = new ExternalOffset<TArray<FString>>(0x0108, false);          // 0x0108(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offSelectedOption                                             = new ExternalOffset<FString>(0x0118, false);                  // 0x0118(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FComboBoxStyle>                    _offWidgetStyle                                                = new ExternalOffset<FComboBoxStyle>(0x0128, false);           // 0x0128(0x03D8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTableRowStyle>                    _offItemStyle                                                  = new ExternalOffset<FTableRowStyle>(0x0500, false);           // 0x0500(0x07C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offContentPadding                                             = new ExternalOffset<FMargin>(0x0CC8, false);                  // 0x0CC8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxListHeight                                              = new ExternalOffset<float>(0x0CD8);                           // 0x0CD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offHasDownArrow                                               = new ExternalOffset<byte/*(bool)*/>(0x0CDC);                  // 0x0CDC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEnableGamepadNavigationMode                                = new ExternalOffset<byte/*(bool)*/>(0x0CDD);                  // 0x0CDD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0CE0, false);           // 0x0CE0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x0D30, false);              // 0x0D30(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsFocusable                                               = new ExternalOffset<byte/*(bool)*/>(0x0D58);                  // 0x0D58(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnGenerateWidgetEvent                                      = new ExternalOffset<FScriptDelegate>(0x0D5C, false);          // 0x0D5C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSelectionChanged                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0D70, false); // 0x0D70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnOpening                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0D80, false); // 0x0D80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FString>                                    DefaultOptions                                                 => _offDefaultOptions.GetValue();
	public FString                                            SelectedOption                                                 => _offSelectedOption.GetValue();
	public FComboBoxStyle                                     WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public FTableRowStyle                                     ItemStyle                                                      => _offItemStyle.GetValue();
	public FMargin                                            ContentPadding                                                 => _offContentPadding.GetValue();
	public float                                              MaxListHeight                                                  => _offMaxListHeight.GetValue();
	public byte/*(bool)*/                                     HasDownArrow                                                   => _offHasDownArrow.GetValue();
	public byte/*(bool)*/                                     EnableGamepadNavigationMode                                    => _offEnableGamepadNavigationMode.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FSlateColor                                        ForegroundColor                                                => _offForegroundColor.GetValue();
	public byte/*(bool)*/                                     bIsFocusable                                                   => _offbIsFocusable.GetValue();
	public FScriptDelegate                                    OnGenerateWidgetEvent                                          => _offOnGenerateWidgetEvent.GetValue();
	public FScriptMulticastDelegate                           OnSelectionChanged                                             => _offOnSelectionChanged.GetValue();
	public FScriptMulticastDelegate                           OnOpening                                                      => _offOnOpening.GetValue();
	#endregion


}

// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
public class UDragDropOperation : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offTag                                                        = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                           _offPayload                                                    = new ExternalOffset<UObject>(0x0038, true);                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidget>                           _offDefaultDragVisual                                          = new ExternalOffset<UWidget>(0x0040, true);                   // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDragPivot>                        _offPivot                                                      = new ExternalOffset<EDragPivot>(0x0048, false);               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offOffset                                                     = new ExternalOffset<FVector2D>(0x004C, false);                // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnDrop                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnDragCancelled                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnDragged                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0078, false); // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            Tag                                                            => _offTag.GetValue();
	public UObject                                            Payload                                                        => _offPayload.GetValue();
	public UWidget                                            DefaultDragVisual                                              => _offDefaultDragVisual.GetValue();
	public EDragPivot                                         Pivot                                                          => _offPivot.GetValue();
	public FVector2D                                          Offset                                                         => _offOffset.GetValue();
	public FScriptMulticastDelegate                           OnDrop                                                         => _offOnDrop.GetValue();
	public FScriptMulticastDelegate                           OnDragCancelled                                                => _offOnDragCancelled.GetValue();
	public FScriptMulticastDelegate                           OnDragged                                                      => _offOnDragged.GetValue();
	#endregion


}

// Class UMG.DynamicEntryBoxBase
// 0x00C0 (0x01C8 - 0x0108)
public class UDynamicEntryBoxBase : UWidget
{
	#region Offsets
	private ExternalOffset<EDynamicBoxType>                   _offEntryBoxType                                               = new ExternalOffset<EDynamicBoxType>(0x0108, false);          // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector2D>                         _offEntrySpacing                                               = new ExternalOffset<FVector2D>(0x010C, false);                // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FVector2D>>                 _offSpacingPattern                                             = new ExternalOffset<TArray<FVector2D>>(0x0118, false);        // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FSlateChildSize>                   _offEntrySizeRule                                              = new ExternalOffset<FSlateChildSize>(0x0128, false);          // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offEntryHorizontalAlignment                                   = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0130, false); // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offEntryVerticalAlignment                                     = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0131, false); // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxElementSize                                             = new ExternalOffset<int>(0x0134);                             // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FUserWidgetPool>                   _offEntryWidgetPool                                            = new ExternalOffset<FUserWidgetPool>(0x0148, false);          // 0x0148(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EDynamicBoxType                                    EntryBoxType                                                   => _offEntryBoxType.GetValue();
	public FVector2D                                          EntrySpacing                                                   => _offEntrySpacing.GetValue();
	public TArray<FVector2D>                                  SpacingPattern                                                 => _offSpacingPattern.GetValue();
	public FSlateChildSize                                    EntrySizeRule                                                  => _offEntrySizeRule.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment                                       => _offEntryHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment                                         => _offEntryVerticalAlignment.GetValue();
	public int                                                MaxElementSize                                                 => _offMaxElementSize.GetValue();
	public FUserWidgetPool                                    EntryWidgetPool                                                => _offEntryWidgetPool.GetValue();
	#endregion


}

// Class UMG.DynamicEntryBox
// 0x0008 (0x01D0 - 0x01C8)
public class UDynamicEntryBox : UDynamicEntryBoxBase
{
	#region Offsets
	private ExternalOffset<UClass>                            _offEntryWidgetClass                                           = new ExternalOffset<UClass>(0x01C8, true);                    // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UClass                                             EntryWidgetClass                                               => _offEntryWidgetClass.GetValue();
	#endregion


}

// Class UMG.EditableText
// 0x0338 (0x0440 - 0x0108)
public class UEditableText : UWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0108, false);                    // 0x0108(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offTextDelegate                                               = new ExternalOffset<FScriptDelegate>(0x0120, false);          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offHintText                                                   = new ExternalOffset<FText>(0x0130, false);                    // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offHintTextDelegate                                           = new ExternalOffset<FScriptDelegate>(0x0148, false);          // 0x0148(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FEditableTextStyle>                _offWidgetStyle                                                = new ExternalOffset<FEditableTextStyle>(0x0158, false);       // 0x0158(0x0218) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0370, true);    // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offBackgroundImageSelected                                    = new ExternalOffset<USlateBrushAsset>(0x0378, true);          // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offBackgroundImageComposing                                   = new ExternalOffset<USlateBrushAsset>(0x0380, true);          // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offCaretImage                                                 = new ExternalOffset<USlateBrushAsset>(0x0388, true);          // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0390, false);           // 0x0390(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offColorAndOpacity                                            = new ExternalOffset<FSlateColor>(0x03E0, false);              // 0x03E0(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsReadOnly                                                 = new ExternalOffset<byte/*(bool)*/>(0x0408);                  // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsPassword                                                 = new ExternalOffset<byte/*(bool)*/>(0x0409);                  // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinimumDesiredWidth                                        = new ExternalOffset<float>(0x040C);                           // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsCaretMovedWhenGainFocus                                  = new ExternalOffset<byte/*(bool)*/>(0x0410);                  // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextWhenFocused                                   = new ExternalOffset<byte/*(bool)*/>(0x0411);                  // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRevertTextOnEscape                                         = new ExternalOffset<byte/*(bool)*/>(0x0412);                  // 0x0412(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offClearKeyboardFocusOnCommit                                 = new ExternalOffset<byte/*(bool)*/>(0x0413);                  // 0x0413(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextOnCommit                                      = new ExternalOffset<byte/*(bool)*/>(0x0414);                  // 0x0414(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAllowContextMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x0415);                  // 0x0415(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVirtualKeyboardType>> _offKeyboardType                                               = new ExternalOffset<TEnumAsByte<EVirtualKeyboardType>>(0x0416, false); // 0x0416(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVirtualKeyboardOptions>           _offVirtualKeyboardOptions                                     = new ExternalOffset<FVirtualKeyboardOptions>(0x0417, false);  // 0x0417(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<EVirtualKeyboardDismissAction>     _offVirtualKeyboardDismissAction                               = new ExternalOffset<EVirtualKeyboardDismissAction>(0x0418, false); // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextJustify>>         _offJustification                                              = new ExternalOffset<TEnumAsByte<ETextJustify>>(0x0419, false); // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FShapedTextOptions>                _offShapedTextOptions                                          = new ExternalOffset<FShapedTextOptions>(0x041A, false);       // 0x041A(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextChanged                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0420, false); // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextCommitted                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0430, false); // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public FScriptDelegate                                    TextDelegate                                                   => _offTextDelegate.GetValue();
	public FText                                              HintText                                                       => _offHintText.GetValue();
	public FScriptDelegate                                    HintTextDelegate                                               => _offHintTextDelegate.GetValue();
	public FEditableTextStyle                                 WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public USlateBrushAsset                                   BackgroundImageSelected                                        => _offBackgroundImageSelected.GetValue();
	public USlateBrushAsset                                   BackgroundImageComposing                                       => _offBackgroundImageComposing.GetValue();
	public USlateBrushAsset                                   CaretImage                                                     => _offCaretImage.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FSlateColor                                        ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public byte/*(bool)*/                                     IsReadOnly                                                     => _offIsReadOnly.GetValue();
	public byte/*(bool)*/                                     IsPassword                                                     => _offIsPassword.GetValue();
	public float                                              MinimumDesiredWidth                                            => _offMinimumDesiredWidth.GetValue();
	public byte/*(bool)*/                                     IsCaretMovedWhenGainFocus                                      => _offIsCaretMovedWhenGainFocus.GetValue();
	public byte/*(bool)*/                                     SelectAllTextWhenFocused                                       => _offSelectAllTextWhenFocused.GetValue();
	public byte/*(bool)*/                                     RevertTextOnEscape                                             => _offRevertTextOnEscape.GetValue();
	public byte/*(bool)*/                                     ClearKeyboardFocusOnCommit                                     => _offClearKeyboardFocusOnCommit.GetValue();
	public byte/*(bool)*/                                     SelectAllTextOnCommit                                          => _offSelectAllTextOnCommit.GetValue();
	public byte/*(bool)*/                                     AllowContextMenu                                               => _offAllowContextMenu.GetValue();
	public TEnumAsByte<EVirtualKeyboardType>                  KeyboardType                                                   => _offKeyboardType.GetValue();
	public FVirtualKeyboardOptions                            VirtualKeyboardOptions                                         => _offVirtualKeyboardOptions.GetValue();
	public EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction                                   => _offVirtualKeyboardDismissAction.GetValue();
	public TEnumAsByte<ETextJustify>                          Justification                                                  => _offJustification.GetValue();
	public FShapedTextOptions                                 ShapedTextOptions                                              => _offShapedTextOptions.GetValue();
	public FScriptMulticastDelegate                           OnTextChanged                                                  => _offOnTextChanged.GetValue();
	public FScriptMulticastDelegate                           OnTextCommitted                                                => _offOnTextCommitted.GetValue();
	#endregion


}

// Class UMG.EditableTextBox
// 0x0910 (0x0A18 - 0x0108)
public class UEditableTextBox : UWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0108, false);                    // 0x0108(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offTextDelegate                                               = new ExternalOffset<FScriptDelegate>(0x0120, false);          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FEditableTextBoxStyle>             _offWidgetStyle                                                = new ExternalOffset<FEditableTextBoxStyle>(0x0130, false);    // 0x0130(0x07F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0920, true);    // 0x0920(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offHintText                                                   = new ExternalOffset<FText>(0x0928, false);                    // 0x0928(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offHintTextDelegate                                           = new ExternalOffset<FScriptDelegate>(0x0940, false);          // 0x0940(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0950, false);           // 0x0950(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offForegroundColor                                            = new ExternalOffset<FLinearColor>(0x09A0, false);             // 0x09A0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBackgroundColor                                            = new ExternalOffset<FLinearColor>(0x09B0, false);             // 0x09B0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offReadOnlyForegroundColor                                    = new ExternalOffset<FLinearColor>(0x09C0, false);             // 0x09C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsReadOnly                                                 = new ExternalOffset<byte/*(bool)*/>(0x09D0);                  // 0x09D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsPassword                                                 = new ExternalOffset<byte/*(bool)*/>(0x09D1);                  // 0x09D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinimumDesiredWidth                                        = new ExternalOffset<float>(0x09D4);                           // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x09D8, false);                  // 0x09D8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsCaretMovedWhenGainFocus                                  = new ExternalOffset<byte/*(bool)*/>(0x09E8);                  // 0x09E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextWhenFocused                                   = new ExternalOffset<byte/*(bool)*/>(0x09E9);                  // 0x09E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRevertTextOnEscape                                         = new ExternalOffset<byte/*(bool)*/>(0x09EA);                  // 0x09EA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offClearKeyboardFocusOnCommit                                 = new ExternalOffset<byte/*(bool)*/>(0x09EB);                  // 0x09EB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextOnCommit                                      = new ExternalOffset<byte/*(bool)*/>(0x09EC);                  // 0x09EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAllowContextMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x09ED);                  // 0x09ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVirtualKeyboardType>> _offKeyboardType                                               = new ExternalOffset<TEnumAsByte<EVirtualKeyboardType>>(0x09EE, false); // 0x09EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVirtualKeyboardOptions>           _offVirtualKeyboardOptions                                     = new ExternalOffset<FVirtualKeyboardOptions>(0x09EF, false);  // 0x09EF(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<EVirtualKeyboardDismissAction>     _offVirtualKeyboardDismissAction                               = new ExternalOffset<EVirtualKeyboardDismissAction>(0x09F0, false); // 0x09F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextJustify>>         _offJustification                                              = new ExternalOffset<TEnumAsByte<ETextJustify>>(0x09F1, false); // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FShapedTextOptions>                _offShapedTextOptions                                          = new ExternalOffset<FShapedTextOptions>(0x09F2, false);       // 0x09F2(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextChanged                                              = new ExternalOffset<FScriptMulticastDelegate>(0x09F8, false); // 0x09F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextCommitted                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0A08, false); // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public FScriptDelegate                                    TextDelegate                                                   => _offTextDelegate.GetValue();
	public FEditableTextBoxStyle                              WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public FText                                              HintText                                                       => _offHintText.GetValue();
	public FScriptDelegate                                    HintTextDelegate                                               => _offHintTextDelegate.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FLinearColor                                       ForegroundColor                                                => _offForegroundColor.GetValue();
	public FLinearColor                                       BackgroundColor                                                => _offBackgroundColor.GetValue();
	public FLinearColor                                       ReadOnlyForegroundColor                                        => _offReadOnlyForegroundColor.GetValue();
	public byte/*(bool)*/                                     IsReadOnly                                                     => _offIsReadOnly.GetValue();
	public byte/*(bool)*/                                     IsPassword                                                     => _offIsPassword.GetValue();
	public float                                              MinimumDesiredWidth                                            => _offMinimumDesiredWidth.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public byte/*(bool)*/                                     IsCaretMovedWhenGainFocus                                      => _offIsCaretMovedWhenGainFocus.GetValue();
	public byte/*(bool)*/                                     SelectAllTextWhenFocused                                       => _offSelectAllTextWhenFocused.GetValue();
	public byte/*(bool)*/                                     RevertTextOnEscape                                             => _offRevertTextOnEscape.GetValue();
	public byte/*(bool)*/                                     ClearKeyboardFocusOnCommit                                     => _offClearKeyboardFocusOnCommit.GetValue();
	public byte/*(bool)*/                                     SelectAllTextOnCommit                                          => _offSelectAllTextOnCommit.GetValue();
	public byte/*(bool)*/                                     AllowContextMenu                                               => _offAllowContextMenu.GetValue();
	public TEnumAsByte<EVirtualKeyboardType>                  KeyboardType                                                   => _offKeyboardType.GetValue();
	public FVirtualKeyboardOptions                            VirtualKeyboardOptions                                         => _offVirtualKeyboardOptions.GetValue();
	public EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction                                   => _offVirtualKeyboardDismissAction.GetValue();
	public TEnumAsByte<ETextJustify>                          Justification                                                  => _offJustification.GetValue();
	public FShapedTextOptions                                 ShapedTextOptions                                              => _offShapedTextOptions.GetValue();
	public FScriptMulticastDelegate                           OnTextChanged                                                  => _offOnTextChanged.GetValue();
	public FScriptMulticastDelegate                           OnTextCommitted                                                => _offOnTextCommitted.GetValue();
	#endregion


}

// Class UMG.ExpandableArea
// 0x0220 (0x0328 - 0x0108)
public class UExpandableArea : UWidget
{
	#region Offsets
	private ExternalOffset<FExpandableAreaStyle>              _offStyle                                                      = new ExternalOffset<FExpandableAreaStyle>(0x0110, false);     // 0x0110(0x0120) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offBorderBrush                                                = new ExternalOffset<FSlateBrush>(0x0230, false);              // 0x0230(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offBorderColor                                                = new ExternalOffset<FSlateColor>(0x02B8, false);              // 0x02B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsExpanded                                                = new ExternalOffset<byte/*(bool)*/>(0x02E0);                  // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxHeight                                                  = new ExternalOffset<float>(0x02E4);                           // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offHeaderPadding                                              = new ExternalOffset<FMargin>(0x02E8, false);                  // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offAreaPadding                                                = new ExternalOffset<FMargin>(0x02F8, false);                  // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnExpansionChanged                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0308, false); // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidget>                           _offHeaderContent                                              = new ExternalOffset<UWidget>(0x0318, true);                   // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UWidget>                           _offBodyContent                                                = new ExternalOffset<UWidget>(0x0320, true);                   // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FExpandableAreaStyle                               Style                                                          => _offStyle.GetValue();
	public FSlateBrush                                        BorderBrush                                                    => _offBorderBrush.GetValue();
	public FSlateColor                                        BorderColor                                                    => _offBorderColor.GetValue();
	public byte/*(bool)*/                                     bIsExpanded                                                    => _offbIsExpanded.GetValue();
	public float                                              MaxHeight                                                      => _offMaxHeight.GetValue();
	public FMargin                                            HeaderPadding                                                  => _offHeaderPadding.GetValue();
	public FMargin                                            AreaPadding                                                    => _offAreaPadding.GetValue();
	public FScriptMulticastDelegate                           OnExpansionChanged                                             => _offOnExpansionChanged.GetValue();
	public UWidget                                            HeaderContent                                                  => _offHeaderContent.GetValue();
	public UWidget                                            BodyContent                                                    => _offBodyContent.GetValue();
	#endregion


}

// Class UMG.FloatBinding
// 0x0000 (0x0068 - 0x0068)
public class UFloatBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.GridPanel
// 0x0028 (0x0140 - 0x0118)
public class UGridPanel : UPanelWidget
{
	#region Offsets
	private ExternalOffset<TArray<float>>                     _offColumnFill                                                 = new ExternalOffset<TArray<float>>(0x0120, false);            // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                     _offRowFill                                                    = new ExternalOffset<TArray<float>>(0x0130, false);            // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<float>                                      ColumnFill                                                     => _offColumnFill.GetValue();
	public TArray<float>                                      RowFill                                                        => _offRowFill.GetValue();
	#endregion


}

// Class UMG.GridSlot
// 0x0030 (0x0068 - 0x0038)
public class UGridSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offRow                                                        = new ExternalOffset<int>(0x004C);                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offRowSpan                                                    = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offColumn                                                     = new ExternalOffset<int>(0x0054);                             // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offColumnSpan                                                 = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLayer                                                      = new ExternalOffset<int>(0x005C);                             // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offNudge                                                      = new ExternalOffset<FVector2D>(0x0060, false);                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	public int                                                Row                                                            => _offRow.GetValue();
	public int                                                RowSpan                                                        => _offRowSpan.GetValue();
	public int                                                Column                                                         => _offColumn.GetValue();
	public int                                                ColumnSpan                                                     => _offColumnSpan.GetValue();
	public int                                                Layer                                                          => _offLayer.GetValue();
	public FVector2D                                          Nudge                                                          => _offNudge.GetValue();
	#endregion


}

// Class UMG.HorizontalBox
// 0x0008 (0x0120 - 0x0118)
public class UHorizontalBox : UPanelWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.HorizontalBoxSlot
// 0x001A (0x0052 - 0x0038)
public class UHorizontalBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateChildSize>                   _offSize                                                       = new ExternalOffset<FSlateChildSize>(0x0048, false);          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0050, false); // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0051, false); // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public FSlateChildSize                                    Size                                                           => _offSize.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.InputKeySelector
// 0x05D8 (0x06E0 - 0x0108)
public class UInputKeySelector : UWidget
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                      _offWidgetStyle                                                = new ExternalOffset<FButtonStyle>(0x0108, false);             // 0x0108(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                   _offTextStyle                                                  = new ExternalOffset<FTextBlockStyle>(0x0380, false);          // 0x0380(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputChord>                       _offSelectedKey                                                = new ExternalOffset<FInputChord>(0x05E8, false);              // 0x05E8(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0608, false);           // 0x0608(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offMargin                                                     = new ExternalOffset<FMargin>(0x0658, false);                  // 0x0658(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColorAndOpacity                                            = new ExternalOffset<FLinearColor>(0x0668, false);             // 0x0668(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offKeySelectionText                                           = new ExternalOffset<FText>(0x0678, false);                    // 0x0678(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offNoKeySpecifiedText                                         = new ExternalOffset<FText>(0x0690, false);                    // 0x0690(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowModifierKeys                                         = new ExternalOffset<byte/*(bool)*/>(0x06A8);                  // 0x06A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowGamepadKeys                                          = new ExternalOffset<byte/*(bool)*/>(0x06A9);                  // 0x06A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FKey>>                      _offEscapeKeys                                                 = new ExternalOffset<TArray<FKey>>(0x06B0, false);             // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnKeySelected                                              = new ExternalOffset<FScriptMulticastDelegate>(0x06C0, false); // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnIsSelectingKeyChanged                                    = new ExternalOffset<FScriptMulticastDelegate>(0x06D0, false); // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                       WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public FTextBlockStyle                                    TextStyle                                                      => _offTextStyle.GetValue();
	public FInputChord                                        SelectedKey                                                    => _offSelectedKey.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FMargin                                            Margin                                                         => _offMargin.GetValue();
	public FLinearColor                                       ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FText                                              KeySelectionText                                               => _offKeySelectionText.GetValue();
	public FText                                              NoKeySpecifiedText                                             => _offNoKeySpecifiedText.GetValue();
	public byte/*(bool)*/                                     bAllowModifierKeys                                             => _offbAllowModifierKeys.GetValue();
	public byte/*(bool)*/                                     bAllowGamepadKeys                                              => _offbAllowGamepadKeys.GetValue();
	public TArray<FKey>                                       EscapeKeys                                                     => _offEscapeKeys.GetValue();
	public FScriptMulticastDelegate                           OnKeySelected                                                  => _offOnKeySelected.GetValue();
	public FScriptMulticastDelegate                           OnIsSelectingKeyChanged                                        => _offOnIsSelectingKeyChanged.GetValue();
	#endregion


}

// Class UMG.Int32Binding
// 0x0000 (0x0068 - 0x0068)
public class UInt32Binding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.InvalidationBox
// 0x0002 (0x0122 - 0x0120)
public class UInvalidationBox : UContentWidget
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbCanCache                                                  = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offCacheRelativeTransforms                                    = new ExternalOffset<byte/*(bool)*/>(0x0121);                  // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bCanCache                                                      => _offbCanCache.GetValue();
	public byte/*(bool)*/                                     CacheRelativeTransforms                                        => _offCacheRelativeTransforms.GetValue();
	#endregion


}

// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
public class UUserListEntry : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.UserListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
public class UUserListEntryLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
public class UUserObjectListEntry : UUserListEntry
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.UserObjectListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
public class UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.ListViewBase
// 0x00A8 (0x01B0 - 0x0108)
public class UListViewBase : UWidget
{
	#region Offsets
	private ExternalOffset<UClass>                            _offEntryWidgetClass                                           = new ExternalOffset<UClass>(0x0108, true);                    // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnEntryGenerated                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0110, false); // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnEntryReleased                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0120, false); // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FUserWidgetPool>                   _offEntryWidgetPool                                            = new ExternalOffset<FUserWidgetPool>(0x0130, false);          // 0x0130(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UClass                                             EntryWidgetClass                                               => _offEntryWidgetClass.GetValue();
	public FScriptMulticastDelegate                           BP_OnEntryGenerated                                            => _offBP_OnEntryGenerated.GetValue();
	public FScriptMulticastDelegate                           BP_OnEntryReleased                                             => _offBP_OnEntryReleased.GetValue();
	public FUserWidgetPool                                    EntryWidgetPool                                                => _offEntryWidgetPool.GetValue();
	#endregion


}

// Class UMG.ListView
// 0x01A8 (0x0358 - 0x01B0)
public class UListView : UListViewBase
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ESelectionMode>>       _offSelectionMode                                              = new ExternalOffset<TEnumAsByte<ESelectionMode>>(0x02C8, false); // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EConsumeMouseWheel>                _offConsumeMouseWheel                                          = new ExternalOffset<EConsumeMouseWheel>(0x02C9, false);       // 0x02C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbClearSelectionOnClick                                     = new ExternalOffset<byte/*(bool)*/>(0x02CA);                  // 0x02CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsFocusable                                               = new ExternalOffset<byte/*(bool)*/>(0x02CB);                  // 0x02CB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offEntrySpacing                                               = new ExternalOffset<float>(0x02CC);                           // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbReturnFocusToSelection                                    = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UObject>>                   _offListItems                                                  = new ExternalOffset<TArray<UObject>>(0x02D8, false);          // 0x02D8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnEntryInitialized                                      = new ExternalOffset<FScriptMulticastDelegate>(0x02F8, false); // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemClicked                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0308, false); // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemDoubleClicked                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0318, false); // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemIsHoveredChanged                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0328, false); // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemSelectionChanged                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0338, false); // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemScrolledIntoView                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0348, false); // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TEnumAsByte<ESelectionMode>                        SelectionMode                                                  => _offSelectionMode.GetValue();
	public EConsumeMouseWheel                                 ConsumeMouseWheel                                              => _offConsumeMouseWheel.GetValue();
	public byte/*(bool)*/                                     bClearSelectionOnClick                                         => _offbClearSelectionOnClick.GetValue();
	public byte/*(bool)*/                                     bIsFocusable                                                   => _offbIsFocusable.GetValue();
	public float                                              EntrySpacing                                                   => _offEntrySpacing.GetValue();
	public byte/*(bool)*/                                     bReturnFocusToSelection                                        => _offbReturnFocusToSelection.GetValue();
	public TArray<UObject>                                    ListItems                                                      => _offListItems.GetValue();
	public FScriptMulticastDelegate                           BP_OnEntryInitialized                                          => _offBP_OnEntryInitialized.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemClicked                                               => _offBP_OnItemClicked.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemDoubleClicked                                         => _offBP_OnItemDoubleClicked.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemIsHoveredChanged                                      => _offBP_OnItemIsHoveredChanged.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemSelectionChanged                                      => _offBP_OnItemSelectionChanged.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemScrolledIntoView                                      => _offBP_OnItemScrolledIntoView.GetValue();
	#endregion


}

// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
public class UListViewDesignerPreviewItem : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.MenuAnchor
// 0x0030 (0x0150 - 0x0120)
public class UMenuAnchor : UContentWidget
{
	#region Offsets
	private ExternalOffset<UClass>                            _offMenuClass                                                  = new ExternalOffset<UClass>(0x0120, true);                    // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offOnGetMenuContentEvent                                      = new ExternalOffset<FScriptDelegate>(0x0128, false);          // 0x0128(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EMenuPlacement>>       _offPlacement                                                  = new ExternalOffset<TEnumAsByte<EMenuPlacement>>(0x0138, false); // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFitInWindow                                               = new ExternalOffset<byte/*(bool)*/>(0x0139);                  // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offShouldDeferPaintingAfterWindowContent                      = new ExternalOffset<byte/*(bool)*/>(0x013A);                  // 0x013A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offUseApplicationMenuStack                                    = new ExternalOffset<byte/*(bool)*/>(0x013B);                  // 0x013B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMenuOpenChanged                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0140, false); // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             MenuClass                                                      => _offMenuClass.GetValue();
	public FScriptDelegate                                    OnGetMenuContentEvent                                          => _offOnGetMenuContentEvent.GetValue();
	public TEnumAsByte<EMenuPlacement>                        Placement                                                      => _offPlacement.GetValue();
	public byte/*(bool)*/                                     bFitInWindow                                                   => _offbFitInWindow.GetValue();
	public byte/*(bool)*/                                     ShouldDeferPaintingAfterWindowContent                          => _offShouldDeferPaintingAfterWindowContent.GetValue();
	public byte/*(bool)*/                                     UseApplicationMenuStack                                        => _offUseApplicationMenuStack.GetValue();
	public FScriptMulticastDelegate                           OnMenuOpenChanged                                              => _offOnMenuOpenChanged.GetValue();
	#endregion


}

// Class UMG.MouseCursorBinding
// 0x0000 (0x0068 - 0x0068)
public class UMouseCursorBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.MovieScene2DTransformSection
// 0x047D (0x0548 - 0x00CB)
public class UMovieScene2DTransformSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieScene2DTransformMask>        _offTransformMask                                              = new ExternalOffset<FMovieScene2DTransformMask>(0x00E0, false); // 0x00E0(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offTranslation[0x2]                                           = new ExternalOffset<FMovieSceneFloatChannel>(0x00E8, false);  // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>           _offRotation                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x0228, false);  // 0x0228(0x00A0) (NativeAccessSpecifierPublic)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offScale[0x2]                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x02C8, false);  // 0x02C8(0x00A0) (NativeAccessSpecifierPublic)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offShear[0x2]                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0408, false);  // 0x0408(0x00A0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieScene2DTransformMask                         TransformMask                                                  => _offTransformMask.GetValue();
	public FMovieSceneFloatChannel                            Rotation                                                       => _offRotation.GetValue();
	#endregion


}

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.MovieSceneMarginSection
// 0x0295 (0x0360 - 0x00CB)
public class UMovieSceneMarginSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>           _offTopCurve                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x00E0, false);  // 0x00E0(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>           _offLeftCurve                                                  = new ExternalOffset<FMovieSceneFloatChannel>(0x0180, false);  // 0x0180(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>           _offRightCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0220, false);  // 0x0220(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>           _offBottomCurve                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x02C0, false);  // 0x02C0(0x00A0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                            TopCurve                                                       => _offTopCurve.GetValue();
	public FMovieSceneFloatChannel                            LeftCurve                                                      => _offLeftCurve.GetValue();
	public FMovieSceneFloatChannel                            RightCurve                                                     => _offRightCurve.GetValue();
	public FMovieSceneFloatChannel                            BottomCurve                                                    => _offBottomCurve.GetValue();
	#endregion


}

// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneMarginTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0080 - 0x0068)
public class UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
	#region Offsets
	private ExternalOffset<TArray<FName>>                     _offBrushPropertyNamePath                                      = new ExternalOffset<TArray<FName>>(0x0068, false);            // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                             _offTrackName                                                  = new ExternalOffset<FName>(0x0078, false);                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FName>                                      BrushPropertyNamePath                                          => _offBrushPropertyNamePath.GetValue();
	public FName                                              TrackName                                                      => _offTrackName.GetValue();
	#endregion


}

// Class UMG.TextLayoutWidget
// 0x0020 (0x0128 - 0x0108)
public class UTextLayoutWidget : UWidget
{
	#region Offsets
	private ExternalOffset<FShapedTextOptions>                _offShapedTextOptions                                          = new ExternalOffset<FShapedTextOptions>(0x0108, false);       // 0x0108(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<ETextJustify>>         _offJustification                                              = new ExternalOffset<TEnumAsByte<ETextJustify>>(0x010B, false); // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ETextWrappingPolicy>               _offWrappingPolicy                                             = new ExternalOffset<ETextWrappingPolicy>(0x010C, false);      // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offAutoWrapText                                               = new ExternalOffset<char>(0x010D, false);                     // 0x010D(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offWrapTextAt                                                 = new ExternalOffset<float>(0x0110);                           // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FMargin>                           _offMargin                                                     = new ExternalOffset<FMargin>(0x0114, false);                  // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offLineHeightPercentage                                       = new ExternalOffset<float>(0x0124);                           // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FShapedTextOptions                                 ShapedTextOptions                                              => _offShapedTextOptions.GetValue();
	public TEnumAsByte<ETextJustify>                          Justification                                                  => _offJustification.GetValue();
	public ETextWrappingPolicy                                WrappingPolicy                                                 => _offWrappingPolicy.GetValue();
	public float                                              WrapTextAt                                                     => _offWrapTextAt.GetValue();
	public FMargin                                            Margin                                                         => _offMargin.GetValue();
	public float                                              LineHeightPercentage                                           => _offLineHeightPercentage.GetValue();
	#endregion


}

// Class UMG.MultiLineEditableText
// 0x0328 (0x0450 - 0x0128)
public class UMultiLineEditableText : UTextLayoutWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0128, false);                    // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offHintText                                                   = new ExternalOffset<FText>(0x0140, false);                    // 0x0140(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offHintTextDelegate                                           = new ExternalOffset<FScriptDelegate>(0x0158, false);          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                   _offWidgetStyle                                                = new ExternalOffset<FTextBlockStyle>(0x0168, false);          // 0x0168(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsReadOnly                                                = new ExternalOffset<byte/*(bool)*/>(0x03D0);                  // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x03D8, false);           // 0x03D8(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextWhenFocused                                   = new ExternalOffset<byte/*(bool)*/>(0x0428);                  // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offClearTextSelectionOnFocusLoss                              = new ExternalOffset<byte/*(bool)*/>(0x0429);                  // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRevertTextOnEscape                                         = new ExternalOffset<byte/*(bool)*/>(0x042A);                  // 0x042A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offClearKeyboardFocusOnCommit                                 = new ExternalOffset<byte/*(bool)*/>(0x042B);                  // 0x042B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAllowContextMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x042C);                  // 0x042C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVirtualKeyboardOptions>           _offVirtualKeyboardOptions                                     = new ExternalOffset<FVirtualKeyboardOptions>(0x042D, false);  // 0x042D(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<EVirtualKeyboardDismissAction>     _offVirtualKeyboardDismissAction                               = new ExternalOffset<EVirtualKeyboardDismissAction>(0x042E, false); // 0x042E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextChanged                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0430, false); // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextCommitted                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0440, false); // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public FText                                              HintText                                                       => _offHintText.GetValue();
	public FScriptDelegate                                    HintTextDelegate                                               => _offHintTextDelegate.GetValue();
	public FTextBlockStyle                                    WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public byte/*(bool)*/                                     bIsReadOnly                                                    => _offbIsReadOnly.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public byte/*(bool)*/                                     SelectAllTextWhenFocused                                       => _offSelectAllTextWhenFocused.GetValue();
	public byte/*(bool)*/                                     ClearTextSelectionOnFocusLoss                                  => _offClearTextSelectionOnFocusLoss.GetValue();
	public byte/*(bool)*/                                     RevertTextOnEscape                                             => _offRevertTextOnEscape.GetValue();
	public byte/*(bool)*/                                     ClearKeyboardFocusOnCommit                                     => _offClearKeyboardFocusOnCommit.GetValue();
	public byte/*(bool)*/                                     AllowContextMenu                                               => _offAllowContextMenu.GetValue();
	public FVirtualKeyboardOptions                            VirtualKeyboardOptions                                         => _offVirtualKeyboardOptions.GetValue();
	public EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction                                   => _offVirtualKeyboardDismissAction.GetValue();
	public FScriptMulticastDelegate                           OnTextChanged                                                  => _offOnTextChanged.GetValue();
	public FScriptMulticastDelegate                           OnTextCommitted                                                => _offOnTextCommitted.GetValue();
	#endregion


}

// Class UMG.MultiLineEditableTextBox
// 0x0B48 (0x0C70 - 0x0128)
public class UMultiLineEditableTextBox : UTextLayoutWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0128, false);                    // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offHintText                                                   = new ExternalOffset<FText>(0x0140, false);                    // 0x0140(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offHintTextDelegate                                           = new ExternalOffset<FScriptDelegate>(0x0158, false);          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FEditableTextBoxStyle>             _offWidgetStyle                                                = new ExternalOffset<FEditableTextBoxStyle>(0x0168, false);    // 0x0168(0x07F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                   _offTextStyle                                                  = new ExternalOffset<FTextBlockStyle>(0x0958, false);          // 0x0958(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsReadOnly                                                = new ExternalOffset<byte/*(bool)*/>(0x0BC0);                  // 0x0BC0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAllowContextMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x0BC1);                  // 0x0BC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVirtualKeyboardOptions>           _offVirtualKeyboardOptions                                     = new ExternalOffset<FVirtualKeyboardOptions>(0x0BC2, false);  // 0x0BC2(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<EVirtualKeyboardDismissAction>     _offVirtualKeyboardDismissAction                               = new ExternalOffset<EVirtualKeyboardDismissAction>(0x0BC3, false); // 0x0BC3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0BC8, true);    // 0x0BC8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0BD0, false);           // 0x0BD0(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offForegroundColor                                            = new ExternalOffset<FLinearColor>(0x0C20, false);             // 0x0C20(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBackgroundColor                                            = new ExternalOffset<FLinearColor>(0x0C30, false);             // 0x0C30(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offReadOnlyForegroundColor                                    = new ExternalOffset<FLinearColor>(0x0C40, false);             // 0x0C40(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextChanged                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0C50, false); // 0x0C50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTextCommitted                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0C60, false); // 0x0C60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public FText                                              HintText                                                       => _offHintText.GetValue();
	public FScriptDelegate                                    HintTextDelegate                                               => _offHintTextDelegate.GetValue();
	public FEditableTextBoxStyle                              WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public FTextBlockStyle                                    TextStyle                                                      => _offTextStyle.GetValue();
	public byte/*(bool)*/                                     bIsReadOnly                                                    => _offbIsReadOnly.GetValue();
	public byte/*(bool)*/                                     AllowContextMenu                                               => _offAllowContextMenu.GetValue();
	public FVirtualKeyboardOptions                            VirtualKeyboardOptions                                         => _offVirtualKeyboardOptions.GetValue();
	public EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction                                   => _offVirtualKeyboardDismissAction.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FLinearColor                                       ForegroundColor                                                => _offForegroundColor.GetValue();
	public FLinearColor                                       BackgroundColor                                                => _offBackgroundColor.GetValue();
	public FLinearColor                                       ReadOnlyForegroundColor                                        => _offReadOnlyForegroundColor.GetValue();
	public FScriptMulticastDelegate                           OnTextChanged                                                  => _offOnTextChanged.GetValue();
	public FScriptMulticastDelegate                           OnTextCommitted                                                => _offOnTextCommitted.GetValue();
	#endregion


}

// Class UMG.NamedSlot
// 0x0000 (0x0120 - 0x0120)
public class UNamedSlot : UContentWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
public class UNamedSlotInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.NativeWidgetHost
// 0x0000 (0x0108 - 0x0108)
public class UNativeWidgetHost : UWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.Overlay
// 0x0008 (0x0120 - 0x0118)
public class UOverlay : UPanelWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.OverlaySlot
// 0x001A (0x0052 - 0x0038)
public class UOverlaySlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0040, false);                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0050, false); // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0051, false); // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.ProgressBar
// 0x0200 (0x0308 - 0x0108)
public class UProgressBar : UWidget
{
	#region Offsets
	private ExternalOffset<FProgressBarStyle>                 _offWidgetStyle                                                = new ExternalOffset<FProgressBarStyle>(0x0108, false);        // 0x0108(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x02A8, true);    // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offBackgroundImage                                            = new ExternalOffset<USlateBrushAsset>(0x02B0, true);          // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offFillImage                                                  = new ExternalOffset<USlateBrushAsset>(0x02B8, true);          // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offMarqueeImage                                               = new ExternalOffset<USlateBrushAsset>(0x02C0, true);          // 0x02C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPercent                                                    = new ExternalOffset<float>(0x02C8);                           // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EProgressBarFillType>> _offBarFillType                                                = new ExternalOffset<TEnumAsByte<EProgressBarFillType>>(0x02CC, false); // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsMarquee                                                 = new ExternalOffset<byte/*(bool)*/>(0x02CD);                  // 0x02CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offBorderPadding                                              = new ExternalOffset<FVector2D>(0x02D0, false);                // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offPercentDelegate                                            = new ExternalOffset<FScriptDelegate>(0x02D8, false);          // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offFillColorAndOpacity                                        = new ExternalOffset<FLinearColor>(0x02E8, false);             // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offFillColorAndOpacityDelegate                                = new ExternalOffset<FScriptDelegate>(0x02F8, false);          // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FProgressBarStyle                                  WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public USlateBrushAsset                                   BackgroundImage                                                => _offBackgroundImage.GetValue();
	public USlateBrushAsset                                   FillImage                                                      => _offFillImage.GetValue();
	public USlateBrushAsset                                   MarqueeImage                                                   => _offMarqueeImage.GetValue();
	public float                                              Percent                                                        => _offPercent.GetValue();
	public TEnumAsByte<EProgressBarFillType>                  BarFillType                                                    => _offBarFillType.GetValue();
	public byte/*(bool)*/                                     bIsMarquee                                                     => _offbIsMarquee.GetValue();
	public FVector2D                                          BorderPadding                                                  => _offBorderPadding.GetValue();
	public FScriptDelegate                                    PercentDelegate                                                => _offPercentDelegate.GetValue();
	public FLinearColor                                       FillColorAndOpacity                                            => _offFillColorAndOpacity.GetValue();
	public FScriptDelegate                                    FillColorAndOpacityDelegate                                    => _offFillColorAndOpacityDelegate.GetValue();
	#endregion


}

// Class UMG.RetainerBox
// 0x0020 (0x0140 - 0x0120)
public class URetainerBox : UContentWidget
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offRenderOnInvalidation                                       = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRenderOnPhase                                              = new ExternalOffset<byte/*(bool)*/>(0x0121);                  // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPhase                                                      = new ExternalOffset<int>(0x0124);                             // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPhaseCount                                                 = new ExternalOffset<int>(0x0128);                             // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offEffectMaterial                                             = new ExternalOffset<UMaterialInterface>(0x0130, true);        // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FName>                             _offTextureParameter                                           = new ExternalOffset<FName>(0x0138, false);                    // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     RenderOnInvalidation                                           => _offRenderOnInvalidation.GetValue();
	public byte/*(bool)*/                                     RenderOnPhase                                                  => _offRenderOnPhase.GetValue();
	public int                                                Phase                                                          => _offPhase.GetValue();
	public int                                                PhaseCount                                                     => _offPhaseCount.GetValue();
	public UMaterialInterface                                 EffectMaterial                                                 => _offEffectMaterial.GetValue();
	public FName                                              TextureParameter                                               => _offTextureParameter.GetValue();
	#endregion


}

// Class UMG.RichTextBlock
// 0x0520 (0x0648 - 0x0128)
public class URichTextBlock : UTextLayoutWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0128, false);                    // 0x0128(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UDataTable>                        _offTextStyleSet                                               = new ExternalOffset<UDataTable>(0x0140, true);                // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UClass>>                    _offDecoratorClasses                                           = new ExternalOffset<TArray<UClass>>(0x0148, false);           // 0x0148(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbOverrideDefaultStyle                                      = new ExternalOffset<byte/*(bool)*/>(0x0158);                  // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FTextBlockStyle>                   _offDefaultTextStyleOverride                                   = new ExternalOffset<FTextBlockStyle>(0x0160, false);          // 0x0160(0x0268) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMinDesiredWidth                                            = new ExternalOffset<float>(0x03C8);                           // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<URichTextBlockDecorator>>   _offInstanceDecorators                                         = new ExternalOffset<TArray<URichTextBlockDecorator>>(0x0638, false); // 0x0638(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public UDataTable                                         TextStyleSet                                                   => _offTextStyleSet.GetValue();
	public TArray<UClass>                                     DecoratorClasses                                               => _offDecoratorClasses.GetValue();
	public byte/*(bool)*/                                     bOverrideDefaultStyle                                          => _offbOverrideDefaultStyle.GetValue();
	public FTextBlockStyle                                    DefaultTextStyleOverride                                       => _offDefaultTextStyleOverride.GetValue();
	public float                                              MinDesiredWidth                                                => _offMinDesiredWidth.GetValue();
	public TArray<URichTextBlockDecorator>                    InstanceDecorators                                             => _offInstanceDecorators.GetValue();
	#endregion


}

// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
public class URichTextBlockDecorator : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
public class URichTextBlockImageDecorator : URichTextBlockDecorator
{
	#region Offsets
	private ExternalOffset<UDataTable>                        _offImageSet                                                   = new ExternalOffset<UDataTable>(0x0028, true);                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UDataTable                                         ImageSet                                                       => _offImageSet.GetValue();
	#endregion


}

// Class UMG.SafeZone
// 0x0004 (0x0124 - 0x0120)
public class USafeZone : UContentWidget
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offPadLeft                                                    = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offPadRight                                                   = new ExternalOffset<byte/*(bool)*/>(0x0121);                  // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offPadTop                                                     = new ExternalOffset<byte/*(bool)*/>(0x0122);                  // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offPadBottom                                                  = new ExternalOffset<byte/*(bool)*/>(0x0123);                  // 0x0123(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     PadLeft                                                        => _offPadLeft.GetValue();
	public byte/*(bool)*/                                     PadRight                                                       => _offPadRight.GetValue();
	public byte/*(bool)*/                                     PadTop                                                         => _offPadTop.GetValue();
	public byte/*(bool)*/                                     PadBottom                                                      => _offPadBottom.GetValue();
	#endregion


}

// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
public class USafeZoneSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTitleSafe                                               = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offSafeAreaScale                                              = new ExternalOffset<FMargin>(0x003C, false);                  // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHAlign                                                     = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x004C, false); // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVAlign                                                     = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x004D, false); // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0050, false);                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bIsTitleSafe                                                   => _offbIsTitleSafe.GetValue();
	public FMargin                                            SafeAreaScale                                                  => _offSafeAreaScale.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HAlign                                                         => _offHAlign.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VAlign                                                         => _offVAlign.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	#endregion


}

// Class UMG.ScaleBox
// 0x000A (0x012A - 0x0120)
public class UScaleBox : UContentWidget
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EStretch>>             _offStretch                                                    = new ExternalOffset<TEnumAsByte<EStretch>>(0x0120, false);    // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EStretchDirection>>    _offStretchDirection                                           = new ExternalOffset<TEnumAsByte<EStretchDirection>>(0x0121, false); // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offUserSpecifiedScale                                         = new ExternalOffset<float>(0x0124);                           // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIgnoreInheritedScale                                       = new ExternalOffset<byte/*(bool)*/>(0x0128);                  // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSingleLayoutPass                                          = new ExternalOffset<byte/*(bool)*/>(0x0129);                  // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EStretch>                              Stretch                                                        => _offStretch.GetValue();
	public TEnumAsByte<EStretchDirection>                     StretchDirection                                               => _offStretchDirection.GetValue();
	public float                                              UserSpecifiedScale                                             => _offUserSpecifiedScale.GetValue();
	public byte/*(bool)*/                                     IgnoreInheritedScale                                           => _offIgnoreInheritedScale.GetValue();
	public byte/*(bool)*/                                     bSingleLayoutPass                                              => _offbSingleLayoutPass.GetValue();
	#endregion


}

// Class UMG.ScaleBoxSlot
// 0x0012 (0x004A - 0x0038)
public class UScaleBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.ScrollBar
// 0x04F4 (0x05FC - 0x0108)
public class UScrollBar : UWidget
{
	#region Offsets
	private ExternalOffset<FScrollBarStyle>                   _offWidgetStyle                                                = new ExternalOffset<FScrollBarStyle>(0x0108, false);          // 0x0108(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x05D8, true);    // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAlwaysShowScrollbar                                       = new ExternalOffset<byte/*(bool)*/>(0x05E0);                  // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAlwaysShowScrollbarTrack                                  = new ExternalOffset<byte/*(bool)*/>(0x05E1);                  // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EOrientation>>         _offOrientation                                                = new ExternalOffset<TEnumAsByte<EOrientation>>(0x05E2, false); // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offThickness                                                  = new ExternalOffset<FVector2D>(0x05E4, false);                // 0x05E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x05EC, false);                  // 0x05EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScrollBarStyle                                    WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public byte/*(bool)*/                                     bAlwaysShowScrollbar                                           => _offbAlwaysShowScrollbar.GetValue();
	public byte/*(bool)*/                                     bAlwaysShowScrollbarTrack                                      => _offbAlwaysShowScrollbarTrack.GetValue();
	public TEnumAsByte<EOrientation>                          Orientation                                                    => _offOrientation.GetValue();
	public FVector2D                                          Thickness                                                      => _offThickness.GetValue();
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	#endregion


}

// Class UMG.ScrollBox
// 0x0748 (0x0860 - 0x0118)
public class UScrollBox : UPanelWidget
{
	#region Offsets
	private ExternalOffset<FScrollBoxStyle>                   _offWidgetStyle                                                = new ExternalOffset<FScrollBoxStyle>(0x0120, false);          // 0x0120(0x0228) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FScrollBarStyle>                   _offWidgetBarStyle                                             = new ExternalOffset<FScrollBarStyle>(0x0348, false);          // 0x0348(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0818, true);    // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offBarStyle                                                   = new ExternalOffset<USlateWidgetStyleAsset>(0x0820, true);    // 0x0820(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EOrientation>>         _offOrientation                                                = new ExternalOffset<TEnumAsByte<EOrientation>>(0x0828, false); // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESlateVisibility>                  _offScrollBarVisibility                                        = new ExternalOffset<ESlateVisibility>(0x0829, false);         // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EConsumeMouseWheel>                _offConsumeMouseWheel                                          = new ExternalOffset<EConsumeMouseWheel>(0x082A, false);       // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offScrollbarThickness                                         = new ExternalOffset<FVector2D>(0x082C, false);                // 0x082C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                           _offScrollbarPadding                                           = new ExternalOffset<FMargin>(0x0834, false);                  // 0x0834(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlwaysShowScrollbar                                        = new ExternalOffset<byte/*(bool)*/>(0x0844);                  // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlwaysShowScrollbarTrack                                   = new ExternalOffset<byte/*(bool)*/>(0x0845);                  // 0x0845(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAllowOverscroll                                            = new ExternalOffset<byte/*(bool)*/>(0x0846);                  // 0x0846(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDescendantScrollDestination>      _offNavigationDestination                                      = new ExternalOffset<EDescendantScrollDestination>(0x0847, false); // 0x0847(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNavigationScrollPadding                                    = new ExternalOffset<float>(0x0848);                           // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowRightClickDragScrolling                              = new ExternalOffset<byte/*(bool)*/>(0x084C);                  // 0x084C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUserScrolled                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0850, false); // 0x0850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScrollBoxStyle                                    WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public FScrollBarStyle                                    WidgetBarStyle                                                 => _offWidgetBarStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public USlateWidgetStyleAsset                             BarStyle                                                       => _offBarStyle.GetValue();
	public TEnumAsByte<EOrientation>                          Orientation                                                    => _offOrientation.GetValue();
	public ESlateVisibility                                   ScrollBarVisibility                                            => _offScrollBarVisibility.GetValue();
	public EConsumeMouseWheel                                 ConsumeMouseWheel                                              => _offConsumeMouseWheel.GetValue();
	public FVector2D                                          ScrollbarThickness                                             => _offScrollbarThickness.GetValue();
	public FMargin                                            ScrollbarPadding                                               => _offScrollbarPadding.GetValue();
	public byte/*(bool)*/                                     AlwaysShowScrollbar                                            => _offAlwaysShowScrollbar.GetValue();
	public byte/*(bool)*/                                     AlwaysShowScrollbarTrack                                       => _offAlwaysShowScrollbarTrack.GetValue();
	public byte/*(bool)*/                                     AllowOverscroll                                                => _offAllowOverscroll.GetValue();
	public EDescendantScrollDestination                       NavigationDestination                                          => _offNavigationDestination.GetValue();
	public float                                              NavigationScrollPadding                                        => _offNavigationScrollPadding.GetValue();
	public byte/*(bool)*/                                     bAllowRightClickDragScrolling                                  => _offbAllowRightClickDragScrolling.GetValue();
	public FScriptMulticastDelegate                           OnUserScrolled                                                 => _offOnUserScrolled.GetValue();
	#endregion


}

// Class UMG.ScrollBoxSlot
// 0x0012 (0x004A - 0x0038)
public class UScrollBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.SizeBox
// 0x0024 (0x0144 - 0x0120)
public class USizeBox : UContentWidget
{
	#region Offsets
//	private ExternalOffset<char>                              _offbOverride_WidthOverride                                    = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_HeightOverride                                   = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MinDesiredWidth                                  = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MinDesiredHeight                                 = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MaxDesiredWidth                                  = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MaxDesiredHeight                                 = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MinAspectRatio                                   = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MaxAspectRatio                                   = new ExternalOffset<char>(0x0120, false);                     // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWidthOverride                                              = new ExternalOffset<float>(0x0124);                           // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHeightOverride                                             = new ExternalOffset<float>(0x0128);                           // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredWidth                                            = new ExternalOffset<float>(0x012C);                           // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredHeight                                           = new ExternalOffset<float>(0x0130);                           // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxDesiredWidth                                            = new ExternalOffset<float>(0x0134);                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxDesiredHeight                                           = new ExternalOffset<float>(0x0138);                           // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinAspectRatio                                             = new ExternalOffset<float>(0x013C);                           // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxAspectRatio                                             = new ExternalOffset<float>(0x0140);                           // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              WidthOverride                                                  => _offWidthOverride.GetValue();
	public float                                              HeightOverride                                                 => _offHeightOverride.GetValue();
	public float                                              MinDesiredWidth                                                => _offMinDesiredWidth.GetValue();
	public float                                              MinDesiredHeight                                               => _offMinDesiredHeight.GetValue();
	public float                                              MaxDesiredWidth                                                => _offMaxDesiredWidth.GetValue();
	public float                                              MaxDesiredHeight                                               => _offMaxDesiredHeight.GetValue();
	public float                                              MinAspectRatio                                                 => _offMinAspectRatio.GetValue();
	public float                                              MaxAspectRatio                                                 => _offMaxAspectRatio.GetValue();
	#endregion


}

// Class UMG.SizeBoxSlot
// 0x0012 (0x004A - 0x0038)
public class USizeBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class USlateBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
public class USlateVectorArtData : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FSlateMeshVertex>>          _offVertexData                                                 = new ExternalOffset<TArray<FSlateMeshVertex>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<uint32_t>>                  _offIndexData                                                  = new ExternalOffset<TArray<uint32_t>>(0x0038, false);         // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UMaterialInterface>                _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x0048, true);        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector2D>                         _offExtentMin                                                  = new ExternalOffset<FVector2D>(0x0050, false);                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector2D>                         _offExtentMax                                                  = new ExternalOffset<FVector2D>(0x0058, false);                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FSlateMeshVertex>                           VertexData                                                     => _offVertexData.GetValue();
	public TArray<uint32_t>                                   IndexData                                                      => _offIndexData.GetValue();
	public UMaterialInterface                                 Material                                                       => _offMaterial.GetValue();
	public FVector2D                                          ExtentMin                                                      => _offExtentMin.GetValue();
	public FVector2D                                          ExtentMax                                                      => _offExtentMax.GetValue();
	#endregion


}

// Class UMG.SlateAccessibleWidgetData
// 0x0058 (0x0080 - 0x0028)
public class USlateAccessibleWidgetData : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbCanChildrenBeAccessible                                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESlateAccessibleBehavior>          _offAccessibleBehavior                                         = new ExternalOffset<ESlateAccessibleBehavior>(0x0029, false); // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESlateAccessibleBehavior>          _offAccessibleSummaryBehavior                                  = new ExternalOffset<ESlateAccessibleBehavior>(0x002A, false); // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offAccessibleText                                             = new ExternalOffset<FText>(0x0030, false);                    // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offAccessibleTextDelegate                                     = new ExternalOffset<FScriptDelegate>(0x0048, false);          // 0x0048(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offAccessibleSummaryText                                      = new ExternalOffset<FText>(0x0058, false);                    // 0x0058(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offAccessibleSummaryTextDelegate                              = new ExternalOffset<FScriptDelegate>(0x0070, false);          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bCanChildrenBeAccessible                                       => _offbCanChildrenBeAccessible.GetValue();
	public ESlateAccessibleBehavior                           AccessibleBehavior                                             => _offAccessibleBehavior.GetValue();
	public ESlateAccessibleBehavior                           AccessibleSummaryBehavior                                      => _offAccessibleSummaryBehavior.GetValue();
	public FText                                              AccessibleText                                                 => _offAccessibleText.GetValue();
	public FScriptDelegate                                    AccessibleTextDelegate                                         => _offAccessibleTextDelegate.GetValue();
	public FText                                              AccessibleSummaryText                                          => _offAccessibleSummaryText.GetValue();
	public FScriptDelegate                                    AccessibleSummaryTextDelegate                                  => _offAccessibleSummaryTextDelegate.GetValue();
	#endregion


}

// Class UMG.Slider
// 0x03E0 (0x04E8 - 0x0108)
public class USlider : UWidget
{
	#region Offsets
	private ExternalOffset<float>                             _offValue                                                      = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offValueDelegate                                              = new ExternalOffset<FScriptDelegate>(0x010C, false);          // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinValue                                                   = new ExternalOffset<float>(0x011C);                           // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxValue                                                   = new ExternalOffset<float>(0x0120);                           // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSliderStyle>                      _offWidgetStyle                                                = new ExternalOffset<FSliderStyle>(0x0128, false);             // 0x0128(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EOrientation>>         _offOrientation                                                = new ExternalOffset<TEnumAsByte<EOrientation>>(0x0468, false); // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offSliderBarColor                                             = new ExternalOffset<FLinearColor>(0x046C, false);             // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offSliderHandleColor                                          = new ExternalOffset<FLinearColor>(0x047C, false);             // 0x047C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIndentHandle                                               = new ExternalOffset<byte/*(bool)*/>(0x048C);                  // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x048D);                  // 0x048D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offMouseUsesStep                                              = new ExternalOffset<byte/*(bool)*/>(0x048E);                  // 0x048E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRequiresControllerLock                                     = new ExternalOffset<byte/*(bool)*/>(0x048F);                  // 0x048F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStepSize                                                   = new ExternalOffset<float>(0x0490);                           // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offIsFocusable                                                = new ExternalOffset<byte/*(bool)*/>(0x0494);                  // 0x0494(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMouseCaptureBegin                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0498, false); // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMouseCaptureEnd                                          = new ExternalOffset<FScriptMulticastDelegate>(0x04A8, false); // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnControllerCaptureBegin                                   = new ExternalOffset<FScriptMulticastDelegate>(0x04B8, false); // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnControllerCaptureEnd                                     = new ExternalOffset<FScriptMulticastDelegate>(0x04C8, false); // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnValueChanged                                             = new ExternalOffset<FScriptMulticastDelegate>(0x04D8, false); // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Value                                                          => _offValue.GetValue();
	public FScriptDelegate                                    ValueDelegate                                                  => _offValueDelegate.GetValue();
	public float                                              MinValue                                                       => _offMinValue.GetValue();
	public float                                              MaxValue                                                       => _offMaxValue.GetValue();
	public FSliderStyle                                       WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public TEnumAsByte<EOrientation>                          Orientation                                                    => _offOrientation.GetValue();
	public FLinearColor                                       SliderBarColor                                                 => _offSliderBarColor.GetValue();
	public FLinearColor                                       SliderHandleColor                                              => _offSliderHandleColor.GetValue();
	public byte/*(bool)*/                                     IndentHandle                                                   => _offIndentHandle.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	public byte/*(bool)*/                                     MouseUsesStep                                                  => _offMouseUsesStep.GetValue();
	public byte/*(bool)*/                                     RequiresControllerLock                                         => _offRequiresControllerLock.GetValue();
	public float                                              StepSize                                                       => _offStepSize.GetValue();
	public byte/*(bool)*/                                     IsFocusable                                                    => _offIsFocusable.GetValue();
	public FScriptMulticastDelegate                           OnMouseCaptureBegin                                            => _offOnMouseCaptureBegin.GetValue();
	public FScriptMulticastDelegate                           OnMouseCaptureEnd                                              => _offOnMouseCaptureEnd.GetValue();
	public FScriptMulticastDelegate                           OnControllerCaptureBegin                                       => _offOnControllerCaptureBegin.GetValue();
	public FScriptMulticastDelegate                           OnControllerCaptureEnd                                         => _offOnControllerCaptureEnd.GetValue();
	public FScriptMulticastDelegate                           OnValueChanged                                                 => _offOnValueChanged.GetValue();
	#endregion


}

// Class UMG.Spacer
// 0x0008 (0x0110 - 0x0108)
public class USpacer : UWidget
{
	#region Offsets
	private ExternalOffset<FVector2D>                         _offSize                                                       = new ExternalOffset<FVector2D>(0x0108, false);                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                          Size                                                           => _offSize.GetValue();
	#endregion


}

// Class UMG.SpinBox
// 0x03EC (0x04F4 - 0x0108)
public class USpinBox : UWidget
{
	#region Offsets
	private ExternalOffset<float>                             _offValue                                                      = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offValueDelegate                                              = new ExternalOffset<FScriptDelegate>(0x010C, false);          // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSpinBoxStyle>                     _offWidgetStyle                                                = new ExternalOffset<FSpinBoxStyle>(0x0120, false);            // 0x0120(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateWidgetStyleAsset>            _offStyle                                                      = new ExternalOffset<USlateWidgetStyleAsset>(0x0408, true);    // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDelta                                                      = new ExternalOffset<float>(0x0410);                           // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSliderExponent                                             = new ExternalOffset<float>(0x0414);                           // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0418, false);           // 0x0418(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextJustify>>         _offJustification                                              = new ExternalOffset<TEnumAsByte<ETextJustify>>(0x0468, false); // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredWidth                                            = new ExternalOffset<float>(0x046C);                           // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offClearKeyboardFocusOnCommit                                 = new ExternalOffset<byte/*(bool)*/>(0x0470);                  // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSelectAllTextOnCommit                                      = new ExternalOffset<byte/*(bool)*/>(0x0471);                  // 0x0471(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x0478, false);              // 0x0478(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnValueChanged                                             = new ExternalOffset<FScriptMulticastDelegate>(0x04A0, false); // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnValueCommitted                                           = new ExternalOffset<FScriptMulticastDelegate>(0x04B0, false); // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnBeginSliderMovement                                      = new ExternalOffset<FScriptMulticastDelegate>(0x04C0, false); // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnEndSliderMovement                                        = new ExternalOffset<FScriptMulticastDelegate>(0x04D0, false); // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverride_MinValue                                         = new ExternalOffset<char>(0x04E0, false);                     // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbOverride_MaxValue                                         = new ExternalOffset<char>(0x04E0, false);                     // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbOverride_MinSliderValue                                   = new ExternalOffset<char>(0x04E0, false);                     // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbOverride_MaxSliderValue                                   = new ExternalOffset<char>(0x04E0, false);                     // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMinValue                                                   = new ExternalOffset<float>(0x04E4);                           // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxValue                                                   = new ExternalOffset<float>(0x04E8);                           // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMinSliderValue                                             = new ExternalOffset<float>(0x04EC);                           // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxSliderValue                                             = new ExternalOffset<float>(0x04F0);                           // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              Value                                                          => _offValue.GetValue();
	public FScriptDelegate                                    ValueDelegate                                                  => _offValueDelegate.GetValue();
	public FSpinBoxStyle                                      WidgetStyle                                                    => _offWidgetStyle.GetValue();
	public USlateWidgetStyleAsset                             Style                                                          => _offStyle.GetValue();
	public float                                              Delta                                                          => _offDelta.GetValue();
	public float                                              SliderExponent                                                 => _offSliderExponent.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public TEnumAsByte<ETextJustify>                          Justification                                                  => _offJustification.GetValue();
	public float                                              MinDesiredWidth                                                => _offMinDesiredWidth.GetValue();
	public byte/*(bool)*/                                     ClearKeyboardFocusOnCommit                                     => _offClearKeyboardFocusOnCommit.GetValue();
	public byte/*(bool)*/                                     SelectAllTextOnCommit                                          => _offSelectAllTextOnCommit.GetValue();
	public FSlateColor                                        ForegroundColor                                                => _offForegroundColor.GetValue();
	public FScriptMulticastDelegate                           OnValueChanged                                                 => _offOnValueChanged.GetValue();
	public FScriptMulticastDelegate                           OnValueCommitted                                               => _offOnValueCommitted.GetValue();
	public FScriptMulticastDelegate                           OnBeginSliderMovement                                          => _offOnBeginSliderMovement.GetValue();
	public FScriptMulticastDelegate                           OnEndSliderMovement                                            => _offOnEndSliderMovement.GetValue();
	public float                                              MinValue                                                       => _offMinValue.GetValue();
	public float                                              MaxValue                                                       => _offMaxValue.GetValue();
	public float                                              MinSliderValue                                                 => _offMinSliderValue.GetValue();
	public float                                              MaxSliderValue                                                 => _offMaxSliderValue.GetValue();
	#endregion


}

// Class UMG.TextBinding
// 0x0000 (0x0068 - 0x0068)
public class UTextBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.TextBlock
// 0x0167 (0x028F - 0x0128)
public class UTextBlock : UTextLayoutWidget
{
	#region Offsets
	private ExternalOffset<FText>                             _offText                                                       = new ExternalOffset<FText>(0x0128, false);                    // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offTextDelegate                                               = new ExternalOffset<FScriptDelegate>(0x0140, false);          // 0x0140(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                       _offColorAndOpacity                                            = new ExternalOffset<FSlateColor>(0x0150, false);              // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offColorAndOpacityDelegate                                    = new ExternalOffset<FScriptDelegate>(0x0178, false);          // 0x0178(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                    _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0188, false);           // 0x0188(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offStrikeBrush                                                = new ExternalOffset<FSlateBrush>(0x01D8, false);              // 0x01D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offShadowOffset                                               = new ExternalOffset<FVector2D>(0x0260, false);                // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offShadowColorAndOpacity                                      = new ExternalOffset<FLinearColor>(0x0268, false);             // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                   _offShadowColorAndOpacityDelegate                              = new ExternalOffset<FScriptDelegate>(0x0278, false);          // 0x0278(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredWidth                                            = new ExternalOffset<float>(0x0288);                           // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbWrapWithInvalidationPanel                                 = new ExternalOffset<byte/*(bool)*/>(0x028C);                  // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoWrapText                                              = new ExternalOffset<byte/*(bool)*/>(0x028D);                  // 0x028D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSimpleTextMode                                            = new ExternalOffset<byte/*(bool)*/>(0x028E);                  // 0x028E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FText                                              Text                                                           => _offText.GetValue();
	public FScriptDelegate                                    TextDelegate                                                   => _offTextDelegate.GetValue();
	public FSlateColor                                        ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FScriptDelegate                                    ColorAndOpacityDelegate                                        => _offColorAndOpacityDelegate.GetValue();
	public FSlateFontInfo                                     Font                                                           => _offFont.GetValue();
	public FSlateBrush                                        StrikeBrush                                                    => _offStrikeBrush.GetValue();
	public FVector2D                                          ShadowOffset                                                   => _offShadowOffset.GetValue();
	public FLinearColor                                       ShadowColorAndOpacity                                          => _offShadowColorAndOpacity.GetValue();
	public FScriptDelegate                                    ShadowColorAndOpacityDelegate                                  => _offShadowColorAndOpacityDelegate.GetValue();
	public float                                              MinDesiredWidth                                                => _offMinDesiredWidth.GetValue();
	public byte/*(bool)*/                                     bWrapWithInvalidationPanel                                     => _offbWrapWithInvalidationPanel.GetValue();
	public byte/*(bool)*/                                     bAutoWrapText                                                  => _offbAutoWrapText.GetValue();
	public byte/*(bool)*/                                     bSimpleTextMode                                                => _offbSimpleTextMode.GetValue();
	#endregion


}

// Class UMG.Throbber
// 0x0098 (0x01A0 - 0x0108)
public class UThrobber : UWidget
{
	#region Offsets
	private ExternalOffset<int>                               _offNumberOfPieces                                             = new ExternalOffset<int>(0x0108);                             // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAnimateHorizontally                                       = new ExternalOffset<byte/*(bool)*/>(0x010C);                  // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAnimateVertically                                         = new ExternalOffset<byte/*(bool)*/>(0x010D);                  // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAnimateOpacity                                            = new ExternalOffset<byte/*(bool)*/>(0x010E);                  // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USlateBrushAsset>                  _offPieceImage                                                 = new ExternalOffset<USlateBrushAsset>(0x0110, true);          // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                       _offImage                                                      = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                NumberOfPieces                                                 => _offNumberOfPieces.GetValue();
	public byte/*(bool)*/                                     bAnimateHorizontally                                           => _offbAnimateHorizontally.GetValue();
	public byte/*(bool)*/                                     bAnimateVertically                                             => _offbAnimateVertically.GetValue();
	public byte/*(bool)*/                                     bAnimateOpacity                                                => _offbAnimateOpacity.GetValue();
	public USlateBrushAsset                                   PieceImage                                                     => _offPieceImage.GetValue();
	public FSlateBrush                                        Image                                                          => _offImage.GetValue();
	#endregion


}

// Class UMG.TileView
// 0x000A (0x0362 - 0x0358)
public class UTileView : UListView
{
	#region Offsets
	private ExternalOffset<float>                             _offEntryHeight                                                = new ExternalOffset<float>(0x0358);                           // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offEntryWidth                                                 = new ExternalOffset<float>(0x035C);                           // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EListItemAlignment>                _offTileAlignment                                              = new ExternalOffset<EListItemAlignment>(0x0360, false);       // 0x0360(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbWrapHorizontalNavigation                                  = new ExternalOffset<byte/*(bool)*/>(0x0361);                  // 0x0361(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              EntryHeight                                                    => _offEntryHeight.GetValue();
	public float                                              EntryWidth                                                     => _offEntryWidth.GetValue();
	public EListItemAlignment                                 TileAlignment                                                  => _offTileAlignment.GetValue();
	public byte/*(bool)*/                                     bWrapHorizontalNavigation                                      => _offbWrapHorizontalNavigation.GetValue();
	#endregion


}

// Class UMG.TreeView
// 0x0030 (0x0388 - 0x0358)
public class UTreeView : UListView
{
	#region Offsets
	private ExternalOffset<FScriptDelegate>                   _offBP_OnGetItemChildren                                       = new ExternalOffset<FScriptDelegate>(0x0368, false);          // 0x0368(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offBP_OnItemExpansionChanged                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0378, false); // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FScriptDelegate                                    BP_OnGetItemChildren                                           => _offBP_OnGetItemChildren.GetValue();
	public FScriptMulticastDelegate                           BP_OnItemExpansionChanged                                      => _offBP_OnItemExpansionChanged.GetValue();
	#endregion


}

// Class UMG.UMGSequencePlayer
// 0x0398 (0x03C0 - 0x0028)
public class UUMGSequencePlayer : UObject
{
	#region Offsets
	private ExternalOffset<UWidgetAnimation>                  _offAnimation                                                  = new ExternalOffset<UWidgetAnimation>(0x03B8, true);          // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UWidgetAnimation                                   Animation                                                      => _offAnimation.GetValue();
	#endregion


}

// Class UMG.UniformGridPanel
// 0x0020 (0x0138 - 0x0118)
public class UUniformGridPanel : UPanelWidget
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offSlotPadding                                                = new ExternalOffset<FMargin>(0x0120, false);                  // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredSlotWidth                                        = new ExternalOffset<float>(0x0130);                           // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinDesiredSlotHeight                                       = new ExternalOffset<float>(0x0134);                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            SlotPadding                                                    => _offSlotPadding.GetValue();
	public float                                              MinDesiredSlotWidth                                            => _offMinDesiredSlotWidth.GetValue();
	public float                                              MinDesiredSlotHeight                                           => _offMinDesiredSlotHeight.GetValue();
	#endregion


}

// Class UMG.UniformGridSlot
// 0x000C (0x0044 - 0x0038)
public class UUniformGridSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0038, false); // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0039, false); // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offRow                                                        = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offColumn                                                     = new ExternalOffset<int>(0x0040);                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	public int                                                Row                                                            => _offRow.GetValue();
	public int                                                Column                                                         => _offColumn.GetValue();
	#endregion


}

// Class UMG.VerticalBox
// 0x0008 (0x0120 - 0x0118)
public class UVerticalBox : UPanelWidget
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.VerticalBoxSlot
// 0x001A (0x0052 - 0x0038)
public class UVerticalBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateChildSize>                   _offSize                                                       = new ExternalOffset<FSlateChildSize>(0x0048, false);          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0050, false); // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0051, false); // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public FSlateChildSize                                    Size                                                           => _offSize.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.Viewport
// 0x0010 (0x0130 - 0x0120)
public class UViewport : UContentWidget
{
	#region Offsets
	private ExternalOffset<FLinearColor>                      _offBackgroundColor                                            = new ExternalOffset<FLinearColor>(0x0120, false);             // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FLinearColor                                       BackgroundColor                                                => _offBackgroundColor.GetValue();
	#endregion


}

// Class UMG.VisibilityBinding
// 0x0000 (0x0068 - 0x0068)
public class UVisibilityBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.WidgetAnimation
// 0x0036 (0x0378 - 0x0342)
public class UWidgetAnimation : UMovieSceneSequence
{
	#region Offsets
	private ExternalOffset<UMovieScene>                       _offMovieScene                                                 = new ExternalOffset<UMovieScene>(0x0348, true);               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FWidgetAnimationBinding>>   _offAnimationBindings                                          = new ExternalOffset<TArray<FWidgetAnimationBinding>>(0x0350, false); // 0x0350(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLegacyFinishOnStop                                        = new ExternalOffset<byte/*(bool)*/>(0x0360);                  // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offDisplayLabel                                               = new ExternalOffset<FString>(0x0368, false);                  // 0x0368(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UMovieScene                                        MovieScene                                                     => _offMovieScene.GetValue();
	public TArray<FWidgetAnimationBinding>                    AnimationBindings                                              => _offAnimationBindings.GetValue();
	public byte/*(bool)*/                                     bLegacyFinishOnStop                                            => _offbLegacyFinishOnStop.GetValue();
	public FString                                            DisplayLabel                                                   => _offDisplayLabel.GetValue();
	#endregion


}

// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (0x0038 - 0x0028)
public class UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
{
	#region Offsets
	private ExternalOffset<TArray<FBlueprintWidgetAnimationDelegateBinding>> _offWidgetAnimationDelegateBindings                            = new ExternalOffset<TArray<FBlueprintWidgetAnimationDelegateBinding>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings                                => _offWidgetAnimationDelegateBindings.GetValue();
	#endregion


}

// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0010 (0x0038 - 0x0028)
public class UWidgetAnimationPlayCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offFinished                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           Finished                                                       => _offFinished.GetValue();
	#endregion


}

// Class UMG.WidgetBinding
// 0x0000 (0x0068 - 0x0068)
public class UWidgetBinding : UPropertyBinding
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0080 (0x0328 - 0x02A8)
public class UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	#region Offsets
	private ExternalOffset<UWidgetTree>                       _offWidgetTree                                                 = new ExternalOffset<UWidgetTree>(0x02E0, true);               // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowTemplate                                             = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowDynamicCreation                                      = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbValidTemplate                                             = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbTemplateInitialized                                       = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbCookedTemplate                                            = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbClassRequiresNativeTick                                   = new ExternalOffset<char>(0x02E8, false);                     // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FDelegateRuntimeBinding>>   _offBindings                                                   = new ExternalOffset<TArray<FDelegateRuntimeBinding>>(0x02F0, false); // 0x02F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UWidgetAnimation>>          _offAnimations                                                 = new ExternalOffset<TArray<UWidgetAnimation>>(0x0300, false); // 0x0300(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offNamedSlots                                                 = new ExternalOffset<TArray<FName>>(0x0310, false);            // 0x0310(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UUserWidget>                       _offTemplate                                                   = new ExternalOffset<UUserWidget>(0x0348, true);               // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UWidgetTree                                        WidgetTree                                                     => _offWidgetTree.GetValue();
	public TArray<FDelegateRuntimeBinding>                    Bindings                                                       => _offBindings.GetValue();
	public TArray<UWidgetAnimation>                           Animations                                                     => _offAnimations.GetValue();
	public TArray<FName>                                      NamedSlots                                                     => _offNamedSlots.GetValue();
	public UUserWidget                                        Template                                                       => _offTemplate.GetValue();
	#endregion


}

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.WidgetComponent
// 0x00FF (0x0528 - 0x0429)
public class UWidgetComponent : UMeshComponent
{
	#region Offsets
	private ExternalOffset<EWidgetSpace>                      _offSpace                                                      = new ExternalOffset<EWidgetSpace>(0x0430, false);             // 0x0430(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EWidgetTimingPolicy>               _offTimingPolicy                                               = new ExternalOffset<EWidgetTimingPolicy>(0x0431, false);      // 0x0431(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offWidgetClass                                                = new ExternalOffset<UClass>(0x0438, true);                    // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FIntPoint>                         _offDrawSize                                                   = new ExternalOffset<FIntPoint>(0x0440, false);                // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbManuallyRedraw                                            = new ExternalOffset<byte/*(bool)*/>(0x0448);                  // 0x0448(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRedrawRequested                                           = new ExternalOffset<byte/*(bool)*/>(0x0449);                  // 0x0449(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRedrawTime                                                 = new ExternalOffset<float>(0x044C);                           // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FIntPoint>                         _offCurrentDrawSize                                            = new ExternalOffset<FIntPoint>(0x0458, false);                // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbDrawAtDesiredSize                                         = new ExternalOffset<byte/*(bool)*/>(0x0460);                  // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector2D>                         _offPivot                                                      = new ExternalOffset<FVector2D>(0x0464, false);                // 0x0464(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbReceiveHardwareInput                                      = new ExternalOffset<byte/*(bool)*/>(0x046C);                  // 0x046C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbWindowFocusable                                           = new ExternalOffset<byte/*(bool)*/>(0x046D);                  // 0x046D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EWindowVisibility>                 _offWindowVisibility                                           = new ExternalOffset<EWindowVisibility>(0x046E, false);        // 0x046E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbApplyGammaCorrection                                      = new ExternalOffset<byte/*(bool)*/>(0x046F);                  // 0x046F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ULocalPlayer>                      _offOwnerPlayer                                                = new ExternalOffset<ULocalPlayer>(0x0470, true);              // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FLinearColor>                      _offBackgroundColor                                            = new ExternalOffset<FLinearColor>(0x0478, false);             // 0x0478(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FLinearColor>                      _offTintColorAndOpacity                                        = new ExternalOffset<FLinearColor>(0x0488, false);             // 0x0488(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offOpacityFromTexture                                         = new ExternalOffset<float>(0x0498);                           // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EWidgetBlendMode>                  _offBlendMode                                                  = new ExternalOffset<EWidgetBlendMode>(0x049C, false);         // 0x049C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTwoSided                                                = new ExternalOffset<byte/*(bool)*/>(0x049D);                  // 0x049D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offTickWhenOffscreen                                          = new ExternalOffset<byte/*(bool)*/>(0x049E);                  // 0x049E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UUserWidget>                       _offWidget                                                     = new ExternalOffset<UUserWidget>(0x04A0, true);               // 0x04A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UBodySetup>                        _offBodySetup                                                  = new ExternalOffset<UBodySetup>(0x04C8, true);                // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offTranslucentMaterial                                        = new ExternalOffset<UMaterialInterface>(0x04D0, true);        // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offTranslucentMaterial_OneSided                               = new ExternalOffset<UMaterialInterface>(0x04D8, true);        // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offOpaqueMaterial                                             = new ExternalOffset<UMaterialInterface>(0x04E0, true);        // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offOpaqueMaterial_OneSided                                    = new ExternalOffset<UMaterialInterface>(0x04E8, true);        // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offMaskedMaterial                                             = new ExternalOffset<UMaterialInterface>(0x04F0, true);        // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInterface>                _offMaskedMaterial_OneSided                                    = new ExternalOffset<UMaterialInterface>(0x04F8, true);        // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UTextureRenderTarget2D>            _offRenderTarget                                               = new ExternalOffset<UTextureRenderTarget2D>(0x0500, true);    // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMaterialInstance                                           = new ExternalOffset<UMaterialInstanceDynamic>(0x0508, true);  // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbAddedToScreen                                             = new ExternalOffset<byte/*(bool)*/>(0x0510);                  // 0x0510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbEditTimeUsable                                            = new ExternalOffset<byte/*(bool)*/>(0x0511);                  // 0x0511(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FName>                             _offSharedLayerName                                            = new ExternalOffset<FName>(0x0514, false);                    // 0x0514(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offLayerZOrder                                                = new ExternalOffset<int>(0x051C);                             // 0x051C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EWidgetGeometryMode>               _offGeometryMode                                               = new ExternalOffset<EWidgetGeometryMode>(0x0520, false);      // 0x0520(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offCylinderArcAngle                                           = new ExternalOffset<float>(0x0524);                           // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public EWidgetSpace                                       Space                                                          => _offSpace.GetValue();
	public EWidgetTimingPolicy                                TimingPolicy                                                   => _offTimingPolicy.GetValue();
	public UClass                                             WidgetClass                                                    => _offWidgetClass.GetValue();
	public FIntPoint                                          DrawSize                                                       => _offDrawSize.GetValue();
	public byte/*(bool)*/                                     bManuallyRedraw                                                => _offbManuallyRedraw.GetValue();
	public byte/*(bool)*/                                     bRedrawRequested                                               => _offbRedrawRequested.GetValue();
	public float                                              RedrawTime                                                     => _offRedrawTime.GetValue();
	public FIntPoint                                          CurrentDrawSize                                                => _offCurrentDrawSize.GetValue();
	public byte/*(bool)*/                                     bDrawAtDesiredSize                                             => _offbDrawAtDesiredSize.GetValue();
	public FVector2D                                          Pivot                                                          => _offPivot.GetValue();
	public byte/*(bool)*/                                     bReceiveHardwareInput                                          => _offbReceiveHardwareInput.GetValue();
	public byte/*(bool)*/                                     bWindowFocusable                                               => _offbWindowFocusable.GetValue();
	public EWindowVisibility                                  WindowVisibility                                               => _offWindowVisibility.GetValue();
	public byte/*(bool)*/                                     bApplyGammaCorrection                                          => _offbApplyGammaCorrection.GetValue();
	public ULocalPlayer                                       OwnerPlayer                                                    => _offOwnerPlayer.GetValue();
	public FLinearColor                                       BackgroundColor                                                => _offBackgroundColor.GetValue();
	public FLinearColor                                       TintColorAndOpacity                                            => _offTintColorAndOpacity.GetValue();
	public float                                              OpacityFromTexture                                             => _offOpacityFromTexture.GetValue();
	public EWidgetBlendMode                                   BlendMode                                                      => _offBlendMode.GetValue();
	public byte/*(bool)*/                                     bIsTwoSided                                                    => _offbIsTwoSided.GetValue();
	public byte/*(bool)*/                                     TickWhenOffscreen                                              => _offTickWhenOffscreen.GetValue();
	public UUserWidget                                        Widget                                                         => _offWidget.GetValue();
	public UBodySetup                                         BodySetup                                                      => _offBodySetup.GetValue();
	public UMaterialInterface                                 TranslucentMaterial                                            => _offTranslucentMaterial.GetValue();
	public UMaterialInterface                                 TranslucentMaterial_OneSided                                   => _offTranslucentMaterial_OneSided.GetValue();
	public UMaterialInterface                                 OpaqueMaterial                                                 => _offOpaqueMaterial.GetValue();
	public UMaterialInterface                                 OpaqueMaterial_OneSided                                        => _offOpaqueMaterial_OneSided.GetValue();
	public UMaterialInterface                                 MaskedMaterial                                                 => _offMaskedMaterial.GetValue();
	public UMaterialInterface                                 MaskedMaterial_OneSided                                        => _offMaskedMaterial_OneSided.GetValue();
	public UTextureRenderTarget2D                             RenderTarget                                                   => _offRenderTarget.GetValue();
	public UMaterialInstanceDynamic                           MaterialInstance                                               => _offMaterialInstance.GetValue();
	public byte/*(bool)*/                                     bAddedToScreen                                                 => _offbAddedToScreen.GetValue();
	public byte/*(bool)*/                                     bEditTimeUsable                                                => _offbEditTimeUsable.GetValue();
	public FName                                              SharedLayerName                                                => _offSharedLayerName.GetValue();
	public int                                                LayerZOrder                                                    => _offLayerZOrder.GetValue();
	public EWidgetGeometryMode                                GeometryMode                                                   => _offGeometryMode.GetValue();
	public float                                              CylinderArcAngle                                               => _offCylinderArcAngle.GetValue();
	#endregion


}

// Class UMG.WidgetInteractionComponent
// 0x0283 (0x0403 - 0x0180)
public class UWidgetInteractionComponent : USceneComponent
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHoveredWidgetChanged                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0218, false); // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offVirtualUserIndex                                           = new ExternalOffset<int>(0x0238);                             // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPointerIndex                                               = new ExternalOffset<float>(0x023C);                           // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>    _offTraceChannel                                               = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x0240, false); // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offInteractionDistance                                        = new ExternalOffset<float>(0x0244);                           // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EWidgetInteractionSource>          _offInteractionSource                                          = new ExternalOffset<EWidgetInteractionSource>(0x0248, false); // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableHitTesting                                          = new ExternalOffset<byte/*(bool)*/>(0x0249);                  // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowDebug                                                 = new ExternalOffset<byte/*(bool)*/>(0x024A);                  // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDebugColor                                                 = new ExternalOffset<FLinearColor>(0x024C, false);             // 0x024C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FHitResult>                        _offCustomHitResult                                            = new ExternalOffset<FHitResult>(0x02D8, false);               // 0x02D8(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector2D>                         _offLocalHitLocation                                           = new ExternalOffset<FVector2D>(0x0360, false);                // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector2D>                         _offLastLocalHitLocation                                       = new ExternalOffset<FVector2D>(0x0368, false);                // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UWidgetComponent>                  _offHoveredWidgetComponent                                     = new ExternalOffset<UWidgetComponent>(0x0370, true);          // 0x0370(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FHitResult>                        _offLastHitResult                                              = new ExternalOffset<FHitResult>(0x0378, false);               // 0x0378(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsHoveredWidgetInteractable                               = new ExternalOffset<byte/*(bool)*/>(0x0400);                  // 0x0400(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsHoveredWidgetFocusable                                  = new ExternalOffset<byte/*(bool)*/>(0x0401);                  // 0x0401(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsHoveredWidgetHitTestVisible                             = new ExternalOffset<byte/*(bool)*/>(0x0402);                  // 0x0402(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnHoveredWidgetChanged                                         => _offOnHoveredWidgetChanged.GetValue();
	public int                                                VirtualUserIndex                                               => _offVirtualUserIndex.GetValue();
	public float                                              PointerIndex                                                   => _offPointerIndex.GetValue();
	public TEnumAsByte<ECollisionChannel>                     TraceChannel                                                   => _offTraceChannel.GetValue();
	public float                                              InteractionDistance                                            => _offInteractionDistance.GetValue();
	public EWidgetInteractionSource                           InteractionSource                                              => _offInteractionSource.GetValue();
	public byte/*(bool)*/                                     bEnableHitTesting                                              => _offbEnableHitTesting.GetValue();
	public byte/*(bool)*/                                     bShowDebug                                                     => _offbShowDebug.GetValue();
	public FLinearColor                                       DebugColor                                                     => _offDebugColor.GetValue();
	public FHitResult                                         CustomHitResult                                                => _offCustomHitResult.GetValue();
	public FVector2D                                          LocalHitLocation                                               => _offLocalHitLocation.GetValue();
	public FVector2D                                          LastLocalHitLocation                                           => _offLastLocalHitLocation.GetValue();
	public UWidgetComponent                                   HoveredWidgetComponent                                         => _offHoveredWidgetComponent.GetValue();
	public FHitResult                                         LastHitResult                                                  => _offLastHitResult.GetValue();
	public byte/*(bool)*/                                     bIsHoveredWidgetInteractable                                   => _offbIsHoveredWidgetInteractable.GetValue();
	public byte/*(bool)*/                                     bIsHoveredWidgetFocusable                                      => _offbIsHoveredWidgetFocusable.GetValue();
	public byte/*(bool)*/                                     bIsHoveredWidgetHitTestVisible                                 => _offbIsHoveredWidgetHitTestVisible.GetValue();
	#endregion


}

// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
public class UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class UMG.WidgetNavigation
// 0x00D8 (0x0100 - 0x0028)
public class UWidgetNavigation : UObject
{
	#region Offsets
	private ExternalOffset<FWidgetNavigationData>             _offUp                                                         = new ExternalOffset<FWidgetNavigationData>(0x0028, false);    // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetNavigationData>             _offDown                                                       = new ExternalOffset<FWidgetNavigationData>(0x004C, false);    // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetNavigationData>             _offLeft                                                       = new ExternalOffset<FWidgetNavigationData>(0x0070, false);    // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetNavigationData>             _offRight                                                      = new ExternalOffset<FWidgetNavigationData>(0x0094, false);    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetNavigationData>             _offNext                                                       = new ExternalOffset<FWidgetNavigationData>(0x00B8, false);    // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FWidgetNavigationData>             _offPrevious                                                   = new ExternalOffset<FWidgetNavigationData>(0x00DC, false);    // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FWidgetNavigationData                              Up                                                             => _offUp.GetValue();
	public FWidgetNavigationData                              Down                                                           => _offDown.GetValue();
	public FWidgetNavigationData                              Left                                                           => _offLeft.GetValue();
	public FWidgetNavigationData                              Right                                                          => _offRight.GetValue();
	public FWidgetNavigationData                              Next                                                           => _offNext.GetValue();
	public FWidgetNavigationData                              Previous                                                       => _offPrevious.GetValue();
	#endregion


}

// Class UMG.WidgetSwitcher
// 0x000C (0x0124 - 0x0118)
public class UWidgetSwitcher : UPanelWidget
{
	#region Offsets
	private ExternalOffset<int>                               _offActiveWidgetIndex                                          = new ExternalOffset<int>(0x0120);                             // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                ActiveWidgetIndex                                              => _offActiveWidgetIndex.GetValue();
	#endregion


}

// Class UMG.WidgetSwitcherSlot
// 0x0012 (0x004A - 0x0038)
public class UWidgetSwitcherSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
public class UWidgetTree : UObject
{
	#region Offsets
	private ExternalOffset<UWidget>                           _offRootWidget                                                 = new ExternalOffset<UWidget>(0x0028, true);                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UWidget                                            RootWidget                                                     => _offRootWidget.GetValue();
	#endregion


}

// Class UMG.WindowTitleBarArea
// 0x0002 (0x0122 - 0x0120)
public class UWindowTitleBarArea : UContentWidget
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbWindowButtonsEnabled                                      = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDoubleClickTogglesFullscreen                              = new ExternalOffset<byte/*(bool)*/>(0x0121);                  // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bWindowButtonsEnabled                                          => _offbWindowButtonsEnabled.GetValue();
	public byte/*(bool)*/                                     bDoubleClickTogglesFullscreen                                  => _offbDoubleClickTogglesFullscreen.GetValue();
	#endregion


}

// Class UMG.WindowTitleBarAreaSlot
// 0x0012 (0x004A - 0x0038)
public class UWindowTitleBarAreaSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0048, false); // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0049, false); // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}

// Class UMG.WrapBox
// 0x0015 (0x012D - 0x0118)
public class UWrapBox : UPanelWidget
{
	#region Offsets
	private ExternalOffset<FVector2D>                         _offInnerSlotPadding                                           = new ExternalOffset<FVector2D>(0x0120, false);                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWrapWidth                                                  = new ExternalOffset<float>(0x0128);                           // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbExplicitWrapWidth                                         = new ExternalOffset<byte/*(bool)*/>(0x012C);                  // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                          InnerSlotPadding                                               => _offInnerSlotPadding.GetValue();
	public float                                              WrapWidth                                                      => _offWrapWidth.GetValue();
	public byte/*(bool)*/                                     bExplicitWrapWidth                                             => _offbExplicitWrapWidth.GetValue();
	#endregion


}

// Class UMG.WrapBoxSlot
// 0x001A (0x0052 - 0x0038)
public class UWrapBoxSlot : UPanelSlot
{
	#region Offsets
	private ExternalOffset<FMargin>                           _offPadding                                                    = new ExternalOffset<FMargin>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFillEmptySpace                                            = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFillSpanWhenLessThan                                       = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHorizontalAlignment>> _offHorizontalAlignment                                        = new ExternalOffset<TEnumAsByte<EHorizontalAlignment>>(0x0050, false); // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EVerticalAlignment>>   _offVerticalAlignment                                          = new ExternalOffset<TEnumAsByte<EVerticalAlignment>>(0x0051, false); // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                            Padding                                                        => _offPadding.GetValue();
	public byte/*(bool)*/                                     bFillEmptySpace                                                => _offbFillEmptySpace.GetValue();
	public float                                              FillSpanWhenLessThan                                           => _offFillSpanWhenLessThan.GetValue();
	public TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment                                            => _offHorizontalAlignment.GetValue();
	public TEnumAsByte<EVerticalAlignment>                    VerticalAlignment                                              => _offVerticalAlignment.GetValue();
	#endregion


}


}