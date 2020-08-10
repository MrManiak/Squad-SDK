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

// Enum MovieScene.EMovieSceneKeyInterpolation
public enum EMovieSceneKeyInterpolation : byte
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
}

// Enum MovieScene.EMovieSceneBlendType
public enum EMovieSceneBlendType : byte
{
	EMovieSceneBlendType__Absolute = 0,
	EMovieSceneBlendType__Additive = 1,
	EMovieSceneBlendType__Relative = 2,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 3
}

// Enum MovieScene.EMovieSceneBuiltInEasing
public enum EMovieSceneBuiltInEasing : byte
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
}

// Enum MovieScene.EEvaluationMethod
public enum EEvaluationMethod : byte
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
}

// Enum MovieScene.EUpdateClockSource
public enum EUpdateClockSource : byte
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__Timecode   = 3,
	EUpdateClockSource__EUpdateClockSource_MAX = 4
}

// Enum MovieScene.EMovieSceneEvaluationType
public enum EMovieSceneEvaluationType : byte
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
}

// Enum MovieScene.EMovieScenePlayerStatus
public enum EMovieScenePlayerStatus : byte
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7
}

// Enum MovieScene.EMovieSceneObjectBindingSpace
public enum EMovieSceneObjectBindingSpace : byte
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
}

// Enum MovieScene.EMovieSceneCompletionMode
public enum EMovieSceneCompletionMode : byte
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
}

// Enum MovieScene.ESectionEvaluationFlags
public enum ESectionEvaluationFlags : byte
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
}

// Enum MovieScene.EUpdatePositionMethod
public enum EUpdatePositionMethod : byte
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
}

// Enum MovieScene.ESpawnOwnership
public enum ESpawnOwnership : byte
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0060
public class FMovieSceneSubSectionFieldData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneSubSectionFieldData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
public class FOptionalMovieSceneBlendType : ExternalClass
{
	#region Offsets
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x0000, false);     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsValid                                                   = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	public byte/*(bool)*/                                      bIsValid                                                       => _offbIsValid.GetValue();
	#endregion

	public FOptionalMovieSceneBlendType(EMovieSceneBlendType c_BlendType, byte/*(bool)*/ c_bIsValid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBlendType.SetValue(c_BlendType);
		_offbIsValid.SetValue(c_bIsValid);
	}
}
// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
public class FMovieSceneChannel : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneChannel() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
public class FMovieSceneSequenceID : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offValue                                                      = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                Value                                                          => _offValue.GetValue();
	#endregion

	public FMovieSceneSequenceID(uint c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0060
public class FMovieSceneTrackFieldData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneTrackFieldData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
public class FMovieSceneSectionEvalOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbCanEditCompletionMode                                     = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieSceneCompletionMode>          _offCompletionMode                                             = new ExternalOffset<EMovieSceneCompletionMode>(0x0001, false); // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bCanEditCompletionMode                                         => _offbCanEditCompletionMode.GetValue();
	public EMovieSceneCompletionMode                           CompletionMode                                                 => _offCompletionMode.GetValue();
	#endregion

	public FMovieSceneSectionEvalOptions(byte/*(bool)*/ c_bCanEditCompletionMode, EMovieSceneCompletionMode c_CompletionMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbCanEditCompletionMode.SetValue(c_bCanEditCompletionMode);
		_offCompletionMode.SetValue(c_CompletionMode);
	}
}
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0300
public class FMovieSceneRootEvaluationTemplateInstance : ExternalClass
{
	#region Offsets
//	private TMap<struct FMovieSceneSequenceID, class UObject*> _offDirectorInstances                                          = new ExternalOffset<TMap<UObject>>(0x0018, false);            // 0x0018(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion

	public FMovieSceneRootEvaluationTemplateInstance() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
public class FMovieSceneTrackIdentifier : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offValue                                                      = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                Value                                                          => _offValue.GetValue();
	#endregion

	public FMovieSceneTrackIdentifier(uint c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0088 (0x0090 - 0x0008)
public class FMovieSceneBoolChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offDefaultValue                                               = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasDefaultValue                                           = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<bool>>                       _offValues                                                     = new ExternalOffset<TArray<bool>>(0x0020, false);             // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public byte/*(bool)*/                                      DefaultValue                                                   => _offDefaultValue.GetValue();
	public byte/*(bool)*/                                      bHasDefaultValue                                               => _offbHasDefaultValue.GetValue();
	public TArray<bool>                                        Values                                                         => _offValues.GetValue();
	#endregion

	public FMovieSceneBoolChannel(TArray<FFrameNumber> c_Times, byte/*(bool)*/ c_DefaultValue, byte/*(bool)*/ c_bHasDefaultValue, TArray<bool> c_Values) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimes.SetValue(c_Times);
		_offDefaultValue.SetValue(c_DefaultValue);
		_offbHasDefaultValue.SetValue(c_bHasDefaultValue);
		_offValues.SetValue(c_Values);
	}
}
// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
public class FMovieSceneFrameRange : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneFrameRange() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
public class FMovieSceneEasingSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offAutoEaseInDuration                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAutoEaseOutDuration                                        = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TScriptInterface<UMovieSceneEasingFunction>> _offEaseIn                                                     = new ExternalOffset<TScriptInterface<UMovieSceneEasingFunction>>(0x0008, false); // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbManualEaseIn                                              = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offManualEaseInDuration                                       = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TScriptInterface<UMovieSceneEasingFunction>> _offEaseOut                                                    = new ExternalOffset<TScriptInterface<UMovieSceneEasingFunction>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbManualEaseOut                                             = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offManualEaseOutDuration                                      = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 AutoEaseInDuration                                             => _offAutoEaseInDuration.GetValue();
	public int                                                 AutoEaseOutDuration                                            => _offAutoEaseOutDuration.GetValue();
	public TScriptInterface<UMovieSceneEasingFunction>         EaseIn                                                         => _offEaseIn.GetValue();
	public byte/*(bool)*/                                      bManualEaseIn                                                  => _offbManualEaseIn.GetValue();
	public int                                                 ManualEaseInDuration                                           => _offManualEaseInDuration.GetValue();
	public TScriptInterface<UMovieSceneEasingFunction>         EaseOut                                                        => _offEaseOut.GetValue();
	public byte/*(bool)*/                                      bManualEaseOut                                                 => _offbManualEaseOut.GetValue();
	public int                                                 ManualEaseOutDuration                                          => _offManualEaseOutDuration.GetValue();
	#endregion

	public FMovieSceneEasingSettings(int c_AutoEaseInDuration, int c_AutoEaseOutDuration, TScriptInterface<UMovieSceneEasingFunction> c_EaseIn, byte/*(bool)*/ c_bManualEaseIn, int c_ManualEaseInDuration, TScriptInterface<UMovieSceneEasingFunction> c_EaseOut, byte/*(bool)*/ c_bManualEaseOut, int c_ManualEaseOutDuration) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAutoEaseInDuration.SetValue(c_AutoEaseInDuration);
		_offAutoEaseOutDuration.SetValue(c_AutoEaseOutDuration);
		_offEaseIn.SetValue(c_EaseIn);
		_offbManualEaseIn.SetValue(c_bManualEaseIn);
		_offManualEaseInDuration.SetValue(c_ManualEaseInDuration);
		_offEaseOut.SetValue(c_EaseOut);
		_offbManualEaseOut.SetValue(c_bManualEaseOut);
		_offManualEaseOutDuration.SetValue(c_ManualEaseOutDuration);
	}
}
// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0018
public class FMovieSceneSectionParameters : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x0000, false);             // 0x0000(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimeScale                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHierarchicalBias                                           = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartOffset                                                = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPrerollTime                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPostrollTime                                               = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	public float                                               TimeScale                                                      => _offTimeScale.GetValue();
	public int                                                 HierarchicalBias                                               => _offHierarchicalBias.GetValue();
	public float                                               StartOffset                                                    => _offStartOffset.GetValue();
	public float                                               PrerollTime                                                    => _offPrerollTime.GetValue();
	public float                                               PostrollTime                                                   => _offPostrollTime.GetValue();
	#endregion

	public FMovieSceneSectionParameters(FFrameNumber c_StartFrameOffset, float c_TimeScale, int c_HierarchicalBias, float c_StartOffset, float c_PrerollTime, float c_PostrollTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStartFrameOffset.SetValue(c_StartFrameOffset);
		_offTimeScale.SetValue(c_TimeScale);
		_offHierarchicalBias.SetValue(c_HierarchicalBias);
		_offStartOffset.SetValue(c_StartOffset);
		_offPrerollTime.SetValue(c_PrerollTime);
		_offPostrollTime.SetValue(c_PostrollTime);
	}
}
// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0090 (0x0098 - 0x0008)
public class FMovieSceneByteChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offDefaultValue                                               = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasDefaultValue                                           = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<char>>                       _offValues                                                     = new ExternalOffset<TArray<char>>(0x0020, false);             // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UEnum>                              _offEnum                                                       = new ExternalOffset<UEnum>(0x0030, true);                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public byte/*(bool)*/                                      bHasDefaultValue                                               => _offbHasDefaultValue.GetValue();
	public TArray<char>                                        Values                                                         => _offValues.GetValue();
	public UEnum                                               Enum                                                           => _offEnum.GetValue();
	#endregion

	public FMovieSceneByteChannel(TArray<FFrameNumber> c_Times, byte/*(bool)*/ c_bHasDefaultValue, TArray<char> c_Values, UEnum c_Enum) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimes.SetValue(c_Times);
		_offbHasDefaultValue.SetValue(c_bHasDefaultValue);
		_offValues.SetValue(c_Values);
		_offEnum.SetValue(c_Enum);
	}
}
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
public class FMovieSceneTemplateGenerationLedger : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneTrackIdentifier>         _offLastTrackIdentifier                                        = new ExternalOffset<FMovieSceneTrackIdentifier>(0x0000, false); // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FGuid, struct FMovieSceneTrackIdentifier> _offTrackSignatureToTrackIdentifier                            = new ExternalOffset<TMap<FMovieSceneTrackIdentifier>>(0x0008, false); // 0x0008(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FGuid, struct FMovieSceneFrameRange>   _offSubSectionRanges                                           = new ExternalOffset<TMap<FMovieSceneFrameRange>>(0x0058, false); // 0x0058(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneTrackIdentifier                          LastTrackIdentifier                                            => _offLastTrackIdentifier.GetValue();
	#endregion

	public FMovieSceneTemplateGenerationLedger(FMovieSceneTrackIdentifier c_LastTrackIdentifier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLastTrackIdentifier.SetValue(c_LastTrackIdentifier);
	}
}
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000 (0x0060 - 0x0060)
public class FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneKeyHandleMap() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
public class FMovieSceneEvaluationTemplateSerialNumber : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offValue                                                      = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                Value                                                          => _offValue.GetValue();
	#endregion

	public FMovieSceneEvaluationTemplateSerialNumber(uint c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
public class FMovieSceneEvalTemplatePtr : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneEvalTemplatePtr() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
public class FMovieSceneTangentData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offArriveTangent                                              = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLeaveTangent                                               = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERichCurveTangentWeightMode>> _offTangentWeightMode                                          = new ExternalOffset<TEnumAsByte<ERichCurveTangentWeightMode>>(0x0008, false); // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offArriveTangentWeight                                        = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLeaveTangentWeight                                         = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ArriveTangent                                                  => _offArriveTangent.GetValue();
	public float                                               LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<ERichCurveTangentWeightMode>            TangentWeightMode                                              => _offTangentWeightMode.GetValue();
	public float                                               ArriveTangentWeight                                            => _offArriveTangentWeight.GetValue();
	public float                                               LeaveTangentWeight                                             => _offLeaveTangentWeight.GetValue();
	#endregion

	public FMovieSceneTangentData(float c_ArriveTangent, float c_LeaveTangent, TEnumAsByte<ERichCurveTangentWeightMode> c_TangentWeightMode, float c_ArriveTangentWeight, float c_LeaveTangentWeight) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offTangentWeightMode.SetValue(c_TangentWeightMode);
		_offArriveTangentWeight.SetValue(c_ArriveTangentWeight);
		_offLeaveTangentWeight.SetValue(c_LeaveTangentWeight);
	}
}
// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
public class FSectionEvaluationData : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offImplIndex                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offForcedTime                                                 = new ExternalOffset<FFrameNumber>(0x0004, false);             // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESectionEvaluationFlags>            _offFlags                                                      = new ExternalOffset<ESectionEvaluationFlags>(0x0008, false);  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ImplIndex                                                      => _offImplIndex.GetValue();
	public FFrameNumber                                        ForcedTime                                                     => _offForcedTime.GetValue();
	public ESectionEvaluationFlags                             Flags                                                          => _offFlags.GetValue();
	#endregion

	public FSectionEvaluationData(int c_ImplIndex, FFrameNumber c_ForcedTime, ESectionEvaluationFlags c_Flags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offImplIndex.SetValue(c_ImplIndex);
		_offForcedTime.SetValue(c_ForcedTime);
		_offFlags.SetValue(c_Flags);
	}
}
// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
public class FMovieSceneEmptyStruct : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneEmptyStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
public class FMovieSceneSequenceInstanceData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneSequenceInstanceData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
public class FMovieSceneFloatValue : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERichCurveInterpMode>>  _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<ERichCurveInterpMode>>(0x0004, false); // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERichCurveTangentMode>> _offTangentMode                                                = new ExternalOffset<TEnumAsByte<ERichCurveTangentMode>>(0x0005, false); // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneTangentData>             _offTangent                                                    = new ExternalOffset<FMovieSceneTangentData>(0x0008, false);   // 0x0008(0x0014) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Value                                                          => _offValue.GetValue();
	public TEnumAsByte<ERichCurveInterpMode>                   InterpMode                                                     => _offInterpMode.GetValue();
	public TEnumAsByte<ERichCurveTangentMode>                  TangentMode                                                    => _offTangentMode.GetValue();
	public FMovieSceneTangentData                              Tangent                                                        => _offTangent.GetValue();
	#endregion

	public FMovieSceneFloatValue(float c_Value, TEnumAsByte<ERichCurveInterpMode> c_InterpMode, TEnumAsByte<ERichCurveTangentMode> c_TangentMode, FMovieSceneTangentData c_Tangent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
		_offInterpMode.SetValue(c_InterpMode);
		_offTangentMode.SetValue(c_TangentMode);
		_offTangent.SetValue(c_Tangent);
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x000C
public class FMovieSceneSequenceTransform : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offTimeScale                                                  = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameTime>                         _offOffset                                                     = new ExternalOffset<FFrameTime>(0x0004, false);               // 0x0004(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               TimeScale                                                      => _offTimeScale.GetValue();
	public FFrameTime                                          Offset                                                         => _offOffset.GetValue();
	#endregion

	public FMovieSceneSequenceTransform(float c_TimeScale, FFrameTime c_Offset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimeScale.SetValue(c_TimeScale);
		_offOffset.SetValue(c_Offset);
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0004
public class FMovieSceneSequenceLoopCount : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offValue                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Value                                                          => _offValue.GetValue();
	#endregion

	public FMovieSceneSequenceLoopCount(int c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
public class FMovieSceneSequenceInstanceDataPtr : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneSequenceInstanceDataPtr() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x000C
public class FMovieSceneEvaluationGroupLUTIndex : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offLUTOffset                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumInitPtrs                                                = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumEvalPtrs                                                = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 LUTOffset                                                      => _offLUTOffset.GetValue();
	public int                                                 NumInitPtrs                                                    => _offNumInitPtrs.GetValue();
	public int                                                 NumEvalPtrs                                                    => _offNumEvalPtrs.GetValue();
	#endregion

	public FMovieSceneEvaluationGroupLUTIndex(int c_LUTOffset, int c_NumInitPtrs, int c_NumEvalPtrs) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLUTOffset.SetValue(c_LUTOffset);
		_offNumInitPtrs.SetValue(c_NumInitPtrs);
		_offNumEvalPtrs.SetValue(c_NumEvalPtrs);
	}
}
// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0098 (0x00A0 - 0x0008)
public class FMovieSceneFloatChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ERichCurveExtrapolation>> _offPreInfinityExtrap                                          = new ExternalOffset<TEnumAsByte<ERichCurveExtrapolation>>(0x0008, false); // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERichCurveExtrapolation>> _offPostInfinityExtrap                                         = new ExternalOffset<TEnumAsByte<ERichCurveExtrapolation>>(0x0009, false); // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0010, false);     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneFloatValue>>      _offValues                                                     = new ExternalOffset<TArray<FMovieSceneFloatValue>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                              _offDefaultValue                                               = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasDefaultValue                                           = new ExternalOffset<byte/*(bool)*/>(0x0034);                  // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneKeyHandleMap>            _offKeyHandles                                                 = new ExternalOffset<FMovieSceneKeyHandleMap>(0x0038, false);  // 0x0038(0x0060) (Transient, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameRate>                         _offTickResolution                                             = new ExternalOffset<FFrameRate>(0x0098, false);               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TEnumAsByte<ERichCurveExtrapolation>                PreInfinityExtrap                                              => _offPreInfinityExtrap.GetValue();
	public TEnumAsByte<ERichCurveExtrapolation>                PostInfinityExtrap                                             => _offPostInfinityExtrap.GetValue();
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public TArray<FMovieSceneFloatValue>                       Values                                                         => _offValues.GetValue();
	public float                                               DefaultValue                                                   => _offDefaultValue.GetValue();
	public byte/*(bool)*/                                      bHasDefaultValue                                               => _offbHasDefaultValue.GetValue();
	public FMovieSceneKeyHandleMap                             KeyHandles                                                     => _offKeyHandles.GetValue();
	public FFrameRate                                          TickResolution                                                 => _offTickResolution.GetValue();
	#endregion

	public FMovieSceneFloatChannel(TEnumAsByte<ERichCurveExtrapolation> c_PreInfinityExtrap, TEnumAsByte<ERichCurveExtrapolation> c_PostInfinityExtrap, TArray<FFrameNumber> c_Times, TArray<FMovieSceneFloatValue> c_Values, float c_DefaultValue, byte/*(bool)*/ c_bHasDefaultValue, FMovieSceneKeyHandleMap c_KeyHandles, FFrameRate c_TickResolution) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPreInfinityExtrap.SetValue(c_PreInfinityExtrap);
		_offPostInfinityExtrap.SetValue(c_PostInfinityExtrap);
		_offTimes.SetValue(c_Times);
		_offValues.SetValue(c_Values);
		_offDefaultValue.SetValue(c_DefaultValue);
		_offbHasDefaultValue.SetValue(c_bHasDefaultValue);
		_offKeyHandles.SetValue(c_KeyHandles);
		_offTickResolution.SetValue(c_TickResolution);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
public class FMovieSceneEvaluationFieldTrackPtr : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneSequenceID>              _offSequenceID                                                 = new ExternalOffset<FMovieSceneSequenceID>(0x0000, false);    // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneTrackIdentifier>         _offTrackIdentifier                                            = new ExternalOffset<FMovieSceneTrackIdentifier>(0x0004, false); // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSequenceID                               SequenceID                                                     => _offSequenceID.GetValue();
	public FMovieSceneTrackIdentifier                          TrackIdentifier                                                => _offTrackIdentifier.GetValue();
	#endregion

	public FMovieSceneEvaluationFieldTrackPtr(FMovieSceneSequenceID c_SequenceID, FMovieSceneTrackIdentifier c_TrackIdentifier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequenceID.SetValue(c_SequenceID);
		_offTrackIdentifier.SetValue(c_TrackIdentifier);
	}
}
// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00A8
public class FMovieSceneSubSequenceData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSoftObjectPath>                    _offSequence                                                   = new ExternalOffset<FSoftObjectPath>(0x0000, false);          // 0x0000(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceTransform>       _offRootToSequenceTransform                                    = new ExternalOffset<FMovieSceneSequenceTransform>(0x0018, false); // 0x0018(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameRate>                         _offTickResolution                                             = new ExternalOffset<FFrameRate>(0x0024, false);               // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceID>              _offDeterministicSequenceID                                    = new ExternalOffset<FMovieSceneSequenceID>(0x002C, false);    // 0x002C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFrameRange>              _offPlayRange                                                  = new ExternalOffset<FMovieSceneFrameRange>(0x0030, false);    // 0x0030(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFrameRange>              _offPreRollRange                                               = new ExternalOffset<FMovieSceneFrameRange>(0x0040, false);    // 0x0040(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFrameRange>              _offPostRollRange                                              = new ExternalOffset<FMovieSceneFrameRange>(0x0050, false);    // 0x0050(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHierarchicalBias                                           = new ExternalOffset<int>(0x0060);                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceInstanceDataPtr> _offInstanceData                                               = new ExternalOffset<FMovieSceneSequenceInstanceDataPtr>(0x0068, false); // 0x0068(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offSubSectionSignature                                        = new ExternalOffset<FGuid>(0x0088, false);                    // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneSequenceTransform>       _offOuterToInnerTransform                                      = new ExternalOffset<FMovieSceneSequenceTransform>(0x0098, false); // 0x0098(0x000C) (NoDestructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FSoftObjectPath                                     Sequence                                                       => _offSequence.GetValue();
	public FMovieSceneSequenceTransform                        RootToSequenceTransform                                        => _offRootToSequenceTransform.GetValue();
	public FFrameRate                                          TickResolution                                                 => _offTickResolution.GetValue();
	public FMovieSceneSequenceID                               DeterministicSequenceID                                        => _offDeterministicSequenceID.GetValue();
	public FMovieSceneFrameRange                               PlayRange                                                      => _offPlayRange.GetValue();
	public FMovieSceneFrameRange                               PreRollRange                                                   => _offPreRollRange.GetValue();
	public FMovieSceneFrameRange                               PostRollRange                                                  => _offPostRollRange.GetValue();
	public int                                                 HierarchicalBias                                               => _offHierarchicalBias.GetValue();
	public FMovieSceneSequenceInstanceDataPtr                  InstanceData                                                   => _offInstanceData.GetValue();
	public FGuid                                               SubSectionSignature                                            => _offSubSectionSignature.GetValue();
	public FMovieSceneSequenceTransform                        OuterToInnerTransform                                          => _offOuterToInnerTransform.GetValue();
	#endregion

	public FMovieSceneSubSequenceData(FSoftObjectPath c_Sequence, FMovieSceneSequenceTransform c_RootToSequenceTransform, FFrameRate c_TickResolution, FMovieSceneSequenceID c_DeterministicSequenceID, FMovieSceneFrameRange c_PlayRange, FMovieSceneFrameRange c_PreRollRange, FMovieSceneFrameRange c_PostRollRange, int c_HierarchicalBias, FMovieSceneSequenceInstanceDataPtr c_InstanceData, FGuid c_SubSectionSignature, FMovieSceneSequenceTransform c_OuterToInnerTransform) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequence.SetValue(c_Sequence);
		_offRootToSequenceTransform.SetValue(c_RootToSequenceTransform);
		_offTickResolution.SetValue(c_TickResolution);
		_offDeterministicSequenceID.SetValue(c_DeterministicSequenceID);
		_offPlayRange.SetValue(c_PlayRange);
		_offPreRollRange.SetValue(c_PreRollRange);
		_offPostRollRange.SetValue(c_PostRollRange);
		_offHierarchicalBias.SetValue(c_HierarchicalBias);
		_offInstanceData.SetValue(c_InstanceData);
		_offSubSectionSignature.SetValue(c_SubSectionSignature);
		_offOuterToInnerTransform.SetValue(c_OuterToInnerTransform);
	}
}
// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0088 (0x0090 - 0x0008)
public class FMovieSceneIntegerChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                                _offDefaultValue                                               = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasDefaultValue                                           = new ExternalOffset<byte/*(bool)*/>(0x001C);                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<int>>                        _offValues                                                     = new ExternalOffset<TArray<int>>(0x0020, false);              // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public int                                                 DefaultValue                                                   => _offDefaultValue.GetValue();
	public byte/*(bool)*/                                      bHasDefaultValue                                               => _offbHasDefaultValue.GetValue();
	public TArray<int>                                         Values                                                         => _offValues.GetValue();
	#endregion

	public FMovieSceneIntegerChannel(TArray<FFrameNumber> c_Times, int c_DefaultValue, byte/*(bool)*/ c_bHasDefaultValue, TArray<int> c_Values) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimes.SetValue(c_Times);
		_offDefaultValue.SetValue(c_DefaultValue);
		_offbHasDefaultValue.SetValue(c_bHasDefaultValue);
		_offValues.SetValue(c_Values);
	}
}
// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
public class FMovieSceneKeyStruct : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneKeyStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0014
public class FMovieSceneSequencePlaybackSettings : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbAutoPlay                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceLoopCount>       _offLoopCount                                                  = new ExternalOffset<FMovieSceneSequenceLoopCount>(0x0004, false); // 0x0004(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartTime                                                  = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRandomStartTime                                           = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRestoreState                                              = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDisableMovementInput                                      = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDisableLookAtInput                                        = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbHidePlayer                                                = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbHideHud                                                   = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDisableCameraCuts                                         = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbPauseAtEnd                                                = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSequenceLoopCount                        LoopCount                                                      => _offLoopCount.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public float                                               StartTime                                                      => _offStartTime.GetValue();
	#endregion

	public FMovieSceneSequencePlaybackSettings(FMovieSceneSequenceLoopCount c_LoopCount, float c_PlayRate, float c_StartTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLoopCount.SetValue(c_LoopCount);
		_offPlayRate.SetValue(c_PlayRate);
		_offStartTime.SetValue(c_StartTime);
	}
}
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
public class FMovieSceneSegmentIdentifier : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offIdentifierIndex                                            = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 IdentifierIndex                                                => _offIdentifierIndex.GetValue();
	#endregion

	public FMovieSceneSegmentIdentifier(int c_IdentifierIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIdentifierIndex.SetValue(c_IdentifierIndex);
	}
}
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0020 (0x0028 - 0x0008)
public class FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0008, false);             // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieSceneKeyTimeStruct(FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
public class FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
	#region Offsets
	private ExternalOffset<FMovieSceneSegmentIdentifier>       _offSegmentId                                                  = new ExternalOffset<FMovieSceneSegmentIdentifier>(0x0008, false); // 0x0008(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSegmentIdentifier                        SegmentId                                                      => _offSegmentId.GetValue();
	#endregion

	public FMovieSceneEvaluationFieldSegmentPtr(FMovieSceneSegmentIdentifier c_SegmentId) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSegmentId.SetValue(c_SegmentId);
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
public class FMovieSceneSequenceHierarchyNode : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneSequenceID>              _offParentID                                                   = new ExternalOffset<FMovieSceneSequenceID>(0x0000, false);    // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FMovieSceneSequenceID>>      _offChildren                                                   = new ExternalOffset<TArray<FMovieSceneSequenceID>>(0x0008, false); // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSequenceID                               ParentID                                                       => _offParentID.GetValue();
	public TArray<FMovieSceneSequenceID>                       Children                                                       => _offChildren.GetValue();
	#endregion

	public FMovieSceneSequenceHierarchyNode(FMovieSceneSequenceID c_ParentID, TArray<FMovieSceneSequenceID> c_Children) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParentID.SetValue(c_ParentID);
		_offChildren.SetValue(c_Children);
	}
}
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0050
public class FGeneratedMovieSceneKeyStruct : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGeneratedMovieSceneKeyStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
public class FMovieSceneEvaluationGroup : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneEvaluationGroupLUTIndex>> _offLUTIndices                                                 = new ExternalOffset<TArray<FMovieSceneEvaluationGroupLUTIndex>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FMovieSceneEvaluationFieldSegmentPtr>> _offSegmentPtrLUT                                              = new ExternalOffset<TArray<FMovieSceneEvaluationFieldSegmentPtr>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FMovieSceneEvaluationGroupLUTIndex>          LUTIndices                                                     => _offLUTIndices.GetValue();
	public TArray<FMovieSceneEvaluationFieldSegmentPtr>        SegmentPtrLUT                                                  => _offSegmentPtrLUT.GetValue();
	#endregion

	public FMovieSceneEvaluationGroup(TArray<FMovieSceneEvaluationGroupLUTIndex> c_LUTIndices, TArray<FMovieSceneEvaluationFieldSegmentPtr> c_SegmentPtrLUT) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLUTIndices.SetValue(c_LUTIndices);
		_offSegmentPtrLUT.SetValue(c_SegmentPtrLUT);
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
public class FMovieSceneSequenceHierarchy : ExternalClass
{
	#region Offsets
//	private TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> _offSubSequences                                               = new ExternalOffset<TMap<FMovieSceneSubSequenceData>>(0x0000, false); // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> _offHierarchy                                                  = new ExternalOffset<TMap<FMovieSceneSequenceHierarchyNode>>(0x0050, false); // 0x0050(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion

	public FMovieSceneSequenceHierarchy() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0010
public class FMovieSceneSequenceReplProperties : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFrameTime>                         _offLastKnownPosition                                          = new ExternalOffset<FFrameTime>(0x0000, false);               // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EMovieScenePlayerStatus>> _offLastKnownStatus                                            = new ExternalOffset<TEnumAsByte<EMovieScenePlayerStatus>>(0x0008, false); // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLastKnownNumLoops                                          = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameTime                                          LastKnownPosition                                              => _offLastKnownPosition.GetValue();
	public TEnumAsByte<EMovieScenePlayerStatus>                LastKnownStatus                                                => _offLastKnownStatus.GetValue();
	public int                                                 LastKnownNumLoops                                              => _offLastKnownNumLoops.GetValue();
	#endregion

	public FMovieSceneSequenceReplProperties(FFrameTime c_LastKnownPosition, TEnumAsByte<EMovieScenePlayerStatus> c_LastKnownStatus, int c_LastKnownNumLoops) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLastKnownPosition.SetValue(c_LastKnownPosition);
		_offLastKnownStatus.SetValue(c_LastKnownStatus);
		_offLastKnownNumLoops.SetValue(c_LastKnownNumLoops);
	}
}
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0030
public class FMovieSceneObjectPathChannelKeyValue : ExternalClass
{
	#region Offsets
	private ExternalOffset<UObject>                            _offHardPtr                                                    = new ExternalOffset<UObject>(0x0028, true);                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UObject                                             HardPtr                                                        => _offHardPtr.GetValue();
	#endregion

	public FMovieSceneObjectPathChannelKeyValue(UObject c_HardPtr) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHardPtr.SetValue(c_HardPtr);
	}
}
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
public class FMovieSceneTrackEvalOptions : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbCanEvaluateNearestSection                                 = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEvalNearestSection                                        = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEvaluateInPreroll                                         = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEvaluateInPostroll                                        = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEvaluateNearestSection                                    = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FMovieSceneTrackEvalOptions() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x00B8 (0x00C0 - 0x0008)
public class FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<UClass>                             _offPropertyClass                                              = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0010, false);     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneObjectPathChannelKeyValue>> _offValues                                                     = new ExternalOffset<TArray<FMovieSceneObjectPathChannelKeyValue>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneObjectPathChannelKeyValue> _offDefaultValue                                               = new ExternalOffset<FMovieSceneObjectPathChannelKeyValue>(0x0030, false); // 0x0030(0x0030) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UClass                                              PropertyClass                                                  => _offPropertyClass.GetValue();
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public TArray<FMovieSceneObjectPathChannelKeyValue>        Values                                                         => _offValues.GetValue();
	public FMovieSceneObjectPathChannelKeyValue                DefaultValue                                                   => _offDefaultValue.GetValue();
	#endregion

	public FMovieSceneObjectPathChannel(UClass c_PropertyClass, TArray<FFrameNumber> c_Times, TArray<FMovieSceneObjectPathChannelKeyValue> c_Values, FMovieSceneObjectPathChannelKeyValue c_DefaultValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyClass.SetValue(c_PropertyClass);
		_offTimes.SetValue(c_Times);
		_offValues.SetValue(c_Values);
		_offDefaultValue.SetValue(c_DefaultValue);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
public class FMovieSceneEvaluationKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneSequenceID>              _offSequenceID                                                 = new ExternalOffset<FMovieSceneSequenceID>(0x0000, false);    // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneTrackIdentifier>         _offTrackIdentifier                                            = new ExternalOffset<FMovieSceneTrackIdentifier>(0x0004, false); // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                               _offSectionIndex                                               = new ExternalOffset<uint>(0x0008);                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSequenceID                               SequenceID                                                     => _offSequenceID.GetValue();
	public FMovieSceneTrackIdentifier                          TrackIdentifier                                                => _offTrackIdentifier.GetValue();
	public uint                                                SectionIndex                                                   => _offSectionIndex.GetValue();
	#endregion

	public FMovieSceneEvaluationKey(FMovieSceneSequenceID c_SequenceID, FMovieSceneTrackIdentifier c_TrackIdentifier, uint c_SectionIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequenceID.SetValue(c_SequenceID);
		_offTrackIdentifier.SetValue(c_TrackIdentifier);
		_offSectionIndex.SetValue(c_SectionIndex);
	}
}
// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
public class FMovieSceneSegment : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneSegment() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
public class FMovieSceneOrderedEvaluationKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneEvaluationKey>           _offKey                                                        = new ExternalOffset<FMovieSceneEvaluationKey>(0x0000, false); // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                               _offEvaluationIndex                                            = new ExternalOffset<uint>(0x000C);                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneEvaluationKey                            Key                                                            => _offKey.GetValue();
	public uint                                                EvaluationIndex                                                => _offEvaluationIndex.GetValue();
	#endregion

	public FMovieSceneOrderedEvaluationKey(FMovieSceneEvaluationKey c_Key, uint c_EvaluationIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKey.SetValue(c_Key);
		_offEvaluationIndex.SetValue(c_EvaluationIndex);
	}
}
// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
public class FMovieScenePossessable : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FName>>                      _offTags                                                       = new ExternalOffset<TArray<FName>>(0x0000, false);            // 0x0000(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0010, false);                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UClass>                             _offPossessedObjectClass                                       = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                              _offParentGuid                                                 = new ExternalOffset<FGuid>(0x0038, false);                    // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FName>                                       Tags                                                           => _offTags.GetValue();
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public FString                                             Name                                                           => _offName.GetValue();
	public UClass                                              PossessedObjectClass                                           => _offPossessedObjectClass.GetValue();
	public FGuid                                               ParentGuid                                                     => _offParentGuid.GetValue();
	#endregion

	public FMovieScenePossessable(TArray<FName> c_Tags, FGuid c_Guid, FString c_Name, UClass c_PossessedObjectClass, FGuid c_ParentGuid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTags.SetValue(c_Tags);
		_offGuid.SetValue(c_Guid);
		_offName.SetValue(c_Name);
		_offPossessedObjectClass.SetValue(c_PossessedObjectClass);
		_offParentGuid.SetValue(c_ParentGuid);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0020
public class FMovieSceneEvaluationTrackSegments : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<int>>                        _offSegmentIdentifierToIndex                                   = new ExternalOffset<TArray<int>>(0x0000, false);              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneSegment>>         _offSortedSegments                                             = new ExternalOffset<TArray<FMovieSceneSegment>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<int>                                         SegmentIdentifierToIndex                                       => _offSegmentIdentifierToIndex.GetValue();
	public TArray<FMovieSceneSegment>                          SortedSegments                                                 => _offSortedSegments.GetValue();
	#endregion

	public FMovieSceneEvaluationTrackSegments(TArray<int> c_SegmentIdentifierToIndex, TArray<FMovieSceneSegment> c_SortedSegments) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSegmentIdentifierToIndex.SetValue(c_SegmentIdentifierToIndex);
		_offSortedSegments.SetValue(c_SortedSegments);
	}
}
// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
public class FMovieSceneSpawnable : ExternalClass
{
	#region Offsets
	private ExternalOffset<FTransform>                         _offSpawnTransform                                             = new ExternalOffset<FTransform>(0x0000, false);               // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offTags                                                       = new ExternalOffset<TArray<FName>>(0x0030, false);            // 0x0030(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbContinuouslyRespawn                                       = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0044, false);                    // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UObject>                            _offObjectTemplate                                             = new ExternalOffset<UObject>(0x0068, true);                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FGuid>>                      _offChildPossessables                                          = new ExternalOffset<TArray<FGuid>>(0x0070, false);            // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<ESpawnOwnership>                    _offOwnership                                                  = new ExternalOffset<ESpawnOwnership>(0x0080, false);          // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                              _offLevelName                                                  = new ExternalOffset<FName>(0x0084, false);                    // 0x0084(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTransform                                          SpawnTransform                                                 => _offSpawnTransform.GetValue();
	public TArray<FName>                                       Tags                                                           => _offTags.GetValue();
	public byte/*(bool)*/                                      bContinuouslyRespawn                                           => _offbContinuouslyRespawn.GetValue();
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public FString                                             Name                                                           => _offName.GetValue();
	public UObject                                             ObjectTemplate                                                 => _offObjectTemplate.GetValue();
	public TArray<FGuid>                                       ChildPossessables                                              => _offChildPossessables.GetValue();
	public ESpawnOwnership                                     Ownership                                                      => _offOwnership.GetValue();
	public FName                                               LevelName                                                      => _offLevelName.GetValue();
	#endregion

	public FMovieSceneSpawnable(FTransform c_SpawnTransform, TArray<FName> c_Tags, byte/*(bool)*/ c_bContinuouslyRespawn, FGuid c_Guid, FString c_Name, UObject c_ObjectTemplate, TArray<FGuid> c_ChildPossessables, ESpawnOwnership c_Ownership, FName c_LevelName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpawnTransform.SetValue(c_SpawnTransform);
		_offTags.SetValue(c_Tags);
		_offbContinuouslyRespawn.SetValue(c_bContinuouslyRespawn);
		_offGuid.SetValue(c_Guid);
		_offName.SetValue(c_Name);
		_offObjectTemplate.SetValue(c_ObjectTemplate);
		_offChildPossessables.SetValue(c_ChildPossessables);
		_offOwnership.SetValue(c_Ownership);
		_offLevelName.SetValue(c_LevelName);
	}
}
// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0028
public class FMovieScenePropertySectionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offPropertyName                                               = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offPropertyPath                                               = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offFunctionName                                               = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offNotifyFunctionName                                         = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               PropertyName                                                   => _offPropertyName.GetValue();
	public FString                                             PropertyPath                                                   => _offPropertyPath.GetValue();
	public FName                                               FunctionName                                                   => _offFunctionName.GetValue();
	public FName                                               NotifyFunctionName                                             => _offNotifyFunctionName.GetValue();
	#endregion

	public FMovieScenePropertySectionData(FName c_PropertyName, FString c_PropertyPath, FName c_FunctionName, FName c_NotifyFunctionName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyName.SetValue(c_PropertyName);
		_offPropertyPath.SetValue(c_PropertyPath);
		_offFunctionName.SetValue(c_FunctionName);
		_offNotifyFunctionName.SetValue(c_NotifyFunctionName);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0070
public class FMovieSceneEvaluationMetaData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneSequenceID>>      _offActiveSequences                                            = new ExternalOffset<TArray<FMovieSceneSequenceID>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FMovieSceneOrderedEvaluationKey>> _offActiveEntities                                             = new ExternalOffset<TArray<FMovieSceneOrderedEvaluationKey>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FMovieSceneSequenceID, uint32_t>       _offSubTemplateSerialNumbers                                   = new ExternalOffset<TMap<uint32_t>>(0x0020, false);           // 0x0020(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FMovieSceneSequenceID>                       ActiveSequences                                                => _offActiveSequences.GetValue();
	public TArray<FMovieSceneOrderedEvaluationKey>             ActiveEntities                                                 => _offActiveEntities.GetValue();
	#endregion

	public FMovieSceneEvaluationMetaData(TArray<FMovieSceneSequenceID> c_ActiveSequences, TArray<FMovieSceneOrderedEvaluationKey> c_ActiveEntities) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActiveSequences.SetValue(c_ActiveSequences);
		_offActiveEntities.SetValue(c_ActiveEntities);
	}
}
// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0060
public class FSectionEvaluationDataTree : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSectionEvaluationDataTree() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
public class FMovieSceneEvalTemplateBase : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneEvalTemplateBase() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0010 (0x0020 - 0x0010)
public class FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	#region Offsets
	private ExternalOffset<EMovieSceneCompletionMode>          _offCompletionMode                                             = new ExternalOffset<EMovieSceneCompletionMode>(0x0010, false); // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UMovieSceneSection>> _offSourceSectionPtr                                           = new ExternalOffset<TWeakObjectPtr<UMovieSceneSection>>(0x0014, false); // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public EMovieSceneCompletionMode                           CompletionMode                                                 => _offCompletionMode.GetValue();
	public TWeakObjectPtr<UMovieSceneSection>                  SourceSectionPtr                                               => _offSourceSectionPtr.GetValue();
	#endregion

	public FMovieSceneEvalTemplate(EMovieSceneCompletionMode c_CompletionMode, TWeakObjectPtr<UMovieSceneSection> c_SourceSectionPtr) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCompletionMode.SetValue(c_CompletionMode);
		_offSourceSectionPtr.SetValue(c_SourceSectionPtr);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
public class FMovieSceneEvaluationField : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneFrameRange>>      _offRanges                                                     = new ExternalOffset<TArray<FMovieSceneFrameRange>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneEvaluationGroup>> _offGroups                                                     = new ExternalOffset<TArray<FMovieSceneEvaluationGroup>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneEvaluationMetaData>> _offMetaData                                                   = new ExternalOffset<TArray<FMovieSceneEvaluationMetaData>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FMovieSceneFrameRange>                       Ranges                                                         => _offRanges.GetValue();
	public TArray<FMovieSceneEvaluationGroup>                  Groups                                                         => _offGroups.GetValue();
	public TArray<FMovieSceneEvaluationMetaData>               MetaData                                                       => _offMetaData.GetValue();
	#endregion

	public FMovieSceneEvaluationField(TArray<FMovieSceneFrameRange> c_Ranges, TArray<FMovieSceneEvaluationGroup> c_Groups, TArray<FMovieSceneEvaluationMetaData> c_MetaData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRanges.SetValue(c_Ranges);
		_offGroups.SetValue(c_Groups);
		_offMetaData.SetValue(c_MetaData);
	}
}
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
public class FMovieSceneTrackImplementationPtr : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneTrackImplementationPtr() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0004
public class FMovieSceneTrackDisplayOptions : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbShowVerticalFrames                                        = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FMovieSceneTrackDisplayOptions() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0028 (0x0048 - 0x0020)
public class FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieScenePropertySectionData>     _offPropertyData                                               = new ExternalOffset<FMovieScenePropertySectionData>(0x0020, false); // 0x0020(0x0028) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieScenePropertySectionData                      PropertyData                                                   => _offPropertyData.GetValue();
	#endregion

	public FMovieScenePropertySectionTemplate(FMovieScenePropertySectionData c_PropertyData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyData.SetValue(c_PropertyData);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
public class FMovieSceneEvaluationOperand : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offObjectBindingId                                            = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceID>              _offSequenceID                                                 = new ExternalOffset<FMovieSceneSequenceID>(0x0010, false);    // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                               ObjectBindingId                                                => _offObjectBindingId.GetValue();
	public FMovieSceneSequenceID                               SequenceID                                                     => _offSequenceID.GetValue();
	#endregion

	public FMovieSceneEvaluationOperand(FGuid c_ObjectBindingId, FMovieSceneSequenceID c_SequenceID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectBindingId.SetValue(c_ObjectBindingId);
		_offSequenceID.SetValue(c_SequenceID);
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x02F0
public class FMovieSceneEvaluationTemplate : ExternalClass
{
	#region Offsets
//	private TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> _offTracks                                                     = new ExternalOffset<TMap<FMovieSceneEvaluationTrack>>(0x0000, false); // 0x0000(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneEvaluationField>         _offEvaluationField                                            = new ExternalOffset<FMovieSceneEvaluationField>(0x00A0, false); // 0x00A0(0x0030) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneSequenceHierarchy>       _offHierarchy                                                  = new ExternalOffset<FMovieSceneSequenceHierarchy>(0x00D0, false); // 0x00D0(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offSequenceSignature                                          = new ExternalOffset<FGuid>(0x0170, false);                    // 0x0170(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneEvaluationTemplateSerialNumber> _offTemplateSerialNumber                                       = new ExternalOffset<FMovieSceneEvaluationTemplateSerialNumber>(0x0180, false); // 0x0180(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneTemplateGenerationLedger> _offTemplateLedger                                             = new ExternalOffset<FMovieSceneTemplateGenerationLedger>(0x0188, false); // 0x0188(0x00A8) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneTrackFieldData>          _offTrackFieldData                                             = new ExternalOffset<FMovieSceneTrackFieldData>(0x0230, false); // 0x0230(0x0060) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneSubSectionFieldData>     _offSubSectionFieldData                                        = new ExternalOffset<FMovieSceneSubSectionFieldData>(0x0290, false); // 0x0290(0x0060) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneEvaluationField                          EvaluationField                                                => _offEvaluationField.GetValue();
	public FMovieSceneSequenceHierarchy                        Hierarchy                                                      => _offHierarchy.GetValue();
	public FGuid                                               SequenceSignature                                              => _offSequenceSignature.GetValue();
	public FMovieSceneEvaluationTemplateSerialNumber           TemplateSerialNumber                                           => _offTemplateSerialNumber.GetValue();
	public FMovieSceneTemplateGenerationLedger                 TemplateLedger                                                 => _offTemplateLedger.GetValue();
	public FMovieSceneTrackFieldData                           TrackFieldData                                                 => _offTrackFieldData.GetValue();
	public FMovieSceneSubSectionFieldData                      SubSectionFieldData                                            => _offSubSectionFieldData.GetValue();
	#endregion

	public FMovieSceneEvaluationTemplate(FMovieSceneEvaluationField c_EvaluationField, FMovieSceneSequenceHierarchy c_Hierarchy, FGuid c_SequenceSignature, FMovieSceneEvaluationTemplateSerialNumber c_TemplateSerialNumber, FMovieSceneTemplateGenerationLedger c_TemplateLedger, FMovieSceneTrackFieldData c_TrackFieldData, FMovieSceneSubSectionFieldData c_SubSectionFieldData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEvaluationField.SetValue(c_EvaluationField);
		_offHierarchy.SetValue(c_Hierarchy);
		_offSequenceSignature.SetValue(c_SequenceSignature);
		_offTemplateSerialNumber.SetValue(c_TemplateSerialNumber);
		_offTemplateLedger.SetValue(c_TemplateLedger);
		_offTrackFieldData.SetValue(c_TrackFieldData);
		_offSubSectionFieldData.SetValue(c_SubSectionFieldData);
	}
}
// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
public class FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneTrackImplementation() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000 (0x0020 - 0x0020)
public class FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTestMovieSceneEvalTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x00F8
public class FMovieSceneEvaluationTrack : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offObjectBindingId                                            = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<ushort>                             _offEvaluationPriority                                         = new ExternalOffset<ushort>(0x0010);                          // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EEvaluationMethod>                  _offEvaluationMethod                                           = new ExternalOffset<EEvaluationMethod>(0x0012, false);        // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneEvaluationTrackSegments> _offSegments                                                   = new ExternalOffset<FMovieSceneEvaluationTrackSegments>(0x0018, false); // 0x0018(0x0020) (NativeAccessSpecifierPrivate)
	private ExternalOffset<UMovieSceneTrack>                   _offSourceTrack                                                = new ExternalOffset<UMovieSceneTrack>(0x0038, true);          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FSectionEvaluationDataTree>         _offEvaluationTree                                             = new ExternalOffset<FSectionEvaluationDataTree>(0x0040, false); // 0x0040(0x0060) (NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneEvalTemplatePtr>> _offChildTemplates                                             = new ExternalOffset<TArray<FMovieSceneEvalTemplatePtr>>(0x00A0, false); // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneTrackImplementationPtr>  _offTrackTemplate                                              = new ExternalOffset<FMovieSceneTrackImplementationPtr>(0x00B0, false); // 0x00B0(0x0038) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                              _offEvaluationGroup                                            = new ExternalOffset<FName>(0x00E8, false);                    // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbEvaluateInPreroll                                         = new ExternalOffset<char>(0x00F0, false);                     // 0x00F0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbEvaluateInPostroll                                        = new ExternalOffset<char>(0x00F0, false);                     // 0x00F0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                               ObjectBindingId                                                => _offObjectBindingId.GetValue();
	public ushort                                              EvaluationPriority                                             => _offEvaluationPriority.GetValue();
	public EEvaluationMethod                                   EvaluationMethod                                               => _offEvaluationMethod.GetValue();
	public FMovieSceneEvaluationTrackSegments                  Segments                                                       => _offSegments.GetValue();
	public UMovieSceneTrack                                    SourceTrack                                                    => _offSourceTrack.GetValue();
	public FSectionEvaluationDataTree                          EvaluationTree                                                 => _offEvaluationTree.GetValue();
	public TArray<FMovieSceneEvalTemplatePtr>                  ChildTemplates                                                 => _offChildTemplates.GetValue();
	public FMovieSceneTrackImplementationPtr                   TrackTemplate                                                  => _offTrackTemplate.GetValue();
	public FName                                               EvaluationGroup                                                => _offEvaluationGroup.GetValue();
	#endregion

	public FMovieSceneEvaluationTrack(FGuid c_ObjectBindingId, ushort c_EvaluationPriority, EEvaluationMethod c_EvaluationMethod, FMovieSceneEvaluationTrackSegments c_Segments, UMovieSceneTrack c_SourceTrack, FSectionEvaluationDataTree c_EvaluationTree, TArray<FMovieSceneEvalTemplatePtr> c_ChildTemplates, FMovieSceneTrackImplementationPtr c_TrackTemplate, FName c_EvaluationGroup) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectBindingId.SetValue(c_ObjectBindingId);
		_offEvaluationPriority.SetValue(c_EvaluationPriority);
		_offEvaluationMethod.SetValue(c_EvaluationMethod);
		_offSegments.SetValue(c_Segments);
		_offSourceTrack.SetValue(c_SourceTrack);
		_offEvaluationTree.SetValue(c_EvaluationTree);
		_offChildTemplates.SetValue(c_ChildTemplates);
		_offTrackTemplate.SetValue(c_TrackTemplate);
		_offEvaluationGroup.SetValue(c_EvaluationGroup);
	}
}
// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
public class FMovieSceneSubSectionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<UMovieSceneSubSection>> _offSection                                                    = new ExternalOffset<TWeakObjectPtr<UMovieSceneSubSection>>(0x0000, false); // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offObjectBindingId                                            = new ExternalOffset<FGuid>(0x0008, false);                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESectionEvaluationFlags>            _offFlags                                                      = new ExternalOffset<ESectionEvaluationFlags>(0x0018, false);  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TWeakObjectPtr<UMovieSceneSubSection>               Section                                                        => _offSection.GetValue();
	public FGuid                                               ObjectBindingId                                                => _offObjectBindingId.GetValue();
	public ESectionEvaluationFlags                             Flags                                                          => _offFlags.GetValue();
	#endregion

	public FMovieSceneSubSectionData(TWeakObjectPtr<UMovieSceneSubSection> c_Section, FGuid c_ObjectBindingId, ESectionEvaluationFlags c_Flags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSection.SetValue(c_Section);
		_offObjectBindingId.SetValue(c_ObjectBindingId);
		_offFlags.SetValue(c_Flags);
	}
}
// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
public class FMovieSceneObjectBindingID : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offSequenceID                                                 = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EMovieSceneObjectBindingSpace>      _offSpace                                                      = new ExternalOffset<EMovieSceneObjectBindingSpace>(0x0004, false); // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0008, false);                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 SequenceID                                                     => _offSequenceID.GetValue();
	public EMovieSceneObjectBindingSpace                       Space                                                          => _offSpace.GetValue();
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	#endregion

	public FMovieSceneObjectBindingID(int c_SequenceID, EMovieSceneObjectBindingSpace c_Space, FGuid c_Guid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequenceID.SetValue(c_SequenceID);
		_offSpace.SetValue(c_Space);
		_offGuid.SetValue(c_Guid);
	}
}
// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
public class FMovieSceneBinding : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offObjectGuid                                                 = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offBindingName                                                = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UMovieSceneTrack>>           _offTracks                                                     = new ExternalOffset<TArray<UMovieSceneTrack>>(0x0020, false); // 0x0020(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                               ObjectGuid                                                     => _offObjectGuid.GetValue();
	public FString                                             BindingName                                                    => _offBindingName.GetValue();
	public TArray<UMovieSceneTrack>                            Tracks                                                         => _offTracks.GetValue();
	#endregion

	public FMovieSceneBinding(FGuid c_ObjectGuid, FString c_BindingName, TArray<UMovieSceneTrack> c_Tracks) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectGuid.SetValue(c_ObjectGuid);
		_offBindingName.SetValue(c_BindingName);
		_offTracks.SetValue(c_Tracks);
	}
}
// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0018
public class FMovieSceneMarkedFrame : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offFrameNumber                                                = new ExternalOffset<FFrameNumber>(0x0000, false);             // 0x0000(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offLabel                                                      = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        FrameNumber                                                    => _offFrameNumber.GetValue();
	public FString                                             Label                                                          => _offLabel.GetValue();
	#endregion

	public FMovieSceneMarkedFrame(FFrameNumber c_FrameNumber, FString c_Label) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFrameNumber.SetValue(c_FrameNumber);
		_offLabel.SetValue(c_Label);
	}
}
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
public class FMovieSceneBindingOverrideData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectBindingID>         _offObjectBindingId                                            = new ExternalOffset<FMovieSceneObjectBindingID>(0x0000, false); // 0x0000(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UObject>>            _offObject                                                     = new ExternalOffset<TWeakObjectPtr<UObject>>(0x0018, false);  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOverridesDefault                                          = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectBindingID                          ObjectBindingId                                                => _offObjectBindingId.GetValue();
	public TWeakObjectPtr<UObject>                             Object                                                         => _offObject.GetValue();
	public byte/*(bool)*/                                      bOverridesDefault                                              => _offbOverridesDefault.GetValue();
	#endregion

	public FMovieSceneBindingOverrideData(FMovieSceneObjectBindingID c_ObjectBindingId, TWeakObjectPtr<UObject> c_Object, byte/*(bool)*/ c_bOverridesDefault) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectBindingId.SetValue(c_ObjectBindingId);
		_offObject.SetValue(c_Object);
		_offbOverridesDefault.SetValue(c_bOverridesDefault);
	}
}
// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
public class FMovieSceneTrackLabels : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FString>>                    _offStrings                                                    = new ExternalOffset<TArray<FString>>(0x0000, false);          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FString>                                     Strings                                                        => _offStrings.GetValue();
	#endregion

	public FMovieSceneTrackLabels(TArray<FString> c_Strings) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStrings.SetValue(c_Strings);
	}
}
// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
public class FMovieSceneExpansionState : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbExpanded                                                  = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bExpanded                                                      => _offbExpanded.GetValue();
	#endregion

	public FMovieSceneExpansionState(byte/*(bool)*/ c_bExpanded) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbExpanded.SetValue(c_bExpanded);
	}
}
// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00E0
public class FMovieSceneEditorData : ExternalClass
{
	#region Offsets
//	private TMap<struct FString, struct FMovieSceneExpansionState> _offExpansionStates                                            = new ExternalOffset<TMap<FMovieSceneExpansionState>>(0x0000, false); // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offViewStart                                                  = new ExternalOffset<double>(0x0050, false);                   // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offViewEnd                                                    = new ExternalOffset<double>(0x0058, false);                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offWorkStart                                                  = new ExternalOffset<double>(0x0060, false);                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offWorkEnd                                                    = new ExternalOffset<double>(0x0068, false);                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatRange>                        _offWorkingRange                                               = new ExternalOffset<FFloatRange>(0x00C0, false);              // 0x00C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatRange>                        _offViewRange                                                  = new ExternalOffset<FFloatRange>(0x00D0, false);              // 0x00D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public double                                              ViewStart                                                      => _offViewStart.GetValue();
	public double                                              ViewEnd                                                        => _offViewEnd.GetValue();
	public double                                              WorkStart                                                      => _offWorkStart.GetValue();
	public double                                              WorkEnd                                                        => _offWorkEnd.GetValue();
	public FFloatRange                                         WorkingRange                                                   => _offWorkingRange.GetValue();
	public FFloatRange                                         ViewRange                                                      => _offViewRange.GetValue();
	#endregion

	public FMovieSceneEditorData(double c_ViewStart, double c_ViewEnd, double c_WorkStart, double c_WorkEnd, FFloatRange c_WorkingRange, FFloatRange c_ViewRange) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offViewStart.SetValue(c_ViewStart);
		_offViewEnd.SetValue(c_ViewEnd);
		_offWorkStart.SetValue(c_WorkStart);
		_offWorkEnd.SetValue(c_WorkEnd);
		_offWorkingRange.SetValue(c_WorkingRange);
		_offViewRange.SetValue(c_ViewRange);
	}
}
// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
public class FMovieSceneTimecodeSource : ExternalClass
{
	#region Offsets
	private ExternalOffset<FTimecode>                          _offTimecode                                                   = new ExternalOffset<FTimecode>(0x0000, false);                // 0x0000(0x0014) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offDeltaFrame                                                 = new ExternalOffset<FFrameNumber>(0x0014, false);             // 0x0014(0x0004) (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTimecode                                           Timecode                                                       => _offTimecode.GetValue();
	public FFrameNumber                                        DeltaFrame                                                     => _offDeltaFrame.GetValue();
	#endregion

	public FMovieSceneTimecodeSource(FTimecode c_Timecode, FFrameNumber c_DeltaFrame) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimecode.SetValue(c_Timecode);
		_offDeltaFrame.SetValue(c_DeltaFrame);
	}
}

}