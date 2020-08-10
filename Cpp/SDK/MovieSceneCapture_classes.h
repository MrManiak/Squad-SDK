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
// Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0029 (FullSize[0x0051] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0445 - 0x0000 // Minimum to subtract -> (0028)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0028 PADDING_0445, EMovieSceneCaptureProtocolState,                                       State);                                                    // 0x0050(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}


	bool IsCapturing();
	EMovieSceneCaptureProtocolState GetState();
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0007 (FullSize[0x0058] - InheritedSize[0x0051])
// LastOffsetWithSize(0x0051)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}


};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
#define PADDING_0448 - 0x0000 // Minimum to subtract -> (0007)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0448, struct FString,                                                        Filename);                                                 // 0x0058(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0007 (FullSize[0x0058] - InheritedSize[0x0051])
// LastOffsetWithSize(0x0051)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}


};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
#define PADDING_044A - 0x0000 // Minimum to subtract -> (0007)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_044A, struct FCompositionGraphCapturePasses,                                 IncludeRenderPasses);                                      // 0x0058(0x0010)  (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_044A, bool,                                                                  bCaptureFramesInHDR);                                      // 0x0068(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001B PADDING_044A, int,                                                                   HDRCompressionQuality);                                    // 0x006C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_044A, TEnumAsByte<EHDRCaptureGamut>,                                         CaptureGamut);                                             // 0x0070(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0027 PADDING_044A, struct FSoftObjectPath,                                                PostProcessingMaterial);                                   // 0x0078(0x0018)  (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_044A, bool,                                                                  bDisableScreenPercentage);                                 // 0x0090(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_044A, class UMaterialInterface*,                                             PostProcessingMaterialPtr);                                // 0x0098(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0074 (FullSize[0x00DC] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0051)
#define PADDING_044D - 0x0000 // Minimum to subtract -> (0087)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0087 PADDING_044D, int,                                                                   CompressionQuality);                                       // 0x00D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}


};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0051)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}


};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0004 (FullSize[0x00E0] - InheritedSize[0x00DC])
// LastOffsetWithSize(0x00DC)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}


};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0004 (FullSize[0x00E0] - InheritedSize[0x00DC])
// LastOffsetWithSize(0x00DC)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}


};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0072 (FullSize[0x00DA] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0051)
#define PADDING_0451 - 0x0000 // Minimum to subtract -> (0087)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0087 PADDING_0451, bool,                                                                  bCompressed);                                              // 0x00D8(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0451, TEnumAsByte<EHDRCaptureGamut>,                                         CaptureGamut);                                             // 0x00D9(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}


};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}


};

// Class MovieSceneCapture.MovieSceneCapture
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0453 - 0x0000 // Minimum to subtract -> (0010)
class UMovieSceneCapture : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0453, struct FSoftClassPath,                                                 ImageCaptureProtocolType);                                 // 0x0038(0x0018)  (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0453, struct FSoftClassPath,                                                 AudioCaptureProtocolType);                                 // 0x0050(0x0018)  (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0453, class UMovieSceneImageCaptureProtocolBase*,                            ImageCaptureProtocol);                                     // 0x0068(0x0008)  (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0453, class UMovieSceneAudioCaptureProtocolBase*,                            AudioCaptureProtocol);                                     // 0x0070(0x0008)  (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0453, struct FMovieSceneCaptureSettings,                                     Settings);                                                 // 0x0078(0x0070)  (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0453, bool,                                                                  bUseSeparateProcess);                                      // 0x00E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_0453, bool,                                                                  bCloseEditorWhenCaptureStarts);                            // 0x00E9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0453, struct FString,                                                        AdditionalCommandLineArguments);                           // 0x00F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0453, struct FString,                                                        InheritedCommandLineArguments);                            // 0x0100(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}


	void SetImageCaptureProtocolType(class UClass* ProtocolType);
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// Class MovieSceneCapture.LevelCapture
// 0x0124 (FullSize[0x0234] - InheritedSize[0x0110])
// LastOffsetWithSize(0x0110)
#define PADDING_0454 - 0x0000 // Minimum to subtract -> (0108)
class ULevelCapture : public UMovieSceneCapture
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0108 PADDING_0454, bool,                                                                  bAutoStartCapture);                                        // 0x0218(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0454, struct FGuid,                                                          PrerequisiteActorId);                                      // 0x0224(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}


};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	static bool STATIC_IsCaptureInProgress();
	static int STATIC_GetCaptureFrameNumber();
	static float STATIC_GetCaptureElapsedTime();
	static class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
	static class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
#define PADDING_0456 - 0x0000 // Minimum to subtract -> (0007)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0456, class UWorld*,                                                         World);                                                    // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}


	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	struct FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
// LastOffsetWithSize(0x0060)
#define PADDING_0457 - 0x0000 // Minimum to subtract -> (0078)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0078 PADDING_0457, EDesiredImageFormat,                                                   Format);                                                   // 0x00D8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0079 PADDING_0457, bool,                                                                  bEnableCompression);                                       // 0x00D9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_0457, int,                                                                   CompressionQuality);                                       // 0x00DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}


	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
	struct FString GenerateFilenameForCurrentFrame();
	struct FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID);
};

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0051)
#define PADDING_0458 - 0x0000 // Minimum to subtract -> (0017)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0017 PADDING_0458, bool,                                                                  bUseCompression);                                          // 0x0068(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001B PADDING_0458, float,                                                                 CompressionQuality);                                       // 0x006C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
