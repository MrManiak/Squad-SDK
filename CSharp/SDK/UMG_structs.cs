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

// Enum UMG.EWidgetAnimationEvent
public enum EWidgetAnimationEvent : byte
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2
}

// Enum UMG.EUMGSequencePlayMode
public enum EUMGSequencePlayMode : byte
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
}

// Enum UMG.EWidgetTickFrequency
public enum EWidgetTickFrequency : byte
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2
}

// Enum UMG.EVirtualKeyboardType
public enum EVirtualKeyboardType : byte
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
}

// Enum UMG.EDragPivot
public enum EDragPivot : byte
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
}

// Enum UMG.EDynamicBoxType
public enum EDynamicBoxType : byte
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__Overlay       = 3,
	EDynamicBoxType__EDynamicBoxType_MAX = 4
}

// Enum UMG.ESlateSizeRule
public enum ESlateSizeRule : byte
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
}

// Enum UMG.EWidgetDesignFlags
public enum EWidgetDesignFlags : byte
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
}

// Enum UMG.EBindingKind
public enum EBindingKind : byte
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
}

// Enum UMG.EWindowVisibility
public enum EWindowVisibility : byte
{
	EWindowVisibility__Visible     = 0,
	EWindowVisibility__SelfHitTestInvisible = 1,
	EWindowVisibility__EWindowVisibility_MAX = 2
}

// Enum UMG.EWidgetGeometryMode
public enum EWidgetGeometryMode : byte
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
}

// Enum UMG.EWidgetBlendMode
public enum EWidgetBlendMode : byte
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
}

// Enum UMG.EWidgetTimingPolicy
public enum EWidgetTimingPolicy : byte
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
}

// Enum UMG.EWidgetSpace
public enum EWidgetSpace : byte
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
}

// Enum UMG.EWidgetInteractionSource
public enum EWidgetInteractionSource : byte
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
}

// Enum UMG.ESlateAccessibleBehavior
public enum ESlateAccessibleBehavior : byte
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	ESlateAccessibleBehavior__Auto = 1,
	ESlateAccessibleBehavior__Summary = 2,
	ESlateAccessibleBehavior__Custom = 3,
	ESlateAccessibleBehavior__ToolTip = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5
}

// Enum UMG.ESlateVisibility
public enum ESlateVisibility : byte
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x001C
public class FWidgetTransform : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offTranslation                                                = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offScale                                                      = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offShear                                                      = new ExternalOffset<FVector2D>(0x0010, false);                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAngle                                                      = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           Translation                                                    => _offTranslation.GetValue();
	public FVector2D                                           Scale                                                          => _offScale.GetValue();
	public FVector2D                                           Shear                                                          => _offShear.GetValue();
	public float                                               Angle                                                          => _offAngle.GetValue();
	#endregion

	public FWidgetTransform(FVector2D c_Translation, FVector2D c_Scale, FVector2D c_Shear, float c_Angle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTranslation.SetValue(c_Translation);
		_offScale.SetValue(c_Scale);
		_offShear.SetValue(c_Shear);
		_offAngle.SetValue(c_Angle);
	}
}
// ScriptStruct UMG.AnimationEventBinding
// 0x0028
public class FAnimationEventBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<UWidgetAnimation>                   _offAnimation                                                  = new ExternalOffset<UWidgetAnimation>(0x0000, true);          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                    _offDelegate                                                   = new ExternalOffset<FScriptDelegate>(0x0008, false);          // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EWidgetAnimationEvent>              _offAnimationEvent                                             = new ExternalOffset<EWidgetAnimationEvent>(0x0018, false);    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offUserTag                                                    = new ExternalOffset<FName>(0x001C, false);                    // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UWidgetAnimation                                    Animation                                                      => _offAnimation.GetValue();
	public FScriptDelegate                                     Delegate                                                       => _offDelegate.GetValue();
	public EWidgetAnimationEvent                               AnimationEvent                                                 => _offAnimationEvent.GetValue();
	public FName                                               UserTag                                                        => _offUserTag.GetValue();
	#endregion

	public FAnimationEventBinding(UWidgetAnimation c_Animation, FScriptDelegate c_Delegate, EWidgetAnimationEvent c_AnimationEvent, FName c_UserTag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimation.SetValue(c_Animation);
		_offDelegate.SetValue(c_Delegate);
		_offAnimationEvent.SetValue(c_AnimationEvent);
		_offUserTag.SetValue(c_UserTag);
	}
}
// ScriptStruct UMG.ShapedTextOptions
// 0x0003
public class FShapedTextOptions : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbOverride_TextShapingMethod                                = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_TextFlowDirection                                = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextShapingMethod>                 _offTextShapingMethod                                          = new ExternalOffset<ETextShapingMethod>(0x0001, false);       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextFlowDirection>                 _offTextFlowDirection                                          = new ExternalOffset<ETextFlowDirection>(0x0002, false);       // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ETextShapingMethod                                  TextShapingMethod                                              => _offTextShapingMethod.GetValue();
	public ETextFlowDirection                                  TextFlowDirection                                              => _offTextFlowDirection.GetValue();
	#endregion

	public FShapedTextOptions(ETextShapingMethod c_TextShapingMethod, ETextFlowDirection c_TextFlowDirection) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTextShapingMethod.SetValue(c_TextShapingMethod);
		_offTextFlowDirection.SetValue(c_TextFlowDirection);
	}
}
// ScriptStruct UMG.NamedSlotBinding
// 0x0010
public class FNamedSlotBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UWidget>                            _offContent                                                    = new ExternalOffset<UWidget>(0x0008, true);                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	public UWidget                                             Content                                                        => _offContent.GetValue();
	#endregion

	public FNamedSlotBinding(FName c_Name, UWidget c_Content) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offContent.SetValue(c_Content);
	}
}
// ScriptStruct UMG.EventReply
// 0x00B8
public class FEventReply : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FEventReply() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct UMG.AnchorData
// 0x0028
public class FAnchorData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMargin>                            _offOffsets                                                    = new ExternalOffset<FMargin>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAnchors>                           _offAnchors                                                    = new ExternalOffset<FAnchors>(0x0010, false);                 // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offAlignment                                                  = new ExternalOffset<FVector2D>(0x0020, false);                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMargin                                             Offsets                                                        => _offOffsets.GetValue();
	public FAnchors                                            Anchors                                                        => _offAnchors.GetValue();
	public FVector2D                                           Alignment                                                      => _offAlignment.GetValue();
	#endregion

	public FAnchorData(FMargin c_Offsets, FAnchors c_Anchors, FVector2D c_Alignment) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOffsets.SetValue(c_Offsets);
		_offAnchors.SetValue(c_Anchors);
		_offAlignment.SetValue(c_Alignment);
	}
}
// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0030 - 0x0030)
public class FDynamicPropertyPath : FCachedPropertyPath
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FDynamicPropertyPath() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
public class FMovieScene2DTransformMask : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offmask                                                       = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                mask                                                           => _offmask.GetValue();
	#endregion

	public FMovieScene2DTransformMask(uint c_mask) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offmask.SetValue(c_mask);
	}
}
// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
public class FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
//	private ExternalOffset<FMovieSceneFloatChannel>            _offTranslation[0x2]                                           = new ExternalOffset<FMovieSceneFloatChannel>(0x0048, false);  // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>            _offRotation                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x0188, false);  // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
//	private ExternalOffset<FMovieSceneFloatChannel>            _offScale[0x2]                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0228, false);  // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
//	private ExternalOffset<FMovieSceneFloatChannel>            _offShear[0x2]                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0368, false);  // 0x0368(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x04A8, false);     // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieScene2DTransformMask>         _offmask                                                       = new ExternalOffset<FMovieScene2DTransformMask>(0x04AC, false); // 0x04AC(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             Rotation                                                       => _offRotation.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	public FMovieScene2DTransformMask                          mask                                                           => _offmask.GetValue();
	#endregion

	public FMovieScene2DTransformSectionTemplate(FMovieSceneFloatChannel c_Rotation, EMovieSceneBlendType c_BlendType, FMovieScene2DTransformMask c_mask) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRotation.SetValue(c_Rotation);
		_offBlendType.SetValue(c_BlendType);
		_offmask.SetValue(c_mask);
	}
}
// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
public class FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>            _offTopCurve                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x0048, false);  // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>            _offLeftCurve                                                  = new ExternalOffset<FMovieSceneFloatChannel>(0x00E8, false);  // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>            _offRightCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0188, false);  // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>            _offBottomCurve                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x0228, false);  // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x02C8, false);     // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             TopCurve                                                       => _offTopCurve.GetValue();
	public FMovieSceneFloatChannel                             LeftCurve                                                      => _offLeftCurve.GetValue();
	public FMovieSceneFloatChannel                             RightCurve                                                     => _offRightCurve.GetValue();
	public FMovieSceneFloatChannel                             BottomCurve                                                    => _offBottomCurve.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	#endregion

	public FMovieSceneMarginSectionTemplate(FMovieSceneFloatChannel c_TopCurve, FMovieSceneFloatChannel c_LeftCurve, FMovieSceneFloatChannel c_RightCurve, FMovieSceneFloatChannel c_BottomCurve, EMovieSceneBlendType c_BlendType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTopCurve.SetValue(c_TopCurve);
		_offLeftCurve.SetValue(c_LeftCurve);
		_offRightCurve.SetValue(c_RightCurve);
		_offBottomCurve.SetValue(c_BottomCurve);
		_offBlendType.SetValue(c_BlendType);
	}
}
// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0060 - 0x0050)
public class FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	#region Offsets
	private ExternalOffset<TArray<FName>>                      _offBrushPropertyNamePath                                      = new ExternalOffset<TArray<FName>>(0x0050, false);            // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FName>                                       BrushPropertyNamePath                                          => _offBrushPropertyNamePath.GetValue();
	#endregion

	public FMovieSceneWidgetMaterialSectionTemplate(TArray<FName> c_BrushPropertyNamePath) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBrushPropertyNamePath.SetValue(c_BrushPropertyNamePath);
	}
}
// ScriptStruct UMG.RichTextStyleRow
// 0x0268 (0x0270 - 0x0008)
public class FRichTextStyleRow : FTableRowBase
{
	#region Offsets
	private ExternalOffset<FTextBlockStyle>                    _offTextStyle                                                  = new ExternalOffset<FTextBlockStyle>(0x0008, false);          // 0x0008(0x0268) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTextBlockStyle                                     TextStyle                                                      => _offTextStyle.GetValue();
	#endregion

	public FRichTextStyleRow(FTextBlockStyle c_TextStyle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTextStyle.SetValue(c_TextStyle);
	}
}
// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
public class FRichImageRow : FTableRowBase
{
	#region Offsets
	private ExternalOffset<FSlateBrush>                        _offBrush                                                      = new ExternalOffset<FSlateBrush>(0x0008, false);              // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSlateBrush                                         Brush                                                          => _offBrush.GetValue();
	#endregion

	public FRichImageRow(FSlateBrush c_Brush) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBrush.SetValue(c_Brush);
	}
}
// ScriptStruct UMG.SlateMeshVertex
// 0x003C
public class FSlateMeshVertex : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offPosition                                                   = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offColor                                                      = new ExternalOffset<FColor>(0x0008, false);                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV0                                                        = new ExternalOffset<FVector2D>(0x000C, false);                // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV1                                                        = new ExternalOffset<FVector2D>(0x0014, false);                // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV2                                                        = new ExternalOffset<FVector2D>(0x001C, false);                // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV3                                                        = new ExternalOffset<FVector2D>(0x0024, false);                // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV4                                                        = new ExternalOffset<FVector2D>(0x002C, false);                // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV5                                                        = new ExternalOffset<FVector2D>(0x0034, false);                // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           Position                                                       => _offPosition.GetValue();
	public FColor                                              Color                                                          => _offColor.GetValue();
	public FVector2D                                           UV0                                                            => _offUV0.GetValue();
	public FVector2D                                           UV1                                                            => _offUV1.GetValue();
	public FVector2D                                           UV2                                                            => _offUV2.GetValue();
	public FVector2D                                           UV3                                                            => _offUV3.GetValue();
	public FVector2D                                           UV4                                                            => _offUV4.GetValue();
	public FVector2D                                           UV5                                                            => _offUV5.GetValue();
	#endregion

	public FSlateMeshVertex(FVector2D c_Position, FColor c_Color, FVector2D c_UV0, FVector2D c_UV1, FVector2D c_UV2, FVector2D c_UV3, FVector2D c_UV4, FVector2D c_UV5) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPosition.SetValue(c_Position);
		_offColor.SetValue(c_Color);
		_offUV0.SetValue(c_UV0);
		_offUV1.SetValue(c_UV1);
		_offUV2.SetValue(c_UV2);
		_offUV3.SetValue(c_UV3);
		_offUV4.SetValue(c_UV4);
		_offUV5.SetValue(c_UV5);
	}
}
// ScriptStruct UMG.SlateChildSize
// 0x0008
public class FSlateChildSize : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESlateSizeRule>>        _offSizeRule                                                   = new ExternalOffset<TEnumAsByte<ESlateSizeRule>>(0x0004, false); // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Value                                                          => _offValue.GetValue();
	public TEnumAsByte<ESlateSizeRule>                         SizeRule                                                       => _offSizeRule.GetValue();
	#endregion

	public FSlateChildSize(float c_Value, TEnumAsByte<ESlateSizeRule> c_SizeRule) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
		_offSizeRule.SetValue(c_SizeRule);
	}
}
// ScriptStruct UMG.UserWidgetPool
// 0x0080
public class FUserWidgetPool : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UUserWidget>>                _offActiveWidgets                                              = new ExternalOffset<TArray<UUserWidget>>(0x0000, false);      // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UUserWidget>>                _offInactiveWidgets                                            = new ExternalOffset<TArray<UUserWidget>>(0x0010, false);      // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UUserWidget>                                 ActiveWidgets                                                  => _offActiveWidgets.GetValue();
	public TArray<UUserWidget>                                 InactiveWidgets                                                => _offInactiveWidgets.GetValue();
	#endregion

	public FUserWidgetPool(TArray<UUserWidget> c_ActiveWidgets, TArray<UUserWidget> c_InactiveWidgets) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActiveWidgets.SetValue(c_ActiveWidgets);
		_offInactiveWidgets.SetValue(c_InactiveWidgets);
	}
}
// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
public class FWidgetAnimationBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offWidgetName                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSlotWidgetName                                             = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offAnimationGuid                                              = new ExternalOffset<FGuid>(0x0010, false);                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsRootWidget                                              = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               WidgetName                                                     => _offWidgetName.GetValue();
	public FName                                               SlotWidgetName                                                 => _offSlotWidgetName.GetValue();
	public FGuid                                               AnimationGuid                                                  => _offAnimationGuid.GetValue();
	public byte/*(bool)*/                                      bIsRootWidget                                                  => _offbIsRootWidget.GetValue();
	#endregion

	public FWidgetAnimationBinding(FName c_WidgetName, FName c_SlotWidgetName, FGuid c_AnimationGuid, byte/*(bool)*/ c_bIsRootWidget) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWidgetName.SetValue(c_WidgetName);
		_offSlotWidgetName.SetValue(c_SlotWidgetName);
		_offAnimationGuid.SetValue(c_AnimationGuid);
		_offbIsRootWidget.SetValue(c_bIsRootWidget);
	}
}
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C
public class FBlueprintWidgetAnimationDelegateBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<EWidgetAnimationEvent>              _offAction                                                     = new ExternalOffset<EWidgetAnimationEvent>(0x0000, false);    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAnimationToBind                                            = new ExternalOffset<FName>(0x0004, false);                    // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offFunctionNameToBind                                         = new ExternalOffset<FName>(0x000C, false);                    // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offUserTag                                                    = new ExternalOffset<FName>(0x0014, false);                    // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EWidgetAnimationEvent                               Action                                                         => _offAction.GetValue();
	public FName                                               AnimationToBind                                                => _offAnimationToBind.GetValue();
	public FName                                               FunctionNameToBind                                             => _offFunctionNameToBind.GetValue();
	public FName                                               UserTag                                                        => _offUserTag.GetValue();
	#endregion

	public FBlueprintWidgetAnimationDelegateBinding(EWidgetAnimationEvent c_Action, FName c_AnimationToBind, FName c_FunctionNameToBind, FName c_UserTag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAction.SetValue(c_Action);
		_offAnimationToBind.SetValue(c_AnimationToBind);
		_offFunctionNameToBind.SetValue(c_FunctionNameToBind);
		_offUserTag.SetValue(c_UserTag);
	}
}
// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0058
public class FDelegateRuntimeBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offObjectName                                                 = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPropertyName                                               = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offFunctionName                                               = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDynamicPropertyPath>               _offSourcePath                                                 = new ExternalOffset<FDynamicPropertyPath>(0x0020, false);     // 0x0020(0x0030) (NativeAccessSpecifierPublic)
	private ExternalOffset<EBindingKind>                       _offKind                                                       = new ExternalOffset<EBindingKind>(0x0050, false);             // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ObjectName                                                     => _offObjectName.GetValue();
	public FName                                               PropertyName                                                   => _offPropertyName.GetValue();
	public FName                                               FunctionName                                                   => _offFunctionName.GetValue();
	public FDynamicPropertyPath                                SourcePath                                                     => _offSourcePath.GetValue();
	public EBindingKind                                        Kind                                                           => _offKind.GetValue();
	#endregion

	public FDelegateRuntimeBinding(FString c_ObjectName, FName c_PropertyName, FName c_FunctionName, FDynamicPropertyPath c_SourcePath, EBindingKind c_Kind) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectName.SetValue(c_ObjectName);
		_offPropertyName.SetValue(c_PropertyName);
		_offFunctionName.SetValue(c_FunctionName);
		_offSourcePath.SetValue(c_SourcePath);
		_offKind.SetValue(c_Kind);
	}
}
// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00B8 - 0x00A8)
public class FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FWidgetComponentInstanceData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct UMG.WidgetNavigationData
// 0x0024
public class FWidgetNavigationData : ExternalClass
{
	#region Offsets
	private ExternalOffset<EUINavigationRule>                  _offRule                                                       = new ExternalOffset<EUINavigationRule>(0x0000, false);        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offWidgetToFocus                                              = new ExternalOffset<FName>(0x0004, false);                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UWidget>>            _offWidget                                                     = new ExternalOffset<TWeakObjectPtr<UWidget>>(0x000C, false);  // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                    _offCustomDelegate                                             = new ExternalOffset<FScriptDelegate>(0x0014, false);          // 0x0014(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EUINavigationRule                                   Rule                                                           => _offRule.GetValue();
	public FName                                               WidgetToFocus                                                  => _offWidgetToFocus.GetValue();
	public TWeakObjectPtr<UWidget>                             Widget                                                         => _offWidget.GetValue();
	public FScriptDelegate                                     CustomDelegate                                                 => _offCustomDelegate.GetValue();
	#endregion

	public FWidgetNavigationData(EUINavigationRule c_Rule, FName c_WidgetToFocus, TWeakObjectPtr<UWidget> c_Widget, FScriptDelegate c_CustomDelegate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRule.SetValue(c_Rule);
		_offWidgetToFocus.SetValue(c_WidgetToFocus);
		_offWidget.SetValue(c_Widget);
		_offCustomDelegate.SetValue(c_CustomDelegate);
	}
}
// ScriptStruct UMG.PaintContext
// 0x0030
public class FPaintContext : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FPaintContext() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}