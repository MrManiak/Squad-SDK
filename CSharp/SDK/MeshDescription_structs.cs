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

// Enum MeshDescription.EComputeNTBsOptions
public enum EComputeNTBsOptions : byte
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
public class FElementID : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offIDValue                                                    = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                 IDValue                                                        => _offIDValue.GetValue();
	#endregion

	public FElementID(int c_IDValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIDValue.SetValue(c_IDValue);
	}
}
// ScriptStruct MeshDescription.ElementID
// 0x0004
public class FElementID : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offIDValue                                                    = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                 IDValue                                                        => _offIDValue.GetValue();
	#endregion

	public FElementID(int c_IDValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIDValue.SetValue(c_IDValue);
	}
}
// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
public class FEdgeID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FEdgeID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
public class FVertexInstanceID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FVertexInstanceID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
public class FPolygonGroupID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FPolygonGroupID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
public class FPolygonID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FPolygonID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
public class FVertexID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FVertexID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MeshDescription.MeshTriangle
// 0x000C
public class FMeshTriangle : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID0                                          = new ExternalOffset<FVertexInstanceID>(0x0000, false);        // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID1                                          = new ExternalOffset<FVertexInstanceID>(0x0004, false);        // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID2                                          = new ExternalOffset<FVertexInstanceID>(0x0008, false);        // 0x0008(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexInstanceID                                   VertexInstanceID0                                              => _offVertexInstanceID0.GetValue();
	public FVertexInstanceID                                   VertexInstanceID1                                              => _offVertexInstanceID1.GetValue();
	public FVertexInstanceID                                   VertexInstanceID2                                              => _offVertexInstanceID2.GetValue();
	#endregion

	public FMeshTriangle(FVertexInstanceID c_VertexInstanceID0, FVertexInstanceID c_VertexInstanceID1, FVertexInstanceID c_VertexInstanceID2) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexInstanceID0.SetValue(c_VertexInstanceID0);
		_offVertexInstanceID1.SetValue(c_VertexInstanceID1);
		_offVertexInstanceID2.SetValue(c_VertexInstanceID2);
	}
}

}