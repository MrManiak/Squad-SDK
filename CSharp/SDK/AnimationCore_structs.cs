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

// Enum AnimationCore.ETransformConstraintType
public enum ETransformConstraintType : byte
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4
}

// Enum AnimationCore.EConstraintType
public enum EConstraintType : byte
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
public class FFilterOptionPerAxis : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbX                                                         = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbY                                                         = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbZ                                                         = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bX                                                             => _offbX.GetValue();
	public byte/*(bool)*/                                      bY                                                             => _offbY.GetValue();
	public byte/*(bool)*/                                      bZ                                                             => _offbZ.GetValue();
	#endregion

	public FFilterOptionPerAxis(byte/*(bool)*/ c_bX, byte/*(bool)*/ c_bY, byte/*(bool)*/ c_bZ) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbX.SetValue(c_bX);
		_offbY.SetValue(c_bY);
		_offbZ.SetValue(c_bZ);
	}
}
// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
public class FConstraintOffset : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offTranslation                                                = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FQuat>                              _offRotation                                                   = new ExternalOffset<FQuat>(0x0010, false);                    // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offParent                                                     = new ExternalOffset<FTransform>(0x0030, false);               // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Translation                                                    => _offTranslation.GetValue();
	public FQuat                                               Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	public FTransform                                          Parent                                                         => _offParent.GetValue();
	#endregion

	public FConstraintOffset(FVector c_Translation, FQuat c_Rotation, FVector c_Scale, FTransform c_Parent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTranslation.SetValue(c_Translation);
		_offRotation.SetValue(c_Rotation);
		_offScale.SetValue(c_Scale);
		_offParent.SetValue(c_Parent);
	}
}
// ScriptStruct AnimationCore.NodeObject
// 0x0010
public class FNodeObject : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offParentName                                                 = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	public FName                                               ParentName                                                     => _offParentName.GetValue();
	#endregion

	public FNodeObject(FName c_Name, FName c_ParentName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offParentName.SetValue(c_ParentName);
	}
}
// ScriptStruct AnimationCore.TransformFilter
// 0x0009
public class FTransformFilter : ExternalClass
{
	#region Offsets
	private ExternalOffset<FFilterOptionPerAxis>               _offTranslationFilter                                          = new ExternalOffset<FFilterOptionPerAxis>(0x0000, false);     // 0x0000(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offRotationFilter                                             = new ExternalOffset<FFilterOptionPerAxis>(0x0003, false);     // 0x0003(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offScaleFilter                                                = new ExternalOffset<FFilterOptionPerAxis>(0x0006, false);     // 0x0006(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFilterOptionPerAxis                                TranslationFilter                                              => _offTranslationFilter.GetValue();
	public FFilterOptionPerAxis                                RotationFilter                                                 => _offRotationFilter.GetValue();
	public FFilterOptionPerAxis                                ScaleFilter                                                    => _offScaleFilter.GetValue();
	#endregion

	public FTransformFilter(FFilterOptionPerAxis c_TranslationFilter, FFilterOptionPerAxis c_RotationFilter, FFilterOptionPerAxis c_ScaleFilter) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTranslationFilter.SetValue(c_TranslationFilter);
		_offRotationFilter.SetValue(c_RotationFilter);
		_offScaleFilter.SetValue(c_ScaleFilter);
	}
}
// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
public class FConstraintDescriptor : ExternalClass
{
	#region Offsets
	private ExternalOffset<EConstraintType>                    _offType                                                       = new ExternalOffset<EConstraintType>(0x0000, false);          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EConstraintType                                     Type                                                           => _offType.GetValue();
	#endregion

	public FConstraintDescriptor(EConstraintType c_Type) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offType.SetValue(c_Type);
	}
}
// ScriptStruct AnimationCore.Axis
// 0x0010
public class FAxis : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offAxis                                                       = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbInLocalSpace                                              = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Axis                                                           => _offAxis.GetValue();
	public byte/*(bool)*/                                      bInLocalSpace                                                  => _offbInLocalSpace.GetValue();
	#endregion

	public FAxis(FVector c_Axis, byte/*(bool)*/ c_bInLocalSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAxis.SetValue(c_Axis);
		_offbInLocalSpace.SetValue(c_bInLocalSpace);
	}
}
// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
public class FConstraintDescription : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbTranslation                                               = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRotation                                                  = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbScale                                                     = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbParent                                                    = new ExternalOffset<byte/*(bool)*/>(0x0003);                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offTranslationAxes                                            = new ExternalOffset<FFilterOptionPerAxis>(0x0004, false);     // 0x0004(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offRotationAxes                                               = new ExternalOffset<FFilterOptionPerAxis>(0x0007, false);     // 0x0007(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offScaleAxes                                                  = new ExternalOffset<FFilterOptionPerAxis>(0x000A, false);     // 0x000A(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bTranslation                                                   => _offbTranslation.GetValue();
	public byte/*(bool)*/                                      bRotation                                                      => _offbRotation.GetValue();
	public byte/*(bool)*/                                      bScale                                                         => _offbScale.GetValue();
	public byte/*(bool)*/                                      bParent                                                        => _offbParent.GetValue();
	public FFilterOptionPerAxis                                TranslationAxes                                                => _offTranslationAxes.GetValue();
	public FFilterOptionPerAxis                                RotationAxes                                                   => _offRotationAxes.GetValue();
	public FFilterOptionPerAxis                                ScaleAxes                                                      => _offScaleAxes.GetValue();
	#endregion

	public FConstraintDescription(byte/*(bool)*/ c_bTranslation, byte/*(bool)*/ c_bRotation, byte/*(bool)*/ c_bScale, byte/*(bool)*/ c_bParent, FFilterOptionPerAxis c_TranslationAxes, FFilterOptionPerAxis c_RotationAxes, FFilterOptionPerAxis c_ScaleAxes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbTranslation.SetValue(c_bTranslation);
		_offbRotation.SetValue(c_bRotation);
		_offbScale.SetValue(c_bScale);
		_offbParent.SetValue(c_bParent);
		_offTranslationAxes.SetValue(c_TranslationAxes);
		_offRotationAxes.SetValue(c_RotationAxes);
		_offScaleAxes.SetValue(c_ScaleAxes);
	}
}
// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
public class FNodeHierarchyData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FNodeObject>>                _offNodes                                                      = new ExternalOffset<TArray<FNodeObject>>(0x0000, false);      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FTransform>>                 _offTransforms                                                 = new ExternalOffset<TArray<FTransform>>(0x0010, false);       // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FName, int>                            _offNodeNameToIndexMapping                                     = new ExternalOffset<TMap<int>>(0x0020, false);                // 0x0020(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FNodeObject>                                 Nodes                                                          => _offNodes.GetValue();
	public TArray<FTransform>                                  Transforms                                                     => _offTransforms.GetValue();
	#endregion

	public FNodeHierarchyData(TArray<FNodeObject> c_Nodes, TArray<FTransform> c_Transforms) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNodes.SetValue(c_Nodes);
		_offTransforms.SetValue(c_Transforms);
	}
}
// ScriptStruct AnimationCore.EulerTransform
// 0x0024
public class FEulerTransform : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x000C, false);                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	#endregion

	public FEulerTransform(FVector c_Location, FRotator c_Rotation, FVector c_Scale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offRotation.SetValue(c_Rotation);
		_offScale.SetValue(c_Scale);
	}
}
// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
public class FAimConstraintDescription : FConstraintDescriptionEx
{
	#region Offsets
	private ExternalOffset<FAxis>                              _offLookAt_Axis                                                = new ExternalOffset<FAxis>(0x0010, false);                    // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offLookUp_Axis                                                = new ExternalOffset<FAxis>(0x0020, false);                    // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseLookUp                                                 = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLookUpTarget                                               = new ExternalOffset<FVector>(0x0034, false);                  // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAxis                                               LookAt_Axis                                                    => _offLookAt_Axis.GetValue();
	public FAxis                                               LookUp_Axis                                                    => _offLookUp_Axis.GetValue();
	public byte/*(bool)*/                                      bUseLookUp                                                     => _offbUseLookUp.GetValue();
	public FVector                                             LookUpTarget                                                   => _offLookUpTarget.GetValue();
	#endregion

	public FAimConstraintDescription(FAxis c_LookAt_Axis, FAxis c_LookUp_Axis, byte/*(bool)*/ c_bUseLookUp, FVector c_LookUpTarget) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLookAt_Axis.SetValue(c_LookAt_Axis);
		_offLookUp_Axis.SetValue(c_LookUp_Axis);
		_offbUseLookUp.SetValue(c_bUseLookUp);
		_offLookUpTarget.SetValue(c_LookUpTarget);
	}
}
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
public class FNodeHierarchyWithUserData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FNodeHierarchyData>                 _offHierarchy                                                  = new ExternalOffset<FNodeHierarchyData>(0x0008, false);       // 0x0008(0x0070) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FNodeHierarchyData                                  Hierarchy                                                      => _offHierarchy.GetValue();
	#endregion

	public FNodeHierarchyWithUserData(FNodeHierarchyData c_Hierarchy) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHierarchy.SetValue(c_Hierarchy);
	}
}
// ScriptStruct AnimationCore.ConstraintData
// 0x0080
public class FConstraintData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FConstraintDescriptor>              _offConstraint                                                 = new ExternalOffset<FConstraintDescriptor>(0x0000, false);    // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWeight                                                     = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMaintainOffset                                            = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offOffset                                                     = new ExternalOffset<FTransform>(0x0020, false);               // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offCurrentTransform                                           = new ExternalOffset<FTransform>(0x0050, false);               // 0x0050(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FConstraintDescriptor                               Constraint                                                     => _offConstraint.GetValue();
	public float                                               Weight                                                         => _offWeight.GetValue();
	public byte/*(bool)*/                                      bMaintainOffset                                                => _offbMaintainOffset.GetValue();
	public FTransform                                          Offset                                                         => _offOffset.GetValue();
	public FTransform                                          CurrentTransform                                               => _offCurrentTransform.GetValue();
	#endregion

	public FConstraintData(FConstraintDescriptor c_Constraint, float c_Weight, byte/*(bool)*/ c_bMaintainOffset, FTransform c_Offset, FTransform c_CurrentTransform) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offConstraint.SetValue(c_Constraint);
		_offWeight.SetValue(c_Weight);
		_offbMaintainOffset.SetValue(c_bMaintainOffset);
		_offOffset.SetValue(c_Offset);
		_offCurrentTransform.SetValue(c_CurrentTransform);
	}
}
// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
public class FTransformConstraint : ExternalClass
{
	#region Offsets
	private ExternalOffset<FConstraintDescription>             _offOperator                                                   = new ExternalOffset<FConstraintDescription>(0x0000, false);   // 0x0000(0x000D) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSourceNode                                                 = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTargetNode                                                 = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWeight                                                     = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMaintainOffset                                            = new ExternalOffset<byte/*(bool)*/>(0x0024);                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FConstraintDescription                              Operator                                                       => _offOperator.GetValue();
	public FName                                               SourceNode                                                     => _offSourceNode.GetValue();
	public FName                                               TargetNode                                                     => _offTargetNode.GetValue();
	public float                                               Weight                                                         => _offWeight.GetValue();
	public byte/*(bool)*/                                      bMaintainOffset                                                => _offbMaintainOffset.GetValue();
	#endregion

	public FTransformConstraint(FConstraintDescription c_Operator, FName c_SourceNode, FName c_TargetNode, float c_Weight, byte/*(bool)*/ c_bMaintainOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOperator.SetValue(c_Operator);
		_offSourceNode.SetValue(c_SourceNode);
		_offTargetNode.SetValue(c_TargetNode);
		_offWeight.SetValue(c_Weight);
		_offbMaintainOffset.SetValue(c_bMaintainOffset);
	}
}
// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
public class FTransformConstraintDescription : FConstraintDescriptionEx
{
	#region Offsets
	private ExternalOffset<ETransformConstraintType>           _offTransformType                                              = new ExternalOffset<ETransformConstraintType>(0x0010, false); // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ETransformConstraintType                            TransformType                                                  => _offTransformType.GetValue();
	#endregion

	public FTransformConstraintDescription(ETransformConstraintType c_TransformType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTransformType.SetValue(c_TransformType);
	}
}

}