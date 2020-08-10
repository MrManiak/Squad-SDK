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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}


	static void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
	static void STATIC_StopARSession();
	static void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
	static void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	static void STATIC_RemovePin(class UARPin* PinToRemove);
	static class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);
	static class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	static void STATIC_PauseARSession();
	static TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	static TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	static bool STATIC_IsSessionTypeSupported(EARSessionType SessionType);
	static bool STATIC_IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
	static bool STATIC_IsARSupported();
	static EARWorldMappingState STATIC_GetWorldMappingStatus();
	static EARTrackingQualityReason STATIC_GetTrackingQualityReason();
	static EARTrackingQuality STATIC_GetTrackingQuality();
	static TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(EARSessionType SessionType);
	static class UARSessionConfig* STATIC_GetSessionConfig();
	static TArray<struct FVector> STATIC_GetPointCloud();
	static class UARTextureCameraImage* STATIC_GetPersonSegmentationImage();
	static class UARTextureCameraImage* STATIC_GetPersonSegmentationDepthImage();
	static class UARLightEstimate* STATIC_GetCurrentLightEstimate();
	static class UARTextureCameraImage* STATIC_GetCameraImage();
	static class UARTextureCameraDepth* STATIC_GetCameraDepth();
	static struct FARSessionStatus STATIC_GetARSessionStatus();
	static TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();
	static TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
	static TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
	static TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
	static TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
	static TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();
	static TArray<class UARPin*> STATIC_GetAllPins();
	static TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
	static void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	static void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	static class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);
	static bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};

// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}


	static class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
	static EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
	static struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
	static struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
	static float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}


};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
#define PADDING_03C7 - 0x0000 // Minimum to subtract -> (0028)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0028 PADDING_03C7, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0050(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03C7, struct FScriptMulticastDelegate,                                       OnFailed);                                                 // 0x0060(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}


	static class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0028)
#define PADDING_03C8 - 0x0000 // Minimum to subtract -> (0028)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0028 PADDING_03C8, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0050(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03C8, struct FScriptMulticastDelegate,                                       OnFailed);                                                 // 0x0060(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}


	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};

// Class AugmentedReality.ARLightEstimate
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARLightEstimate : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}


};

// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03CC - 0x0000 // Minimum to subtract -> (0000)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03CC, float,                                                                 AmbientIntensityLumens);                                   // 0x0028(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0004 PADDING_03CC, float,                                                                 AmbientColorTemperatureKelvin);                            // 0x002C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03CC, struct FLinearColor,                                                   AmbientColor);                                             // 0x0030(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};

// Class AugmentedReality.AROriginActor
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
class AAROriginActor : public AActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}


};

// Class AugmentedReality.ARPin
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03CE - 0x0000 // Minimum to subtract -> (0000)
class UARPin : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03CE, class UARTrackedGeometry*,                                             TrackedGeometry);                                          // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03CE, class USceneComponent*,                                                PinnedComponent);                                          // 0x0030(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03CE, struct FTransform,                                                     LocalToTrackingTransform);                                 // 0x0040(0x0030)  (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03CE, struct FTransform,                                                     LocalToAlignedTrackingTransform);                          // 0x0070(0x0030)  (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03CE, EARTrackingState,                                                      TrackingState);                                            // 0x00A0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03CE, struct FScriptMulticastDelegate,                                       OnARTrackingStateChanged);                                 // 0x00C0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03CE, struct FScriptMulticastDelegate,                                       OnARTransformUpdated);                                     // 0x00D0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}


	EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// Class AugmentedReality.ARSessionConfig
// 0x0071 (FullSize[0x00A1] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_03D1 - 0x0000 // Minimum to subtract -> (0000)
class UARSessionConfig : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03D1, bool,                                                                  bGenerateMeshDataFromTrackedGeometry);                     // 0x0030(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_03D1, bool,                                                                  bGenerateCollisionForMeshData);                            // 0x0031(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_03D1, bool,                                                                  bGenerateNavMeshForMeshData);                              // 0x0032(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0003 PADDING_03D1, bool,                                                                  bUseMeshDataForOcclusion);                                 // 0x0033(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_03D1, bool,                                                                  bRenderMeshDataInWireframe);                               // 0x0034(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0005 PADDING_03D1, bool,                                                                  bTrackSceneObjects);                                       // 0x0035(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0006 PADDING_03D1, bool,                                                                  bUsePersonSegmentationForOcclusion);                       // 0x0036(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0007 PADDING_03D1, EARWorldAlignment,                                                     WorldAlignment);                                           // 0x0037(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03D1, EARSessionType,                                                        SessionType);                                              // 0x0038(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0009 PADDING_03D1, EARPlaneDetectionMode,                                                 PlaneDetectionMode);                                       // 0x0039(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000A PADDING_03D1, bool,                                                                  bHorizontalPlaneDetection);                                // 0x003A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000B PADDING_03D1, bool,                                                                  bVerticalPlaneDetection);                                  // 0x003B(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000C PADDING_03D1, bool,                                                                  bEnableAutoFocus);                                         // 0x003C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000D PADDING_03D1, EARLightEstimationMode,                                                LightEstimationMode);                                      // 0x003D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000E PADDING_03D1, EARFrameSyncMode,                                                      FrameSyncMode);                                            // 0x003E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_03D1, bool,                                                                  bEnableAutomaticCameraOverlay);                            // 0x003F(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03D1, bool,                                                                  bEnableAutomaticCameraTracking);                           // 0x0040(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0011 PADDING_03D1, bool,                                                                  bResetCameraTracking);                                     // 0x0041(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0012 PADDING_03D1, bool,                                                                  bResetTrackedObjects);                                     // 0x0042(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03D1, TArray<class UARCandidateImage*>,                                      CandidateImages);                                          // 0x0048(0x0010)  (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03D1, int,                                                                   MaxNumSimultaneousImagesTracked);                          // 0x0058(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002C PADDING_03D1, EAREnvironmentCaptureProbeType,                                        EnvironmentCaptureProbeType);                              // 0x005C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03D1, TArray<unsigned char>,                                                 WorldMapData);                                             // 0x0060(0x0010)  (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03D1, TArray<class UARCandidateObject*>,                                     CandidateObjects);                                         // 0x0070(0x0010)  (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_03D1, struct FARVideoFormat,                                                 DesiredVideoFormat);                                       // 0x0080(0x000C)  (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005C PADDING_03D1, EARFaceTrackingDirection,                                              FaceTrackingDirection);                                    // 0x008C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005D PADDING_03D1, EARFaceTrackingUpdate,                                                 FaceTrackingUpdate);                                       // 0x008D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03D1, TArray<unsigned char>,                                                 SerializedARCandidateImageDatabase);                       // 0x0090(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03D1, EARSessionTrackingFeature,                                             EnabledSessionTrackingFeature);                            // 0x00A0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}


	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	EARWorldAlignment GetWorldAlignment();
	EARSessionType GetSessionType();
	EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	EARLightEstimationMode GetLightEstimationMode();
	EARFrameSyncMode GetFrameSyncMode();
	EARFaceTrackingUpdate GetFaceTrackingUpdate();
	EARFaceTrackingDirection GetFaceTrackingDirection();
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// Class AugmentedReality.ARSharedWorldGameMode
// 0x000B (FullSize[0x0394] - InheritedSize[0x0389])
// LastOffsetWithSize(0x0389)
#define PADDING_03D2 - 0x0000 // Minimum to subtract -> (0007)
class AARSharedWorldGameMode : public AGameMode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_03D2, int,                                                                   BufferSizePerChunk);                                       // 0x0390(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Class AugmentedReality.ARSharedWorldGameState
// 0x003C (FullSize[0x02D8] - InheritedSize[0x029C])
// LastOffsetWithSize(0x029C)
#define PADDING_03D3 - 0x0000 // Minimum to subtract -> (000C)
class AARSharedWorldGameState : public AGameState
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000C PADDING_03D3, TArray<unsigned char>,                                                 PreviewImageData);                                         // 0x02A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_03D3, TArray<unsigned char>,                                                 ARWorldData);                                              // 0x02B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_03D3, int,                                                                   PreviewImageBytesTotal);                                   // 0x02C8(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03D3, int,                                                                   ARWorldBytesTotal);                                        // 0x02CC(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_03D3, int,                                                                   PreviewImageBytesDelivered);                               // 0x02D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03D3, int,                                                                   ARWorldBytesDelivered);                                    // 0x02D4(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};

// Class AugmentedReality.ARSharedWorldPlayerController
// 0x000C (FullSize[0x0598] - InheritedSize[0x058C])
// LastOffsetWithSize(0x058C)
class AARSharedWorldPlayerController : public APlayerController
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}


	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};

// Class AugmentedReality.ARSkyLight
// 0x000F (FullSize[0x0260] - InheritedSize[0x0251])
// LastOffsetWithSize(0x0251)
#define PADDING_03D7 - 0x0000 // Minimum to subtract -> (0007)
class AARSkyLight : public ASkyLight
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_03D7, class UAREnvironmentCaptureProbe*,                                     CaptureProbe);                                             // 0x0258(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Class AugmentedReality.ARTexture
// 0x0078 (FullSize[0x00F0] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0078)
#define PADDING_03D8 - 0x0000 // Minimum to subtract -> (0058)
class UARTexture : public UTexture
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0058 PADDING_03D8, EARTextureType,                                                        TextureType);                                              // 0x00D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_03D8, float,                                                                 Timestamp);                                                // 0x00D4(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03D8, struct FGuid,                                                          ExternalTextureGuid);                                      // 0x00D8(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03D8, struct FVector2D,                                                      Size);                                                     // 0x00E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}


};

// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
// LastOffsetWithSize(0x00F0)
class UARTextureCameraImage : public UARTexture
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}


};

// Class AugmentedReality.ARTextureCameraDepth
// 0x0003 (FullSize[0x00F3] - InheritedSize[0x00F0])
// LastOffsetWithSize(0x00F0)
#define PADDING_03DC - 0x0000 // Minimum to subtract -> (0000)
class UARTextureCameraDepth : public UARTexture
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03DC, EARDepthQuality,                                                       DepthQuality);                                             // 0x00F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_03DC, EARDepthAccuracy,                                                      DepthAccuracy);                                            // 0x00F1(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_03DC, bool,                                                                  bIsTemporallySmoothed);                                    // 0x00F2(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}


};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
// LastOffsetWithSize(0x0078)
#define PADDING_03DE - 0x0000 // Minimum to subtract -> (00B0)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03DE, EARTextureType,                                                        TextureType);                                              // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_03DE, float,                                                                 Timestamp);                                                // 0x012C(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03DE, struct FGuid,                                                          ExternalTextureGuid);                                      // 0x0130(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_03DE, struct FVector2D,                                                      Size);                                                     // 0x0140(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}


};

// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARTraceResultDummy : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}


};

// Class AugmentedReality.ARTrackedGeometry
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03E3 - 0x0000 // Minimum to subtract -> (0000)
class UARTrackedGeometry : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03E3, struct FGuid,                                                          UniqueID);                                                 // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03E3, struct FTransform,                                                     LocalToTrackingTransform);                                 // 0x0040(0x0030)  (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03E3, struct FTransform,                                                     LocalToAlignedTrackingTransform);                          // 0x0070(0x0030)  (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03E3, EARTrackingState,                                                      TrackingState);                                            // 0x00A0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03E3, class UMRMeshComponent*,                                               UnderlyingMesh);                                           // 0x00B0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03E3, EARObjectClassification,                                               ObjectClassification);                                     // 0x00B8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03E3, int,                                                                   LastUpdateFrameNumber);                                    // 0x00D0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03E3, struct FName,                                                          DebugName);                                                // 0x00E0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}


	bool IsTracked();
	class UMRMeshComponent* GetUnderlyingMesh();
	EARTrackingState GetTrackingState();
	EARObjectClassification GetObjectClassification();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};

// Class AugmentedReality.ARPlaneGeometry
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_03E6 - 0x0000 // Minimum to subtract -> (0004)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_03E6, struct FVector,                                                        Center);                                                   // 0x00EC(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03E6, struct FVector,                                                        Extent);                                                   // 0x00F8(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03E6, class UARPlaneGeometry*,                                               SubsumedBy);                                               // 0x0118(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();
	EARPlaneOrientation GetOrientation();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// Class AugmentedReality.ARTrackedPoint
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}


};

// Class AugmentedReality.ARTrackedImage
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_03E8 - 0x0000 // Minimum to subtract -> (0000)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03E8, class UARCandidateImage*,                                              DetectedImage);                                            // 0x00E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03E8, struct FVector2D,                                                      EstimatedSize);                                            // 0x00F0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}


	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// Class AugmentedReality.ARFaceGeometry
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_03E9 - 0x0000 // Minimum to subtract -> (0000)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03E9, struct FVector,                                                        LookAtTarget);                                             // 0x00E8(0x000C)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_03E9, bool,                                                                  bIsTracked);                                               // 0x00F4(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03E9, TMap<EARFaceBlendShape COMMA float>,                                   BlendShapes);                                              // 0x00F8(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);
	TMap<EARFaceBlendShape, float> GetBlendShapes();
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_03EA - 0x0000 // Minimum to subtract -> (0010)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03EA, class UAREnvironmentCaptureProbeTexture*,                              EnvironmentCaptureTexture);                                // 0x00F8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}


	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Class AugmentedReality.ARTrackedObject
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
#define PADDING_03ED - 0x0000 // Minimum to subtract -> (0000)
class UARTrackedObject : public UARTrackedGeometry
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03ED, class UARCandidateObject*,                                             DetectedObject);                                           // 0x00E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}


	class UARCandidateObject* GetDetectedObject();
};

// Class AugmentedReality.ARTrackedPose
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x00E8)
class UARTrackedPose : public UARTrackedGeometry
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}


	struct FARPose3D GetTrackedPoseData();
};

// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0160 (FullSize[0x0228] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_03F0 - 0x0000 // Minimum to subtract -> (0010)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedGeometry);                                     // 0x00D8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedGeometry);                                  // 0x00E8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedGeometry);                                  // 0x00F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedPlane);                                        // 0x0108(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedPlane);                                     // 0x0118(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedPlane);                                     // 0x0128(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedPoint);                                        // 0x0138(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedPoint);                                     // 0x0148(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedPoint);                                     // 0x0158(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedImage);                                        // 0x0168(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedImage);                                     // 0x0178(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedImage);                                     // 0x0188(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedFace);                                         // 0x0198(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedFace);                                      // 0x01A8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedFace);                                      // 0x01B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedEnvProbe);                                     // 0x01C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0110 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedEnvProbe);                                  // 0x01D8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0120 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedEnvProbe);                                  // 0x01E8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0130 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnAddTrackedObject);                                       // 0x01F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0140 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnUpdateTrackedObject);                                    // 0x0208(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0150 PADDING_03F0, struct FScriptMulticastDelegate,                                       OnRemoveTrackedObject);                                    // 0x0218(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}


};

// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UARTypesDummyClass : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}


};

// Class AugmentedReality.ARCandidateImage
// 0x0021 (FullSize[0x0051] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_03F2 - 0x0000 // Minimum to subtract -> (0000)
class UARCandidateImage : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03F2, class UTexture2D*,                                                     CandidateTexture);                                         // 0x0030(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03F2, struct FString,                                                        FriendlyName);                                             // 0x0038(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03F2, float,                                                                 Width);                                                    // 0x0048(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x001C PADDING_03F2, float,                                                                 Height);                                                   // 0x004C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03F2, EARCandidateImageOrientation,                                          Orientation);                                              // 0x0050(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}


	float GetPhysicalWidth();
	float GetPhysicalHeight();
	EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// Class AugmentedReality.ARCandidateObject
// 0x003C (FullSize[0x006C] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_03F4 - 0x0000 // Minimum to subtract -> (0000)
class UARCandidateObject : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03F4, TArray<unsigned char>,                                                 CandidateObjectData);                                      // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03F4, struct FString,                                                        FriendlyName);                                             // 0x0040(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03F4, struct FBox,                                                           BoundingBox);                                              // 0x0050(0x001C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}


	void SetFriendlyName(const struct FString& NewName);
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(const struct FBox& InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
