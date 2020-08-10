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

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
public enum EMovieSceneCaptureProtocolState : byte
{
	EMovieSceneCaptureProtocolState__Idle = 0,
	EMovieSceneCaptureProtocolState__Initialized = 1,
	EMovieSceneCaptureProtocolState__Capturing = 2,
	EMovieSceneCaptureProtocolState__Finalizing = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX = 4
}

// Enum MovieSceneCapture.EHDRCaptureGamut
public enum EHDRCaptureGamut : byte
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010
public class FCapturedPixels : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FCapturedPixels() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0050
public class FCapturedPixelsID : ExternalClass
{
	#region Offsets
//	private TMap<struct FName, struct FName>                   _offIdentifiers                                                = new ExternalOffset<TMap<FName>>(0x0000, false);              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FCapturedPixelsID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
public class FCompositionGraphCapturePasses : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FString>>                    _offValue                                                      = new ExternalOffset<TArray<FString>>(0x0000, false);          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FString>                                     Value                                                          => _offValue.GetValue();
	#endregion

	public FCompositionGraphCapturePasses(TArray<FString> c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010
public class FFrameMetrics : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offTotalElapsedTime                                           = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFrameDelta                                                 = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFrameNumber                                                = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumDroppedFrames                                           = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               TotalElapsedTime                                               => _offTotalElapsedTime.GetValue();
	public float                                               FrameDelta                                                     => _offFrameDelta.GetValue();
	public int                                                 FrameNumber                                                    => _offFrameNumber.GetValue();
	public int                                                 NumDroppedFrames                                               => _offNumDroppedFrames.GetValue();
	#endregion

	public FFrameMetrics(float c_TotalElapsedTime, float c_FrameDelta, int c_FrameNumber, int c_NumDroppedFrames) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTotalElapsedTime.SetValue(c_TotalElapsedTime);
		_offFrameDelta.SetValue(c_FrameDelta);
		_offFrameNumber.SetValue(c_FrameNumber);
		_offNumDroppedFrames.SetValue(c_NumDroppedFrames);
	}
}
// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
public class FCaptureResolution : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offResX                                                       = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offResY                                                       = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ResX                                                           => _offResX.GetValue();
	public int                                                 ResY                                                           => _offResY.GetValue();
	#endregion

	public FCaptureResolution(int c_ResX, int c_ResY) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offResX.SetValue(c_ResX);
		_offResY.SetValue(c_ResY);
	}
}
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0070
public class FMovieSceneCaptureSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<FDirectoryPath>                     _offOutputDirectory                                            = new ExternalOffset<FDirectoryPath>(0x0000, false);           // 0x0000(0x0010) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offGameModeOverride                                           = new ExternalOffset<UClass>(0x0010, true);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offOutputFormat                                               = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOverwriteExisting                                         = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseRelativeFrameNumbers                                   = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHandleFrames                                               = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offMovieExtension                                             = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offZeroPadFrameNumbers                                        = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameRate>                         _offFrameRate                                                  = new ExternalOffset<FFrameRate>(0x0044, false);               // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseCustomFrameRate                                        = new ExternalOffset<byte/*(bool)*/>(0x004C);                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameRate>                         _offCustomFrameRate                                            = new ExternalOffset<FFrameRate>(0x0050, false);               // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCaptureResolution>                 _offResolution                                                 = new ExternalOffset<FCaptureResolution>(0x0058, false);       // 0x0058(0x0008) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableTextureStreaming                                    = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCinematicEngineScalability                                = new ExternalOffset<byte/*(bool)*/>(0x0061);                  // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCinematicMode                                             = new ExternalOffset<byte/*(bool)*/>(0x0062);                  // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowMovement                                             = new ExternalOffset<byte/*(bool)*/>(0x0063);                  // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowTurning                                              = new ExternalOffset<byte/*(bool)*/>(0x0064);                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShowPlayer                                                = new ExternalOffset<byte/*(bool)*/>(0x0065);                  // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShowHUD                                                   = new ExternalOffset<byte/*(bool)*/>(0x0066);                  // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUsePathTracer                                             = new ExternalOffset<byte/*(bool)*/>(0x0067);                  // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPathTracerSamplePerPixel                                   = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDirectoryPath                                      OutputDirectory                                                => _offOutputDirectory.GetValue();
	public UClass                                              GameModeOverride                                               => _offGameModeOverride.GetValue();
	public FString                                             OutputFormat                                                   => _offOutputFormat.GetValue();
	public byte/*(bool)*/                                      bOverwriteExisting                                             => _offbOverwriteExisting.GetValue();
	public byte/*(bool)*/                                      bUseRelativeFrameNumbers                                       => _offbUseRelativeFrameNumbers.GetValue();
	public int                                                 HandleFrames                                                   => _offHandleFrames.GetValue();
	public FString                                             MovieExtension                                                 => _offMovieExtension.GetValue();
	public FFrameRate                                          FrameRate                                                      => _offFrameRate.GetValue();
	public byte/*(bool)*/                                      bUseCustomFrameRate                                            => _offbUseCustomFrameRate.GetValue();
	public FFrameRate                                          CustomFrameRate                                                => _offCustomFrameRate.GetValue();
	public FCaptureResolution                                  Resolution                                                     => _offResolution.GetValue();
	public byte/*(bool)*/                                      bEnableTextureStreaming                                        => _offbEnableTextureStreaming.GetValue();
	public byte/*(bool)*/                                      bCinematicEngineScalability                                    => _offbCinematicEngineScalability.GetValue();
	public byte/*(bool)*/                                      bCinematicMode                                                 => _offbCinematicMode.GetValue();
	public byte/*(bool)*/                                      bAllowMovement                                                 => _offbAllowMovement.GetValue();
	public byte/*(bool)*/                                      bAllowTurning                                                  => _offbAllowTurning.GetValue();
	public byte/*(bool)*/                                      bShowPlayer                                                    => _offbShowPlayer.GetValue();
	public byte/*(bool)*/                                      bShowHUD                                                       => _offbShowHUD.GetValue();
	public byte/*(bool)*/                                      bUsePathTracer                                                 => _offbUsePathTracer.GetValue();
	public int                                                 PathTracerSamplePerPixel                                       => _offPathTracerSamplePerPixel.GetValue();
	#endregion

	public FMovieSceneCaptureSettings(FDirectoryPath c_OutputDirectory, UClass c_GameModeOverride, FString c_OutputFormat, byte/*(bool)*/ c_bOverwriteExisting, byte/*(bool)*/ c_bUseRelativeFrameNumbers, int c_HandleFrames, FString c_MovieExtension, FFrameRate c_FrameRate, byte/*(bool)*/ c_bUseCustomFrameRate, FFrameRate c_CustomFrameRate, FCaptureResolution c_Resolution, byte/*(bool)*/ c_bEnableTextureStreaming, byte/*(bool)*/ c_bCinematicEngineScalability, byte/*(bool)*/ c_bCinematicMode, byte/*(bool)*/ c_bAllowMovement, byte/*(bool)*/ c_bAllowTurning, byte/*(bool)*/ c_bShowPlayer, byte/*(bool)*/ c_bShowHUD, byte/*(bool)*/ c_bUsePathTracer, int c_PathTracerSamplePerPixel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOutputDirectory.SetValue(c_OutputDirectory);
		_offGameModeOverride.SetValue(c_GameModeOverride);
		_offOutputFormat.SetValue(c_OutputFormat);
		_offbOverwriteExisting.SetValue(c_bOverwriteExisting);
		_offbUseRelativeFrameNumbers.SetValue(c_bUseRelativeFrameNumbers);
		_offHandleFrames.SetValue(c_HandleFrames);
		_offMovieExtension.SetValue(c_MovieExtension);
		_offFrameRate.SetValue(c_FrameRate);
		_offbUseCustomFrameRate.SetValue(c_bUseCustomFrameRate);
		_offCustomFrameRate.SetValue(c_CustomFrameRate);
		_offResolution.SetValue(c_Resolution);
		_offbEnableTextureStreaming.SetValue(c_bEnableTextureStreaming);
		_offbCinematicEngineScalability.SetValue(c_bCinematicEngineScalability);
		_offbCinematicMode.SetValue(c_bCinematicMode);
		_offbAllowMovement.SetValue(c_bAllowMovement);
		_offbAllowTurning.SetValue(c_bAllowTurning);
		_offbShowPlayer.SetValue(c_bShowPlayer);
		_offbShowHUD.SetValue(c_bShowHUD);
		_offbUsePathTracer.SetValue(c_bUsePathTracer);
		_offPathTracerSamplePerPixel.SetValue(c_PathTracerSamplePerPixel);
	}
}

}