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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00A3 (0x04A8 - 0x0405)
public class UMotionControllerComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<FName>                             _offMotionSource                                               = new ExternalOffset<FName>(0x0410, false);                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDisableLowLatencyUpdate                                   = new ExternalOffset<char>(0x0418, false);                     // 0x0418(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETrackingStatus>                   _offCurrentTrackingStatus                                      = new ExternalOffset<ETrackingStatus>(0x041C, false);          // 0x041C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisplayDeviceModel                                        = new ExternalOffset<byte/*(bool)*/>(0x041D);                  // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offDisplayModelSource                                         = new ExternalOffset<FName>(0x0420, false);                    // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UStaticMesh>                       _offCustomDisplayMesh                                          = new ExternalOffset<UStaticMesh>(0x0428, true);               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>        _offDisplayMeshMaterialOverrides                               = new ExternalOffset<TArray<UMaterialInterface>>(0x0430, false); // 0x0430(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UPrimitiveComponent>               _offDisplayComponent                                           = new ExternalOffset<UPrimitiveComponent>(0x04A0, true);       // 0x04A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                              MotionSource                                                   => _offMotionSource.GetValue();
	public ETrackingStatus                                    CurrentTrackingStatus                                          => _offCurrentTrackingStatus.GetValue();
	public byte/*(bool)*/                                     bDisplayDeviceModel                                            => _offbDisplayDeviceModel.GetValue();
	public FName                                              DisplayModelSource                                             => _offDisplayModelSource.GetValue();
	public UStaticMesh                                        CustomDisplayMesh                                              => _offCustomDisplayMesh.GetValue();
	public TArray<UMaterialInterface>                         DisplayMeshMaterialOverrides                                   => _offDisplayMeshMaterialOverrides.GetValue();
	public UPrimitiveComponent                                DisplayComponent                                               => _offDisplayComponent.GetValue();
	#endregion


}

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x00A0 (0x0168 - 0x00C8)
public class UVRNotificationsComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate      = new ExternalOffset<FScriptMulticastDelegate>(0x00D8, false); // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDTrackingInitializedDelegate                             = new ExternalOffset<FScriptMulticastDelegate>(0x00E8, false); // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDRecenteredDelegate                                      = new ExternalOffset<FScriptMulticastDelegate>(0x00F8, false); // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDLostDelegate                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDReconnectedDelegate                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0118, false); // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDConnectCanceledDelegate                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0128, false); // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDPutOnHeadDelegate                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0138, false); // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offHMDRemovedFromHeadDelegate                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0148, false); // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offVRControllerRecenteredDelegate                             = new ExternalOffset<FScriptMulticastDelegate>(0x0158, false); // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate          => _offHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDTrackingInitializedDelegate                                 => _offHMDTrackingInitializedDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDRecenteredDelegate                                          => _offHMDRecenteredDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDLostDelegate                                                => _offHMDLostDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDReconnectedDelegate                                         => _offHMDReconnectedDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDConnectCanceledDelegate                                     => _offHMDConnectCanceledDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDPutOnHeadDelegate                                           => _offHMDPutOnHeadDelegate.GetValue();
	public FScriptMulticastDelegate                           HMDRemovedFromHeadDelegate                                     => _offHMDRemovedFromHeadDelegate.GetValue();
	public FScriptMulticastDelegate                           VRControllerRecenteredDelegate                                 => _offVRControllerRecenteredDelegate.GetValue();
	#endregion


}

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0038 (0x0060 - 0x0028)
public class UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnModelLoaded                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnLoadFailure                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPrimitiveComponent>               _offSpawnedComponent                                           = new ExternalOffset<UPrimitiveComponent>(0x0058, true);       // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnModelLoaded                                                  => _offOnModelLoaded.GetValue();
	public FScriptMulticastDelegate                           OnLoadFailure                                                  => _offOnLoadFailure.GetValue();
	public UPrimitiveComponent                                SpawnedComponent                                               => _offSpawnedComponent.GetValue();
	#endregion


}


}