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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,

};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3,

};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2,

};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x00A8
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     ParameterCurve;                                            // 0x0008(0x00A0) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0060 (0x0080 - 0x0020)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                           // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  CutTransform;                                              // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasCutTransform;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01E8
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     XCurve;                                                    // 0x0008(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     YCurve;                                                    // 0x00A8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     ZCurve;                                                    // 0x0148(0x00A0) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0030 (0x0038 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                Time;                                                      // 0x0018(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x00C0 (0x00E0 - 0x0020)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID                  PathBindingID;                                             // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     TimingCurve;                                               // 0x0038(0x00A0) (NativeAccessSpecifierPublic)
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                             // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                                // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFollow;                                                   // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse;                                                  // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceUpright;                                             // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
struct FMovieSceneTransformMask
{
	uint32_t                                           mask;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Curves[0x4];                                               // 0x0048(0x00A0) (NativeAccessSpecifierPublic)
	EMovieSceneBlendType                               BlendType;                                                 // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x0288
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     RedCurve;                                                  // 0x0008(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     GreenCurve;                                                // 0x00A8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                 // 0x0148(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                                // 0x01E8(0x00A0) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0008
struct FMovieSceneEvent
{
	struct FName                                       FunctionName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0040 (0x0048 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                Time;                                                      // 0x002C(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                   // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                    // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                     // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                Time;                                                      // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                  // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvent>                    KeyValues;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                                Time;                                                      // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                Time;                                                      // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
struct FMovieSceneEventParameters
{

};
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000 (0x0098 - 0x0098)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

};
// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FEventPayload
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEventParameters                  Parameters;                                                // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel                  ParticleKeys;                                              // 0x0020(0x0098) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEventPayload>                       KeyValues;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0x00C8 (0x00E8 - 0x0020)
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
	int                                                MaterialIndex;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                           // 0x0028(0x00C0) (NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0650
struct FMovieScene3DTransformTemplateData
{
	struct FMovieSceneFloatChannel                     TranslationCurve[0x3];                                     // 0x0000(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     RotationCurve[0x3];                                        // 0x01E0(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     ScaleCurve[0x3];                                           // 0x03C0(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     ManualWeight;                                              // 0x05A0(0x00A0) (NativeAccessSpecifierPublic)
	EMovieSceneBlendType                               BlendType;                                                 // 0x0640(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask                    mask;                                                      // 0x0644(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseQuaternionInterpolation;                               // 0x0648(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                            // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenForwards;                                   // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenBackwards;                                  // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                              // 0x0048(0x0650) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0650 (0x0670 - 0x0020)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                              // 0x0020(0x0650) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x0008 (0x0040 - 0x0038)
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{
	struct FName                                       EventToTrigger;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                              // 0x0048(0x0650) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0018
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID                  Object;                                                    // 0x0000(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0x0020 (0x0058 - 0x0038)
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{
	TArray<struct FFrameNumber>                        EventTimes;                                                // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               EventFunctions;                                            // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                  // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneActorReferenceKey>        KeyValues;                                                 // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0088 (0x00C0 - 0x0038)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0038(0x0088) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     ComponentCurves[0x4];                                      // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)
	int                                                NumChannelsUsed;                                           // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EMovieSceneBlendType                               BlendType;                                                 // 0x02CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00C8 (0x00E8 - 0x0020)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0020(0x0028) (NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                        // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x00B8 (0x00D8 - 0x0020)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     FadeCurve;                                                 // 0x0020(0x00A0) (NativeAccessSpecifierPrivate)
	struct FLinearColor                                FadeColor;                                                 // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bFadeAudio;                                                // 0x00D0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAudioSection*                     AudioSection;                                              // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             Values;                                                    // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     DefaultValue;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasDefaultValue;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	ELevelVisibility                                   Visibility;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               LevelNames;                                                // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x00A0 (0x00E8 - 0x0048)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel                    StringCurve;                                               // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	class UMaterialParameterCollection*                MPC;                                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x00C0 (0x0108 - 0x0048)
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                             // 0x0048(0x00C0) (NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerCurve;                                              // 0x0048(0x0090) (Protected, NativeAccessSpecifierProtected)
	EMovieSceneBlendType                               BlendType;                                                 // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel                      EnumCurve;                                                 // 0x0048(0x0098) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel                      ByteCurve;                                                 // 0x0048(0x0098) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                                // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionStartTime;                                          // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x00A8 (0x00F0 - 0x0048)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatFunction;                                             // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)
	EMovieSceneBlendType                               BlendType;                                                 // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                                // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionStartTime;                                          // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00D8 - 0x0048)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolCurve;                                                 // 0x0048(0x0090) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x00D0
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                EndFrameOffset;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse;                                                  // 0x0014(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                    // 0x0020(0x00A0) (NativeAccessSpecifierPublic)
	bool                                               bSkipAnimNotifiers;                                        // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceCustomMode;                                          // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x00C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndOffset;                                                 // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x00D8 - 0x00D0)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber                                SectionStartTime;                                          // 0x00D0(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                SectionEndTime;                                            // 0x00D4(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x00D8 (0x00F8 - 0x0020)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                    // 0x0020(0x00D8) (NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     SlomoCurve;                                                // 0x0020(0x00A0) (NativeAccessSpecifierPrivate)

};
// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneBoolChannel                      Curve;                                                     // 0x0020(0x0090) (Protected, NativeAccessSpecifierProtected)

};
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                      // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0040 - 0x0028)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector4                                    Vector;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                    // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0030 - 0x0028)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000 (0x00D8 - 0x00D8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

};
// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID                  AttachBindingID;                                           // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocketName;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachComponentName;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AttachmentLocationRule;                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AttachmentRotationRule;                                    // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AttachmentScaleRule;                                       // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDetachmentRule                                    DetachmentLocationRule;                                    // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDetachmentRule                                    DetachmentRotationRule;                                    // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDetachmentRule                                    DetachmentScaleRule;                                       // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
