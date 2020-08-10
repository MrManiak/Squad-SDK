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

// Class FieldSystemEngine.FieldSystemActor
// 0x0018 (0x0250 - 0x0238)
public class AFieldSystemActor : AActor
{
	#region Offsets
	private ExternalOffset<UFieldSystemComponent>             _offFieldSystemComponent                                       = new ExternalOffset<UFieldSystemComponent>(0x0248, true);     // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFieldSystemComponent                              FieldSystemComponent                                           => _offFieldSystemComponent.GetValue();
	#endregion


}

// Class FieldSystemEngine.FieldSystem
// 0x0000 (0x0028 - 0x0028)
public class UFieldSystem : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.FieldSystemComponent
// 0x001B (0x0420 - 0x0405)
public class UFieldSystemComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<UFieldSystem>                      _offFieldSystem                                                = new ExternalOffset<UFieldSystem>(0x0408, true);              // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFieldSystem                                       FieldSystem                                                    => _offFieldSystem.GetValue();
	#endregion


}

// Class FieldSystemEngine.FieldSystemMetaData
// 0x0010 (0x00D8 - 0x00C8)
public class UFieldSystemMetaData : UActorComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0004 (0x00DC - 0x00D8)
public class UFieldSystemMetaDataIteration : UFieldSystemMetaData
{
	#region Offsets
	private ExternalOffset<int>                               _offIterations                                                 = new ExternalOffset<int>(0x00D8);                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                Iterations                                                     => _offIterations.GetValue();
	#endregion


}

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0001 (0x00D9 - 0x00D8)
public class UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EFieldResolutionType>> _offResolutionType                                             = new ExternalOffset<TEnumAsByte<EFieldResolutionType>>(0x00D8, false); // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EFieldResolutionType>                  ResolutionType                                                 => _offResolutionType.GetValue();
	#endregion


}

// Class FieldSystemEngine.FieldNodeBase
// 0x0010 (0x00D8 - 0x00C8)
public class UFieldNodeBase : UActorComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (0x00D8 - 0x00D8)
public class UFieldNodeInt : UFieldNodeBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (0x00D8 - 0x00D8)
public class UFieldNodeFloat : UFieldNodeBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (0x00D8 - 0x00D8)
public class UFieldNodeVector : UFieldNodeBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class FieldSystemEngine.UniformInteger
// 0x0004 (0x00DC - 0x00D8)
public class UUniformInteger : UFieldNodeInt
{
	#region Offsets
	private ExternalOffset<int>                               _offMagnitude                                                  = new ExternalOffset<int>(0x00D8);                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                Magnitude                                                      => _offMagnitude.GetValue();
	#endregion


}

// Class FieldSystemEngine.RadialIntMask
// 0x0019 (0x00F1 - 0x00D8)
public class URadialIntMask : UFieldNodeInt
{
	#region Offsets
	private ExternalOffset<float>                             _offRadius                                                     = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offPosition                                                   = new ExternalOffset<FVector>(0x00DC, false);                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offInteriorValue                                              = new ExternalOffset<int>(0x00E8);                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offExteriorValue                                              = new ExternalOffset<int>(0x00EC);                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESetMaskConditionType>> _offSetMaskCondition                                           = new ExternalOffset<TEnumAsByte<ESetMaskConditionType>>(0x00F0, false); // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Radius                                                         => _offRadius.GetValue();
	public FVector                                            Position                                                       => _offPosition.GetValue();
	public int                                                InteriorValue                                                  => _offInteriorValue.GetValue();
	public int                                                ExteriorValue                                                  => _offExteriorValue.GetValue();
	public TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition                                               => _offSetMaskCondition.GetValue();
	#endregion


}

// Class FieldSystemEngine.UniformScalar
// 0x0004 (0x00DC - 0x00D8)
public class UUniformScalar : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	#endregion


}

// Class FieldSystemEngine.RadialFalloff
// 0x0021 (0x00F9 - 0x00D8)
public class URadialFalloff : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinRange                                                   = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxRange                                                   = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefault                                                    = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRadius                                                     = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offPosition                                                   = new ExternalOffset<FVector>(0x00EC, false);                  // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFieldFalloffType>>    _offFalloff                                                    = new ExternalOffset<TEnumAsByte<EFieldFalloffType>>(0x00F8, false); // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public float                                              MinRange                                                       => _offMinRange.GetValue();
	public float                                              MaxRange                                                       => _offMaxRange.GetValue();
	public float                                              Default                                                        => _offDefault.GetValue();
	public float                                              Radius                                                         => _offRadius.GetValue();
	public FVector                                            Position                                                       => _offPosition.GetValue();
	public TEnumAsByte<EFieldFalloffType>                     Falloff                                                        => _offFalloff.GetValue();
	#endregion


}

// Class FieldSystemEngine.PlaneFalloff
// 0x002D (0x0105 - 0x00D8)
public class UPlaneFalloff : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinRange                                                   = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxRange                                                   = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefault                                                    = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offdistance                                                   = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offPosition                                                   = new ExternalOffset<FVector>(0x00EC, false);                  // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offNormal                                                     = new ExternalOffset<FVector>(0x00F8, false);                  // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFieldFalloffType>>    _offFalloff                                                    = new ExternalOffset<TEnumAsByte<EFieldFalloffType>>(0x0104, false); // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public float                                              MinRange                                                       => _offMinRange.GetValue();
	public float                                              MaxRange                                                       => _offMaxRange.GetValue();
	public float                                              Default                                                        => _offDefault.GetValue();
	public float                                              distance                                                       => _offdistance.GetValue();
	public FVector                                            Position                                                       => _offPosition.GetValue();
	public FVector                                            Normal                                                         => _offNormal.GetValue();
	public TEnumAsByte<EFieldFalloffType>                     Falloff                                                        => _offFalloff.GetValue();
	#endregion


}

// Class FieldSystemEngine.BoxFalloff
// 0x0049 (0x0121 - 0x00D8)
public class UBoxFalloff : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinRange                                                   = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxRange                                                   = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefault                                                    = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                        _offTransform                                                  = new ExternalOffset<FTransform>(0x00F0, false);               // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFieldFalloffType>>    _offFalloff                                                    = new ExternalOffset<TEnumAsByte<EFieldFalloffType>>(0x0120, false); // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public float                                              MinRange                                                       => _offMinRange.GetValue();
	public float                                              MaxRange                                                       => _offMaxRange.GetValue();
	public float                                              Default                                                        => _offDefault.GetValue();
	public FTransform                                         Transform                                                      => _offTransform.GetValue();
	public TEnumAsByte<EFieldFalloffType>                     Falloff                                                        => _offFalloff.GetValue();
	#endregion


}

// Class FieldSystemEngine.NoiseField
// 0x0038 (0x0110 - 0x00D8)
public class UNoiseField : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<float>                             _offMinRange                                                   = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxRange                                                   = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                        _offTransform                                                  = new ExternalOffset<FTransform>(0x00E0, false);               // 0x00E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              MinRange                                                       => _offMinRange.GetValue();
	public float                                              MaxRange                                                       => _offMaxRange.GetValue();
	public FTransform                                         Transform                                                      => _offTransform.GetValue();
	#endregion


}

// Class FieldSystemEngine.UniformVector
// 0x0010 (0x00E8 - 0x00D8)
public class UUniformVector : UFieldNodeVector
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offDirection                                                  = new ExternalOffset<FVector>(0x00DC, false);                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public FVector                                            Direction                                                      => _offDirection.GetValue();
	#endregion


}

// Class FieldSystemEngine.RadialVector
// 0x0010 (0x00E8 - 0x00D8)
public class URadialVector : UFieldNodeVector
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offPosition                                                   = new ExternalOffset<FVector>(0x00DC, false);                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public FVector                                            Position                                                       => _offPosition.GetValue();
	#endregion


}

// Class FieldSystemEngine.RandomVector
// 0x0004 (0x00DC - 0x00D8)
public class URandomVector : UFieldNodeVector
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	#endregion


}

// Class FieldSystemEngine.OperatorField
// 0x0019 (0x00F1 - 0x00D8)
public class UOperatorField : UFieldNodeBase
{
	#region Offsets
	private ExternalOffset<float>                             _offMagnitude                                                  = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UFieldNodeBase>                    _offRightField                                                 = new ExternalOffset<UFieldNodeBase>(0x00E0, true);            // 0x00E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UFieldNodeBase>                    _offLeftField                                                  = new ExternalOffset<UFieldNodeBase>(0x00E8, true);            // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFieldOperationType>>  _offOperation                                                  = new ExternalOffset<TEnumAsByte<EFieldOperationType>>(0x00F0, false); // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Magnitude                                                      => _offMagnitude.GetValue();
	public UFieldNodeBase                                     RightField                                                     => _offRightField.GetValue();
	public UFieldNodeBase                                     LeftField                                                      => _offLeftField.GetValue();
	public TEnumAsByte<EFieldOperationType>                   Operation                                                      => _offOperation.GetValue();
	#endregion


}

// Class FieldSystemEngine.ToIntegerField
// 0x0008 (0x00E0 - 0x00D8)
public class UToIntegerField : UFieldNodeInt
{
	#region Offsets
	private ExternalOffset<UFieldNodeFloat>                   _offFloatField                                                 = new ExternalOffset<UFieldNodeFloat>(0x00D8, true);           // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFieldNodeFloat                                    FloatField                                                     => _offFloatField.GetValue();
	#endregion


}

// Class FieldSystemEngine.ToFloatField
// 0x0008 (0x00E0 - 0x00D8)
public class UToFloatField : UFieldNodeFloat
{
	#region Offsets
	private ExternalOffset<UFieldNodeInt>                     _offIntField                                                   = new ExternalOffset<UFieldNodeInt>(0x00D8, true);             // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFieldNodeInt                                      IntField                                                       => _offIntField.GetValue();
	#endregion


}

// Class FieldSystemEngine.CullingField
// 0x0011 (0x00E9 - 0x00D8)
public class UCullingField : UFieldNodeBase
{
	#region Offsets
	private ExternalOffset<UFieldNodeBase>                    _offCulling                                                    = new ExternalOffset<UFieldNodeBase>(0x00D8, true);            // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UFieldNodeBase>                    _offField                                                      = new ExternalOffset<UFieldNodeBase>(0x00E0, true);            // 0x00E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFieldCullingOperationType>> _offOperation                                                  = new ExternalOffset<TEnumAsByte<EFieldCullingOperationType>>(0x00E8, false); // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UFieldNodeBase                                     Culling                                                        => _offCulling.GetValue();
	public UFieldNodeBase                                     Field                                                          => _offField.GetValue();
	public TEnumAsByte<EFieldCullingOperationType>            Operation                                                      => _offOperation.GetValue();
	#endregion


}

// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (0x00D8 - 0x00D8)
public class UReturnResultsTerminal : UFieldNodeBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}