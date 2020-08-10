// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EHorizontalAlignment
public enum EHorizontalAlignment : byte
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
}

// Enum SlateCore.ENavigationGenesis
public enum ENavigationGenesis : byte
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
}

// Enum SlateCore.EUINavigationRule
public enum EUINavigationRule : byte
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__CustomBoundary = 5,
	EUINavigationRule__Invalid     = 6,
	EUINavigationRule__EUINavigationRule_MAX = 7
}

// Enum SlateCore.ENavigationSource
public enum ENavigationSource : byte
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
}

// Enum SlateCore.EUINavigationAction
public enum EUINavigationAction : byte
{
	EUINavigationAction__Accept    = 0,
	EUINavigationAction__Back      = 1,
	EUINavigationAction__Num       = 2,
	EUINavigationAction__Invalid   = 3,
	EUINavigationAction__EUINavigationAction_MAX = 4
}

// Enum SlateCore.EUINavigation
public enum EUINavigation : byte
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
}

// Enum SlateCore.EButtonPressMethod
public enum EButtonPressMethod : byte
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
}

// Enum SlateCore.EFlowDirectionPreference
public enum EFlowDirectionPreference : byte
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4
}

// Enum SlateCore.EButtonTouchMethod
public enum EButtonTouchMethod : byte
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__Down       = 1,
	EButtonTouchMethod__PreciseTap = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 3
}

// Enum SlateCore.ECheckBoxState
public enum ECheckBoxState : byte
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
}

// Enum SlateCore.EButtonClickMethod
public enum EButtonClickMethod : byte
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
}

// Enum SlateCore.ETextCommit
public enum ETextCommit : byte
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
}

// Enum SlateCore.EWidgetClipping
public enum EWidgetClipping : byte
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
}

// Enum SlateCore.EColorVisionDeficiency
public enum EColorVisionDeficiency : byte
{
	EColorVisionDeficiency__NormalVision = 0,
	EColorVisionDeficiency__Deuteranope = 1,
	EColorVisionDeficiency__Protanope = 2,
	EColorVisionDeficiency__Tritanope = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX = 4
}

// Enum SlateCore.ETextShapingMethod
public enum ETextShapingMethod : byte
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
}

// Enum SlateCore.ESelectInfo
public enum ESelectInfo : byte
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
}

// Enum SlateCore.EFontLayoutMethod
public enum EFontLayoutMethod : byte
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
}

// Enum SlateCore.EFontLoadingPolicy
public enum EFontLoadingPolicy : byte
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
}

// Enum SlateCore.EFontHinting
public enum EFontHinting : byte
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
}

// Enum SlateCore.ESlateBrushImageType
public enum ESlateBrushImageType : byte
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
}

// Enum SlateCore.EFontFallback
public enum EFontFallback : byte
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
}

// Enum SlateCore.EFocusCause
public enum EFocusCause : byte
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
}

// Enum SlateCore.ESlateBrushMirrorType
public enum ESlateBrushMirrorType : byte
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
}

// Enum SlateCore.ESlateCheckBoxType
public enum ESlateCheckBoxType : byte
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
}

// Enum SlateCore.ESlateDebuggingFocusEvent
public enum ESlateDebuggingFocusEvent : byte
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__ESlateDebuggingFocusEvent_MAX = 3
}

// Enum SlateCore.ESlateBrushTileType
public enum ESlateBrushTileType : byte
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
}

// Enum SlateCore.ESlateParentWindowSearchMethod
public enum ESlateParentWindowSearchMethod : byte
{
	ESlateParentWindowSearchMethod__ActiveWindow = 0,
	ESlateParentWindowSearchMethod__MainWindow = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX = 2
}

// Enum SlateCore.EConsumeMouseWheel
public enum EConsumeMouseWheel : byte
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
}

// Enum SlateCore.ESlateBrushDrawType
public enum ESlateBrushDrawType : byte
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
}

// Enum SlateCore.ESlateDebuggingNavigationMethod
public enum ESlateDebuggingNavigationMethod : byte
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6
}

// Enum SlateCore.ESlateColorStylingMode
public enum ESlateColorStylingMode : byte
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
}

// Enum SlateCore.ESlateDebuggingStateChangeEvent
public enum ESlateDebuggingStateChangeEvent : byte
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2
}

// Enum SlateCore.ESlateDebuggingInputEvent
public enum ESlateDebuggingInputEvent : byte
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__MouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonUp = 4,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 5,
	ESlateDebuggingInputEvent__MouseWheel = 6,
	ESlateDebuggingInputEvent__TouchStart = 7,
	ESlateDebuggingInputEvent__TouchEnd = 8,
	ESlateDebuggingInputEvent__DragDetected = 9,
	ESlateDebuggingInputEvent__DragEnter = 10,
	ESlateDebuggingInputEvent__DragLeave = 11,
	ESlateDebuggingInputEvent__DragOver = 12,
	ESlateDebuggingInputEvent__DragDrop = 13,
	ESlateDebuggingInputEvent__DropMessage = 14,
	ESlateDebuggingInputEvent__KeyDown = 15,
	ESlateDebuggingInputEvent__KeyUp = 16,
	ESlateDebuggingInputEvent__KeyChar = 17,
	ESlateDebuggingInputEvent__AnalogInput = 18,
	ESlateDebuggingInputEvent__TouchGesture = 19,
	ESlateDebuggingInputEvent__COUNT = 20,
	ESlateDebuggingInputEvent__ESlateDebuggingInputEvent_MAX = 21
}

// Enum SlateCore.EScrollDirection
public enum EScrollDirection : byte
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
}

// Enum SlateCore.EOrientation
public enum EOrientation : byte
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
}

// Enum SlateCore.EMenuPlacement
public enum EMenuPlacement : byte
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
}

// Enum SlateCore.EVerticalAlignment
public enum EVerticalAlignment : byte
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
public class FMargin : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offLeft                                                       = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTop                                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRight                                                      = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBottom                                                     = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Left                                                           => _offLeft.GetValue();
	public float                                               Top                                                            => _offTop.GetValue();
	public float                                               Right                                                          => _offRight.GetValue();
	public float                                               Bottom                                                         => _offBottom.GetValue();
	#endregion

	public FMargin(float c_Left, float c_Top, float c_Right, float c_Bottom) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLeft.SetValue(c_Left);
		_offTop.SetValue(c_Top);
		_offRight.SetValue(c_Right);
		_offBottom.SetValue(c_Bottom);
	}
}
// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
public class FSlateWidgetStyle : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSlateWidgetStyle() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.InputEvent
// 0x0018
public class FInputEvent : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FInputEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.SlateSound
// 0x0018
public class FSlateSound : ExternalClass
{
	#region Offsets
	private ExternalOffset<UObject>                            _offResourceObject                                             = new ExternalOffset<UObject>(0x0000, true);                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UObject                                             ResourceObject                                                 => _offResourceObject.GetValue();
	#endregion

	public FSlateSound(UObject c_ResourceObject) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offResourceObject.SetValue(c_ResourceObject);
	}
}
// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0070 - 0x0018)
public class FPointerEvent : FInputEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FPointerEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.SlateColor
// 0x0028
public class FSlateColor : ExternalClass
{
	#region Offsets
	private ExternalOffset<FLinearColor>                       _offSpecifiedColor                                             = new ExternalOffset<FLinearColor>(0x0000, false);             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<ESlateColorStylingMode>> _offColorUseRule                                               = new ExternalOffset<TEnumAsByte<ESlateColorStylingMode>>(0x0010, false); // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FLinearColor                                        SpecifiedColor                                                 => _offSpecifiedColor.GetValue();
	public TEnumAsByte<ESlateColorStylingMode>                 ColorUseRule                                                   => _offColorUseRule.GetValue();
	#endregion

	public FSlateColor(FLinearColor c_SpecifiedColor, TEnumAsByte<ESlateColorStylingMode> c_ColorUseRule) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpecifiedColor.SetValue(c_SpecifiedColor);
		_offColorUseRule.SetValue(c_ColorUseRule);
	}
}
// ScriptStruct SlateCore.SlateBrush
// 0x0088
public class FSlateBrush : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offImageSize                                                  = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offMargin                                                     = new ExternalOffset<FMargin>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offTintColor                                                  = new ExternalOffset<FSlateColor>(0x0020, false);              // 0x0020(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offResourceObject                                             = new ExternalOffset<UObject>(0x0048, true);                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                              _offResourceName                                               = new ExternalOffset<FName>(0x0050, false);                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FBox2D>                             _offUVRegion                                                   = new ExternalOffset<FBox2D>(0x0058, false);                   // 0x0058(0x0014) (ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<ESlateBrushDrawType>>   _offDrawAs                                                     = new ExternalOffset<TEnumAsByte<ESlateBrushDrawType>>(0x006C, false); // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESlateBrushTileType>>   _offTiling                                                     = new ExternalOffset<TEnumAsByte<ESlateBrushTileType>>(0x006D, false); // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESlateBrushMirrorType>> _offMirroring                                                  = new ExternalOffset<TEnumAsByte<ESlateBrushMirrorType>>(0x006E, false); // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESlateBrushImageType>>  _offImageType                                                  = new ExternalOffset<TEnumAsByte<ESlateBrushImageType>>(0x006F, false); // 0x006F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbIsDynamicallyLoaded                                       = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                               _offbHasUObject                                                = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FVector2D                                           ImageSize                                                      => _offImageSize.GetValue();
	public FMargin                                             Margin                                                         => _offMargin.GetValue();
	public FSlateColor                                         TintColor                                                      => _offTintColor.GetValue();
	public UObject                                             ResourceObject                                                 => _offResourceObject.GetValue();
	public FName                                               ResourceName                                                   => _offResourceName.GetValue();
	public FBox2D                                              UVRegion                                                       => _offUVRegion.GetValue();
	public TEnumAsByte<ESlateBrushDrawType>                    DrawAs                                                         => _offDrawAs.GetValue();
	public TEnumAsByte<ESlateBrushTileType>                    Tiling                                                         => _offTiling.GetValue();
	public TEnumAsByte<ESlateBrushMirrorType>                  Mirroring                                                      => _offMirroring.GetValue();
	public TEnumAsByte<ESlateBrushImageType>                   ImageType                                                      => _offImageType.GetValue();
	#endregion

	public FSlateBrush(FVector2D c_ImageSize, FMargin c_Margin, FSlateColor c_TintColor, UObject c_ResourceObject, FName c_ResourceName, FBox2D c_UVRegion, TEnumAsByte<ESlateBrushDrawType> c_DrawAs, TEnumAsByte<ESlateBrushTileType> c_Tiling, TEnumAsByte<ESlateBrushMirrorType> c_Mirroring, TEnumAsByte<ESlateBrushImageType> c_ImageType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offImageSize.SetValue(c_ImageSize);
		_offMargin.SetValue(c_Margin);
		_offTintColor.SetValue(c_TintColor);
		_offResourceObject.SetValue(c_ResourceObject);
		_offResourceName.SetValue(c_ResourceName);
		_offUVRegion.SetValue(c_UVRegion);
		_offDrawAs.SetValue(c_DrawAs);
		_offTiling.SetValue(c_Tiling);
		_offMirroring.SetValue(c_Mirroring);
		_offImageType.SetValue(c_ImageType);
	}
}
// ScriptStruct SlateCore.FontOutlineSettings
// 0x0020
public class FFontOutlineSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offOutlineSize                                                = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSeparateFillAlpha                                         = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbApplyOutlineToDropShadows                                 = new ExternalOffset<byte/*(bool)*/>(0x0005);                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offOutlineMaterial                                            = new ExternalOffset<UObject>(0x0008, true);                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offOutlineColor                                               = new ExternalOffset<FLinearColor>(0x0010, false);             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 OutlineSize                                                    => _offOutlineSize.GetValue();
	public byte/*(bool)*/                                      bSeparateFillAlpha                                             => _offbSeparateFillAlpha.GetValue();
	public byte/*(bool)*/                                      bApplyOutlineToDropShadows                                     => _offbApplyOutlineToDropShadows.GetValue();
	public UObject                                             OutlineMaterial                                                => _offOutlineMaterial.GetValue();
	public FLinearColor                                        OutlineColor                                                   => _offOutlineColor.GetValue();
	#endregion

	public FFontOutlineSettings(int c_OutlineSize, byte/*(bool)*/ c_bSeparateFillAlpha, byte/*(bool)*/ c_bApplyOutlineToDropShadows, UObject c_OutlineMaterial, FLinearColor c_OutlineColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOutlineSize.SetValue(c_OutlineSize);
		_offbSeparateFillAlpha.SetValue(c_bSeparateFillAlpha);
		_offbApplyOutlineToDropShadows.SetValue(c_bApplyOutlineToDropShadows);
		_offOutlineMaterial.SetValue(c_OutlineMaterial);
		_offOutlineColor.SetValue(c_OutlineColor);
	}
}
// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
public class FScrollBorderStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offTopShadowBrush                                             = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBottomShadowBrush                                          = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         TopShadowBrush                                                 => _offTopShadowBrush.GetValue();
	public FSlateBrush                                         BottomShadowBrush                                              => _offBottomShadowBrush.GetValue();
	#endregion

	public FScrollBorderStyle(FSlateBrush c_TopShadowBrush, FSlateBrush c_BottomShadowBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTopShadowBrush.SetValue(c_TopShadowBrush);
		_offBottomShadowBrush.SetValue(c_BottomShadowBrush);
	}
}
// ScriptStruct SlateCore.ButtonStyle
// 0x0270 (0x0278 - 0x0008)
public class FButtonStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offNormal                                                     = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHovered                                                    = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offPressed                                                    = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDisabled                                                   = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offNormalPadding                                              = new ExternalOffset<FMargin>(0x0228, false);                  // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offPressedPadding                                             = new ExternalOffset<FMargin>(0x0238, false);                  // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offPressedSlateSound                                          = new ExternalOffset<FSlateSound>(0x0248, false);              // 0x0248(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offHoveredSlateSound                                          = new ExternalOffset<FSlateSound>(0x0260, false);              // 0x0260(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         Normal                                                         => _offNormal.GetValue();
	public FSlateBrush                                         Hovered                                                        => _offHovered.GetValue();
	public FSlateBrush                                         Pressed                                                        => _offPressed.GetValue();
	public FSlateBrush                                         Disabled                                                       => _offDisabled.GetValue();
	public FMargin                                             NormalPadding                                                  => _offNormalPadding.GetValue();
	public FMargin                                             PressedPadding                                                 => _offPressedPadding.GetValue();
	public FSlateSound                                         PressedSlateSound                                              => _offPressedSlateSound.GetValue();
	public FSlateSound                                         HoveredSlateSound                                              => _offHoveredSlateSound.GetValue();
	#endregion

	public FButtonStyle(FSlateBrush c_Normal, FSlateBrush c_Hovered, FSlateBrush c_Pressed, FSlateBrush c_Disabled, FMargin c_NormalPadding, FMargin c_PressedPadding, FSlateSound c_PressedSlateSound, FSlateSound c_HoveredSlateSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNormal.SetValue(c_Normal);
		_offHovered.SetValue(c_Hovered);
		_offPressed.SetValue(c_Pressed);
		_offDisabled.SetValue(c_Disabled);
		_offNormalPadding.SetValue(c_NormalPadding);
		_offPressedPadding.SetValue(c_PressedPadding);
		_offPressedSlateSound.SetValue(c_PressedSlateSound);
		_offHoveredSlateSound.SetValue(c_HoveredSlateSound);
	}
}
// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
public class FScrollBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offTopShadowBrush                                             = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBottomShadowBrush                                          = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offLeftShadowBrush                                            = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offRightShadowBrush                                           = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         TopShadowBrush                                                 => _offTopShadowBrush.GetValue();
	public FSlateBrush                                         BottomShadowBrush                                              => _offBottomShadowBrush.GetValue();
	public FSlateBrush                                         LeftShadowBrush                                                => _offLeftShadowBrush.GetValue();
	public FSlateBrush                                         RightShadowBrush                                               => _offRightShadowBrush.GetValue();
	#endregion

	public FScrollBoxStyle(FSlateBrush c_TopShadowBrush, FSlateBrush c_BottomShadowBrush, FSlateBrush c_LeftShadowBrush, FSlateBrush c_RightShadowBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTopShadowBrush.SetValue(c_TopShadowBrush);
		_offBottomShadowBrush.SetValue(c_BottomShadowBrush);
		_offLeftShadowBrush.SetValue(c_LeftShadowBrush);
		_offRightShadowBrush.SetValue(c_RightShadowBrush);
	}
}
// ScriptStruct SlateCore.SlateFontInfo
// 0x0050
public class FSlateFontInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UObject>                            _offFontObject                                                 = new ExternalOffset<UObject>(0x0000, true);                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offFontMaterial                                               = new ExternalOffset<UObject>(0x0008, true);                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFontOutlineSettings>               _offOutlineSettings                                            = new ExternalOffset<FFontOutlineSettings>(0x0010, false);     // 0x0010(0x0020) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTypefaceFontName                                           = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSize                                                       = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UObject                                             FontObject                                                     => _offFontObject.GetValue();
	public UObject                                             FontMaterial                                                   => _offFontMaterial.GetValue();
	public FFontOutlineSettings                                OutlineSettings                                                => _offOutlineSettings.GetValue();
	public FName                                               TypefaceFontName                                               => _offTypefaceFontName.GetValue();
	public int                                                 Size                                                           => _offSize.GetValue();
	#endregion

	public FSlateFontInfo(UObject c_FontObject, UObject c_FontMaterial, FFontOutlineSettings c_OutlineSettings, FName c_TypefaceFontName, int c_Size) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFontObject.SetValue(c_FontObject);
		_offFontMaterial.SetValue(c_FontMaterial);
		_offOutlineSettings.SetValue(c_OutlineSettings);
		_offTypefaceFontName.SetValue(c_TypefaceFontName);
		_offSize.SetValue(c_Size);
	}
}
// ScriptStruct SlateCore.Geometry
// 0x0038
public class FGeometry : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGeometry() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
public class FCharacterEvent : FInputEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FCharacterEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.ComboButtonStyle
// 0x0398 (0x03A0 - 0x0008)
public class FComboButtonStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                       _offButtonStyle                                                = new ExternalOffset<FButtonStyle>(0x0008, false);             // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDownArrowImage                                             = new ExternalOffset<FSlateBrush>(0x0280, false);              // 0x0280(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMenuBorderBrush                                            = new ExternalOffset<FSlateBrush>(0x0308, false);              // 0x0308(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offMenuBorderPadding                                          = new ExternalOffset<FMargin>(0x0390, false);                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                        ButtonStyle                                                    => _offButtonStyle.GetValue();
	public FSlateBrush                                         DownArrowImage                                                 => _offDownArrowImage.GetValue();
	public FSlateBrush                                         MenuBorderBrush                                                => _offMenuBorderBrush.GetValue();
	public FMargin                                             MenuBorderPadding                                              => _offMenuBorderPadding.GetValue();
	#endregion

	public FComboButtonStyle(FButtonStyle c_ButtonStyle, FSlateBrush c_DownArrowImage, FSlateBrush c_MenuBorderBrush, FMargin c_MenuBorderPadding) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offButtonStyle.SetValue(c_ButtonStyle);
		_offDownArrowImage.SetValue(c_DownArrowImage);
		_offMenuBorderBrush.SetValue(c_MenuBorderBrush);
		_offMenuBorderPadding.SetValue(c_MenuBorderPadding);
	}
}
// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
public class FKeyEvent : FInputEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FKeyEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
public class FNavigationEvent : FInputEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FNavigationEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.TextBlockStyle
// 0x0260 (0x0268 - 0x0008)
public class FTextBlockStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateFontInfo>                     _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0008, false);           // 0x0008(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offColorAndOpacity                                            = new ExternalOffset<FSlateColor>(0x0058, false);              // 0x0058(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offShadowOffset                                               = new ExternalOffset<FVector2D>(0x0080, false);                // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offShadowColorAndOpacity                                      = new ExternalOffset<FLinearColor>(0x0088, false);             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offSelectedBackgroundColor                                    = new ExternalOffset<FSlateColor>(0x0098, false);              // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offHighlightColor                                             = new ExternalOffset<FLinearColor>(0x00C0, false);             // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHighlightShape                                             = new ExternalOffset<FSlateBrush>(0x00D0, false);              // 0x00D0(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offStrikeBrush                                                = new ExternalOffset<FSlateBrush>(0x0158, false);              // 0x0158(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUnderlineBrush                                             = new ExternalOffset<FSlateBrush>(0x01E0, false);              // 0x01E0(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateFontInfo                                      Font                                                           => _offFont.GetValue();
	public FSlateColor                                         ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FVector2D                                           ShadowOffset                                                   => _offShadowOffset.GetValue();
	public FLinearColor                                        ShadowColorAndOpacity                                          => _offShadowColorAndOpacity.GetValue();
	public FSlateColor                                         SelectedBackgroundColor                                        => _offSelectedBackgroundColor.GetValue();
	public FLinearColor                                        HighlightColor                                                 => _offHighlightColor.GetValue();
	public FSlateBrush                                         HighlightShape                                                 => _offHighlightShape.GetValue();
	public FSlateBrush                                         StrikeBrush                                                    => _offStrikeBrush.GetValue();
	public FSlateBrush                                         UnderlineBrush                                                 => _offUnderlineBrush.GetValue();
	#endregion

	public FTextBlockStyle(FSlateFontInfo c_Font, FSlateColor c_ColorAndOpacity, FVector2D c_ShadowOffset, FLinearColor c_ShadowColorAndOpacity, FSlateColor c_SelectedBackgroundColor, FLinearColor c_HighlightColor, FSlateBrush c_HighlightShape, FSlateBrush c_StrikeBrush, FSlateBrush c_UnderlineBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFont.SetValue(c_Font);
		_offColorAndOpacity.SetValue(c_ColorAndOpacity);
		_offShadowOffset.SetValue(c_ShadowOffset);
		_offShadowColorAndOpacity.SetValue(c_ShadowColorAndOpacity);
		_offSelectedBackgroundColor.SetValue(c_SelectedBackgroundColor);
		_offHighlightColor.SetValue(c_HighlightColor);
		_offHighlightShape.SetValue(c_HighlightShape);
		_offStrikeBrush.SetValue(c_StrikeBrush);
		_offUnderlineBrush.SetValue(c_UnderlineBrush);
	}
}
// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
public class FAnalogInputEvent : FKeyEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnalogInputEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
public class FTableColumnHeaderStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offSortPrimaryAscendingImage                                  = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offSortPrimaryDescendingImage                                 = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offSortSecondaryAscendingImage                                = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offSortSecondaryDescendingImage                               = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offNormalBrush                                                = new ExternalOffset<FSlateBrush>(0x0228, false);              // 0x0228(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredBrush                                               = new ExternalOffset<FSlateBrush>(0x02B0, false);              // 0x02B0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMenuDropdownImage                                          = new ExternalOffset<FSlateBrush>(0x0338, false);              // 0x0338(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMenuDropdownNormalBorderBrush                              = new ExternalOffset<FSlateBrush>(0x03C0, false);              // 0x03C0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMenuDropdownHoveredBorderBrush                             = new ExternalOffset<FSlateBrush>(0x0448, false);              // 0x0448(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         SortPrimaryAscendingImage                                      => _offSortPrimaryAscendingImage.GetValue();
	public FSlateBrush                                         SortPrimaryDescendingImage                                     => _offSortPrimaryDescendingImage.GetValue();
	public FSlateBrush                                         SortSecondaryAscendingImage                                    => _offSortSecondaryAscendingImage.GetValue();
	public FSlateBrush                                         SortSecondaryDescendingImage                                   => _offSortSecondaryDescendingImage.GetValue();
	public FSlateBrush                                         NormalBrush                                                    => _offNormalBrush.GetValue();
	public FSlateBrush                                         HoveredBrush                                                   => _offHoveredBrush.GetValue();
	public FSlateBrush                                         MenuDropdownImage                                              => _offMenuDropdownImage.GetValue();
	public FSlateBrush                                         MenuDropdownNormalBorderBrush                                  => _offMenuDropdownNormalBorderBrush.GetValue();
	public FSlateBrush                                         MenuDropdownHoveredBorderBrush                                 => _offMenuDropdownHoveredBorderBrush.GetValue();
	#endregion

	public FTableColumnHeaderStyle(FSlateBrush c_SortPrimaryAscendingImage, FSlateBrush c_SortPrimaryDescendingImage, FSlateBrush c_SortSecondaryAscendingImage, FSlateBrush c_SortSecondaryDescendingImage, FSlateBrush c_NormalBrush, FSlateBrush c_HoveredBrush, FSlateBrush c_MenuDropdownImage, FSlateBrush c_MenuDropdownNormalBorderBrush, FSlateBrush c_MenuDropdownHoveredBorderBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSortPrimaryAscendingImage.SetValue(c_SortPrimaryAscendingImage);
		_offSortPrimaryDescendingImage.SetValue(c_SortPrimaryDescendingImage);
		_offSortSecondaryAscendingImage.SetValue(c_SortSecondaryAscendingImage);
		_offSortSecondaryDescendingImage.SetValue(c_SortSecondaryDescendingImage);
		_offNormalBrush.SetValue(c_NormalBrush);
		_offHoveredBrush.SetValue(c_HoveredBrush);
		_offMenuDropdownImage.SetValue(c_MenuDropdownImage);
		_offMenuDropdownNormalBorderBrush.SetValue(c_MenuDropdownNormalBorderBrush);
		_offMenuDropdownHoveredBorderBrush.SetValue(c_MenuDropdownHoveredBorderBrush);
	}
}
// ScriptStruct SlateCore.FocusEvent
// 0x0008
public class FFocusEvent : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FFocusEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0048 - 0x0018)
public class FMotionEvent : FInputEvent
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMotionEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.EditableTextStyle
// 0x0210 (0x0218 - 0x0008)
public class FEditableTextStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateFontInfo>                     _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0008, false);           // 0x0008(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offColorAndOpacity                                            = new ExternalOffset<FSlateColor>(0x0058, false);              // 0x0058(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageSelected                                    = new ExternalOffset<FSlateBrush>(0x0080, false);              // 0x0080(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageComposing                                   = new ExternalOffset<FSlateBrush>(0x0108, false);              // 0x0108(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offCaretImage                                                 = new ExternalOffset<FSlateBrush>(0x0190, false);              // 0x0190(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateFontInfo                                      Font                                                           => _offFont.GetValue();
	public FSlateColor                                         ColorAndOpacity                                                => _offColorAndOpacity.GetValue();
	public FSlateBrush                                         BackgroundImageSelected                                        => _offBackgroundImageSelected.GetValue();
	public FSlateBrush                                         BackgroundImageComposing                                       => _offBackgroundImageComposing.GetValue();
	public FSlateBrush                                         CaretImage                                                     => _offCaretImage.GetValue();
	#endregion

	public FEditableTextStyle(FSlateFontInfo c_Font, FSlateColor c_ColorAndOpacity, FSlateBrush c_BackgroundImageSelected, FSlateBrush c_BackgroundImageComposing, FSlateBrush c_CaretImage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFont.SetValue(c_Font);
		_offColorAndOpacity.SetValue(c_ColorAndOpacity);
		_offBackgroundImageSelected.SetValue(c_BackgroundImageSelected);
		_offBackgroundImageComposing.SetValue(c_BackgroundImageComposing);
		_offCaretImage.SetValue(c_CaretImage);
	}
}
// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
public class FSpinBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offBackgroundBrush                                            = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredBackgroundBrush                                     = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveFillBrush                                            = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offInactiveFillBrush                                          = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offArrowsImage                                                = new ExternalOffset<FSlateBrush>(0x0228, false);              // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x02B0, false);              // 0x02B0(0x0028) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offTextPadding                                                = new ExternalOffset<FMargin>(0x02D8, false);                  // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         BackgroundBrush                                                => _offBackgroundBrush.GetValue();
	public FSlateBrush                                         HoveredBackgroundBrush                                         => _offHoveredBackgroundBrush.GetValue();
	public FSlateBrush                                         ActiveFillBrush                                                => _offActiveFillBrush.GetValue();
	public FSlateBrush                                         InactiveFillBrush                                              => _offInactiveFillBrush.GetValue();
	public FSlateBrush                                         ArrowsImage                                                    => _offArrowsImage.GetValue();
	public FSlateColor                                         ForegroundColor                                                => _offForegroundColor.GetValue();
	public FMargin                                             TextPadding                                                    => _offTextPadding.GetValue();
	#endregion

	public FSpinBoxStyle(FSlateBrush c_BackgroundBrush, FSlateBrush c_HoveredBackgroundBrush, FSlateBrush c_ActiveFillBrush, FSlateBrush c_InactiveFillBrush, FSlateBrush c_ArrowsImage, FSlateColor c_ForegroundColor, FMargin c_TextPadding) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBackgroundBrush.SetValue(c_BackgroundBrush);
		_offHoveredBackgroundBrush.SetValue(c_HoveredBackgroundBrush);
		_offActiveFillBrush.SetValue(c_ActiveFillBrush);
		_offInactiveFillBrush.SetValue(c_InactiveFillBrush);
		_offArrowsImage.SetValue(c_ArrowsImage);
		_offForegroundColor.SetValue(c_ForegroundColor);
		_offTextPadding.SetValue(c_TextPadding);
	}
}
// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
public class FScrollBarStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offHorizontalBackgroundImage                                  = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offVerticalBackgroundImage                                    = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offVerticalTopSlotImage                                       = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHorizontalTopSlotImage                                     = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offVerticalBottomSlotImage                                    = new ExternalOffset<FSlateBrush>(0x0228, false);              // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHorizontalBottomSlotImage                                  = new ExternalOffset<FSlateBrush>(0x02B0, false);              // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offNormalThumbImage                                           = new ExternalOffset<FSlateBrush>(0x0338, false);              // 0x0338(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredThumbImage                                          = new ExternalOffset<FSlateBrush>(0x03C0, false);              // 0x03C0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDraggedThumbImage                                          = new ExternalOffset<FSlateBrush>(0x0448, false);              // 0x0448(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         HorizontalBackgroundImage                                      => _offHorizontalBackgroundImage.GetValue();
	public FSlateBrush                                         VerticalBackgroundImage                                        => _offVerticalBackgroundImage.GetValue();
	public FSlateBrush                                         VerticalTopSlotImage                                           => _offVerticalTopSlotImage.GetValue();
	public FSlateBrush                                         HorizontalTopSlotImage                                         => _offHorizontalTopSlotImage.GetValue();
	public FSlateBrush                                         VerticalBottomSlotImage                                        => _offVerticalBottomSlotImage.GetValue();
	public FSlateBrush                                         HorizontalBottomSlotImage                                      => _offHorizontalBottomSlotImage.GetValue();
	public FSlateBrush                                         NormalThumbImage                                               => _offNormalThumbImage.GetValue();
	public FSlateBrush                                         HoveredThumbImage                                              => _offHoveredThumbImage.GetValue();
	public FSlateBrush                                         DraggedThumbImage                                              => _offDraggedThumbImage.GetValue();
	#endregion

	public FScrollBarStyle(FSlateBrush c_HorizontalBackgroundImage, FSlateBrush c_VerticalBackgroundImage, FSlateBrush c_VerticalTopSlotImage, FSlateBrush c_HorizontalTopSlotImage, FSlateBrush c_VerticalBottomSlotImage, FSlateBrush c_HorizontalBottomSlotImage, FSlateBrush c_NormalThumbImage, FSlateBrush c_HoveredThumbImage, FSlateBrush c_DraggedThumbImage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHorizontalBackgroundImage.SetValue(c_HorizontalBackgroundImage);
		_offVerticalBackgroundImage.SetValue(c_VerticalBackgroundImage);
		_offVerticalTopSlotImage.SetValue(c_VerticalTopSlotImage);
		_offHorizontalTopSlotImage.SetValue(c_HorizontalTopSlotImage);
		_offVerticalBottomSlotImage.SetValue(c_VerticalBottomSlotImage);
		_offHorizontalBottomSlotImage.SetValue(c_HorizontalBottomSlotImage);
		_offNormalThumbImage.SetValue(c_NormalThumbImage);
		_offHoveredThumbImage.SetValue(c_HoveredThumbImage);
		_offDraggedThumbImage.SetValue(c_DraggedThumbImage);
	}
}
// ScriptStruct SlateCore.ComboBoxStyle
// 0x03D0 (0x03D8 - 0x0008)
public class FComboBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FComboButtonStyle>                  _offComboButtonStyle                                           = new ExternalOffset<FComboButtonStyle>(0x0008, false);        // 0x0008(0x03A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offPressedSlateSound                                          = new ExternalOffset<FSlateSound>(0x03A8, false);              // 0x03A8(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offSelectionChangeSlateSound                                  = new ExternalOffset<FSlateSound>(0x03C0, false);              // 0x03C0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FComboButtonStyle                                   ComboButtonStyle                                               => _offComboButtonStyle.GetValue();
	public FSlateSound                                         PressedSlateSound                                              => _offPressedSlateSound.GetValue();
	public FSlateSound                                         SelectionChangeSlateSound                                      => _offSelectionChangeSlateSound.GetValue();
	#endregion

	public FComboBoxStyle(FComboButtonStyle c_ComboButtonStyle, FSlateSound c_PressedSlateSound, FSlateSound c_SelectionChangeSlateSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offComboButtonStyle.SetValue(c_ComboButtonStyle);
		_offPressedSlateSound.SetValue(c_PressedSlateSound);
		_offSelectionChangeSlateSound.SetValue(c_SelectionChangeSlateSound);
	}
}
// ScriptStruct SlateCore.TableRowStyle
// 0x07C0 (0x07C8 - 0x0008)
public class FTableRowStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offSelectorFocusedBrush                                       = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveHoveredBrush                                         = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveBrush                                                = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offInactiveHoveredBrush                                       = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offInactiveBrush                                              = new ExternalOffset<FSlateBrush>(0x0228, false);              // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offEvenRowBackgroundHoveredBrush                              = new ExternalOffset<FSlateBrush>(0x02B0, false);              // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offEvenRowBackgroundBrush                                     = new ExternalOffset<FSlateBrush>(0x0338, false);              // 0x0338(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offOddRowBackgroundHoveredBrush                               = new ExternalOffset<FSlateBrush>(0x03C0, false);              // 0x03C0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offOddRowBackgroundBrush                                      = new ExternalOffset<FSlateBrush>(0x0448, false);              // 0x0448(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offTextColor                                                  = new ExternalOffset<FSlateColor>(0x04D0, false);              // 0x04D0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offSelectedTextColor                                          = new ExternalOffset<FSlateColor>(0x04F8, false);              // 0x04F8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDropIndicator_Above                                        = new ExternalOffset<FSlateBrush>(0x0520, false);              // 0x0520(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDropIndicator_Onto                                         = new ExternalOffset<FSlateBrush>(0x05A8, false);              // 0x05A8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDropIndicator_Below                                        = new ExternalOffset<FSlateBrush>(0x0630, false);              // 0x0630(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveHighlightedBrush                                     = new ExternalOffset<FSlateBrush>(0x06B8, false);              // 0x06B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offInactiveHighlightedBrush                                   = new ExternalOffset<FSlateBrush>(0x0740, false);              // 0x0740(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         SelectorFocusedBrush                                           => _offSelectorFocusedBrush.GetValue();
	public FSlateBrush                                         ActiveHoveredBrush                                             => _offActiveHoveredBrush.GetValue();
	public FSlateBrush                                         ActiveBrush                                                    => _offActiveBrush.GetValue();
	public FSlateBrush                                         InactiveHoveredBrush                                           => _offInactiveHoveredBrush.GetValue();
	public FSlateBrush                                         InactiveBrush                                                  => _offInactiveBrush.GetValue();
	public FSlateBrush                                         EvenRowBackgroundHoveredBrush                                  => _offEvenRowBackgroundHoveredBrush.GetValue();
	public FSlateBrush                                         EvenRowBackgroundBrush                                         => _offEvenRowBackgroundBrush.GetValue();
	public FSlateBrush                                         OddRowBackgroundHoveredBrush                                   => _offOddRowBackgroundHoveredBrush.GetValue();
	public FSlateBrush                                         OddRowBackgroundBrush                                          => _offOddRowBackgroundBrush.GetValue();
	public FSlateColor                                         TextColor                                                      => _offTextColor.GetValue();
	public FSlateColor                                         SelectedTextColor                                              => _offSelectedTextColor.GetValue();
	public FSlateBrush                                         DropIndicator_Above                                            => _offDropIndicator_Above.GetValue();
	public FSlateBrush                                         DropIndicator_Onto                                             => _offDropIndicator_Onto.GetValue();
	public FSlateBrush                                         DropIndicator_Below                                            => _offDropIndicator_Below.GetValue();
	public FSlateBrush                                         ActiveHighlightedBrush                                         => _offActiveHighlightedBrush.GetValue();
	public FSlateBrush                                         InactiveHighlightedBrush                                       => _offInactiveHighlightedBrush.GetValue();
	#endregion

	public FTableRowStyle(FSlateBrush c_SelectorFocusedBrush, FSlateBrush c_ActiveHoveredBrush, FSlateBrush c_ActiveBrush, FSlateBrush c_InactiveHoveredBrush, FSlateBrush c_InactiveBrush, FSlateBrush c_EvenRowBackgroundHoveredBrush, FSlateBrush c_EvenRowBackgroundBrush, FSlateBrush c_OddRowBackgroundHoveredBrush, FSlateBrush c_OddRowBackgroundBrush, FSlateColor c_TextColor, FSlateColor c_SelectedTextColor, FSlateBrush c_DropIndicator_Above, FSlateBrush c_DropIndicator_Onto, FSlateBrush c_DropIndicator_Below, FSlateBrush c_ActiveHighlightedBrush, FSlateBrush c_InactiveHighlightedBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSelectorFocusedBrush.SetValue(c_SelectorFocusedBrush);
		_offActiveHoveredBrush.SetValue(c_ActiveHoveredBrush);
		_offActiveBrush.SetValue(c_ActiveBrush);
		_offInactiveHoveredBrush.SetValue(c_InactiveHoveredBrush);
		_offInactiveBrush.SetValue(c_InactiveBrush);
		_offEvenRowBackgroundHoveredBrush.SetValue(c_EvenRowBackgroundHoveredBrush);
		_offEvenRowBackgroundBrush.SetValue(c_EvenRowBackgroundBrush);
		_offOddRowBackgroundHoveredBrush.SetValue(c_OddRowBackgroundHoveredBrush);
		_offOddRowBackgroundBrush.SetValue(c_OddRowBackgroundBrush);
		_offTextColor.SetValue(c_TextColor);
		_offSelectedTextColor.SetValue(c_SelectedTextColor);
		_offDropIndicator_Above.SetValue(c_DropIndicator_Above);
		_offDropIndicator_Onto.SetValue(c_DropIndicator_Onto);
		_offDropIndicator_Below.SetValue(c_DropIndicator_Below);
		_offActiveHighlightedBrush.SetValue(c_ActiveHighlightedBrush);
		_offInactiveHighlightedBrush.SetValue(c_InactiveHighlightedBrush);
	}
}
// ScriptStruct SlateCore.DockTabStyle
// 0x06F8 (0x0700 - 0x0008)
public class FDockTabStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                       _offCloseButtonStyle                                           = new ExternalOffset<FButtonStyle>(0x0008, false);             // 0x0008(0x0278) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offNormalBrush                                                = new ExternalOffset<FSlateBrush>(0x0280, false);              // 0x0280(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveBrush                                                = new ExternalOffset<FSlateBrush>(0x0308, false);              // 0x0308(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offColorOverlayTabBrush                                       = new ExternalOffset<FSlateBrush>(0x0390, false);              // 0x0390(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offColorOverlayIconBrush                                      = new ExternalOffset<FSlateBrush>(0x0418, false);              // 0x0418(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offForegroundBrush                                            = new ExternalOffset<FSlateBrush>(0x04A0, false);              // 0x04A0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredBrush                                               = new ExternalOffset<FSlateBrush>(0x0528, false);              // 0x0528(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offContentAreaBrush                                           = new ExternalOffset<FSlateBrush>(0x05B0, false);              // 0x05B0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offTabWellBrush                                               = new ExternalOffset<FSlateBrush>(0x0638, false);              // 0x0638(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offTabPadding                                                 = new ExternalOffset<FMargin>(0x06C0, false);                  // 0x06C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOverlapWidth                                               = new ExternalOffset<float>(0x06D0);                           // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offFlashColor                                                 = new ExternalOffset<FSlateColor>(0x06D8, false);              // 0x06D8(0x0028) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                        CloseButtonStyle                                               => _offCloseButtonStyle.GetValue();
	public FSlateBrush                                         NormalBrush                                                    => _offNormalBrush.GetValue();
	public FSlateBrush                                         ActiveBrush                                                    => _offActiveBrush.GetValue();
	public FSlateBrush                                         ColorOverlayTabBrush                                           => _offColorOverlayTabBrush.GetValue();
	public FSlateBrush                                         ColorOverlayIconBrush                                          => _offColorOverlayIconBrush.GetValue();
	public FSlateBrush                                         ForegroundBrush                                                => _offForegroundBrush.GetValue();
	public FSlateBrush                                         HoveredBrush                                                   => _offHoveredBrush.GetValue();
	public FSlateBrush                                         ContentAreaBrush                                               => _offContentAreaBrush.GetValue();
	public FSlateBrush                                         TabWellBrush                                                   => _offTabWellBrush.GetValue();
	public FMargin                                             TabPadding                                                     => _offTabPadding.GetValue();
	public float                                               OverlapWidth                                                   => _offOverlapWidth.GetValue();
	public FSlateColor                                         FlashColor                                                     => _offFlashColor.GetValue();
	#endregion

	public FDockTabStyle(FButtonStyle c_CloseButtonStyle, FSlateBrush c_NormalBrush, FSlateBrush c_ActiveBrush, FSlateBrush c_ColorOverlayTabBrush, FSlateBrush c_ColorOverlayIconBrush, FSlateBrush c_ForegroundBrush, FSlateBrush c_HoveredBrush, FSlateBrush c_ContentAreaBrush, FSlateBrush c_TabWellBrush, FMargin c_TabPadding, float c_OverlapWidth, FSlateColor c_FlashColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCloseButtonStyle.SetValue(c_CloseButtonStyle);
		_offNormalBrush.SetValue(c_NormalBrush);
		_offActiveBrush.SetValue(c_ActiveBrush);
		_offColorOverlayTabBrush.SetValue(c_ColorOverlayTabBrush);
		_offColorOverlayIconBrush.SetValue(c_ColorOverlayIconBrush);
		_offForegroundBrush.SetValue(c_ForegroundBrush);
		_offHoveredBrush.SetValue(c_HoveredBrush);
		_offContentAreaBrush.SetValue(c_ContentAreaBrush);
		_offTabWellBrush.SetValue(c_TabWellBrush);
		_offTabPadding.SetValue(c_TabPadding);
		_offOverlapWidth.SetValue(c_OverlapWidth);
		_offFlashColor.SetValue(c_FlashColor);
	}
}
// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
public class FInlineTextImageStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offImage                                                      = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<short>                              _offBaseline                                                   = new ExternalOffset<short>(0x0090);                           // 0x0090(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         Image                                                          => _offImage.GetValue();
	public short                                               Baseline                                                       => _offBaseline.GetValue();
	#endregion

	public FInlineTextImageStyle(FSlateBrush c_Image, short c_Baseline) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offImage.SetValue(c_Image);
		_offBaseline.SetValue(c_Baseline);
	}
}
// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
public class FSplitterStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offHandleNormalBrush                                          = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHandleHighlightBrush                                       = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         HandleNormalBrush                                              => _offHandleNormalBrush.GetValue();
	public FSlateBrush                                         HandleHighlightBrush                                           => _offHandleHighlightBrush.GetValue();
	#endregion

	public FSplitterStyle(FSlateBrush c_HandleNormalBrush, FSlateBrush c_HandleHighlightBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHandleNormalBrush.SetValue(c_HandleNormalBrush);
		_offHandleHighlightBrush.SetValue(c_HandleHighlightBrush);
	}
}
// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07E8 (0x07F0 - 0x0008)
public class FEditableTextBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageNormal                                      = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageHovered                                     = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageFocused                                     = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundImageReadOnly                                    = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offPadding                                                    = new ExternalOffset<FMargin>(0x0228, false);                  // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                     _offFont                                                       = new ExternalOffset<FSlateFontInfo>(0x0238, false);           // 0x0238(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x0288, false);              // 0x0288(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offBackgroundColor                                            = new ExternalOffset<FSlateColor>(0x02B0, false);              // 0x02B0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offReadOnlyForegroundColor                                    = new ExternalOffset<FSlateColor>(0x02D8, false);              // 0x02D8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offHScrollBarPadding                                          = new ExternalOffset<FMargin>(0x0300, false);                  // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offVScrollBarPadding                                          = new ExternalOffset<FMargin>(0x0310, false);                  // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScrollBarStyle>                    _offScrollBarStyle                                             = new ExternalOffset<FScrollBarStyle>(0x0320, false);          // 0x0320(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         BackgroundImageNormal                                          => _offBackgroundImageNormal.GetValue();
	public FSlateBrush                                         BackgroundImageHovered                                         => _offBackgroundImageHovered.GetValue();
	public FSlateBrush                                         BackgroundImageFocused                                         => _offBackgroundImageFocused.GetValue();
	public FSlateBrush                                         BackgroundImageReadOnly                                        => _offBackgroundImageReadOnly.GetValue();
	public FMargin                                             Padding                                                        => _offPadding.GetValue();
	public FSlateFontInfo                                      Font                                                           => _offFont.GetValue();
	public FSlateColor                                         ForegroundColor                                                => _offForegroundColor.GetValue();
	public FSlateColor                                         BackgroundColor                                                => _offBackgroundColor.GetValue();
	public FSlateColor                                         ReadOnlyForegroundColor                                        => _offReadOnlyForegroundColor.GetValue();
	public FMargin                                             HScrollBarPadding                                              => _offHScrollBarPadding.GetValue();
	public FMargin                                             VScrollBarPadding                                              => _offVScrollBarPadding.GetValue();
	public FScrollBarStyle                                     ScrollBarStyle                                                 => _offScrollBarStyle.GetValue();
	#endregion

	public FEditableTextBoxStyle(FSlateBrush c_BackgroundImageNormal, FSlateBrush c_BackgroundImageHovered, FSlateBrush c_BackgroundImageFocused, FSlateBrush c_BackgroundImageReadOnly, FMargin c_Padding, FSlateFontInfo c_Font, FSlateColor c_ForegroundColor, FSlateColor c_BackgroundColor, FSlateColor c_ReadOnlyForegroundColor, FMargin c_HScrollBarPadding, FMargin c_VScrollBarPadding, FScrollBarStyle c_ScrollBarStyle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBackgroundImageNormal.SetValue(c_BackgroundImageNormal);
		_offBackgroundImageHovered.SetValue(c_BackgroundImageHovered);
		_offBackgroundImageFocused.SetValue(c_BackgroundImageFocused);
		_offBackgroundImageReadOnly.SetValue(c_BackgroundImageReadOnly);
		_offPadding.SetValue(c_Padding);
		_offFont.SetValue(c_Font);
		_offForegroundColor.SetValue(c_ForegroundColor);
		_offBackgroundColor.SetValue(c_BackgroundColor);
		_offReadOnlyForegroundColor.SetValue(c_ReadOnlyForegroundColor);
		_offHScrollBarPadding.SetValue(c_HScrollBarPadding);
		_offVScrollBarPadding.SetValue(c_VScrollBarPadding);
		_offScrollBarStyle.SetValue(c_ScrollBarStyle);
	}
}
// ScriptStruct SlateCore.SliderStyle
// 0x0338 (0x0340 - 0x0008)
public class FSliderStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offNormalBarImage                                             = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredBarImage                                            = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDisabledBarImage                                           = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offNormalThumbImage                                           = new ExternalOffset<FSlateBrush>(0x01A0, false);              // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHoveredThumbImage                                          = new ExternalOffset<FSlateBrush>(0x0228, false);              // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDisabledThumbImage                                         = new ExternalOffset<FSlateBrush>(0x02B0, false);              // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBarThickness                                               = new ExternalOffset<float>(0x0338);                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         NormalBarImage                                                 => _offNormalBarImage.GetValue();
	public FSlateBrush                                         HoveredBarImage                                                => _offHoveredBarImage.GetValue();
	public FSlateBrush                                         DisabledBarImage                                               => _offDisabledBarImage.GetValue();
	public FSlateBrush                                         NormalThumbImage                                               => _offNormalThumbImage.GetValue();
	public FSlateBrush                                         HoveredThumbImage                                              => _offHoveredThumbImage.GetValue();
	public FSlateBrush                                         DisabledThumbImage                                             => _offDisabledThumbImage.GetValue();
	public float                                               BarThickness                                                   => _offBarThickness.GetValue();
	#endregion

	public FSliderStyle(FSlateBrush c_NormalBarImage, FSlateBrush c_HoveredBarImage, FSlateBrush c_DisabledBarImage, FSlateBrush c_NormalThumbImage, FSlateBrush c_HoveredThumbImage, FSlateBrush c_DisabledThumbImage, float c_BarThickness) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNormalBarImage.SetValue(c_NormalBarImage);
		_offHoveredBarImage.SetValue(c_HoveredBarImage);
		_offDisabledBarImage.SetValue(c_DisabledBarImage);
		_offNormalThumbImage.SetValue(c_NormalThumbImage);
		_offHoveredThumbImage.SetValue(c_HoveredThumbImage);
		_offDisabledThumbImage.SetValue(c_DisabledThumbImage);
		_offBarThickness.SetValue(c_BarThickness);
	}
}
// ScriptStruct SlateCore.VolumeControlStyle
// 0x05E8 (0x05F0 - 0x0008)
public class FVolumeControlStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSliderStyle>                       _offSliderStyle                                                = new ExternalOffset<FSliderStyle>(0x0008, false);             // 0x0008(0x0340) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offHighVolumeImage                                            = new ExternalOffset<FSlateBrush>(0x0348, false);              // 0x0348(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMidVolumeImage                                             = new ExternalOffset<FSlateBrush>(0x03D0, false);              // 0x03D0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offLowVolumeImage                                             = new ExternalOffset<FSlateBrush>(0x0458, false);              // 0x0458(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offNoVolumeImage                                              = new ExternalOffset<FSlateBrush>(0x04E0, false);              // 0x04E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMutedImage                                                 = new ExternalOffset<FSlateBrush>(0x0568, false);              // 0x0568(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSliderStyle                                        SliderStyle                                                    => _offSliderStyle.GetValue();
	public FSlateBrush                                         HighVolumeImage                                                => _offHighVolumeImage.GetValue();
	public FSlateBrush                                         MidVolumeImage                                                 => _offMidVolumeImage.GetValue();
	public FSlateBrush                                         LowVolumeImage                                                 => _offLowVolumeImage.GetValue();
	public FSlateBrush                                         NoVolumeImage                                                  => _offNoVolumeImage.GetValue();
	public FSlateBrush                                         MutedImage                                                     => _offMutedImage.GetValue();
	#endregion

	public FVolumeControlStyle(FSliderStyle c_SliderStyle, FSlateBrush c_HighVolumeImage, FSlateBrush c_MidVolumeImage, FSlateBrush c_LowVolumeImage, FSlateBrush c_NoVolumeImage, FSlateBrush c_MutedImage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSliderStyle.SetValue(c_SliderStyle);
		_offHighVolumeImage.SetValue(c_HighVolumeImage);
		_offMidVolumeImage.SetValue(c_MidVolumeImage);
		_offLowVolumeImage.SetValue(c_LowVolumeImage);
		_offNoVolumeImage.SetValue(c_NoVolumeImage);
		_offMutedImage.SetValue(c_MutedImage);
	}
}
// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0118 (0x0120 - 0x0008)
public class FExpandableAreaStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offCollapsedImage                                             = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offExpandedImage                                              = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRolloutAnimationSeconds                                    = new ExternalOffset<float>(0x0118);                           // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         CollapsedImage                                                 => _offCollapsedImage.GetValue();
	public FSlateBrush                                         ExpandedImage                                                  => _offExpandedImage.GetValue();
	public float                                               RolloutAnimationSeconds                                        => _offRolloutAnimationSeconds.GetValue();
	#endregion

	public FExpandableAreaStyle(FSlateBrush c_CollapsedImage, FSlateBrush c_ExpandedImage, float c_RolloutAnimationSeconds) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCollapsedImage.SetValue(c_CollapsedImage);
		_offExpandedImage.SetValue(c_ExpandedImage);
		_offRolloutAnimationSeconds.SetValue(c_RolloutAnimationSeconds);
	}
}
// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
public class FHeaderRowStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FTableColumnHeaderStyle>            _offColumnStyle                                                = new ExternalOffset<FTableColumnHeaderStyle>(0x0008, false);  // 0x0008(0x04D0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FTableColumnHeaderStyle>            _offLastColumnStyle                                            = new ExternalOffset<FTableColumnHeaderStyle>(0x04D8, false);  // 0x04D8(0x04D0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSplitterStyle>                     _offColumnSplitterStyle                                        = new ExternalOffset<FSplitterStyle>(0x09A8, false);           // 0x09A8(0x0118) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundBrush                                            = new ExternalOffset<FSlateBrush>(0x0AC0, false);              // 0x0AC0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x0B48, false);              // 0x0B48(0x0028) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTableColumnHeaderStyle                             ColumnStyle                                                    => _offColumnStyle.GetValue();
	public FTableColumnHeaderStyle                             LastColumnStyle                                                => _offLastColumnStyle.GetValue();
	public FSplitterStyle                                      ColumnSplitterStyle                                            => _offColumnSplitterStyle.GetValue();
	public FSlateBrush                                         BackgroundBrush                                                => _offBackgroundBrush.GetValue();
	public FSlateColor                                         ForegroundColor                                                => _offForegroundColor.GetValue();
	#endregion

	public FHeaderRowStyle(FTableColumnHeaderStyle c_ColumnStyle, FTableColumnHeaderStyle c_LastColumnStyle, FSplitterStyle c_ColumnSplitterStyle, FSlateBrush c_BackgroundBrush, FSlateColor c_ForegroundColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offColumnStyle.SetValue(c_ColumnStyle);
		_offLastColumnStyle.SetValue(c_LastColumnStyle);
		_offColumnSplitterStyle.SetValue(c_ColumnSplitterStyle);
		_offBackgroundBrush.SetValue(c_BackgroundBrush);
		_offForegroundColor.SetValue(c_ForegroundColor);
	}
}
// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
public class FProgressBarStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offBackgroundImage                                            = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offFillImage                                                  = new ExternalOffset<FSlateBrush>(0x0090, false);              // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offMarqueeImage                                               = new ExternalOffset<FSlateBrush>(0x0118, false);              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         BackgroundImage                                                => _offBackgroundImage.GetValue();
	public FSlateBrush                                         FillImage                                                      => _offFillImage.GetValue();
	public FSlateBrush                                         MarqueeImage                                                   => _offMarqueeImage.GetValue();
	#endregion

	public FProgressBarStyle(FSlateBrush c_BackgroundImage, FSlateBrush c_FillImage, FSlateBrush c_MarqueeImage) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBackgroundImage.SetValue(c_BackgroundImage);
		_offFillImage.SetValue(c_FillImage);
		_offMarqueeImage.SetValue(c_MarqueeImage);
	}
}
// ScriptStruct SlateCore.FontData
// 0x0020
public class FFontData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offFontFilename                                               = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EFontHinting>                       _offHinting                                                    = new ExternalOffset<EFontHinting>(0x0010, false);             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EFontLoadingPolicy>                 _offLoadingPolicy                                              = new ExternalOffset<EFontLoadingPolicy>(0x0011, false);       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                                _offSubFaceIndex                                               = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UObject>                            _offFontFaceAsset                                              = new ExternalOffset<UObject>(0x0018, true);                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                             FontFilename                                                   => _offFontFilename.GetValue();
	public EFontHinting                                        Hinting                                                        => _offHinting.GetValue();
	public EFontLoadingPolicy                                  LoadingPolicy                                                  => _offLoadingPolicy.GetValue();
	public int                                                 SubFaceIndex                                                   => _offSubFaceIndex.GetValue();
	public UObject                                             FontFaceAsset                                                  => _offFontFaceAsset.GetValue();
	#endregion

	public FFontData(FString c_FontFilename, EFontHinting c_Hinting, EFontLoadingPolicy c_LoadingPolicy, int c_SubFaceIndex, UObject c_FontFaceAsset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFontFilename.SetValue(c_FontFilename);
		_offHinting.SetValue(c_Hinting);
		_offLoadingPolicy.SetValue(c_LoadingPolicy);
		_offSubFaceIndex.SetValue(c_SubFaceIndex);
		_offFontFaceAsset.SetValue(c_FontFaceAsset);
	}
}
// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
public class FTypefaceEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFontData>                          _offFont                                                       = new ExternalOffset<FFontData>(0x0008, false);                // 0x0008(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	public FFontData                                           Font                                                           => _offFont.GetValue();
	#endregion

	public FTypefaceEntry(FName c_Name, FFontData c_Font) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offFont.SetValue(c_Font);
	}
}
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A58 (0x0A60 - 0x0008)
public class FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FEditableTextBoxStyle>              _offEditableTextBoxStyle                                       = new ExternalOffset<FEditableTextBoxStyle>(0x0008, false);    // 0x0008(0x07F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                    _offTextStyle                                                  = new ExternalOffset<FTextBlockStyle>(0x07F8, false);          // 0x07F8(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEditableTextBoxStyle                               EditableTextBoxStyle                                           => _offEditableTextBoxStyle.GetValue();
	public FTextBlockStyle                                     TextStyle                                                      => _offTextStyle.GetValue();
	#endregion

	public FInlineEditableTextBlockStyle(FEditableTextBoxStyle c_EditableTextBoxStyle, FTextBlockStyle c_TextStyle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEditableTextBoxStyle.SetValue(c_EditableTextBoxStyle);
		_offTextStyle.SetValue(c_TextStyle);
	}
}
// ScriptStruct SlateCore.Typeface
// 0x0010
public class FTypeface : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FTypefaceEntry>>             _offFonts                                                      = new ExternalOffset<TArray<FTypefaceEntry>>(0x0000, false);   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FTypefaceEntry>                              Fonts                                                          => _offFonts.GetValue();
	#endregion

	public FTypeface(TArray<FTypefaceEntry> c_Fonts) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFonts.SetValue(c_Fonts);
	}
}
// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A78 (0x0A80 - 0x0008)
public class FSearchBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FEditableTextBoxStyle>              _offTextBoxStyle                                               = new ExternalOffset<FEditableTextBoxStyle>(0x0008, false);    // 0x0008(0x07F0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateFontInfo>                     _offActiveFontInfo                                             = new ExternalOffset<FSlateFontInfo>(0x07F8, false);           // 0x07F8(0x0050) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUpArrowImage                                               = new ExternalOffset<FSlateBrush>(0x0848, false);              // 0x0848(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offDownArrowImage                                             = new ExternalOffset<FSlateBrush>(0x08D0, false);              // 0x08D0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offGlassImage                                                 = new ExternalOffset<FSlateBrush>(0x0958, false);              // 0x0958(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offClearImage                                                 = new ExternalOffset<FSlateBrush>(0x09E0, false);              // 0x09E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offImagePadding                                               = new ExternalOffset<FMargin>(0x0A68, false);                  // 0x0A68(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLeftAlignButtons                                          = new ExternalOffset<byte/*(bool)*/>(0x0A78);                  // 0x0A78(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEditableTextBoxStyle                               TextBoxStyle                                                   => _offTextBoxStyle.GetValue();
	public FSlateFontInfo                                      ActiveFontInfo                                                 => _offActiveFontInfo.GetValue();
	public FSlateBrush                                         UpArrowImage                                                   => _offUpArrowImage.GetValue();
	public FSlateBrush                                         DownArrowImage                                                 => _offDownArrowImage.GetValue();
	public FSlateBrush                                         GlassImage                                                     => _offGlassImage.GetValue();
	public FSlateBrush                                         ClearImage                                                     => _offClearImage.GetValue();
	public FMargin                                             ImagePadding                                                   => _offImagePadding.GetValue();
	public byte/*(bool)*/                                      bLeftAlignButtons                                              => _offbLeftAlignButtons.GetValue();
	#endregion

	public FSearchBoxStyle(FEditableTextBoxStyle c_TextBoxStyle, FSlateFontInfo c_ActiveFontInfo, FSlateBrush c_UpArrowImage, FSlateBrush c_DownArrowImage, FSlateBrush c_GlassImage, FSlateBrush c_ClearImage, FMargin c_ImagePadding, byte/*(bool)*/ c_bLeftAlignButtons) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTextBoxStyle.SetValue(c_TextBoxStyle);
		_offActiveFontInfo.SetValue(c_ActiveFontInfo);
		_offUpArrowImage.SetValue(c_UpArrowImage);
		_offDownArrowImage.SetValue(c_DownArrowImage);
		_offGlassImage.SetValue(c_GlassImage);
		_offClearImage.SetValue(c_ClearImage);
		_offImagePadding.SetValue(c_ImagePadding);
		_offbLeftAlignButtons.SetValue(c_bLeftAlignButtons);
	}
}
// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
public class FCompositeFallbackFont : ExternalClass
{
	#region Offsets
	private ExternalOffset<FTypeface>                          _offTypeface                                                   = new ExternalOffset<FTypeface>(0x0000, false);                // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offScalingFactor                                              = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTypeface                                           Typeface                                                       => _offTypeface.GetValue();
	public float                                               ScalingFactor                                                  => _offScalingFactor.GetValue();
	#endregion

	public FCompositeFallbackFont(FTypeface c_Typeface, float c_ScalingFactor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTypeface.SetValue(c_Typeface);
		_offScalingFactor.SetValue(c_ScalingFactor);
	}
}
// ScriptStruct SlateCore.HyperlinkStyle
// 0x04F0 (0x04F8 - 0x0008)
public class FHyperlinkStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                       _offUnderlineStyle                                             = new ExternalOffset<FButtonStyle>(0x0008, false);             // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                    _offTextStyle                                                  = new ExternalOffset<FTextBlockStyle>(0x0280, false);          // 0x0280(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offPadding                                                    = new ExternalOffset<FMargin>(0x04E8, false);                  // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                        UnderlineStyle                                                 => _offUnderlineStyle.GetValue();
	public FTextBlockStyle                                     TextStyle                                                      => _offTextStyle.GetValue();
	public FMargin                                             Padding                                                        => _offPadding.GetValue();
	#endregion

	public FHyperlinkStyle(FButtonStyle c_UnderlineStyle, FTextBlockStyle c_TextStyle, FMargin c_Padding) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUnderlineStyle.SetValue(c_UnderlineStyle);
		_offTextStyle.SetValue(c_TextStyle);
		_offPadding.SetValue(c_Padding);
	}
}
// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
public class FCompositeSubFont : FCompositeFallbackFont
{
	#region Offsets
	private ExternalOffset<TArray<FInt32Range>>                _offCharacterRanges                                            = new ExternalOffset<TArray<FInt32Range>>(0x0018, false);      // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offCultures                                                   = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInt32Range>                                 CharacterRanges                                                => _offCharacterRanges.GetValue();
	public FString                                             Cultures                                                       => _offCultures.GetValue();
	#endregion

	public FCompositeSubFont(TArray<FInt32Range> c_CharacterRanges, FString c_Cultures) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCharacterRanges.SetValue(c_CharacterRanges);
		_offCultures.SetValue(c_Cultures);
	}
}
// ScriptStruct SlateCore.CompositeFont
// 0x0038
public class FCompositeFont : ExternalClass
{
	#region Offsets
	private ExternalOffset<FTypeface>                          _offDefaultTypeface                                            = new ExternalOffset<FTypeface>(0x0000, false);                // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	private ExternalOffset<FCompositeFallbackFont>             _offFallbackTypeface                                           = new ExternalOffset<FCompositeFallbackFont>(0x0010, false);   // 0x0010(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FCompositeSubFont>>          _offSubTypefaces                                               = new ExternalOffset<TArray<FCompositeSubFont>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTypeface                                           DefaultTypeface                                                => _offDefaultTypeface.GetValue();
	public FCompositeFallbackFont                              FallbackTypeface                                               => _offFallbackTypeface.GetValue();
	public TArray<FCompositeSubFont>                           SubTypefaces                                                   => _offSubTypefaces.GetValue();
	#endregion

	public FCompositeFont(FTypeface c_DefaultTypeface, FCompositeFallbackFont c_FallbackTypeface, TArray<FCompositeSubFont> c_SubTypefaces) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefaultTypeface.SetValue(c_DefaultTypeface);
		_offFallbackTypeface.SetValue(c_FallbackTypeface);
		_offSubTypefaces.SetValue(c_SubTypefaces);
	}
}
// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
public class FCaptureLostEvent : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FCaptureLostEvent() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SlateCore.CheckBoxStyle
// 0x0578 (0x0580 - 0x0008)
public class FCheckBoxStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ESlateCheckBoxType>>    _offCheckBoxType                                               = new ExternalOffset<TEnumAsByte<ESlateCheckBoxType>>(0x0008, false); // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUncheckedImage                                             = new ExternalOffset<FSlateBrush>(0x0010, false);              // 0x0010(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUncheckedHoveredImage                                      = new ExternalOffset<FSlateBrush>(0x0098, false);              // 0x0098(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUncheckedPressedImage                                      = new ExternalOffset<FSlateBrush>(0x0120, false);              // 0x0120(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offCheckedImage                                               = new ExternalOffset<FSlateBrush>(0x01A8, false);              // 0x01A8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offCheckedHoveredImage                                        = new ExternalOffset<FSlateBrush>(0x0230, false);              // 0x0230(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offCheckedPressedImage                                        = new ExternalOffset<FSlateBrush>(0x02B8, false);              // 0x02B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUndeterminedImage                                          = new ExternalOffset<FSlateBrush>(0x0340, false);              // 0x0340(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUndeterminedHoveredImage                                   = new ExternalOffset<FSlateBrush>(0x03C8, false);              // 0x03C8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offUndeterminedPressedImage                                   = new ExternalOffset<FSlateBrush>(0x0450, false);              // 0x0450(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FMargin>                            _offPadding                                                    = new ExternalOffset<FMargin>(0x04D8, false);                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offForegroundColor                                            = new ExternalOffset<FSlateColor>(0x04E8, false);              // 0x04E8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offBorderBackgroundColor                                      = new ExternalOffset<FSlateColor>(0x0510, false);              // 0x0510(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offCheckedSlateSound                                          = new ExternalOffset<FSlateSound>(0x0538, false);              // 0x0538(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offUncheckedSlateSound                                        = new ExternalOffset<FSlateSound>(0x0550, false);              // 0x0550(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateSound>                        _offHoveredSlateSound                                          = new ExternalOffset<FSlateSound>(0x0568, false);              // 0x0568(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ESlateCheckBoxType>                     CheckBoxType                                                   => _offCheckBoxType.GetValue();
	public FSlateBrush                                         UncheckedImage                                                 => _offUncheckedImage.GetValue();
	public FSlateBrush                                         UncheckedHoveredImage                                          => _offUncheckedHoveredImage.GetValue();
	public FSlateBrush                                         UncheckedPressedImage                                          => _offUncheckedPressedImage.GetValue();
	public FSlateBrush                                         CheckedImage                                                   => _offCheckedImage.GetValue();
	public FSlateBrush                                         CheckedHoveredImage                                            => _offCheckedHoveredImage.GetValue();
	public FSlateBrush                                         CheckedPressedImage                                            => _offCheckedPressedImage.GetValue();
	public FSlateBrush                                         UndeterminedImage                                              => _offUndeterminedImage.GetValue();
	public FSlateBrush                                         UndeterminedHoveredImage                                       => _offUndeterminedHoveredImage.GetValue();
	public FSlateBrush                                         UndeterminedPressedImage                                       => _offUndeterminedPressedImage.GetValue();
	public FMargin                                             Padding                                                        => _offPadding.GetValue();
	public FSlateColor                                         ForegroundColor                                                => _offForegroundColor.GetValue();
	public FSlateColor                                         BorderBackgroundColor                                          => _offBorderBackgroundColor.GetValue();
	public FSlateSound                                         CheckedSlateSound                                              => _offCheckedSlateSound.GetValue();
	public FSlateSound                                         UncheckedSlateSound                                            => _offUncheckedSlateSound.GetValue();
	public FSlateSound                                         HoveredSlateSound                                              => _offHoveredSlateSound.GetValue();
	#endregion

	public FCheckBoxStyle(TEnumAsByte<ESlateCheckBoxType> c_CheckBoxType, FSlateBrush c_UncheckedImage, FSlateBrush c_UncheckedHoveredImage, FSlateBrush c_UncheckedPressedImage, FSlateBrush c_CheckedImage, FSlateBrush c_CheckedHoveredImage, FSlateBrush c_CheckedPressedImage, FSlateBrush c_UndeterminedImage, FSlateBrush c_UndeterminedHoveredImage, FSlateBrush c_UndeterminedPressedImage, FMargin c_Padding, FSlateColor c_ForegroundColor, FSlateColor c_BorderBackgroundColor, FSlateSound c_CheckedSlateSound, FSlateSound c_UncheckedSlateSound, FSlateSound c_HoveredSlateSound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCheckBoxType.SetValue(c_CheckBoxType);
		_offUncheckedImage.SetValue(c_UncheckedImage);
		_offUncheckedHoveredImage.SetValue(c_UncheckedHoveredImage);
		_offUncheckedPressedImage.SetValue(c_UncheckedPressedImage);
		_offCheckedImage.SetValue(c_CheckedImage);
		_offCheckedHoveredImage.SetValue(c_CheckedHoveredImage);
		_offCheckedPressedImage.SetValue(c_CheckedPressedImage);
		_offUndeterminedImage.SetValue(c_UndeterminedImage);
		_offUndeterminedHoveredImage.SetValue(c_UndeterminedHoveredImage);
		_offUndeterminedPressedImage.SetValue(c_UndeterminedPressedImage);
		_offPadding.SetValue(c_Padding);
		_offForegroundColor.SetValue(c_ForegroundColor);
		_offBorderBackgroundColor.SetValue(c_BorderBackgroundColor);
		_offCheckedSlateSound.SetValue(c_CheckedSlateSound);
		_offUncheckedSlateSound.SetValue(c_UncheckedSlateSound);
		_offHoveredSlateSound.SetValue(c_HoveredSlateSound);
	}
}
// ScriptStruct SlateCore.WindowStyle
// 0x1050 (0x1058 - 0x0008)
public class FWindowStyle : FSlateWidgetStyle
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                       _offMinimizeButtonStyle                                        = new ExternalOffset<FButtonStyle>(0x0008, false);             // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FButtonStyle>                       _offMaximizeButtonStyle                                        = new ExternalOffset<FButtonStyle>(0x0280, false);             // 0x0280(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FButtonStyle>                       _offRestoreButtonStyle                                         = new ExternalOffset<FButtonStyle>(0x04F8, false);             // 0x04F8(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FButtonStyle>                       _offCloseButtonStyle                                           = new ExternalOffset<FButtonStyle>(0x0770, false);             // 0x0770(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FTextBlockStyle>                    _offTitleTextStyle                                             = new ExternalOffset<FTextBlockStyle>(0x09E8, false);          // 0x09E8(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offActiveTitleBrush                                           = new ExternalOffset<FSlateBrush>(0x0C50, false);              // 0x0C50(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offInactiveTitleBrush                                         = new ExternalOffset<FSlateBrush>(0x0CD8, false);              // 0x0CD8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offFlashTitleBrush                                            = new ExternalOffset<FSlateBrush>(0x0D60, false);              // 0x0D60(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offBackgroundColor                                            = new ExternalOffset<FSlateColor>(0x0DE8, false);              // 0x0DE8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offOutlineBrush                                               = new ExternalOffset<FSlateBrush>(0x0E10, false);              // 0x0E10(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateColor>                        _offOutlineColor                                               = new ExternalOffset<FSlateColor>(0x0E98, false);              // 0x0E98(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBorderBrush                                                = new ExternalOffset<FSlateBrush>(0x0EC0, false);              // 0x0EC0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offBackgroundBrush                                            = new ExternalOffset<FSlateBrush>(0x0F48, false);              // 0x0F48(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FSlateBrush>                        _offChildBackgroundBrush                                       = new ExternalOffset<FSlateBrush>(0x0FD0, false);              // 0x0FD0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                        MinimizeButtonStyle                                            => _offMinimizeButtonStyle.GetValue();
	public FButtonStyle                                        MaximizeButtonStyle                                            => _offMaximizeButtonStyle.GetValue();
	public FButtonStyle                                        RestoreButtonStyle                                             => _offRestoreButtonStyle.GetValue();
	public FButtonStyle                                        CloseButtonStyle                                               => _offCloseButtonStyle.GetValue();
	public FTextBlockStyle                                     TitleTextStyle                                                 => _offTitleTextStyle.GetValue();
	public FSlateBrush                                         ActiveTitleBrush                                               => _offActiveTitleBrush.GetValue();
	public FSlateBrush                                         InactiveTitleBrush                                             => _offInactiveTitleBrush.GetValue();
	public FSlateBrush                                         FlashTitleBrush                                                => _offFlashTitleBrush.GetValue();
	public FSlateColor                                         BackgroundColor                                                => _offBackgroundColor.GetValue();
	public FSlateBrush                                         OutlineBrush                                                   => _offOutlineBrush.GetValue();
	public FSlateColor                                         OutlineColor                                                   => _offOutlineColor.GetValue();
	public FSlateBrush                                         BorderBrush                                                    => _offBorderBrush.GetValue();
	public FSlateBrush                                         BackgroundBrush                                                => _offBackgroundBrush.GetValue();
	public FSlateBrush                                         ChildBackgroundBrush                                           => _offChildBackgroundBrush.GetValue();
	#endregion

	public FWindowStyle(FButtonStyle c_MinimizeButtonStyle, FButtonStyle c_MaximizeButtonStyle, FButtonStyle c_RestoreButtonStyle, FButtonStyle c_CloseButtonStyle, FTextBlockStyle c_TitleTextStyle, FSlateBrush c_ActiveTitleBrush, FSlateBrush c_InactiveTitleBrush, FSlateBrush c_FlashTitleBrush, FSlateColor c_BackgroundColor, FSlateBrush c_OutlineBrush, FSlateColor c_OutlineColor, FSlateBrush c_BorderBrush, FSlateBrush c_BackgroundBrush, FSlateBrush c_ChildBackgroundBrush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinimizeButtonStyle.SetValue(c_MinimizeButtonStyle);
		_offMaximizeButtonStyle.SetValue(c_MaximizeButtonStyle);
		_offRestoreButtonStyle.SetValue(c_RestoreButtonStyle);
		_offCloseButtonStyle.SetValue(c_CloseButtonStyle);
		_offTitleTextStyle.SetValue(c_TitleTextStyle);
		_offActiveTitleBrush.SetValue(c_ActiveTitleBrush);
		_offInactiveTitleBrush.SetValue(c_InactiveTitleBrush);
		_offFlashTitleBrush.SetValue(c_FlashTitleBrush);
		_offBackgroundColor.SetValue(c_BackgroundColor);
		_offOutlineBrush.SetValue(c_OutlineBrush);
		_offOutlineColor.SetValue(c_OutlineColor);
		_offBorderBrush.SetValue(c_BorderBrush);
		_offBackgroundBrush.SetValue(c_BackgroundBrush);
		_offChildBackgroundBrush.SetValue(c_ChildBackgroundBrush);
	}
}

}