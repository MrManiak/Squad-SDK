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

// Class CinematicCamera.CameraRig_Crane
// 0x0040 (0x0278 - 0x0238)
public class ACameraRig_Crane : AActor
{
	#region Offsets
	private ExternalOffset<float>                             _offCranePitch                                                 = new ExternalOffset<float>(0x0248);                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCraneYaw                                                   = new ExternalOffset<float>(0x024C);                           // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCraneArmLength                                             = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLockMountPitch                                            = new ExternalOffset<byte/*(bool)*/>(0x0254);                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLockMountYaw                                              = new ExternalOffset<byte/*(bool)*/>(0x0255);                  // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USceneComponent>                   _offTransformComponent                                         = new ExternalOffset<USceneComponent>(0x0258, true);           // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USceneComponent>                   _offCraneYawControl                                            = new ExternalOffset<USceneComponent>(0x0260, true);           // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USceneComponent>                   _offCranePitchControl                                          = new ExternalOffset<USceneComponent>(0x0268, true);           // 0x0268(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USceneComponent>                   _offCraneCameraMount                                           = new ExternalOffset<USceneComponent>(0x0270, true);           // 0x0270(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              CranePitch                                                     => _offCranePitch.GetValue();
	public float                                              CraneYaw                                                       => _offCraneYaw.GetValue();
	public float                                              CraneArmLength                                                 => _offCraneArmLength.GetValue();
	public byte/*(bool)*/                                     bLockMountPitch                                                => _offbLockMountPitch.GetValue();
	public byte/*(bool)*/                                     bLockMountYaw                                                  => _offbLockMountYaw.GetValue();
	public USceneComponent                                    TransformComponent                                             => _offTransformComponent.GetValue();
	public USceneComponent                                    CraneYawControl                                                => _offCraneYawControl.GetValue();
	public USceneComponent                                    CranePitchControl                                              => _offCranePitchControl.GetValue();
	public USceneComponent                                    CraneCameraMount                                               => _offCraneCameraMount.GetValue();
	#endregion


}

// Class CinematicCamera.CameraRig_Rail
// 0x0030 (0x0268 - 0x0238)
public class ACameraRig_Rail : AActor
{
	#region Offsets
	private ExternalOffset<float>                             _offCurrentPositionOnRail                                      = new ExternalOffset<float>(0x0248);                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLockOrientationToRail                                     = new ExternalOffset<byte/*(bool)*/>(0x024C);                  // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USceneComponent>                   _offTransformComponent                                         = new ExternalOffset<USceneComponent>(0x0250, true);           // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USplineComponent>                  _offRailSplineComponent                                        = new ExternalOffset<USplineComponent>(0x0258, true);          // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USceneComponent>                   _offRailCameraMount                                            = new ExternalOffset<USceneComponent>(0x0260, true);           // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              CurrentPositionOnRail                                          => _offCurrentPositionOnRail.GetValue();
	public byte/*(bool)*/                                     bLockOrientationToRail                                         => _offbLockOrientationToRail.GetValue();
	public USceneComponent                                    TransformComponent                                             => _offTransformComponent.GetValue();
	public USplineComponent                                   RailSplineComponent                                            => _offRailSplineComponent.GetValue();
	public USceneComponent                                    RailCameraMount                                                => _offRailCameraMount.GetValue();
	#endregion


}

// Class CinematicCamera.CineCameraActor
// 0x0050 (0x0800 - 0x07B0)
public class ACineCameraActor : ACameraActor
{
	#region Offsets
	private ExternalOffset<FCameraLookatTrackingSettings>     _offLookatTrackingSettings                                     = new ExternalOffset<FCameraLookatTrackingSettings>(0x07B0, false); // 0x07B0(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FCameraLookatTrackingSettings                      LookatTrackingSettings                                         => _offLookatTrackingSettings.GetValue();
	#endregion


}

// Class CinematicCamera.CineCameraComponent
// 0x00E0 (0x08A0 - 0x07C0)
public class UCineCameraComponent : UCameraComponent
{
	#region Offsets
	private ExternalOffset<FCameraFilmbackSettings>           _offFilmbackSettings                                           = new ExternalOffset<FCameraFilmbackSettings>(0x07C0, false);  // 0x07C0(0x000C) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FCameraLensSettings>               _offLensSettings                                               = new ExternalOffset<FCameraLensSettings>(0x07CC, false);      // 0x07CC(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FCameraFocusSettings>              _offFocusSettings                                              = new ExternalOffset<FCameraFocusSettings>(0x07E8, false);     // 0x07E8(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurrentFocalLength                                         = new ExternalOffset<float>(0x0840);                           // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurrentAperture                                            = new ExternalOffset<float>(0x0844);                           // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurrentFocusDistance                                       = new ExternalOffset<float>(0x0848);                           // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FNamedFilmbackPreset>>      _offFilmbackPresets                                            = new ExternalOffset<TArray<FNamedFilmbackPreset>>(0x0858, false); // 0x0858(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FNamedLensPreset>>          _offLensPresets                                                = new ExternalOffset<TArray<FNamedLensPreset>>(0x0868, false); // 0x0868(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offDefaultFilmbackPresetName                                  = new ExternalOffset<FString>(0x0878, false);                  // 0x0878(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offDefaultLensPresetName                                      = new ExternalOffset<FString>(0x0888, false);                  // 0x0888(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDefaultLensFocalLength                                     = new ExternalOffset<float>(0x0898);                           // 0x0898(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDefaultLensFStop                                           = new ExternalOffset<float>(0x089C);                           // 0x089C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FCameraFilmbackSettings                            FilmbackSettings                                               => _offFilmbackSettings.GetValue();
	public FCameraLensSettings                                LensSettings                                                   => _offLensSettings.GetValue();
	public FCameraFocusSettings                               FocusSettings                                                  => _offFocusSettings.GetValue();
	public float                                              CurrentFocalLength                                             => _offCurrentFocalLength.GetValue();
	public float                                              CurrentAperture                                                => _offCurrentAperture.GetValue();
	public float                                              CurrentFocusDistance                                           => _offCurrentFocusDistance.GetValue();
	public TArray<FNamedFilmbackPreset>                       FilmbackPresets                                                => _offFilmbackPresets.GetValue();
	public TArray<FNamedLensPreset>                           LensPresets                                                    => _offLensPresets.GetValue();
	public FString                                            DefaultFilmbackPresetName                                      => _offDefaultFilmbackPresetName.GetValue();
	public FString                                            DefaultLensPresetName                                          => _offDefaultLensPresetName.GetValue();
	public float                                              DefaultLensFocalLength                                         => _offDefaultLensFocalLength.GetValue();
	public float                                              DefaultLensFStop                                               => _offDefaultLensFStop.GetValue();
	#endregion


}


}