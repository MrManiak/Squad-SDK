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

// Enum ClothingSystemRuntime.EClothingWindMethod
public enum EClothingWindMethod : byte
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2
}

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
public enum EMaskTarget_PhysMesh : byte
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__MaskTarget_MAX = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010
public class FClothConstraintSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offStiffness                                                  = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStiffnessMultiplier                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStretchLimit                                               = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCompressionLimit                                           = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Stiffness                                                      => _offStiffness.GetValue();
	public float                                               StiffnessMultiplier                                            => _offStiffnessMultiplier.GetValue();
	public float                                               StretchLimit                                                   => _offStretchLimit.GetValue();
	public float                                               CompressionLimit                                               => _offCompressionLimit.GetValue();
	#endregion

	public FClothConstraintSetup(float c_Stiffness, float c_StiffnessMultiplier, float c_StretchLimit, float c_CompressionLimit) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStiffness.SetValue(c_Stiffness);
		_offStiffnessMultiplier.SetValue(c_StiffnessMultiplier);
		_offStretchLimit.SetValue(c_StretchLimit);
		_offCompressionLimit.SetValue(c_CompressionLimit);
	}
}
// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034
public class FClothVertBoneData : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offNumInfluences                                              = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<ushort>                             _offBoneIndices[0x8]                                           = new ExternalOffset<ushort>(0x0004);                          // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<float>                              _offBoneWeights[0x8]                                           = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 NumInfluences                                                  => _offNumInfluences.GetValue();
	#endregion

	public FClothVertBoneData(int c_NumInfluences) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumInfluences.SetValue(c_NumInfluences);
	}
}
// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030
public class FClothParameterMask_PhysMesh : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offMaskName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMaskTarget_PhysMesh>               _offCurrentTarget                                              = new ExternalOffset<EMaskTarget_PhysMesh>(0x0008, false);     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxValue                                                   = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinValue                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offValues                                                     = new ExternalOffset<TArray<float>>(0x0018, false);            // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               MaskName                                                       => _offMaskName.GetValue();
	public EMaskTarget_PhysMesh                                CurrentTarget                                                  => _offCurrentTarget.GetValue();
	public float                                               MaxValue                                                       => _offMaxValue.GetValue();
	public float                                               MinValue                                                       => _offMinValue.GetValue();
	public TArray<float>                                       Values                                                         => _offValues.GetValue();
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	#endregion

	public FClothParameterMask_PhysMesh(FName c_MaskName, EMaskTarget_PhysMesh c_CurrentTarget, float c_MaxValue, float c_MinValue, TArray<float> c_Values, byte/*(bool)*/ c_bEnabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaskName.SetValue(c_MaskName);
		_offCurrentTarget.SetValue(c_CurrentTarget);
		_offMaxValue.SetValue(c_MaxValue);
		_offMinValue.SetValue(c_MinValue);
		_offValues.SetValue(c_Values);
		_offbEnabled.SetValue(c_bEnabled);
	}
}
// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x00A8
public class FClothPhysicalMeshData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FVector>>                    _offVertices                                                   = new ExternalOffset<TArray<FVector>>(0x0000, false);          // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                    _offNormals                                                    = new ExternalOffset<TArray<FVector>>(0x0010, false);          // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<uint32_t>>                   _offIndices                                                    = new ExternalOffset<TArray<uint32_t>>(0x0020, false);         // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offMaxDistances                                               = new ExternalOffset<TArray<float>>(0x0030, false);            // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offBackstopDistances                                          = new ExternalOffset<TArray<float>>(0x0040, false);            // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offBackstopRadiuses                                           = new ExternalOffset<TArray<float>>(0x0050, false);            // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offAnimDriveMultipliers                                       = new ExternalOffset<TArray<float>>(0x0060, false);            // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offInverseMasses                                              = new ExternalOffset<TArray<float>>(0x0070, false);            // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FClothVertBoneData>>         _offBoneData                                                   = new ExternalOffset<TArray<FClothVertBoneData>>(0x0080, false); // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxBoneWeights                                             = new ExternalOffset<int>(0x0090);                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumFixedVerts                                              = new ExternalOffset<int>(0x0094);                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<uint32_t>>                   _offSelfCollisionIndices                                       = new ExternalOffset<TArray<uint32_t>>(0x0098, false);         // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FVector>                                     Vertices                                                       => _offVertices.GetValue();
	public TArray<FVector>                                     Normals                                                        => _offNormals.GetValue();
	public TArray<uint32_t>                                    Indices                                                        => _offIndices.GetValue();
	public TArray<float>                                       MaxDistances                                                   => _offMaxDistances.GetValue();
	public TArray<float>                                       BackstopDistances                                              => _offBackstopDistances.GetValue();
	public TArray<float>                                       BackstopRadiuses                                               => _offBackstopRadiuses.GetValue();
	public TArray<float>                                       AnimDriveMultipliers                                           => _offAnimDriveMultipliers.GetValue();
	public TArray<float>                                       InverseMasses                                                  => _offInverseMasses.GetValue();
	public TArray<FClothVertBoneData>                          BoneData                                                       => _offBoneData.GetValue();
	public int                                                 MaxBoneWeights                                                 => _offMaxBoneWeights.GetValue();
	public int                                                 NumFixedVerts                                                  => _offNumFixedVerts.GetValue();
	public TArray<uint32_t>                                    SelfCollisionIndices                                           => _offSelfCollisionIndices.GetValue();
	#endregion

	public FClothPhysicalMeshData(TArray<FVector> c_Vertices, TArray<FVector> c_Normals, TArray<uint32_t> c_Indices, TArray<float> c_MaxDistances, TArray<float> c_BackstopDistances, TArray<float> c_BackstopRadiuses, TArray<float> c_AnimDriveMultipliers, TArray<float> c_InverseMasses, TArray<FClothVertBoneData> c_BoneData, int c_MaxBoneWeights, int c_NumFixedVerts, TArray<uint32_t> c_SelfCollisionIndices) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertices.SetValue(c_Vertices);
		_offNormals.SetValue(c_Normals);
		_offIndices.SetValue(c_Indices);
		_offMaxDistances.SetValue(c_MaxDistances);
		_offBackstopDistances.SetValue(c_BackstopDistances);
		_offBackstopRadiuses.SetValue(c_BackstopRadiuses);
		_offAnimDriveMultipliers.SetValue(c_AnimDriveMultipliers);
		_offInverseMasses.SetValue(c_InverseMasses);
		_offBoneData.SetValue(c_BoneData);
		_offMaxBoneWeights.SetValue(c_MaxBoneWeights);
		_offNumFixedVerts.SetValue(c_NumFixedVerts);
		_offSelfCollisionIndices.SetValue(c_SelfCollisionIndices);
	}
}
// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x00F8
public class FClothLODData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FClothPhysicalMeshData>             _offPhysicalMeshData                                           = new ExternalOffset<FClothPhysicalMeshData>(0x0000, false);   // 0x0000(0x00A8) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothCollisionData>                _offCollisionData                                              = new ExternalOffset<FClothCollisionData>(0x00A8, false);      // 0x00A8(0x0030) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FClothPhysicalMeshData                              PhysicalMeshData                                               => _offPhysicalMeshData.GetValue();
	public FClothCollisionData                                 CollisionData                                                  => _offCollisionData.GetValue();
	#endregion

	public FClothLODData(FClothPhysicalMeshData c_PhysicalMeshData, FClothCollisionData c_CollisionData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPhysicalMeshData.SetValue(c_PhysicalMeshData);
		_offCollisionData.SetValue(c_CollisionData);
	}
}
// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x00D4
public class FClothConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<EClothingWindMethod>                _offWindMethod                                                 = new ExternalOffset<EClothingWindMethod>(0x0000, false);      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothConstraintSetup>              _offVerticalConstraintConfig                                   = new ExternalOffset<FClothConstraintSetup>(0x0004, false);    // 0x0004(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothConstraintSetup>              _offHorizontalConstraintConfig                                 = new ExternalOffset<FClothConstraintSetup>(0x0014, false);    // 0x0014(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothConstraintSetup>              _offBendConstraintConfig                                       = new ExternalOffset<FClothConstraintSetup>(0x0024, false);    // 0x0024(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothConstraintSetup>              _offShearConstraintConfig                                      = new ExternalOffset<FClothConstraintSetup>(0x0034, false);    // 0x0034(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSelfCollisionRadius                                        = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSelfCollisionStiffness                                     = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSelfCollisionCullScale                                     = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offDamping                                                    = new ExternalOffset<FVector>(0x0050, false);                  // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFriction                                                   = new ExternalOffset<float>(0x005C);                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWindDragCoefficient                                        = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWindLiftCoefficient                                        = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLinearDrag                                                 = new ExternalOffset<FVector>(0x0068, false);                  // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularDrag                                                = new ExternalOffset<FVector>(0x0074, false);                  // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLinearInertiaScale                                         = new ExternalOffset<FVector>(0x0080, false);                  // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularInertiaScale                                        = new ExternalOffset<FVector>(0x008C, false);                  // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offCentrifugalInertiaScale                                    = new ExternalOffset<FVector>(0x0098, false);                  // 0x0098(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSolverFrequency                                            = new ExternalOffset<float>(0x00A4);                           // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStiffnessFrequency                                         = new ExternalOffset<float>(0x00A8);                           // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGravityScale                                               = new ExternalOffset<float>(0x00AC);                           // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offGravityOverride                                            = new ExternalOffset<FVector>(0x00B0, false);                  // 0x00B0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseGravityOverride                                        = new ExternalOffset<byte/*(bool)*/>(0x00BC);                  // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTetherStiffness                                            = new ExternalOffset<float>(0x00C0);                           // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTetherLimit                                                = new ExternalOffset<float>(0x00C4);                           // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCollisionThickness                                         = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAnimDriveSpringStiffness                                   = new ExternalOffset<float>(0x00CC);                           // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAnimDriveDamperStiffness                                   = new ExternalOffset<float>(0x00D0);                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EClothingWindMethod                                 WindMethod                                                     => _offWindMethod.GetValue();
	public FClothConstraintSetup                               VerticalConstraintConfig                                       => _offVerticalConstraintConfig.GetValue();
	public FClothConstraintSetup                               HorizontalConstraintConfig                                     => _offHorizontalConstraintConfig.GetValue();
	public FClothConstraintSetup                               BendConstraintConfig                                           => _offBendConstraintConfig.GetValue();
	public FClothConstraintSetup                               ShearConstraintConfig                                          => _offShearConstraintConfig.GetValue();
	public float                                               SelfCollisionRadius                                            => _offSelfCollisionRadius.GetValue();
	public float                                               SelfCollisionStiffness                                         => _offSelfCollisionStiffness.GetValue();
	public float                                               SelfCollisionCullScale                                         => _offSelfCollisionCullScale.GetValue();
	public FVector                                             Damping                                                        => _offDamping.GetValue();
	public float                                               Friction                                                       => _offFriction.GetValue();
	public float                                               WindDragCoefficient                                            => _offWindDragCoefficient.GetValue();
	public float                                               WindLiftCoefficient                                            => _offWindLiftCoefficient.GetValue();
	public FVector                                             LinearDrag                                                     => _offLinearDrag.GetValue();
	public FVector                                             AngularDrag                                                    => _offAngularDrag.GetValue();
	public FVector                                             LinearInertiaScale                                             => _offLinearInertiaScale.GetValue();
	public FVector                                             AngularInertiaScale                                            => _offAngularInertiaScale.GetValue();
	public FVector                                             CentrifugalInertiaScale                                        => _offCentrifugalInertiaScale.GetValue();
	public float                                               SolverFrequency                                                => _offSolverFrequency.GetValue();
	public float                                               StiffnessFrequency                                             => _offStiffnessFrequency.GetValue();
	public float                                               GravityScale                                                   => _offGravityScale.GetValue();
	public FVector                                             GravityOverride                                                => _offGravityOverride.GetValue();
	public byte/*(bool)*/                                      bUseGravityOverride                                            => _offbUseGravityOverride.GetValue();
	public float                                               TetherStiffness                                                => _offTetherStiffness.GetValue();
	public float                                               TetherLimit                                                    => _offTetherLimit.GetValue();
	public float                                               CollisionThickness                                             => _offCollisionThickness.GetValue();
	public float                                               AnimDriveSpringStiffness                                       => _offAnimDriveSpringStiffness.GetValue();
	public float                                               AnimDriveDamperStiffness                                       => _offAnimDriveDamperStiffness.GetValue();
	#endregion

	public FClothConfig(EClothingWindMethod c_WindMethod, FClothConstraintSetup c_VerticalConstraintConfig, FClothConstraintSetup c_HorizontalConstraintConfig, FClothConstraintSetup c_BendConstraintConfig, FClothConstraintSetup c_ShearConstraintConfig, float c_SelfCollisionRadius, float c_SelfCollisionStiffness, float c_SelfCollisionCullScale, FVector c_Damping, float c_Friction, float c_WindDragCoefficient, float c_WindLiftCoefficient, FVector c_LinearDrag, FVector c_AngularDrag, FVector c_LinearInertiaScale, FVector c_AngularInertiaScale, FVector c_CentrifugalInertiaScale, float c_SolverFrequency, float c_StiffnessFrequency, float c_GravityScale, FVector c_GravityOverride, byte/*(bool)*/ c_bUseGravityOverride, float c_TetherStiffness, float c_TetherLimit, float c_CollisionThickness, float c_AnimDriveSpringStiffness, float c_AnimDriveDamperStiffness) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWindMethod.SetValue(c_WindMethod);
		_offVerticalConstraintConfig.SetValue(c_VerticalConstraintConfig);
		_offHorizontalConstraintConfig.SetValue(c_HorizontalConstraintConfig);
		_offBendConstraintConfig.SetValue(c_BendConstraintConfig);
		_offShearConstraintConfig.SetValue(c_ShearConstraintConfig);
		_offSelfCollisionRadius.SetValue(c_SelfCollisionRadius);
		_offSelfCollisionStiffness.SetValue(c_SelfCollisionStiffness);
		_offSelfCollisionCullScale.SetValue(c_SelfCollisionCullScale);
		_offDamping.SetValue(c_Damping);
		_offFriction.SetValue(c_Friction);
		_offWindDragCoefficient.SetValue(c_WindDragCoefficient);
		_offWindLiftCoefficient.SetValue(c_WindLiftCoefficient);
		_offLinearDrag.SetValue(c_LinearDrag);
		_offAngularDrag.SetValue(c_AngularDrag);
		_offLinearInertiaScale.SetValue(c_LinearInertiaScale);
		_offAngularInertiaScale.SetValue(c_AngularInertiaScale);
		_offCentrifugalInertiaScale.SetValue(c_CentrifugalInertiaScale);
		_offSolverFrequency.SetValue(c_SolverFrequency);
		_offStiffnessFrequency.SetValue(c_StiffnessFrequency);
		_offGravityScale.SetValue(c_GravityScale);
		_offGravityOverride.SetValue(c_GravityOverride);
		_offbUseGravityOverride.SetValue(c_bUseGravityOverride);
		_offTetherStiffness.SetValue(c_TetherStiffness);
		_offTetherLimit.SetValue(c_TetherLimit);
		_offCollisionThickness.SetValue(c_CollisionThickness);
		_offAnimDriveSpringStiffness.SetValue(c_AnimDriveSpringStiffness);
		_offAnimDriveDamperStiffness.SetValue(c_AnimDriveDamperStiffness);
	}
}

}