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

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
public enum EGeometryCollectionCacheType : byte
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0030
public class FSolverTrailingData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity                                            = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndexMesh                                          = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FVector                                             AngularVelocity                                                => _offAngularVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	public int                                                 ParticleIndexMesh                                              => _offParticleIndexMesh.GetValue();
	#endregion

	public FSolverTrailingData(FVector c_Location, FVector c_Velocity, FVector c_AngularVelocity, float c_Mass, int c_ParticleIndex, int c_ParticleIndexMesh) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offVelocity.SetValue(c_Velocity);
		_offAngularVelocity.SetValue(c_AngularVelocity);
		_offMass.SetValue(c_Mass);
		_offParticleIndex.SetValue(c_ParticleIndex);
		_offParticleIndexMesh.SetValue(c_ParticleIndexMesh);
	}
}
// ScriptStruct GeometryCollectionCore.SolverBreakingData
// 0x0030
public class FSolverBreakingData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity                                            = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndexMesh                                          = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FVector                                             AngularVelocity                                                => _offAngularVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	public int                                                 ParticleIndexMesh                                              => _offParticleIndexMesh.GetValue();
	#endregion

	public FSolverBreakingData(FVector c_Location, FVector c_Velocity, FVector c_AngularVelocity, float c_Mass, int c_ParticleIndex, int c_ParticleIndexMesh) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offVelocity.SetValue(c_Velocity);
		_offAngularVelocity.SetValue(c_AngularVelocity);
		_offMass.SetValue(c_Mass);
		_offParticleIndex.SetValue(c_ParticleIndex);
		_offParticleIndexMesh.SetValue(c_ParticleIndexMesh);
	}
}
// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x006C
public class FSolverCollisionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAccumulatedImpulse                                         = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNormal                                                     = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity1                                                  = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity2                                                  = new ExternalOffset<FVector>(0x0030, false);                  // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity1                                           = new ExternalOffset<FVector>(0x003C, false);                  // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity2                                           = new ExternalOffset<FVector>(0x0048, false);                  // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass1                                                      = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass2                                                      = new ExternalOffset<float>(0x0058);                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndex                                              = new ExternalOffset<int>(0x005C);                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLevelsetIndex                                              = new ExternalOffset<int>(0x0060);                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offParticleIndexMesh                                          = new ExternalOffset<int>(0x0064);                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLevelsetIndexMesh                                          = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             AccumulatedImpulse                                             => _offAccumulatedImpulse.GetValue();
	public FVector                                             Normal                                                         => _offNormal.GetValue();
	public FVector                                             Velocity1                                                      => _offVelocity1.GetValue();
	public FVector                                             Velocity2                                                      => _offVelocity2.GetValue();
	public FVector                                             AngularVelocity1                                               => _offAngularVelocity1.GetValue();
	public FVector                                             AngularVelocity2                                               => _offAngularVelocity2.GetValue();
	public float                                               Mass1                                                          => _offMass1.GetValue();
	public float                                               Mass2                                                          => _offMass2.GetValue();
	public int                                                 ParticleIndex                                                  => _offParticleIndex.GetValue();
	public int                                                 LevelsetIndex                                                  => _offLevelsetIndex.GetValue();
	public int                                                 ParticleIndexMesh                                              => _offParticleIndexMesh.GetValue();
	public int                                                 LevelsetIndexMesh                                              => _offLevelsetIndexMesh.GetValue();
	#endregion

	public FSolverCollisionData(FVector c_Location, FVector c_AccumulatedImpulse, FVector c_Normal, FVector c_Velocity1, FVector c_Velocity2, FVector c_AngularVelocity1, FVector c_AngularVelocity2, float c_Mass1, float c_Mass2, int c_ParticleIndex, int c_LevelsetIndex, int c_ParticleIndexMesh, int c_LevelsetIndexMesh) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offAccumulatedImpulse.SetValue(c_AccumulatedImpulse);
		_offNormal.SetValue(c_Normal);
		_offVelocity1.SetValue(c_Velocity1);
		_offVelocity2.SetValue(c_Velocity2);
		_offAngularVelocity1.SetValue(c_AngularVelocity1);
		_offAngularVelocity2.SetValue(c_AngularVelocity2);
		_offMass1.SetValue(c_Mass1);
		_offMass2.SetValue(c_Mass2);
		_offParticleIndex.SetValue(c_ParticleIndex);
		_offLevelsetIndex.SetValue(c_LevelsetIndex);
		_offParticleIndexMesh.SetValue(c_ParticleIndexMesh);
		_offLevelsetIndexMesh.SetValue(c_LevelsetIndexMesh);
	}
}
// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x00B8
public class FRecordedFrame : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FTransform>>                 _offTransforms                                                 = new ExternalOffset<TArray<FTransform>>(0x0000, false);       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offTransformIndices                                           = new ExternalOffset<TArray<int>>(0x0010, false);              // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offPreviousTransformIndices                                   = new ExternalOffset<TArray<int>>(0x0020, false);              // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<bool>>                       _offDisabledFlags                                              = new ExternalOffset<TArray<bool>>(0x0030, false);             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSolverCollisionData>>       _offCollisions                                                 = new ExternalOffset<TArray<FSolverCollisionData>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSolverBreakingData>>        _offBreakings                                                  = new ExternalOffset<TArray<FSolverBreakingData>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTimestamp                                                  = new ExternalOffset<float>(0x00B0);                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FTransform>                                  Transforms                                                     => _offTransforms.GetValue();
	public TArray<int>                                         TransformIndices                                               => _offTransformIndices.GetValue();
	public TArray<int>                                         PreviousTransformIndices                                       => _offPreviousTransformIndices.GetValue();
	public TArray<bool>                                        DisabledFlags                                                  => _offDisabledFlags.GetValue();
	public TArray<FSolverCollisionData>                        Collisions                                                     => _offCollisions.GetValue();
	public TArray<FSolverBreakingData>                         Breakings                                                      => _offBreakings.GetValue();
	public float                                               Timestamp                                                      => _offTimestamp.GetValue();
	#endregion

	public FRecordedFrame(TArray<FTransform> c_Transforms, TArray<int> c_TransformIndices, TArray<int> c_PreviousTransformIndices, TArray<bool> c_DisabledFlags, TArray<FSolverCollisionData> c_Collisions, TArray<FSolverBreakingData> c_Breakings, float c_Timestamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTransforms.SetValue(c_Transforms);
		_offTransformIndices.SetValue(c_TransformIndices);
		_offPreviousTransformIndices.SetValue(c_PreviousTransformIndices);
		_offDisabledFlags.SetValue(c_DisabledFlags);
		_offCollisions.SetValue(c_Collisions);
		_offBreakings.SetValue(c_Breakings);
		_offTimestamp.SetValue(c_Timestamp);
	}
}
// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0010
public class FRecordedTransformTrack : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FRecordedFrame>>             _offRecords                                                    = new ExternalOffset<TArray<FRecordedFrame>>(0x0000, false);   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FRecordedFrame>                              Records                                                        => _offRecords.GetValue();
	#endregion

	public FRecordedTransformTrack(TArray<FRecordedFrame> c_Records) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRecords.SetValue(c_Records);
	}
}

}