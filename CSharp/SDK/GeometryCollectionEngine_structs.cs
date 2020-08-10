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

// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
public enum EChaosBreakingSortMethod : byte
{
	EChaosBreakingSortMethod__SortNone = 0,
	EChaosBreakingSortMethod__SortByHighestMass = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed = 2,
	EChaosBreakingSortMethod__SortByNearestFirst = 3,
	EChaosBreakingSortMethod__Count = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX = 5
}

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
public enum EChaosCollisionSortMethod : byte
{
	EChaosCollisionSortMethod__SortNone = 0,
	EChaosCollisionSortMethod__SortByHighestMass = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse = 3,
	EChaosCollisionSortMethod__SortByNearestFirst = 4,
	EChaosCollisionSortMethod__Count = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX = 6
}

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
public enum EChaosTrailingSortMethod : byte
{
	EChaosTrailingSortMethod__SortNone = 0,
	EChaosTrailingSortMethod__SortByHighestMass = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed = 2,
	EChaosTrailingSortMethod__SortByNearestFirst = 3,
	EChaosTrailingSortMethod__Count = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX = 5
}

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
public enum EGeometryCollectionDebugDrawActorHideGeometry : byte
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
}

// Enum GeometryCollectionEngine.ECollectionGroupEnum
public enum ECollectionGroupEnum : byte
{
	ECollectionGroupEnum__Chaos_Traansform = 0,
	ECollectionGroupEnum__Chaos_Max = 1
}

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
public enum ECollectionAttributeEnum : byte
{
	ECollectionAttributeEnum__Chaos_Active = 0,
	ECollectionAttributeEnum__Chaos_DynamicState = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup = 2,
	ECollectionAttributeEnum__Chaos_Max = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// 0x0020
public class FChaosBreakingEventData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	#endregion

	public FChaosBreakingEventData(FVector c_Location, FVector c_Velocity, float c_Mass, int c_ParticleIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offVelocity.SetValue(c_Velocity);
		_offMass.SetValue(c_Mass);
		_offParticleIndex.SetValue(c_ParticleIndex);
	}
}
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// 0x0018
public class FGeometryCollectionDebugDrawActorSelectedRigidBody : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offID                                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AChaosSolverActor>                  _offSolver                                                     = new ExternalOffset<AChaosSolverActor>(0x0008, true);         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AGeometryCollectionActor>           _offGeometryCollection                                         = new ExternalOffset<AGeometryCollectionActor>(0x0010, true);  // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ID                                                             => _offID.GetValue();
	public AChaosSolverActor                                   Solver                                                         => _offSolver.GetValue();
	public AGeometryCollectionActor                            GeometryCollection                                             => _offGeometryCollection.GetValue();
	#endregion

	public FGeometryCollectionDebugDrawActorSelectedRigidBody(int c_ID, AChaosSolverActor c_Solver, AGeometryCollectionActor c_GeometryCollection) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offSolver.SetValue(c_Solver);
		_offGeometryCollection.SetValue(c_GeometryCollection);
	}
}
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// 0x0001
public class FGeometryCollectionDebugDrawWarningMessage : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGeometryCollectionDebugDrawWarningMessage() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// 0x002C
public class FChaosTrailingEventData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity                                            = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FVector                                             AngularVelocity                                                => _offAngularVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	#endregion

	public FChaosTrailingEventData(FVector c_Location, FVector c_Velocity, FVector c_AngularVelocity, float c_Mass, int c_ParticleIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offVelocity.SetValue(c_Velocity);
		_offAngularVelocity.SetValue(c_AngularVelocity);
		_offMass.SetValue(c_Mass);
		_offParticleIndex.SetValue(c_ParticleIndex);
	}
}
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// 0x004C
public class FChaosCollisionEventData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNormal                                                     = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity1                                                  = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity2                                                  = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass1                                                      = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass2                                                      = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offImpulse                                                    = new ExternalOffset<FVector>(0x0038, false);                  // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x0044);                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLevelsetIndex                                              = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Normal                                                         => _offNormal.GetValue();
	public FVector                                             Velocity1                                                      => _offVelocity1.GetValue();
	public FVector                                             Velocity2                                                      => _offVelocity2.GetValue();
	public float                                               Mass1                                                          => _offMass1.GetValue();
	public float                                               Mass2                                                          => _offMass2.GetValue();
	public FVector                                             Impulse                                                        => _offImpulse.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	public int                                                 LevelsetIndex                                                  => _offLevelsetIndex.GetValue();
	#endregion

	public FChaosCollisionEventData(FVector c_Location, FVector c_Normal, FVector c_Velocity1, FVector c_Velocity2, float c_Mass1, float c_Mass2, FVector c_Impulse, int c_ParticleIndex, int c_LevelsetIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offNormal.SetValue(c_Normal);
		_offVelocity1.SetValue(c_Velocity1);
		_offVelocity2.SetValue(c_Velocity2);
		_offMass1.SetValue(c_Mass1);
		_offMass2.SetValue(c_Mass2);
		_offImpulse.SetValue(c_Impulse);
		_offParticleIndex.SetValue(c_ParticleIndex);
		_offLevelsetIndex.SetValue(c_LevelsetIndex);
	}
}
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// 0x0018
public class FChaosCollisionEventRequestSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMaxNumberResults                                           = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinImpulse                                                 = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDistance                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChaosCollisionSortMethod>          _offSortMethod                                                 = new ExternalOffset<EChaosCollisionSortMethod>(0x0014, false); // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MaxNumberResults                                               => _offMaxNumberResults.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinImpulse                                                     => _offMinImpulse.GetValue();
	public float                                               MaxDistance                                                    => _offMaxDistance.GetValue();
	public EChaosCollisionSortMethod                           SortMethod                                                     => _offSortMethod.GetValue();
	#endregion

	public FChaosCollisionEventRequestSettings(int c_MaxNumberResults, float c_MinMass, float c_MinSpeed, float c_MinImpulse, float c_MaxDistance, EChaosCollisionSortMethod c_SortMethod) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxNumberResults.SetValue(c_MaxNumberResults);
		_offMinMass.SetValue(c_MinMass);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinImpulse.SetValue(c_MinImpulse);
		_offMaxDistance.SetValue(c_MaxDistance);
		_offSortMethod.SetValue(c_SortMethod);
	}
}
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// 0x0018
public class FChaosBreakingEventRequestSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMaxNumberOfResults                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinRadius                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDistance                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChaosBreakingSortMethod>           _offSortMethod                                                 = new ExternalOffset<EChaosBreakingSortMethod>(0x0014, false); // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MaxNumberOfResults                                             => _offMaxNumberOfResults.GetValue();
	public float                                               MinRadius                                                      => _offMinRadius.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MaxDistance                                                    => _offMaxDistance.GetValue();
	public EChaosBreakingSortMethod                            SortMethod                                                     => _offSortMethod.GetValue();
	#endregion

	public FChaosBreakingEventRequestSettings(int c_MaxNumberOfResults, float c_MinRadius, float c_MinSpeed, float c_MinMass, float c_MaxDistance, EChaosBreakingSortMethod c_SortMethod) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxNumberOfResults.SetValue(c_MaxNumberOfResults);
		_offMinRadius.SetValue(c_MinRadius);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinMass.SetValue(c_MinMass);
		_offMaxDistance.SetValue(c_MaxDistance);
		_offSortMethod.SetValue(c_SortMethod);
	}
}
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// 0x0024
public class FGeometryCollectionSizeSpecificData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMaxSize                                                    = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ECollisionTypeEnum>                 _offCollisionType                                              = new ExternalOffset<ECollisionTypeEnum>(0x0004, false);       // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EImplicitTypeEnum>                  _offImplicitType                                               = new ExternalOffset<EImplicitTypeEnum>(0x0005, false);        // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLevelSetResolution                                      = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxLevelSetResolution                                      = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinClusterLevelSetResolution                               = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxClusterLevelSetResolution                               = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCollisionObjectReductionPercentage                         = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCollisionParticlesFraction                                 = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaximumCollisionParticles                                  = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MaxSize                                                        => _offMaxSize.GetValue();
	public ECollisionTypeEnum                                  CollisionType                                                  => _offCollisionType.GetValue();
	public EImplicitTypeEnum                                   ImplicitType                                                   => _offImplicitType.GetValue();
	public int                                                 MinLevelSetResolution                                          => _offMinLevelSetResolution.GetValue();
	public int                                                 MaxLevelSetResolution                                          => _offMaxLevelSetResolution.GetValue();
	public int                                                 MinClusterLevelSetResolution                                   => _offMinClusterLevelSetResolution.GetValue();
	public int                                                 MaxClusterLevelSetResolution                                   => _offMaxClusterLevelSetResolution.GetValue();
	public int                                                 CollisionObjectReductionPercentage                             => _offCollisionObjectReductionPercentage.GetValue();
	public float                                               CollisionParticlesFraction                                     => _offCollisionParticlesFraction.GetValue();
	public int                                                 MaximumCollisionParticles                                      => _offMaximumCollisionParticles.GetValue();
	#endregion

	public FGeometryCollectionSizeSpecificData(float c_MaxSize, ECollisionTypeEnum c_CollisionType, EImplicitTypeEnum c_ImplicitType, int c_MinLevelSetResolution, int c_MaxLevelSetResolution, int c_MinClusterLevelSetResolution, int c_MaxClusterLevelSetResolution, int c_CollisionObjectReductionPercentage, float c_CollisionParticlesFraction, int c_MaximumCollisionParticles) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxSize.SetValue(c_MaxSize);
		_offCollisionType.SetValue(c_CollisionType);
		_offImplicitType.SetValue(c_ImplicitType);
		_offMinLevelSetResolution.SetValue(c_MinLevelSetResolution);
		_offMaxLevelSetResolution.SetValue(c_MaxLevelSetResolution);
		_offMinClusterLevelSetResolution.SetValue(c_MinClusterLevelSetResolution);
		_offMaxClusterLevelSetResolution.SetValue(c_MaxClusterLevelSetResolution);
		_offCollisionObjectReductionPercentage.SetValue(c_CollisionObjectReductionPercentage);
		_offCollisionParticlesFraction.SetValue(c_CollisionParticlesFraction);
		_offMaximumCollisionParticles.SetValue(c_MaximumCollisionParticles);
	}
}
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// 0x0018
public class FChaosTrailingEventRequestSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMaxNumberOfResults                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinAngularSpeed                                            = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDistance                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChaosTrailingSortMethod>           _offSortMethod                                                 = new ExternalOffset<EChaosTrailingSortMethod>(0x0014, false); // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MaxNumberOfResults                                             => _offMaxNumberOfResults.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinAngularSpeed                                                => _offMinAngularSpeed.GetValue();
	public float                                               MaxDistance                                                    => _offMaxDistance.GetValue();
	public EChaosTrailingSortMethod                            SortMethod                                                     => _offSortMethod.GetValue();
	#endregion

	public FChaosTrailingEventRequestSettings(int c_MaxNumberOfResults, float c_MinMass, float c_MinSpeed, float c_MinAngularSpeed, float c_MaxDistance, EChaosTrailingSortMethod c_SortMethod) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxNumberOfResults.SetValue(c_MaxNumberOfResults);
		_offMinMass.SetValue(c_MinMass);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinAngularSpeed.SetValue(c_MinAngularSpeed);
		_offMaxDistance.SetValue(c_MaxDistance);
		_offSortMethod.SetValue(c_SortMethod);
	}
}
// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x0050
public class FGeomComponentCacheParameters : ExternalClass
{
	#region Offsets
	private ExternalOffset<EGeometryCollectionCacheType>       _offCacheMode                                                  = new ExternalOffset<EGeometryCollectionCacheType>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGeometryCollectionCache>           _offTargetCache                                                = new ExternalOffset<UGeometryCollectionCache>(0x0008, true);  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReverseCacheBeginTime                                      = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSaveCollisionData                                          = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDoGenerateCollisionData                                    = new ExternalOffset<byte/*(bool)*/>(0x0015);                  // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCollisionDataSizeMax                                       = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDoCollisionDataSpatialHash                                 = new ExternalOffset<byte/*(bool)*/>(0x001C);                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCollisionDataSpatialHashRadius                             = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxCollisionPerCell                                        = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSaveBreakingData                                           = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDoGenerateBreakingData                                     = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offBreakingDataSizeMax                                        = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDoBreakingDataSpatialHash                                  = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBreakingDataSpatialHashRadius                              = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxBreakingPerCell                                         = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSaveTrailingData                                           = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDoGenerateTrailingData                                     = new ExternalOffset<byte/*(bool)*/>(0x003D);                  // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offTrailingDataSizeMax                                        = new ExternalOffset<int>(0x0040);                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTrailingMinSpeedThreshold                                  = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTrailingMinVolumeThreshold                                 = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EGeometryCollectionCacheType                        CacheMode                                                      => _offCacheMode.GetValue();
	public UGeometryCollectionCache                            TargetCache                                                    => _offTargetCache.GetValue();
	public float                                               ReverseCacheBeginTime                                          => _offReverseCacheBeginTime.GetValue();
	public byte/*(bool)*/                                      SaveCollisionData                                              => _offSaveCollisionData.GetValue();
	public byte/*(bool)*/                                      DoGenerateCollisionData                                        => _offDoGenerateCollisionData.GetValue();
	public int                                                 CollisionDataSizeMax                                           => _offCollisionDataSizeMax.GetValue();
	public byte/*(bool)*/                                      DoCollisionDataSpatialHash                                     => _offDoCollisionDataSpatialHash.GetValue();
	public float                                               CollisionDataSpatialHashRadius                                 => _offCollisionDataSpatialHashRadius.GetValue();
	public int                                                 MaxCollisionPerCell                                            => _offMaxCollisionPerCell.GetValue();
	public byte/*(bool)*/                                      SaveBreakingData                                               => _offSaveBreakingData.GetValue();
	public byte/*(bool)*/                                      DoGenerateBreakingData                                         => _offDoGenerateBreakingData.GetValue();
	public int                                                 BreakingDataSizeMax                                            => _offBreakingDataSizeMax.GetValue();
	public byte/*(bool)*/                                      DoBreakingDataSpatialHash                                      => _offDoBreakingDataSpatialHash.GetValue();
	public float                                               BreakingDataSpatialHashRadius                                  => _offBreakingDataSpatialHashRadius.GetValue();
	public int                                                 MaxBreakingPerCell                                             => _offMaxBreakingPerCell.GetValue();
	public byte/*(bool)*/                                      SaveTrailingData                                               => _offSaveTrailingData.GetValue();
	public byte/*(bool)*/                                      DoGenerateTrailingData                                         => _offDoGenerateTrailingData.GetValue();
	public int                                                 TrailingDataSizeMax                                            => _offTrailingDataSizeMax.GetValue();
	public float                                               TrailingMinSpeedThreshold                                      => _offTrailingMinSpeedThreshold.GetValue();
	public float                                               TrailingMinVolumeThreshold                                     => _offTrailingMinVolumeThreshold.GetValue();
	#endregion

	public FGeomComponentCacheParameters(EGeometryCollectionCacheType c_CacheMode, UGeometryCollectionCache c_TargetCache, float c_ReverseCacheBeginTime, byte/*(bool)*/ c_SaveCollisionData, byte/*(bool)*/ c_DoGenerateCollisionData, int c_CollisionDataSizeMax, byte/*(bool)*/ c_DoCollisionDataSpatialHash, float c_CollisionDataSpatialHashRadius, int c_MaxCollisionPerCell, byte/*(bool)*/ c_SaveBreakingData, byte/*(bool)*/ c_DoGenerateBreakingData, int c_BreakingDataSizeMax, byte/*(bool)*/ c_DoBreakingDataSpatialHash, float c_BreakingDataSpatialHashRadius, int c_MaxBreakingPerCell, byte/*(bool)*/ c_SaveTrailingData, byte/*(bool)*/ c_DoGenerateTrailingData, int c_TrailingDataSizeMax, float c_TrailingMinSpeedThreshold, float c_TrailingMinVolumeThreshold) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCacheMode.SetValue(c_CacheMode);
		_offTargetCache.SetValue(c_TargetCache);
		_offReverseCacheBeginTime.SetValue(c_ReverseCacheBeginTime);
		_offSaveCollisionData.SetValue(c_SaveCollisionData);
		_offDoGenerateCollisionData.SetValue(c_DoGenerateCollisionData);
		_offCollisionDataSizeMax.SetValue(c_CollisionDataSizeMax);
		_offDoCollisionDataSpatialHash.SetValue(c_DoCollisionDataSpatialHash);
		_offCollisionDataSpatialHashRadius.SetValue(c_CollisionDataSpatialHashRadius);
		_offMaxCollisionPerCell.SetValue(c_MaxCollisionPerCell);
		_offSaveBreakingData.SetValue(c_SaveBreakingData);
		_offDoGenerateBreakingData.SetValue(c_DoGenerateBreakingData);
		_offBreakingDataSizeMax.SetValue(c_BreakingDataSizeMax);
		_offDoBreakingDataSpatialHash.SetValue(c_DoBreakingDataSpatialHash);
		_offBreakingDataSpatialHashRadius.SetValue(c_BreakingDataSpatialHashRadius);
		_offMaxBreakingPerCell.SetValue(c_MaxBreakingPerCell);
		_offSaveTrailingData.SetValue(c_SaveTrailingData);
		_offDoGenerateTrailingData.SetValue(c_DoGenerateTrailingData);
		_offTrailingDataSizeMax.SetValue(c_TrailingDataSizeMax);
		_offTrailingMinSpeedThreshold.SetValue(c_TrailingMinSpeedThreshold);
		_offTrailingMinVolumeThreshold.SetValue(c_TrailingMinVolumeThreshold);
	}
}

}