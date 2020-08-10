#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2,

};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,

};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2,

};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,

};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
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
	EDragPivot__EDragPivot_MAX     = 10,

};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__Overlay       = 3,
	EDynamicBoxType__EDynamicBoxType_MAX = 4,

};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2,

};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4,

};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2,

};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible     = 0,
	EWindowVisibility__SelfHitTestInvisible = 1,
	EWindowVisibility__EWindowVisibility_MAX = 2,

};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2,

};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3,

};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2,

};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2,

};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4,

};

// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	ESlateAccessibleBehavior__Auto = 1,
	ESlateAccessibleBehavior__Summary = 2,
	ESlateAccessibleBehavior__Custom = 3,
	ESlateAccessibleBehavior__ToolTip = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5,

};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Shear;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.AnimationEventBinding
// 0x0028
struct FAnimationEventBinding
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	EWidgetAnimationEvent                              AnimationEvent;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UserTag;                                                   // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod;                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_TextFlowDirection;                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextShapingMethod                                 TextShapingMethod;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextFlowDirection                                 TextFlowDirection;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{

};
// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                                    Anchors;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0030 - 0x0030)
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};
// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FMovieScene2DTransformMask
{
	uint32_t                                           mask;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Translation[0x2];                                          // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     Rotation;                                                  // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                                // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                                // 0x0368(0x00A0) (NativeAccessSpecifierPrivate)
	EMovieSceneBlendType                               BlendType;                                                 // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieScene2DTransformMask                  mask;                                                      // 0x04AC(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     TopCurve;                                                  // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                 // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     RightCurve;                                                // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     BottomCurve;                                               // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
	EMovieSceneBlendType                               BlendType;                                                 // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct UMG.RichTextStyleRow
// 0x0268 (0x0270 - 0x0008)
struct FRichTextStyleRow : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0008(0x0268) (Edit, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
struct FRichImageRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                     // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0;                                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1;                                                       // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV2;                                                       // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV3;                                                       // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV4;                                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV5;                                                       // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.UserWidgetPool
// 0x0080
struct FUserWidgetPool
{
	TArray<class UUserWidget*>                         ActiveWidgets;                                             // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UUserWidget*>                         InactiveWidgets;                                           // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

};
// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotWidgetName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AnimationGuid;                                             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRootWidget;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C
struct FBlueprintWidgetAnimationDelegateBinding
{
	EWidgetAnimationEvent                              Action;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimationToBind;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                        // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UserTag;                                                   // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0058
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0020(0x0030) (NativeAccessSpecifierPublic)
	EBindingKind                                       Kind;                                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00B8 - 0x00A8)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{

};
// ScriptStruct UMG.WidgetNavigationData
// 0x0024
struct FWidgetNavigationData
{
	EUINavigationRule                                  Rule;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       WidgetToFocus;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                      Widget;                                                    // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             CustomDelegate;                                            // 0x0014(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
