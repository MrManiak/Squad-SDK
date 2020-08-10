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

// Enum Foliage.EFoliageScaling
public enum EFoliageScaling : byte
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5
}

// Enum Foliage.EVertexColorMaskChannel
public enum EVertexColorMaskChannel : byte
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5
}

// Enum Foliage.FoliageVertexColorMask
public enum EFoliageVertexColorMask : byte
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
}

// Enum Foliage.ESimulationQuery
public enum ESimulationQuery : byte
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3
}

// Enum Foliage.ESimulationOverlap
public enum ESimulationOverlap : byte
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x000C
public class FFoliageVertexColorChannelMask : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offUseMask                                                    = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaskThreshold                                              = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offInvertMask                                                 = new ExternalOffset<char>(0x0008, false);                     // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MaskThreshold                                                  => _offMaskThreshold.GetValue();
	#endregion

	public FFoliageVertexColorChannelMask(float c_MaskThreshold) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaskThreshold.SetValue(c_MaskThreshold);
	}
}
// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
public class FFoliageTypeObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<UObject>                            _offFoliageTypeObject                                          = new ExternalOffset<UObject>(0x0000, true);                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UFoliageType>                       _offTypeInstance                                               = new ExternalOffset<UFoliageType>(0x0008, true);              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsAsset                                                   = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UClass>                             _offType                                                       = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UObject                                             FoliageTypeObject                                              => _offFoliageTypeObject.GetValue();
	public UFoliageType                                        TypeInstance                                                   => _offTypeInstance.GetValue();
	public byte/*(bool)*/                                      bIsAsset                                                       => _offbIsAsset.GetValue();
	public UClass                                              Type                                                           => _offType.GetValue();
	#endregion

	public FFoliageTypeObject(UObject c_FoliageTypeObject, UFoliageType c_TypeInstance, byte/*(bool)*/ c_bIsAsset, UClass c_Type) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFoliageTypeObject.SetValue(c_FoliageTypeObject);
		_offTypeInstance.SetValue(c_TypeInstance);
		_offbIsAsset.SetValue(c_bIsAsset);
		_offType.SetValue(c_Type);
	}
}
// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
public class FProceduralFoliageInstance : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offRotation                                                   = new ExternalOffset<FQuat>(0x0010, false);                    // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNormal                                                     = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAge                                                        = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offScale                                                      = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UFoliageType>                       _offType                                                       = new ExternalOffset<UFoliageType>(0x0038, true);              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FQuat                                               Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Normal                                                         => _offNormal.GetValue();
	public float                                               Age                                                            => _offAge.GetValue();
	public float                                               Scale                                                          => _offScale.GetValue();
	public UFoliageType                                        Type                                                           => _offType.GetValue();
	#endregion

	public FProceduralFoliageInstance(FVector c_Location, FQuat c_Rotation, FVector c_Normal, float c_Age, float c_Scale, UFoliageType c_Type) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offRotation.SetValue(c_Rotation);
		_offNormal.SetValue(c_Normal);
		_offAge.SetValue(c_Age);
		_offScale.SetValue(c_Scale);
		_offType.SetValue(c_Type);
	}
}

}