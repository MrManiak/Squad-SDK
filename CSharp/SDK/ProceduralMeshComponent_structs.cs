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

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
public enum EProcMeshSliceCapOption : byte
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
public class FProcMeshTangent : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offTangentX                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbFlipTangentY                                              = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             TangentX                                                       => _offTangentX.GetValue();
	public byte/*(bool)*/                                      bFlipTangentY                                                  => _offbFlipTangentY.GetValue();
	#endregion

	public FProcMeshTangent(FVector c_TangentX, byte/*(bool)*/ c_bFlipTangentY) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTangentX.SetValue(c_TangentX);
		_offbFlipTangentY.SetValue(c_bFlipTangentY);
	}
}
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x004C
public class FProcMeshVertex : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offPosition                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNormal                                                     = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FProcMeshTangent>                   _offTangent                                                    = new ExternalOffset<FProcMeshTangent>(0x0018, false);         // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                             _offColor                                                      = new ExternalOffset<FColor>(0x0028, false);                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV0                                                        = new ExternalOffset<FVector2D>(0x002C, false);                // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV1                                                        = new ExternalOffset<FVector2D>(0x0034, false);                // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV2                                                        = new ExternalOffset<FVector2D>(0x003C, false);                // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offUV3                                                        = new ExternalOffset<FVector2D>(0x0044, false);                // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Position                                                       => _offPosition.GetValue();
	public FVector                                             Normal                                                         => _offNormal.GetValue();
	public FProcMeshTangent                                    Tangent                                                        => _offTangent.GetValue();
	public FColor                                              Color                                                          => _offColor.GetValue();
	public FVector2D                                           UV0                                                            => _offUV0.GetValue();
	public FVector2D                                           UV1                                                            => _offUV1.GetValue();
	public FVector2D                                           UV2                                                            => _offUV2.GetValue();
	public FVector2D                                           UV3                                                            => _offUV3.GetValue();
	#endregion

	public FProcMeshVertex(FVector c_Position, FVector c_Normal, FProcMeshTangent c_Tangent, FColor c_Color, FVector2D c_UV0, FVector2D c_UV1, FVector2D c_UV2, FVector2D c_UV3) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPosition.SetValue(c_Position);
		_offNormal.SetValue(c_Normal);
		_offTangent.SetValue(c_Tangent);
		_offColor.SetValue(c_Color);
		_offUV0.SetValue(c_UV0);
		_offUV1.SetValue(c_UV1);
		_offUV2.SetValue(c_UV2);
		_offUV3.SetValue(c_UV3);
	}
}
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
public class FProcMeshSection : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FProcMeshVertex>>            _offProcVertexBuffer                                           = new ExternalOffset<TArray<FProcMeshVertex>>(0x0000, false);  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<uint32_t>>                   _offProcIndexBuffer                                            = new ExternalOffset<TArray<uint32_t>>(0x0010, false);         // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBox>                               _offSectionLocalBox                                            = new ExternalOffset<FBox>(0x0020, false);                     // 0x0020(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableCollision                                           = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSectionVisible                                            = new ExternalOffset<byte/*(bool)*/>(0x003D);                  // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FProcMeshVertex>                             ProcVertexBuffer                                               => _offProcVertexBuffer.GetValue();
	public TArray<uint32_t>                                    ProcIndexBuffer                                                => _offProcIndexBuffer.GetValue();
	public FBox                                                SectionLocalBox                                                => _offSectionLocalBox.GetValue();
	public byte/*(bool)*/                                      bEnableCollision                                               => _offbEnableCollision.GetValue();
	public byte/*(bool)*/                                      bSectionVisible                                                => _offbSectionVisible.GetValue();
	#endregion

	public FProcMeshSection(TArray<FProcMeshVertex> c_ProcVertexBuffer, TArray<uint32_t> c_ProcIndexBuffer, FBox c_SectionLocalBox, byte/*(bool)*/ c_bEnableCollision, byte/*(bool)*/ c_bSectionVisible) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offProcVertexBuffer.SetValue(c_ProcVertexBuffer);
		_offProcIndexBuffer.SetValue(c_ProcIndexBuffer);
		_offSectionLocalBox.SetValue(c_SectionLocalBox);
		_offbEnableCollision.SetValue(c_bEnableCollision);
		_offbSectionVisible.SetValue(c_bSectionVisible);
	}
}

}