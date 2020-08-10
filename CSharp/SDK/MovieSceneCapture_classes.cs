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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0029 (0x0051 - 0x0028)
public class UMovieSceneCaptureProtocolBase : UObject
{
	#region Offsets
	private ExternalOffset<EMovieSceneCaptureProtocolState>   _offState                                                      = new ExternalOffset<EMovieSceneCaptureProtocolState>(0x0050, false); // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EMovieSceneCaptureProtocolState                    State                                                          => _offState.GetValue();
	#endregion


}

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0007 (0x0058 - 0x0051)
public class UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0058 - 0x0058)
public class UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0010 (0x0068 - 0x0058)
public class UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
	#region Offsets
	private ExternalOffset<FString>                           _offFilename                                                   = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                            Filename                                                       => _offFilename.GetValue();
	#endregion


}

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0007 (0x0058 - 0x0051)
public class UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0048 (0x00A0 - 0x0058)
public class UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	#region Offsets
	private ExternalOffset<FCompositionGraphCapturePasses>    _offIncludeRenderPasses                                        = new ExternalOffset<FCompositionGraphCapturePasses>(0x0058, false); // 0x0058(0x0010) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCaptureFramesInHDR                                        = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offHDRCompressionQuality                                      = new ExternalOffset<int>(0x006C);                             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHDRCaptureGamut>>     _offCaptureGamut                                               = new ExternalOffset<TEnumAsByte<EHDRCaptureGamut>>(0x0070, false); // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offPostProcessingMaterial                                     = new ExternalOffset<FSoftObjectPath>(0x0078, false);          // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisableScreenPercentage                                   = new ExternalOffset<byte/*(bool)*/>(0x0090);                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offPostProcessingMaterialPtr                                  = new ExternalOffset<UMaterialInterface>(0x0098, true);        // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FCompositionGraphCapturePasses                     IncludeRenderPasses                                            => _offIncludeRenderPasses.GetValue();
	public byte/*(bool)*/                                     bCaptureFramesInHDR                                            => _offbCaptureFramesInHDR.GetValue();
	public int                                                HDRCompressionQuality                                          => _offHDRCompressionQuality.GetValue();
	public TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut                                                   => _offCaptureGamut.GetValue();
	public FSoftObjectPath                                    PostProcessingMaterial                                         => _offPostProcessingMaterial.GetValue();
	public byte/*(bool)*/                                     bDisableScreenPercentage                                       => _offbDisableScreenPercentage.GetValue();
	public UMaterialInterface                                 PostProcessingMaterialPtr                                      => _offPostProcessingMaterialPtr.GetValue();
	#endregion


}

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0000 (0x0058 - 0x0058)
public class UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0010 (0x0068 - 0x0058)
public class UImageSequenceProtocol : UFrameGrabberProtocol
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0074 (0x00DC - 0x0068)
public class UCompressedImageSequenceProtocol : UImageSequenceProtocol
{
	#region Offsets
	private ExternalOffset<int>                               _offCompressionQuality                                         = new ExternalOffset<int>(0x00D8);                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                CompressionQuality                                             => _offCompressionQuality.GetValue();
	#endregion


}

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0070 (0x00D8 - 0x0068)
public class UImageSequenceProtocol_BMP : UImageSequenceProtocol
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0004 (0x00E0 - 0x00DC)
public class UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0004 (0x00E0 - 0x00DC)
public class UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0072 (0x00DA - 0x0068)
public class UImageSequenceProtocol_EXR : UImageSequenceProtocol
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbCompressed                                                = new ExternalOffset<byte/*(bool)*/>(0x00D8);                  // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHDRCaptureGamut>>     _offCaptureGamut                                               = new ExternalOffset<TEnumAsByte<EHDRCaptureGamut>>(0x00D9, false); // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bCompressed                                                    => _offbCompressed.GetValue();
	public TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut                                                   => _offCaptureGamut.GetValue();
	#endregion


}

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneCaptureInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.MovieSceneCapture
// 0x00E8 (0x0110 - 0x0028)
public class UMovieSceneCapture : UObject
{
	#region Offsets
	private ExternalOffset<FSoftClassPath>                    _offImageCaptureProtocolType                                   = new ExternalOffset<FSoftClassPath>(0x0038, false);           // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftClassPath>                    _offAudioCaptureProtocolType                                   = new ExternalOffset<FSoftClassPath>(0x0050, false);           // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMovieSceneImageCaptureProtocolBase> _offImageCaptureProtocol                                       = new ExternalOffset<UMovieSceneImageCaptureProtocolBase>(0x0068, true); // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMovieSceneAudioCaptureProtocolBase> _offAudioCaptureProtocol                                       = new ExternalOffset<UMovieSceneAudioCaptureProtocolBase>(0x0070, true); // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneCaptureSettings>        _offSettings                                                   = new ExternalOffset<FMovieSceneCaptureSettings>(0x0078, false); // 0x0078(0x0070) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseSeparateProcess                                        = new ExternalOffset<byte/*(bool)*/>(0x00E8);                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCloseEditorWhenCaptureStarts                              = new ExternalOffset<byte/*(bool)*/>(0x00E9);                  // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offAdditionalCommandLineArguments                             = new ExternalOffset<FString>(0x00F0, false);                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offInheritedCommandLineArguments                              = new ExternalOffset<FString>(0x0100, false);                  // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSoftClassPath                                     ImageCaptureProtocolType                                       => _offImageCaptureProtocolType.GetValue();
	public FSoftClassPath                                     AudioCaptureProtocolType                                       => _offAudioCaptureProtocolType.GetValue();
	public UMovieSceneImageCaptureProtocolBase                ImageCaptureProtocol                                           => _offImageCaptureProtocol.GetValue();
	public UMovieSceneAudioCaptureProtocolBase                AudioCaptureProtocol                                           => _offAudioCaptureProtocol.GetValue();
	public FMovieSceneCaptureSettings                         Settings                                                       => _offSettings.GetValue();
	public byte/*(bool)*/                                     bUseSeparateProcess                                            => _offbUseSeparateProcess.GetValue();
	public byte/*(bool)*/                                     bCloseEditorWhenCaptureStarts                                  => _offbCloseEditorWhenCaptureStarts.GetValue();
	public FString                                            AdditionalCommandLineArguments                                 => _offAdditionalCommandLineArguments.GetValue();
	public FString                                            InheritedCommandLineArguments                                  => _offInheritedCommandLineArguments.GetValue();
	#endregion


}

// Class MovieSceneCapture.LevelCapture
// 0x0124 (0x0234 - 0x0110)
public class ULevelCapture : UMovieSceneCapture
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoStartCapture                                          = new ExternalOffset<byte/*(bool)*/>(0x0218);                  // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offPrerequisiteActorId                                        = new ExternalOffset<FGuid>(0x0224, false);                    // 0x0224(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bAutoStartCapture                                              => _offbAutoStartCapture.GetValue();
	public FGuid                                              PrerequisiteActorId                                            => _offPrerequisiteActorId.GetValue();
	#endregion


}

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneCaptureEnvironment : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0008 (0x0060 - 0x0058)
public class UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	#region Offsets
	private ExternalOffset<UWorld>                            _offWorld                                                      = new ExternalOffset<UWorld>(0x0058, true);                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UWorld                                             World                                                          => _offWorld.GetValue();
	#endregion


}

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0080 (0x00E0 - 0x0060)
public class UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
{
	#region Offsets
	private ExternalOffset<EDesiredImageFormat>               _offFormat                                                     = new ExternalOffset<EDesiredImageFormat>(0x00D8, false);      // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableCompression                                         = new ExternalOffset<byte/*(bool)*/>(0x00D9);                  // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCompressionQuality                                         = new ExternalOffset<int>(0x00DC);                             // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDesiredImageFormat                                Format                                                         => _offFormat.GetValue();
	public byte/*(bool)*/                                     bEnableCompression                                             => _offbEnableCompression.GetValue();
	public int                                                CompressionQuality                                             => _offCompressionQuality.GetValue();
	#endregion


}

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (0x0070 - 0x0058)
public class UVideoCaptureProtocol : UFrameGrabberProtocol
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbUseCompression                                            = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCompressionQuality                                         = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bUseCompression                                                => _offbUseCompression.GetValue();
	public float                                              CompressionQuality                                             => _offCompressionQuality.GetValue();
	#endregion


}


}