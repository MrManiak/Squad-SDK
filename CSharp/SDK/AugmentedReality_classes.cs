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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UARBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
public class UARTraceResultLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0008 (0x0030 - 0x0028)
public class UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0040 (0x0070 - 0x0030)
public class UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailed                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailed                                                       => _offOnFailed.GetValue();
	#endregion


}

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0040 (0x0070 - 0x0030)
public class UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailed                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailed                                                       => _offOnFailed.GetValue();
	#endregion


}

// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
public class UARLightEstimate : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0040 - 0x0028)
public class UARBasicLightEstimate : UARLightEstimate
{
	#region Offsets
	private ExternalOffset<float>                             _offAmbientIntensityLumens                                     = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offAmbientColorTemperatureKelvin                              = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FLinearColor>                      _offAmbientColor                                               = new ExternalOffset<FLinearColor>(0x0030, false);             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              AmbientIntensityLumens                                         => _offAmbientIntensityLumens.GetValue();
	public float                                              AmbientColorTemperatureKelvin                                  => _offAmbientColorTemperatureKelvin.GetValue();
	public FLinearColor                                       AmbientColor                                                   => _offAmbientColor.GetValue();
	#endregion


}

// Class AugmentedReality.AROriginActor
// 0x0010 (0x0248 - 0x0238)
public class AAROriginActor : AActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARPin
// 0x00B8 (0x00E0 - 0x0028)
public class UARPin : UObject
{
	#region Offsets
	private ExternalOffset<UARTrackedGeometry>                _offTrackedGeometry                                            = new ExternalOffset<UARTrackedGeometry>(0x0028, true);        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USceneComponent>                   _offPinnedComponent                                            = new ExternalOffset<USceneComponent>(0x0030, true);           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FTransform>                        _offLocalToTrackingTransform                                   = new ExternalOffset<FTransform>(0x0040, false);               // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FTransform>                        _offLocalToAlignedTrackingTransform                            = new ExternalOffset<FTransform>(0x0070, false);               // 0x0070(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<EARTrackingState>                  _offTrackingState                                              = new ExternalOffset<EARTrackingState>(0x00A0, false);         // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnARTrackingStateChanged                                   = new ExternalOffset<FScriptMulticastDelegate>(0x00C0, false); // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnARTransformUpdated                                       = new ExternalOffset<FScriptMulticastDelegate>(0x00D0, false); // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UARTrackedGeometry                                 TrackedGeometry                                                => _offTrackedGeometry.GetValue();
	public USceneComponent                                    PinnedComponent                                                => _offPinnedComponent.GetValue();
	public FTransform                                         LocalToTrackingTransform                                       => _offLocalToTrackingTransform.GetValue();
	public FTransform                                         LocalToAlignedTrackingTransform                                => _offLocalToAlignedTrackingTransform.GetValue();
	public EARTrackingState                                   TrackingState                                                  => _offTrackingState.GetValue();
	public FScriptMulticastDelegate                           OnARTrackingStateChanged                                       => _offOnARTrackingStateChanged.GetValue();
	public FScriptMulticastDelegate                           OnARTransformUpdated                                           => _offOnARTransformUpdated.GetValue();
	#endregion


}

// Class AugmentedReality.ARSessionConfig
// 0x0071 (0x00A1 - 0x0030)
public class UARSessionConfig : UDataAsset
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbGenerateMeshDataFromTrackedGeometry                       = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbGenerateCollisionForMeshData                              = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbGenerateNavMeshForMeshData                                = new ExternalOffset<byte/*(bool)*/>(0x0032);                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseMeshDataForOcclusion                                   = new ExternalOffset<byte/*(bool)*/>(0x0033);                  // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbRenderMeshDataInWireframe                                 = new ExternalOffset<byte/*(bool)*/>(0x0034);                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbTrackSceneObjects                                         = new ExternalOffset<byte/*(bool)*/>(0x0035);                  // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUsePersonSegmentationForOcclusion                         = new ExternalOffset<byte/*(bool)*/>(0x0036);                  // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EARWorldAlignment>                 _offWorldAlignment                                             = new ExternalOffset<EARWorldAlignment>(0x0037, false);        // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARSessionType>                    _offSessionType                                                = new ExternalOffset<EARSessionType>(0x0038, false);           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARPlaneDetectionMode>             _offPlaneDetectionMode                                         = new ExternalOffset<EARPlaneDetectionMode>(0x0039, false);    // 0x0039(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbHorizontalPlaneDetection                                  = new ExternalOffset<byte/*(bool)*/>(0x003A);                  // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbVerticalPlaneDetection                                    = new ExternalOffset<byte/*(bool)*/>(0x003B);                  // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableAutoFocus                                           = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARLightEstimationMode>            _offLightEstimationMode                                        = new ExternalOffset<EARLightEstimationMode>(0x003D, false);   // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARFrameSyncMode>                  _offFrameSyncMode                                              = new ExternalOffset<EARFrameSyncMode>(0x003E, false);         // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableAutomaticCameraOverlay                              = new ExternalOffset<byte/*(bool)*/>(0x003F);                  // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableAutomaticCameraTracking                             = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbResetCameraTracking                                       = new ExternalOffset<byte/*(bool)*/>(0x0041);                  // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbResetTrackedObjects                                       = new ExternalOffset<byte/*(bool)*/>(0x0042);                  // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UARCandidateImage>>         _offCandidateImages                                            = new ExternalOffset<TArray<UARCandidateImage>>(0x0048, false); // 0x0048(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxNumSimultaneousImagesTracked                            = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EAREnvironmentCaptureProbeType>    _offEnvironmentCaptureProbeType                                = new ExternalOffset<EAREnvironmentCaptureProbeType>(0x005C, false); // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<char>>                      _offWorldMapData                                               = new ExternalOffset<TArray<char>>(0x0060, false);             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UARCandidateObject>>        _offCandidateObjects                                           = new ExternalOffset<TArray<UARCandidateObject>>(0x0070, false); // 0x0070(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FARVideoFormat>                    _offDesiredVideoFormat                                         = new ExternalOffset<FARVideoFormat>(0x0080, false);           // 0x0080(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EARFaceTrackingDirection>          _offFaceTrackingDirection                                      = new ExternalOffset<EARFaceTrackingDirection>(0x008C, false); // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARFaceTrackingUpdate>             _offFaceTrackingUpdate                                         = new ExternalOffset<EARFaceTrackingUpdate>(0x008D, false);    // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<char>>                      _offSerializedARCandidateImageDatabase                         = new ExternalOffset<TArray<char>>(0x0090, false);             // 0x0090(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EARSessionTrackingFeature>         _offEnabledSessionTrackingFeature                              = new ExternalOffset<EARSessionTrackingFeature>(0x00A0, false); // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bGenerateMeshDataFromTrackedGeometry                           => _offbGenerateMeshDataFromTrackedGeometry.GetValue();
	public byte/*(bool)*/                                     bGenerateCollisionForMeshData                                  => _offbGenerateCollisionForMeshData.GetValue();
	public byte/*(bool)*/                                     bGenerateNavMeshForMeshData                                    => _offbGenerateNavMeshForMeshData.GetValue();
	public byte/*(bool)*/                                     bUseMeshDataForOcclusion                                       => _offbUseMeshDataForOcclusion.GetValue();
	public byte/*(bool)*/                                     bRenderMeshDataInWireframe                                     => _offbRenderMeshDataInWireframe.GetValue();
	public byte/*(bool)*/                                     bTrackSceneObjects                                             => _offbTrackSceneObjects.GetValue();
	public byte/*(bool)*/                                     bUsePersonSegmentationForOcclusion                             => _offbUsePersonSegmentationForOcclusion.GetValue();
	public EARWorldAlignment                                  WorldAlignment                                                 => _offWorldAlignment.GetValue();
	public EARSessionType                                     SessionType                                                    => _offSessionType.GetValue();
	public EARPlaneDetectionMode                              PlaneDetectionMode                                             => _offPlaneDetectionMode.GetValue();
	public byte/*(bool)*/                                     bHorizontalPlaneDetection                                      => _offbHorizontalPlaneDetection.GetValue();
	public byte/*(bool)*/                                     bVerticalPlaneDetection                                        => _offbVerticalPlaneDetection.GetValue();
	public byte/*(bool)*/                                     bEnableAutoFocus                                               => _offbEnableAutoFocus.GetValue();
	public EARLightEstimationMode                             LightEstimationMode                                            => _offLightEstimationMode.GetValue();
	public EARFrameSyncMode                                   FrameSyncMode                                                  => _offFrameSyncMode.GetValue();
	public byte/*(bool)*/                                     bEnableAutomaticCameraOverlay                                  => _offbEnableAutomaticCameraOverlay.GetValue();
	public byte/*(bool)*/                                     bEnableAutomaticCameraTracking                                 => _offbEnableAutomaticCameraTracking.GetValue();
	public byte/*(bool)*/                                     bResetCameraTracking                                           => _offbResetCameraTracking.GetValue();
	public byte/*(bool)*/                                     bResetTrackedObjects                                           => _offbResetTrackedObjects.GetValue();
	public TArray<UARCandidateImage>                          CandidateImages                                                => _offCandidateImages.GetValue();
	public int                                                MaxNumSimultaneousImagesTracked                                => _offMaxNumSimultaneousImagesTracked.GetValue();
	public EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType                                    => _offEnvironmentCaptureProbeType.GetValue();
	public TArray<char>                                       WorldMapData                                                   => _offWorldMapData.GetValue();
	public TArray<UARCandidateObject>                         CandidateObjects                                               => _offCandidateObjects.GetValue();
	public FARVideoFormat                                     DesiredVideoFormat                                             => _offDesiredVideoFormat.GetValue();
	public EARFaceTrackingDirection                           FaceTrackingDirection                                          => _offFaceTrackingDirection.GetValue();
	public EARFaceTrackingUpdate                              FaceTrackingUpdate                                             => _offFaceTrackingUpdate.GetValue();
	public TArray<char>                                       SerializedARCandidateImageDatabase                             => _offSerializedARCandidateImageDatabase.GetValue();
	public EARSessionTrackingFeature                          EnabledSessionTrackingFeature                                  => _offEnabledSessionTrackingFeature.GetValue();
	#endregion


}

// Class AugmentedReality.ARSharedWorldGameMode
// 0x000B (0x0394 - 0x0389)
public class AARSharedWorldGameMode : AGameMode
{
	#region Offsets
	private ExternalOffset<int>                               _offBufferSizePerChunk                                         = new ExternalOffset<int>(0x0390);                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                BufferSizePerChunk                                             => _offBufferSizePerChunk.GetValue();
	#endregion


}

// Class AugmentedReality.ARSharedWorldGameState
// 0x003C (0x02D8 - 0x029C)
public class AARSharedWorldGameState : AGameState
{
	#region Offsets
	private ExternalOffset<TArray<char>>                      _offPreviewImageData                                           = new ExternalOffset<TArray<char>>(0x02A8, false);             // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                      _offARWorldData                                                = new ExternalOffset<TArray<char>>(0x02B8, false);             // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPreviewImageBytesTotal                                     = new ExternalOffset<int>(0x02C8);                             // 0x02C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offARWorldBytesTotal                                          = new ExternalOffset<int>(0x02CC);                             // 0x02CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPreviewImageBytesDelivered                                 = new ExternalOffset<int>(0x02D0);                             // 0x02D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offARWorldBytesDelivered                                      = new ExternalOffset<int>(0x02D4);                             // 0x02D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<char>                                       PreviewImageData                                               => _offPreviewImageData.GetValue();
	public TArray<char>                                       ARWorldData                                                    => _offARWorldData.GetValue();
	public int                                                PreviewImageBytesTotal                                         => _offPreviewImageBytesTotal.GetValue();
	public int                                                ARWorldBytesTotal                                              => _offARWorldBytesTotal.GetValue();
	public int                                                PreviewImageBytesDelivered                                     => _offPreviewImageBytesDelivered.GetValue();
	public int                                                ARWorldBytesDelivered                                          => _offARWorldBytesDelivered.GetValue();
	#endregion


}

// Class AugmentedReality.ARSharedWorldPlayerController
// 0x000C (0x0598 - 0x058C)
public class AARSharedWorldPlayerController : APlayerController
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARSkyLight
// 0x000F (0x0260 - 0x0251)
public class AARSkyLight : ASkyLight
{
	#region Offsets
	private ExternalOffset<UAREnvironmentCaptureProbe>        _offCaptureProbe                                               = new ExternalOffset<UAREnvironmentCaptureProbe>(0x0258, true); // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UAREnvironmentCaptureProbe                         CaptureProbe                                                   => _offCaptureProbe.GetValue();
	#endregion


}

// Class AugmentedReality.ARTexture
// 0x0078 (0x00F0 - 0x0078)
public class UARTexture : UTexture
{
	#region Offsets
	private ExternalOffset<EARTextureType>                    _offTextureType                                                = new ExternalOffset<EARTextureType>(0x00D0, false);           // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTimestamp                                                  = new ExternalOffset<float>(0x00D4);                           // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExternalTextureGuid                                        = new ExternalOffset<FGuid>(0x00D8, false);                    // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offSize                                                       = new ExternalOffset<FVector2D>(0x00E8, false);                // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EARTextureType                                     TextureType                                                    => _offTextureType.GetValue();
	public float                                              Timestamp                                                      => _offTimestamp.GetValue();
	public FGuid                                              ExternalTextureGuid                                            => _offExternalTextureGuid.GetValue();
	public FVector2D                                          Size                                                           => _offSize.GetValue();
	#endregion


}

// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x00F0 - 0x00F0)
public class UARTextureCameraImage : UARTexture
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARTextureCameraDepth
// 0x0003 (0x00F3 - 0x00F0)
public class UARTextureCameraDepth : UARTexture
{
	#region Offsets
	private ExternalOffset<EARDepthQuality>                   _offDepthQuality                                               = new ExternalOffset<EARDepthQuality>(0x00F0, false);          // 0x00F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EARDepthAccuracy>                  _offDepthAccuracy                                              = new ExternalOffset<EARDepthAccuracy>(0x00F1, false);         // 0x00F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTemporallySmoothed                                      = new ExternalOffset<byte/*(bool)*/>(0x00F2);                  // 0x00F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EARDepthQuality                                    DepthQuality                                                   => _offDepthQuality.GetValue();
	public EARDepthAccuracy                                   DepthAccuracy                                                  => _offDepthAccuracy.GetValue();
	public byte/*(bool)*/                                     bIsTemporallySmoothed                                          => _offbIsTemporallySmoothed.GetValue();
	#endregion


}

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0078 (0x0148 - 0x00D0)
public class UAREnvironmentCaptureProbeTexture : UTextureCube
{
	#region Offsets
	private ExternalOffset<EARTextureType>                    _offTextureType                                                = new ExternalOffset<EARTextureType>(0x0128, false);           // 0x0128(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTimestamp                                                  = new ExternalOffset<float>(0x012C);                           // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExternalTextureGuid                                        = new ExternalOffset<FGuid>(0x0130, false);                    // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offSize                                                       = new ExternalOffset<FVector2D>(0x0140, false);                // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EARTextureType                                     TextureType                                                    => _offTextureType.GetValue();
	public float                                              Timestamp                                                      => _offTimestamp.GetValue();
	public FGuid                                              ExternalTextureGuid                                            => _offExternalTextureGuid.GetValue();
	public FVector2D                                          Size                                                           => _offSize.GetValue();
	#endregion


}

// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
public class UARTraceResultDummy : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARTrackedGeometry
// 0x00C0 (0x00E8 - 0x0028)
public class UARTrackedGeometry : UObject
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offUniqueID                                                   = new ExternalOffset<FGuid>(0x0028, false);                    // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                        _offLocalToTrackingTransform                                   = new ExternalOffset<FTransform>(0x0040, false);               // 0x0040(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FTransform>                        _offLocalToAlignedTrackingTransform                            = new ExternalOffset<FTransform>(0x0070, false);               // 0x0070(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EARTrackingState>                  _offTrackingState                                              = new ExternalOffset<EARTrackingState>(0x00A0, false);         // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMRMeshComponent>                  _offUnderlyingMesh                                             = new ExternalOffset<UMRMeshComponent>(0x00B0, true);          // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EARObjectClassification>           _offObjectClassification                                       = new ExternalOffset<EARObjectClassification>(0x00B8, false);  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offLastUpdateFrameNumber                                      = new ExternalOffset<int>(0x00D0);                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                             _offDebugName                                                  = new ExternalOffset<FName>(0x00E0, false);                    // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                              UniqueID                                                       => _offUniqueID.GetValue();
	public FTransform                                         LocalToTrackingTransform                                       => _offLocalToTrackingTransform.GetValue();
	public FTransform                                         LocalToAlignedTrackingTransform                                => _offLocalToAlignedTrackingTransform.GetValue();
	public EARTrackingState                                   TrackingState                                                  => _offTrackingState.GetValue();
	public UMRMeshComponent                                   UnderlyingMesh                                                 => _offUnderlyingMesh.GetValue();
	public EARObjectClassification                            ObjectClassification                                           => _offObjectClassification.GetValue();
	public int                                                LastUpdateFrameNumber                                          => _offLastUpdateFrameNumber.GetValue();
	public FName                                              DebugName                                                      => _offDebugName.GetValue();
	#endregion


}

// Class AugmentedReality.ARPlaneGeometry
// 0x0038 (0x0120 - 0x00E8)
public class UARPlaneGeometry : UARTrackedGeometry
{
	#region Offsets
	private ExternalOffset<FVector>                           _offCenter                                                     = new ExternalOffset<FVector>(0x00EC, false);                  // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offExtent                                                     = new ExternalOffset<FVector>(0x00F8, false);                  // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UARPlaneGeometry>                  _offSubsumedBy                                                 = new ExternalOffset<UARPlaneGeometry>(0x0118, true);          // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FVector                                            Center                                                         => _offCenter.GetValue();
	public FVector                                            Extent                                                         => _offExtent.GetValue();
	public UARPlaneGeometry                                   SubsumedBy                                                     => _offSubsumedBy.GetValue();
	#endregion


}

// Class AugmentedReality.ARTrackedPoint
// 0x0008 (0x00F0 - 0x00E8)
public class UARTrackedPoint : UARTrackedGeometry
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARTrackedImage
// 0x0010 (0x00F8 - 0x00E8)
public class UARTrackedImage : UARTrackedGeometry
{
	#region Offsets
	private ExternalOffset<UARCandidateImage>                 _offDetectedImage                                              = new ExternalOffset<UARCandidateImage>(0x00E8, true);         // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector2D>                         _offEstimatedSize                                              = new ExternalOffset<FVector2D>(0x00F0, false);                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UARCandidateImage                                  DetectedImage                                                  => _offDetectedImage.GetValue();
	public FVector2D                                          EstimatedSize                                                  => _offEstimatedSize.GetValue();
	#endregion


}

// Class AugmentedReality.ARFaceGeometry
// 0x0060 (0x0148 - 0x00E8)
public class UARFaceGeometry : UARTrackedGeometry
{
	#region Offsets
	private ExternalOffset<FVector>                           _offLookAtTarget                                               = new ExternalOffset<FVector>(0x00E8, false);                  // 0x00E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsTracked                                                 = new ExternalOffset<byte/*(bool)*/>(0x00F4);                  // 0x00F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<EARFaceBlendShape, float>                    _offBlendShapes                                                = new ExternalOffset<TMap<float>>(0x00F8, false);              // 0x00F8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FVector                                            LookAtTarget                                                   => _offLookAtTarget.GetValue();
	public byte/*(bool)*/                                     bIsTracked                                                     => _offbIsTracked.GetValue();
	#endregion


}

// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0018 (0x0100 - 0x00E8)
public class UAREnvironmentCaptureProbe : UARTrackedGeometry
{
	#region Offsets
	private ExternalOffset<UAREnvironmentCaptureProbeTexture> _offEnvironmentCaptureTexture                                  = new ExternalOffset<UAREnvironmentCaptureProbeTexture>(0x00F8, true); // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UAREnvironmentCaptureProbeTexture                  EnvironmentCaptureTexture                                      => _offEnvironmentCaptureTexture.GetValue();
	#endregion


}

// Class AugmentedReality.ARTrackedObject
// 0x0008 (0x00F0 - 0x00E8)
public class UARTrackedObject : UARTrackedGeometry
{
	#region Offsets
	private ExternalOffset<UARCandidateObject>                _offDetectedObject                                             = new ExternalOffset<UARCandidateObject>(0x00E8, true);        // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UARCandidateObject                                 DetectedObject                                                 => _offDetectedObject.GetValue();
	#endregion


}

// Class AugmentedReality.ARTrackedPose
// 0x0008 (0x00F0 - 0x00E8)
public class UARTrackedPose : UARTrackedGeometry
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0160 (0x0228 - 0x00C8)
public class UARTrackableNotifyComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedGeometry                                       = new ExternalOffset<FScriptMulticastDelegate>(0x00D8, false); // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedGeometry                                    = new ExternalOffset<FScriptMulticastDelegate>(0x00E8, false); // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedGeometry                                    = new ExternalOffset<FScriptMulticastDelegate>(0x00F8, false); // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedPlane                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedPlane                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0118, false); // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedPlane                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0128, false); // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedPoint                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0138, false); // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedPoint                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0148, false); // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedPoint                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0158, false); // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedImage                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0168, false); // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedImage                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0178, false); // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedImage                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0188, false); // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedFace                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0198, false); // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedFace                                        = new ExternalOffset<FScriptMulticastDelegate>(0x01A8, false); // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedFace                                        = new ExternalOffset<FScriptMulticastDelegate>(0x01B8, false); // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedEnvProbe                                       = new ExternalOffset<FScriptMulticastDelegate>(0x01C8, false); // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedEnvProbe                                    = new ExternalOffset<FScriptMulticastDelegate>(0x01D8, false); // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedEnvProbe                                    = new ExternalOffset<FScriptMulticastDelegate>(0x01E8, false); // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAddTrackedObject                                         = new ExternalOffset<FScriptMulticastDelegate>(0x01F8, false); // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateTrackedObject                                      = new ExternalOffset<FScriptMulticastDelegate>(0x0208, false); // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRemoveTrackedObject                                      = new ExternalOffset<FScriptMulticastDelegate>(0x0218, false); // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnAddTrackedGeometry                                           => _offOnAddTrackedGeometry.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedGeometry                                        => _offOnUpdateTrackedGeometry.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedGeometry                                        => _offOnRemoveTrackedGeometry.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedPlane                                              => _offOnAddTrackedPlane.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedPlane                                           => _offOnUpdateTrackedPlane.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedPlane                                           => _offOnRemoveTrackedPlane.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedPoint                                              => _offOnAddTrackedPoint.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedPoint                                           => _offOnUpdateTrackedPoint.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedPoint                                           => _offOnRemoveTrackedPoint.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedImage                                              => _offOnAddTrackedImage.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedImage                                           => _offOnUpdateTrackedImage.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedImage                                           => _offOnRemoveTrackedImage.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedFace                                               => _offOnAddTrackedFace.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedFace                                            => _offOnUpdateTrackedFace.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedFace                                            => _offOnRemoveTrackedFace.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedEnvProbe                                           => _offOnAddTrackedEnvProbe.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedEnvProbe                                        => _offOnUpdateTrackedEnvProbe.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedEnvProbe                                        => _offOnRemoveTrackedEnvProbe.GetValue();
	public FScriptMulticastDelegate                           OnAddTrackedObject                                             => _offOnAddTrackedObject.GetValue();
	public FScriptMulticastDelegate                           OnUpdateTrackedObject                                          => _offOnUpdateTrackedObject.GetValue();
	public FScriptMulticastDelegate                           OnRemoveTrackedObject                                          => _offOnRemoveTrackedObject.GetValue();
	#endregion


}

// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
public class UARTypesDummyClass : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AugmentedReality.ARCandidateImage
// 0x0021 (0x0051 - 0x0030)
public class UARCandidateImage : UDataAsset
{
	#region Offsets
	private ExternalOffset<UTexture2D>                        _offCandidateTexture                                           = new ExternalOffset<UTexture2D>(0x0030, true);                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offFriendlyName                                               = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offWidth                                                      = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offHeight                                                     = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EARCandidateImageOrientation>      _offOrientation                                                = new ExternalOffset<EARCandidateImageOrientation>(0x0050, false); // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UTexture2D                                         CandidateTexture                                               => _offCandidateTexture.GetValue();
	public FString                                            FriendlyName                                                   => _offFriendlyName.GetValue();
	public float                                              Width                                                          => _offWidth.GetValue();
	public float                                              Height                                                         => _offHeight.GetValue();
	public EARCandidateImageOrientation                       Orientation                                                    => _offOrientation.GetValue();
	#endregion


}

// Class AugmentedReality.ARCandidateObject
// 0x003C (0x006C - 0x0030)
public class UARCandidateObject : UDataAsset
{
	#region Offsets
	private ExternalOffset<TArray<char>>                      _offCandidateObjectData                                        = new ExternalOffset<TArray<char>>(0x0030, false);             // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offFriendlyName                                               = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FBox>                              _offBoundingBox                                                = new ExternalOffset<FBox>(0x0050, false);                     // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<char>                                       CandidateObjectData                                            => _offCandidateObjectData.GetValue();
	public FString                                            FriendlyName                                                   => _offFriendlyName.GetValue();
	public FBox                                               BoundingBox                                                    => _offBoundingBox.GetValue();
	#endregion


}


}