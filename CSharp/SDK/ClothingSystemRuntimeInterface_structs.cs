// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008
public class FClothCollisionPrim_SphereConnection : ExternalClass
{
	#region Offsets
//	private ExternalOffset<int>                                _offSphereIndices[0x2]                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FClothCollisionPrim_SphereConnection() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014
public class FClothCollisionPrim_Sphere : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offBoneIndex                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRadius                                                     = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocalPosition                                              = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 BoneIndex                                                      => _offBoneIndex.GetValue();
	public float                                               Radius                                                         => _offRadius.GetValue();
	public FVector                                             LocalPosition                                                  => _offLocalPosition.GetValue();
	#endregion

	public FClothCollisionPrim_Sphere(int c_BoneIndex, float c_Radius, FVector c_LocalPosition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneIndex.SetValue(c_BoneIndex);
		_offRadius.SetValue(c_Radius);
		_offLocalPosition.SetValue(c_LocalPosition);
	}
}
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018
public class FClothCollisionPrim_Convex : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FPlane>>                     _offPlanes                                                     = new ExternalOffset<TArray<FPlane>>(0x0000, false);           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offBoneIndex                                                  = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FPlane>                                      Planes                                                         => _offPlanes.GetValue();
	public int                                                 BoneIndex                                                      => _offBoneIndex.GetValue();
	#endregion

	public FClothCollisionPrim_Convex(TArray<FPlane> c_Planes, int c_BoneIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlanes.SetValue(c_Planes);
		_offBoneIndex.SetValue(c_BoneIndex);
	}
}
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0030
public class FClothCollisionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FClothCollisionPrim_Sphere>> _offSpheres                                                    = new ExternalOffset<TArray<FClothCollisionPrim_Sphere>>(0x0000, false); // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FClothCollisionPrim_SphereConnection>> _offSphereConnections                                          = new ExternalOffset<TArray<FClothCollisionPrim_SphereConnection>>(0x0010, false); // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FClothCollisionPrim_Convex>> _offConvexes                                                   = new ExternalOffset<TArray<FClothCollisionPrim_Convex>>(0x0020, false); // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FClothCollisionPrim_Sphere>                  Spheres                                                        => _offSpheres.GetValue();
	public TArray<FClothCollisionPrim_SphereConnection>        SphereConnections                                              => _offSphereConnections.GetValue();
	public TArray<FClothCollisionPrim_Convex>                  Convexes                                                       => _offConvexes.GetValue();
	#endregion

	public FClothCollisionData(TArray<FClothCollisionPrim_Sphere> c_Spheres, TArray<FClothCollisionPrim_SphereConnection> c_SphereConnections, TArray<FClothCollisionPrim_Convex> c_Convexes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpheres.SetValue(c_Spheres);
		_offSphereConnections.SetValue(c_SphereConnections);
		_offConvexes.SetValue(c_Convexes);
	}
}

}