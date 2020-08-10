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

// Enum CoreUObject.EMouseCursor
public enum EMouseCursor : byte
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14
}

// Enum CoreUObject.ELifetimeCondition
public enum ELifetimeCondition : byte
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Never                     = 14,
	COND_Max                       = 15
}

// Enum CoreUObject.EDataValidationResult
public enum EDataValidationResult : byte
{
	EDataValidationResult__Invalid = 0,
	EDataValidationResult__Valid   = 1,
	EDataValidationResult__NotValidated = 2,
	EDataValidationResult__EDataValidationResult_MAX = 3
}

// Enum CoreUObject.ERangeBoundTypes
public enum ERangeBoundTypes : byte
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3
}

// Enum CoreUObject.EInterpCurveMode
public enum EInterpCurveMode : byte
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
}

// Enum CoreUObject.EUnit
public enum EUnit : byte
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Multiplier              = 47,
	EUnit__Percentage              = 48,
	EUnit__Unspecified             = 49,
	EUnit__EUnit_MAX               = 50
}

// Enum CoreUObject.ELocalizedTextSourceCategory
public enum ELocalizedTextSourceCategory : byte
{
	ELocalizedTextSourceCategory__Game = 0,
	ELocalizedTextSourceCategory__Engine = 1,
	ELocalizedTextSourceCategory__Editor = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX = 3
}

// Enum CoreUObject.EAutomationEventType
public enum EAutomationEventType : byte
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3
}

// Enum CoreUObject.EPixelFormat
public enum EPixelFormat : byte
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR                = 64,
	PF_PLATFORM_HDR01              = 65,
	PF_PLATFORM_HDR02              = 66,
	PF_NV12                        = 67,
	PF_R32G32_UINT                 = 68,
	PF_MAX_VALUE                   = 69
}

// Enum CoreUObject.EAxis
public enum EAxis : byte
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4
}

// Enum CoreUObject.ELogTimes
public enum ELogTimes : byte
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__Local               = 3,
	ELogTimes__ELogTimes_MAX       = 4
}

// Enum CoreUObject.ESearchDir
public enum ESearchDir : byte
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2
}

// Enum CoreUObject.ESearchCase
public enum ESearchCase : byte
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.LinearColor
// 0x0010
public class FLinearColor : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offR                                                          = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offG                                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offB                                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offA                                                          = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               R                                                              => _offR.GetValue();
	public float                                               G                                                              => _offG.GetValue();
	public float                                               B                                                              => _offB.GetValue();
	public float                                               A                                                              => _offA.GetValue();
	#endregion

	public FLinearColor(float c_R, float c_G, float c_B, float c_A) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offR.SetValue(c_R);
		_offG.SetValue(c_G);
		_offB.SetValue(c_B);
		_offA.SetValue(c_A);
	}
}
// ScriptStruct CoreUObject.Vector4
// 0x0010
public class FVector4 : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offX                                                          = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offY                                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offZ                                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offW                                                          = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               X                                                              => _offX.GetValue();
	public float                                               Y                                                              => _offY.GetValue();
	public float                                               Z                                                              => _offZ.GetValue();
	public float                                               W                                                              => _offW.GetValue();
	#endregion

	public FVector4(float c_X, float c_Y, float c_Z, float c_W) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offZ.SetValue(c_Z);
		_offW.SetValue(c_W);
	}
}
// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
public class FFallbackStruct : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FFallbackStruct() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.Vector
// 0x000C
public class FVector : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offX                                                          = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offY                                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offZ                                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               X                                                              => _offX.GetValue();
	public float                                               Y                                                              => _offY.GetValue();
	public float                                               Z                                                              => _offZ.GetValue();
	#endregion

	public FVector(float c_X, float c_Y, float c_Z) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offZ.SetValue(c_Z);
	}
}
// ScriptStruct CoreUObject.Vector2D
// 0x0008
public class FVector2D : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offX                                                          = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offY                                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               X                                                              => _offX.GetValue();
	public float                                               Y                                                              => _offY.GetValue();
	#endregion

	public FVector2D(float c_X, float c_Y) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
	}
}
// ScriptStruct CoreUObject.Box
// 0x001C
public class FBox : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offMin                                                        = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offMax                                                        = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offIsValid                                                    = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Min                                                            => _offMin.GetValue();
	public FVector                                             Max                                                            => _offMax.GetValue();
	#endregion

	public FBox(FVector c_Min, FVector c_Max) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMin.SetValue(c_Min);
		_offMax.SetValue(c_Max);
	}
}
// ScriptStruct CoreUObject.Box2D
// 0x0014
public class FBox2D : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offMin                                                        = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offMax                                                        = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbIsValid                                                   = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           Min                                                            => _offMin.GetValue();
	public FVector2D                                           Max                                                            => _offMax.GetValue();
	#endregion

	public FBox2D(FVector2D c_Min, FVector2D c_Max) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMin.SetValue(c_Min);
		_offMax.SetValue(c_Max);
	}
}
// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
public class FInterpCurvePointVector2D : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offOutVal                                                     = new ExternalOffset<FVector2D>(0x0004, false);                // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offArriveTangent                                              = new ExternalOffset<FVector2D>(0x000C, false);                // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offLeaveTangent                                               = new ExternalOffset<FVector2D>(0x0014, false);                // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x001C, false); // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public FVector2D                                           OutVal                                                         => _offOutVal.GetValue();
	public FVector2D                                           ArriveTangent                                                  => _offArriveTangent.GetValue();
	public FVector2D                                           LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointVector2D(float c_InVal, FVector2D c_OutVal, FVector2D c_ArriveTangent, FVector2D c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
public class FBoxSphereBounds : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offOrigin                                                     = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offBoxExtent                                                  = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSphereRadius                                               = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Origin                                                         => _offOrigin.GetValue();
	public FVector                                             BoxExtent                                                      => _offBoxExtent.GetValue();
	public float                                               SphereRadius                                                   => _offSphereRadius.GetValue();
	#endregion

	public FBoxSphereBounds(FVector c_Origin, FVector c_BoxExtent, float c_SphereRadius) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOrigin.SetValue(c_Origin);
		_offBoxExtent.SetValue(c_BoxExtent);
		_offSphereRadius.SetValue(c_SphereRadius);
	}
}
// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
public class FInterpCurveVector2D : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointVector2D>>  _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointVector2D>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointVector2D>                   Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveVector2D(TArray<FInterpCurvePointVector2D> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.TwoVectors
// 0x0018
public class FTwoVectors : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offv1                                                         = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offv2                                                         = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             v1                                                             => _offv1.GetValue();
	public FVector                                             v2                                                             => _offv2.GetValue();
	#endregion

	public FTwoVectors(FVector c_v1, FVector c_v2) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offv1.SetValue(c_v1);
		_offv2.SetValue(c_v2);
	}
}
// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
public class FPlane : FVector
{
	#region Offsets
	private ExternalOffset<float>                              _offW                                                          = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               W                                                              => _offW.GetValue();
	#endregion

	public FPlane(float c_W) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offW.SetValue(c_W);
	}
}
// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
public class FFloatRangeBound : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ERangeBoundTypes>>      _offType                                                       = new ExternalOffset<TEnumAsByte<ERangeBoundTypes>>(0x0000, false); // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ERangeBoundTypes>                       Type                                                           => _offType.GetValue();
	public float                                               Value                                                          => _offValue.GetValue();
	#endregion

	public FFloatRangeBound(TEnumAsByte<ERangeBoundTypes> c_Type, float c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offType.SetValue(c_Type);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
public class FInterpCurvePointLinearColor : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offOutVal                                                     = new ExternalOffset<FLinearColor>(0x0004, false);             // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offArriveTangent                                              = new ExternalOffset<FLinearColor>(0x0014, false);             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offLeaveTangent                                               = new ExternalOffset<FLinearColor>(0x0024, false);             // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x0034, false); // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public FLinearColor                                        OutVal                                                         => _offOutVal.GetValue();
	public FLinearColor                                        ArriveTangent                                                  => _offArriveTangent.GetValue();
	public FLinearColor                                        LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointLinearColor(float c_InVal, FLinearColor c_OutVal, FLinearColor c_ArriveTangent, FLinearColor c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
public class FInterpCurvePointVector : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offOutVal                                                     = new ExternalOffset<FVector>(0x0004, false);                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offArriveTangent                                              = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLeaveTangent                                               = new ExternalOffset<FVector>(0x001C, false);                  // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x0028, false); // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public FVector                                             OutVal                                                         => _offOutVal.GetValue();
	public FVector                                             ArriveTangent                                                  => _offArriveTangent.GetValue();
	public FVector                                             LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointVector(float c_InVal, FVector c_OutVal, FVector c_ArriveTangent, FVector c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.OrientedBox
// 0x003C
public class FOrientedBox : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offCenter                                                     = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAxisX                                                      = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAxisY                                                      = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAxisZ                                                      = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentX                                                    = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentY                                                    = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExtentZ                                                    = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Center                                                         => _offCenter.GetValue();
	public FVector                                             AxisX                                                          => _offAxisX.GetValue();
	public FVector                                             AxisY                                                          => _offAxisY.GetValue();
	public FVector                                             AxisZ                                                          => _offAxisZ.GetValue();
	public float                                               ExtentX                                                        => _offExtentX.GetValue();
	public float                                               ExtentY                                                        => _offExtentY.GetValue();
	public float                                               ExtentZ                                                        => _offExtentZ.GetValue();
	#endregion

	public FOrientedBox(FVector c_Center, FVector c_AxisX, FVector c_AxisY, FVector c_AxisZ, float c_ExtentX, float c_ExtentY, float c_ExtentZ) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCenter.SetValue(c_Center);
		_offAxisX.SetValue(c_AxisX);
		_offAxisY.SetValue(c_AxisY);
		_offAxisZ.SetValue(c_AxisZ);
		_offExtentX.SetValue(c_ExtentX);
		_offExtentY.SetValue(c_ExtentY);
		_offExtentZ.SetValue(c_ExtentZ);
	}
}
// ScriptStruct CoreUObject.Rotator
// 0x000C
public class FRotator : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offPitch                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offYaw                                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRoll                                                       = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Pitch                                                          => _offPitch.GetValue();
	public float                                               Yaw                                                            => _offYaw.GetValue();
	public float                                               Roll                                                           => _offRoll.GetValue();
	#endregion

	public FRotator(float c_Pitch, float c_Yaw, float c_Roll) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPitch.SetValue(c_Pitch);
		_offYaw.SetValue(c_Yaw);
		_offRoll.SetValue(c_Roll);
	}
}
// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
public class FInterpCurveLinearColor : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointLinearColor>> _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointLinearColor>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointLinearColor>                Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveLinearColor(TArray<FInterpCurvePointLinearColor> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.Quat
// 0x0010
public class FQuat : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offX                                                          = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offY                                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offZ                                                          = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offW                                                          = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               X                                                              => _offX.GetValue();
	public float                                               Y                                                              => _offY.GetValue();
	public float                                               Z                                                              => _offZ.GetValue();
	public float                                               W                                                              => _offW.GetValue();
	#endregion

	public FQuat(float c_X, float c_Y, float c_Z, float c_W) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offZ.SetValue(c_Z);
		_offW.SetValue(c_W);
	}
}
// ScriptStruct CoreUObject.JoinabilitySettings
// 0x0014
public class FJoinabilitySettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offSessionName                                                = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPublicSearchable                                          = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowInvites                                              = new ExternalOffset<byte/*(bool)*/>(0x0009);                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbJoinViaPresence                                           = new ExternalOffset<byte/*(bool)*/>(0x000A);                  // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbJoinViaPresenceFriendsOnly                                = new ExternalOffset<byte/*(bool)*/>(0x000B);                  // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxPlayers                                                 = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxPartySize                                               = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               SessionName                                                    => _offSessionName.GetValue();
	public byte/*(bool)*/                                      bPublicSearchable                                              => _offbPublicSearchable.GetValue();
	public byte/*(bool)*/                                      bAllowInvites                                                  => _offbAllowInvites.GetValue();
	public byte/*(bool)*/                                      bJoinViaPresence                                               => _offbJoinViaPresence.GetValue();
	public byte/*(bool)*/                                      bJoinViaPresenceFriendsOnly                                    => _offbJoinViaPresenceFriendsOnly.GetValue();
	public int                                                 MaxPlayers                                                     => _offMaxPlayers.GetValue();
	public int                                                 MaxPartySize                                                   => _offMaxPartySize.GetValue();
	#endregion

	public FJoinabilitySettings(FName c_SessionName, byte/*(bool)*/ c_bPublicSearchable, byte/*(bool)*/ c_bAllowInvites, byte/*(bool)*/ c_bJoinViaPresence, byte/*(bool)*/ c_bJoinViaPresenceFriendsOnly, int c_MaxPlayers, int c_MaxPartySize) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSessionName.SetValue(c_SessionName);
		_offbPublicSearchable.SetValue(c_bPublicSearchable);
		_offbAllowInvites.SetValue(c_bAllowInvites);
		_offbJoinViaPresence.SetValue(c_bJoinViaPresence);
		_offbJoinViaPresenceFriendsOnly.SetValue(c_bJoinViaPresenceFriendsOnly);
		_offMaxPlayers.SetValue(c_MaxPlayers);
		_offMaxPartySize.SetValue(c_MaxPartySize);
	}
}
// ScriptStruct CoreUObject.Transform
// 0x0030
public class FTransform : ExternalClass
{
	#region Offsets
	private ExternalOffset<FQuat>                              _offRotation                                                   = new ExternalOffset<FQuat>(0x0000, false);                    // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offTranslation                                                = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale3D                                                    = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FQuat                                               Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Translation                                                    => _offTranslation.GetValue();
	public FVector                                             Scale3D                                                        => _offScale3D.GetValue();
	#endregion

	public FTransform(FQuat c_Rotation, FVector c_Translation, FVector c_Scale3D) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRotation.SetValue(c_Rotation);
		_offTranslation.SetValue(c_Translation);
		_offScale3D.SetValue(c_Scale3D);
	}
}
// ScriptStruct CoreUObject.UniqueNetIdWrapper
// 0x0001
public class FUniqueNetIdWrapper : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FUniqueNetIdWrapper() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.Matrix
// 0x0040
public class FMatrix : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPlane>                             _offXPlane                                                     = new ExternalOffset<FPlane>(0x0000, false);                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPlane>                             _offYPlane                                                     = new ExternalOffset<FPlane>(0x0010, false);                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPlane>                             _offZPlane                                                     = new ExternalOffset<FPlane>(0x0020, false);                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPlane>                             _offWPlane                                                     = new ExternalOffset<FPlane>(0x0030, false);                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPlane                                              XPlane                                                         => _offXPlane.GetValue();
	public FPlane                                              YPlane                                                         => _offYPlane.GetValue();
	public FPlane                                              ZPlane                                                         => _offZPlane.GetValue();
	public FPlane                                              WPlane                                                         => _offWPlane.GetValue();
	#endregion

	public FMatrix(FPlane c_XPlane, FPlane c_YPlane, FPlane c_ZPlane, FPlane c_WPlane) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offXPlane.SetValue(c_XPlane);
		_offYPlane.SetValue(c_YPlane);
		_offZPlane.SetValue(c_ZPlane);
		_offWPlane.SetValue(c_WPlane);
	}
}
// ScriptStruct CoreUObject.PackedNormal
// 0x0004
public class FPackedNormal : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offX                                                          = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offY                                                          = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offZ                                                          = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offW                                                          = new ExternalOffset<char>(0x0003, false);                     // 0x0003(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FPackedNormal() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.Guid
// 0x0010
public class FGuid : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offA                                                          = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offB                                                          = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offC                                                          = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offD                                                          = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 A                                                              => _offA.GetValue();
	public int                                                 B                                                              => _offB.GetValue();
	public int                                                 C                                                              => _offC.GetValue();
	public int                                                 D                                                              => _offD.GetValue();
	#endregion

	public FGuid(int c_A, int c_B, int c_C, int c_D) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offA.SetValue(c_A);
		_offB.SetValue(c_B);
		_offC.SetValue(c_C);
		_offD.SetValue(c_D);
	}
}
// ScriptStruct CoreUObject.RandomStream
// 0x0008
public class FRandomStream : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offInitialSeed                                                = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSeed                                                       = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 InitialSeed                                                    => _offInitialSeed.GetValue();
	public int                                                 Seed                                                           => _offSeed.GetValue();
	#endregion

	public FRandomStream(int c_InitialSeed, int c_Seed) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInitialSeed.SetValue(c_InitialSeed);
		_offSeed.SetValue(c_Seed);
	}
}
// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
public class FInterpCurveVector : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointVector>>    _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointVector>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointVector>                     Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveVector(TArray<FInterpCurvePointVector> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.FloatRange
// 0x0010
public class FFloatRange : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFloatRangeBound>                   _offLowerBound                                                 = new ExternalOffset<FFloatRangeBound>(0x0000, false);         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatRangeBound>                   _offUpperBound                                                 = new ExternalOffset<FFloatRangeBound>(0x0008, false);         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFloatRangeBound                                    LowerBound                                                     => _offLowerBound.GetValue();
	public FFloatRangeBound                                    UpperBound                                                     => _offUpperBound.GetValue();
	#endregion

	public FFloatRange(FFloatRangeBound c_LowerBound, FFloatRangeBound c_UpperBound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLowerBound.SetValue(c_LowerBound);
		_offUpperBound.SetValue(c_UpperBound);
	}
}
// ScriptStruct CoreUObject.DateTime
// 0x0008
public class FDateTime : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FDateTime() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.PackedRGB10A2N
// 0x0004
public class FPackedRGB10A2N : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offPacked                                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Packed                                                         => _offPacked.GetValue();
	#endregion

	public FPackedRGB10A2N(int c_Packed) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPacked.SetValue(c_Packed);
	}
}
// ScriptStruct CoreUObject.FrameNumber
// 0x0004
public class FFrameNumber : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offValue                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Value                                                          => _offValue.GetValue();
	#endregion

	public FFrameNumber(int c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
public class FInterpCurvePointFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOutVal                                                     = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offArriveTangent                                              = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLeaveTangent                                               = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x0010, false); // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public float                                               OutVal                                                         => _offOutVal.GetValue();
	public float                                               ArriveTangent                                                  => _offArriveTangent.GetValue();
	public float                                               LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointFloat(float c_InVal, float c_OutVal, float c_ArriveTangent, float c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
public class FInt32RangeBound : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ERangeBoundTypes>>      _offType                                                       = new ExternalOffset<TEnumAsByte<ERangeBoundTypes>>(0x0000, false); // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offValue                                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ERangeBoundTypes>                       Type                                                           => _offType.GetValue();
	public int                                                 Value                                                          => _offValue.GetValue();
	#endregion

	public FInt32RangeBound(TEnumAsByte<ERangeBoundTypes> c_Type, int c_Value) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offType.SetValue(c_Type);
		_offValue.SetValue(c_Value);
	}
}
// ScriptStruct CoreUObject.FrameRate
// 0x0008
public class FFrameRate : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offNumerator                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDenominator                                                = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Numerator                                                      => _offNumerator.GetValue();
	public int                                                 Denominator                                                    => _offDenominator.GetValue();
	#endregion

	public FFrameRate(int c_Numerator, int c_Denominator) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumerator.SetValue(c_Numerator);
		_offDenominator.SetValue(c_Denominator);
	}
}
// ScriptStruct CoreUObject.PackedRGBA16N
// 0x0008
public class FPackedRGBA16N : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offXY                                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offZW                                                         = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 XY                                                             => _offXY.GetValue();
	public int                                                 ZW                                                             => _offZW.GetValue();
	#endregion

	public FPackedRGBA16N(int c_XY, int c_ZW) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offXY.SetValue(c_XY);
		_offZW.SetValue(c_ZW);
	}
}
// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
public class FInterpCurvePointQuat : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offOutVal                                                     = new ExternalOffset<FQuat>(0x0010, false);                    // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offArriveTangent                                              = new ExternalOffset<FQuat>(0x0020, false);                    // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offLeaveTangent                                               = new ExternalOffset<FQuat>(0x0030, false);                    // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x0040, false); // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public FQuat                                               OutVal                                                         => _offOutVal.GetValue();
	public FQuat                                               ArriveTangent                                                  => _offArriveTangent.GetValue();
	public FQuat                                               LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointQuat(float c_InVal, FQuat c_OutVal, FQuat c_ArriveTangent, FQuat c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.FrameTime
// 0x0008
public class FFrameTime : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offFrameNumber                                                = new ExternalOffset<FFrameNumber>(0x0000, false);             // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSubFrame                                                   = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        FrameNumber                                                    => _offFrameNumber.GetValue();
	public float                                               SubFrame                                                       => _offSubFrame.GetValue();
	#endregion

	public FFrameTime(FFrameNumber c_FrameNumber, float c_SubFrame) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFrameNumber.SetValue(c_FrameNumber);
		_offSubFrame.SetValue(c_SubFrame);
	}
}
// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
public class FInterpCurveFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointFloat>>     _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointFloat>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointFloat>                      Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveFloat(TArray<FInterpCurvePointFloat> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.IntPoint
// 0x0008
public class FIntPoint : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offX                                                          = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offY                                                          = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 X                                                              => _offX.GetValue();
	public int                                                 Y                                                              => _offY.GetValue();
	#endregion

	public FIntPoint(int c_X, int c_Y) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
	}
}
// ScriptStruct CoreUObject.Int32Range
// 0x0010
public class FInt32Range : ExternalClass
{
	#region Offsets
	private ExternalOffset<FInt32RangeBound>                   _offLowerBound                                                 = new ExternalOffset<FInt32RangeBound>(0x0000, false);         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInt32RangeBound>                   _offUpperBound                                                 = new ExternalOffset<FInt32RangeBound>(0x0008, false);         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FInt32RangeBound                                    LowerBound                                                     => _offLowerBound.GetValue();
	public FInt32RangeBound                                    UpperBound                                                     => _offUpperBound.GetValue();
	#endregion

	public FInt32Range(FInt32RangeBound c_LowerBound, FInt32RangeBound c_UpperBound) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLowerBound.SetValue(c_LowerBound);
		_offUpperBound.SetValue(c_UpperBound);
	}
}
// ScriptStruct CoreUObject.QualifiedFrameTime
// 0x0010
public class FQualifiedFrameTime : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFrameTime>                         _offTime                                                       = new ExternalOffset<FFrameTime>(0x0000, false);               // 0x0000(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameRate>                         _offRate                                                       = new ExternalOffset<FFrameRate>(0x0008, false);               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameTime                                          Time                                                           => _offTime.GetValue();
	public FFrameRate                                          Rate                                                           => _offRate.GetValue();
	#endregion

	public FQualifiedFrameTime(FFrameTime c_Time, FFrameRate c_Rate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTime.SetValue(c_Time);
		_offRate.SetValue(c_Rate);
	}
}
// ScriptStruct CoreUObject.IntVector
// 0x000C
public class FIntVector : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offX                                                          = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offY                                                          = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offZ                                                          = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 X                                                              => _offX.GetValue();
	public int                                                 Y                                                              => _offY.GetValue();
	public int                                                 Z                                                              => _offZ.GetValue();
	#endregion

	public FIntVector(int c_X, int c_Y, int c_Z) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offZ.SetValue(c_Z);
	}
}
// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
public class FInterpCurveQuat : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointQuat>>      _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointQuat>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointQuat>                       Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveQuat(TArray<FInterpCurvePointQuat> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.FloatInterval
// 0x0008
public class FFloatInterval : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMin                                                        = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMax                                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Min                                                            => _offMin.GetValue();
	public float                                               Max                                                            => _offMax.GetValue();
	#endregion

	public FFloatInterval(float c_Min, float c_Max) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMin.SetValue(c_Min);
		_offMax.SetValue(c_Max);
	}
}
// ScriptStruct CoreUObject.Color
// 0x0004
public class FColor : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offB                                                          = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offG                                                          = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offR                                                          = new ExternalOffset<char>(0x0002, false);                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offA                                                          = new ExternalOffset<char>(0x0003, false);                     // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FColor() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.Timecode
// 0x0014
public class FTimecode : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offHours                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinutes                                                    = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSeconds                                                    = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFrames                                                     = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDropFrameFormat                                           = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Hours                                                          => _offHours.GetValue();
	public int                                                 Minutes                                                        => _offMinutes.GetValue();
	public int                                                 Seconds                                                        => _offSeconds.GetValue();
	public int                                                 Frames                                                         => _offFrames.GetValue();
	public byte/*(bool)*/                                      bDropFrameFormat                                               => _offbDropFrameFormat.GetValue();
	#endregion

	public FTimecode(int c_Hours, int c_Minutes, int c_Seconds, int c_Frames, byte/*(bool)*/ c_bDropFrameFormat) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHours.SetValue(c_Hours);
		_offMinutes.SetValue(c_Minutes);
		_offSeconds.SetValue(c_Seconds);
		_offFrames.SetValue(c_Frames);
		_offbDropFrameFormat.SetValue(c_bDropFrameFormat);
	}
}
// ScriptStruct CoreUObject.Int32Interval
// 0x0008
public class FInt32Interval : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMin                                                        = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMax                                                        = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Min                                                            => _offMin.GetValue();
	public int                                                 Max                                                            => _offMax.GetValue();
	#endregion

	public FInt32Interval(int c_Min, int c_Max) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMin.SetValue(c_Min);
		_offMax.SetValue(c_Max);
	}
}
// ScriptStruct CoreUObject.Timespan
// 0x0008
public class FTimespan : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTimespan() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.SoftObjectPath
// 0x0018
public class FSoftObjectPath : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offAssetPathName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSubPathString                                              = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               AssetPathName                                                  => _offAssetPathName.GetValue();
	public FString                                             SubPathString                                                  => _offSubPathString.GetValue();
	#endregion

	public FSoftObjectPath(FName c_AssetPathName, FString c_SubPathString) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAssetPathName.SetValue(c_AssetPathName);
		_offSubPathString.SetValue(c_SubPathString);
	}
}
// ScriptStruct CoreUObject.SoftClassPath
// 0x0000 (0x0018 - 0x0018)
public class FSoftClassPath : FSoftObjectPath
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSoftClassPath() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
public class FInterpCurvePointTwoVectors : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offInVal                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTwoVectors>                        _offOutVal                                                     = new ExternalOffset<FTwoVectors>(0x0004, false);              // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTwoVectors>                        _offArriveTangent                                              = new ExternalOffset<FTwoVectors>(0x001C, false);              // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTwoVectors>                        _offLeaveTangent                                               = new ExternalOffset<FTwoVectors>(0x0034, false);              // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpCurveMode>>      _offInterpMode                                                 = new ExternalOffset<TEnumAsByte<EInterpCurveMode>>(0x004C, false); // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               InVal                                                          => _offInVal.GetValue();
	public FTwoVectors                                         OutVal                                                         => _offOutVal.GetValue();
	public FTwoVectors                                         ArriveTangent                                                  => _offArriveTangent.GetValue();
	public FTwoVectors                                         LeaveTangent                                                   => _offLeaveTangent.GetValue();
	public TEnumAsByte<EInterpCurveMode>                       InterpMode                                                     => _offInterpMode.GetValue();
	#endregion

	public FInterpCurvePointTwoVectors(float c_InVal, FTwoVectors c_OutVal, FTwoVectors c_ArriveTangent, FTwoVectors c_LeaveTangent, TEnumAsByte<EInterpCurveMode> c_InterpMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInVal.SetValue(c_InVal);
		_offOutVal.SetValue(c_OutVal);
		_offArriveTangent.SetValue(c_ArriveTangent);
		_offLeaveTangent.SetValue(c_LeaveTangent);
		_offInterpMode.SetValue(c_InterpMode);
	}
}
// ScriptStruct CoreUObject.PrimaryAssetType
// 0x0008
public class FPrimaryAssetType : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	#endregion

	public FPrimaryAssetType(FName c_Name) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
	}
}
// ScriptStruct CoreUObject.PrimaryAssetId
// 0x0010
public class FPrimaryAssetId : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPrimaryAssetType>                  _offPrimaryAssetType                                           = new ExternalOffset<FPrimaryAssetType>(0x0000, false);        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPrimaryAssetName                                           = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPrimaryAssetType                                   PrimaryAssetType                                               => _offPrimaryAssetType.GetValue();
	public FName                                               PrimaryAssetName                                               => _offPrimaryAssetName.GetValue();
	#endregion

	public FPrimaryAssetId(FPrimaryAssetType c_PrimaryAssetType, FName c_PrimaryAssetName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPrimaryAssetType.SetValue(c_PrimaryAssetType);
		_offPrimaryAssetName.SetValue(c_PrimaryAssetName);
	}
}
// ScriptStruct CoreUObject.PolyglotTextData
// 0x00B8
public class FPolyglotTextData : ExternalClass
{
	#region Offsets
	private ExternalOffset<ELocalizedTextSourceCategory>       _offCategory                                                   = new ExternalOffset<ELocalizedTextSourceCategory>(0x0000, false); // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNativeCulture                                              = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNamespace                                                  = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offKey                                                        = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNativeString                                               = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FString>               _offLocalizedStrings                                           = new ExternalOffset<TMap<FString>>(0x0048, false);            // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsMinimalPatch                                            = new ExternalOffset<byte/*(bool)*/>(0x0098);                  // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                              _offCachedText                                                 = new ExternalOffset<FText>(0x00A0, false);                    // 0x00A0(0x0018) (Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ELocalizedTextSourceCategory                        Category                                                       => _offCategory.GetValue();
	public FString                                             NativeCulture                                                  => _offNativeCulture.GetValue();
	public FString                                             Namespace                                                      => _offNamespace.GetValue();
	public FString                                             Key                                                            => _offKey.GetValue();
	public FString                                             NativeString                                                   => _offNativeString.GetValue();
	public byte/*(bool)*/                                      bIsMinimalPatch                                                => _offbIsMinimalPatch.GetValue();
	public FText                                               CachedText                                                     => _offCachedText.GetValue();
	#endregion

	public FPolyglotTextData(ELocalizedTextSourceCategory c_Category, FString c_NativeCulture, FString c_Namespace, FString c_Key, FString c_NativeString, byte/*(bool)*/ c_bIsMinimalPatch, FText c_CachedText) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCategory.SetValue(c_Category);
		_offNativeCulture.SetValue(c_NativeCulture);
		_offNamespace.SetValue(c_Namespace);
		_offKey.SetValue(c_Key);
		_offNativeString.SetValue(c_NativeString);
		_offbIsMinimalPatch.SetValue(c_bIsMinimalPatch);
		_offCachedText.SetValue(c_CachedText);
	}
}
// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
public class FInterpCurveTwoVectors : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FInterpCurvePointTwoVectors>> _offPoints                                                     = new ExternalOffset<TArray<FInterpCurvePointTwoVectors>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLooped                                                  = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLoopKeyOffset                                              = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FInterpCurvePointTwoVectors>                 Points                                                         => _offPoints.GetValue();
	public byte/*(bool)*/                                      bIsLooped                                                      => _offbIsLooped.GetValue();
	public float                                               LoopKeyOffset                                                  => _offLoopKeyOffset.GetValue();
	#endregion

	public FInterpCurveTwoVectors(TArray<FInterpCurvePointTwoVectors> c_Points, byte/*(bool)*/ c_bIsLooped, float c_LoopKeyOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoints.SetValue(c_Points);
		_offbIsLooped.SetValue(c_bIsLooped);
		_offLoopKeyOffset.SetValue(c_LoopKeyOffset);
	}
}
// ScriptStruct CoreUObject.AutomationEvent
// 0x0038
public class FAutomationEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<EAutomationEventType>               _offType                                                       = new ExternalOffset<EAutomationEventType>(0x0000, false);     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offMessage                                                    = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offContext                                                    = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offArtifact                                                   = new ExternalOffset<FGuid>(0x0028, false);                    // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EAutomationEventType                                Type                                                           => _offType.GetValue();
	public FString                                             Message                                                        => _offMessage.GetValue();
	public FString                                             Context                                                        => _offContext.GetValue();
	public FGuid                                               Artifact                                                       => _offArtifact.GetValue();
	#endregion

	public FAutomationEvent(EAutomationEventType c_Type, FString c_Message, FString c_Context, FGuid c_Artifact) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offType.SetValue(c_Type);
		_offMessage.SetValue(c_Message);
		_offContext.SetValue(c_Context);
		_offArtifact.SetValue(c_Artifact);
	}
}
// ScriptStruct CoreUObject.AutomationExecutionEntry
// 0x0058
public class FAutomationExecutionEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FAutomationEvent>                   _offEvent                                                      = new ExternalOffset<FAutomationEvent>(0x0000, false);         // 0x0000(0x0038) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offFilename                                                   = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLineNumber                                                 = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDateTime>                          _offTimestamp                                                  = new ExternalOffset<FDateTime>(0x0050, false);                // 0x0050(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAutomationEvent                                    Event                                                          => _offEvent.GetValue();
	public FString                                             Filename                                                       => _offFilename.GetValue();
	public int                                                 LineNumber                                                     => _offLineNumber.GetValue();
	public FDateTime                                           Timestamp                                                      => _offTimestamp.GetValue();
	#endregion

	public FAutomationExecutionEntry(FAutomationEvent c_Event, FString c_Filename, int c_LineNumber, FDateTime c_Timestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEvent.SetValue(c_Event);
		_offFilename.SetValue(c_Filename);
		_offLineNumber.SetValue(c_LineNumber);
		_offTimestamp.SetValue(c_Timestamp);
	}
}

}