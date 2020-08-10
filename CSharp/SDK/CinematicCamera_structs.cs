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

// Enum CinematicCamera.ECameraFocusMethod
public enum ECameraFocusMethod : byte
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
public class FCameraFilmbackSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offSensorWidth                                                = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSensorHeight                                               = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSensorAspectRatio                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               SensorWidth                                                    => _offSensorWidth.GetValue();
	public float                                               SensorHeight                                                   => _offSensorHeight.GetValue();
	public float                                               SensorAspectRatio                                              => _offSensorAspectRatio.GetValue();
	#endregion

	public FCameraFilmbackSettings(float c_SensorWidth, float c_SensorHeight, float c_SensorAspectRatio) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSensorWidth.SetValue(c_SensorWidth);
		_offSensorHeight.SetValue(c_SensorHeight);
		_offSensorAspectRatio.SetValue(c_SensorAspectRatio);
	}
}
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0038
public class FCameraTrackingFocusSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offRelativeOffset                                             = new ExternalOffset<FVector>(0x0028, false);                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDrawDebugTrackingFocusPoint                               = new ExternalOffset<char>(0x0034, false);                     // 0x0034(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             RelativeOffset                                                 => _offRelativeOffset.GetValue();
	#endregion

	public FCameraTrackingFocusSettings(FVector c_RelativeOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRelativeOffset.SetValue(c_RelativeOffset);
	}
}
// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0018
public class FCameraLensSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMinFocalLength                                             = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxFocalLength                                             = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinFStop                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxFStop                                                   = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinimumFocusDistance                                       = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDiaphragmBladeCount                                        = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MinFocalLength                                                 => _offMinFocalLength.GetValue();
	public float                                               MaxFocalLength                                                 => _offMaxFocalLength.GetValue();
	public float                                               MinFStop                                                       => _offMinFStop.GetValue();
	public float                                               MaxFStop                                                       => _offMaxFStop.GetValue();
	public float                                               MinimumFocusDistance                                           => _offMinimumFocusDistance.GetValue();
	public int                                                 DiaphragmBladeCount                                            => _offDiaphragmBladeCount.GetValue();
	#endregion

	public FCameraLensSettings(float c_MinFocalLength, float c_MaxFocalLength, float c_MinFStop, float c_MaxFStop, float c_MinimumFocusDistance, int c_DiaphragmBladeCount) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinFocalLength.SetValue(c_MinFocalLength);
		_offMaxFocalLength.SetValue(c_MaxFocalLength);
		_offMinFStop.SetValue(c_MinFStop);
		_offMaxFStop.SetValue(c_MaxFStop);
		_offMinimumFocusDistance.SetValue(c_MinimumFocusDistance);
		_offDiaphragmBladeCount.SetValue(c_DiaphragmBladeCount);
	}
}
// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
public class FNamedLensPreset : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCameraLensSettings>                _offLensSettings                                               = new ExternalOffset<FCameraLensSettings>(0x0010, false);      // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Name                                                           => _offName.GetValue();
	public FCameraLensSettings                                 LensSettings                                                   => _offLensSettings.GetValue();
	#endregion

	public FNamedLensPreset(FString c_Name, FCameraLensSettings c_LensSettings) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offLensSettings.SetValue(c_LensSettings);
	}
}
// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
public class FNamedFilmbackPreset : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCameraFilmbackSettings>            _offFilmbackSettings                                           = new ExternalOffset<FCameraFilmbackSettings>(0x0010, false);  // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Name                                                           => _offName.GetValue();
	public FCameraFilmbackSettings                             FilmbackSettings                                               => _offFilmbackSettings.GetValue();
	#endregion

	public FNamedFilmbackPreset(FString c_Name, FCameraFilmbackSettings c_FilmbackSettings) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offFilmbackSettings.SetValue(c_FilmbackSettings);
	}
}
// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0058
public class FCameraFocusSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<ECameraFocusMethod>                 _offFocusMethod                                                = new ExternalOffset<ECameraFocusMethod>(0x0000, false);       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offManualFocusDistance                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCameraTrackingFocusSettings>       _offTrackingFocusSettings                                      = new ExternalOffset<FCameraTrackingFocusSettings>(0x0008, false); // 0x0008(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDrawDebugFocusPlane                                       = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offDebugFocusPlaneColor                                       = new ExternalOffset<FColor>(0x0044, false);                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbSmoothFocusChanges                                        = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFocusSmoothingInterpSpeed                                  = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFocusOffset                                                = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ECameraFocusMethod                                  FocusMethod                                                    => _offFocusMethod.GetValue();
	public float                                               ManualFocusDistance                                            => _offManualFocusDistance.GetValue();
	public FCameraTrackingFocusSettings                        TrackingFocusSettings                                          => _offTrackingFocusSettings.GetValue();
	public FColor                                              DebugFocusPlaneColor                                           => _offDebugFocusPlaneColor.GetValue();
	public float                                               FocusSmoothingInterpSpeed                                      => _offFocusSmoothingInterpSpeed.GetValue();
	public float                                               FocusOffset                                                    => _offFocusOffset.GetValue();
	#endregion

	public FCameraFocusSettings(ECameraFocusMethod c_FocusMethod, float c_ManualFocusDistance, FCameraTrackingFocusSettings c_TrackingFocusSettings, FColor c_DebugFocusPlaneColor, float c_FocusSmoothingInterpSpeed, float c_FocusOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFocusMethod.SetValue(c_FocusMethod);
		_offManualFocusDistance.SetValue(c_ManualFocusDistance);
		_offTrackingFocusSettings.SetValue(c_TrackingFocusSettings);
		_offDebugFocusPlaneColor.SetValue(c_DebugFocusPlaneColor);
		_offFocusSmoothingInterpSpeed.SetValue(c_FocusSmoothingInterpSpeed);
		_offFocusOffset.SetValue(c_FocusOffset);
	}
}
// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0050
public class FCameraLookatTrackingSettings : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbEnableLookAtTracking                                      = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDrawDebugLookAtTrackingPosition                           = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLookAtTrackingInterpSpeed                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offRelativeOffset                                             = new ExternalOffset<FVector>(0x0040, false);                  // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAllowRoll                                                 = new ExternalOffset<char>(0x004C, false);                     // 0x004C(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               LookAtTrackingInterpSpeed                                      => _offLookAtTrackingInterpSpeed.GetValue();
	public FVector                                             RelativeOffset                                                 => _offRelativeOffset.GetValue();
	#endregion

	public FCameraLookatTrackingSettings(float c_LookAtTrackingInterpSpeed, FVector c_RelativeOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLookAtTrackingInterpSpeed.SetValue(c_LookAtTrackingInterpSpeed);
		_offRelativeOffset.SetValue(c_RelativeOffset);
	}
}

}