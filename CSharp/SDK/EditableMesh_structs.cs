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

// Enum EditableMesh.ETriangleTessellationMode
public enum ETriangleTessellationMode : byte
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2
}

// Enum EditableMesh.EInsetPolygonsMode
public enum EInsetPolygonsMode : byte
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3
}

// Enum EditableMesh.EPolygonEdgeHardness
public enum EPolygonEdgeHardness : byte
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4
}

// Enum EditableMesh.EMeshElementAttributeType
public enum EMeshElementAttributeType : byte
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8
}

// Enum EditableMesh.EMeshTopologyChange
public enum EMeshTopologyChange : byte
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2
}

// Enum EditableMesh.EMeshModificationType
public enum EMeshModificationType : byte
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0050
public class FMeshElementAttributeValue : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMeshElementAttributeValue() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0060
public class FMeshElementAttributeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offAttributeName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAttributeIndex                                             = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeValue>         _offAttributeValue                                             = new ExternalOffset<FMeshElementAttributeValue>(0x0010, false); // 0x0010(0x0050) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               AttributeName                                                  => _offAttributeName.GetValue();
	public int                                                 AttributeIndex                                                 => _offAttributeIndex.GetValue();
	public FMeshElementAttributeValue                          AttributeValue                                                 => _offAttributeValue.GetValue();
	#endregion

	public FMeshElementAttributeData(FName c_AttributeName, int c_AttributeIndex, FMeshElementAttributeValue c_AttributeValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttributeName.SetValue(c_AttributeName);
		_offAttributeIndex.SetValue(c_AttributeIndex);
		_offAttributeValue.SetValue(c_AttributeValue);
	}
}
// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0010
public class FMeshElementAttributeList : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FMeshElementAttributeData>>  _offAttributes                                                 = new ExternalOffset<TArray<FMeshElementAttributeData>>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FMeshElementAttributeData>                   Attributes                                                     => _offAttributes.GetValue();
	#endregion

	public FMeshElementAttributeList(TArray<FMeshElementAttributeData> c_Attributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttributes.SetValue(c_Attributes);
	}
}
// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0018
public class FVertexAndAttributes : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID                                           = new ExternalOffset<FVertexInstanceID>(0x0000, false);        // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offVertexID                                                   = new ExternalOffset<FVertexID>(0x0004, false);                // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offPolygonVertexAttributes                                    = new ExternalOffset<FMeshElementAttributeList>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexInstanceID                                   VertexInstanceID                                               => _offVertexInstanceID.GetValue();
	public FVertexID                                           VertexID                                                       => _offVertexID.GetValue();
	public FMeshElementAttributeList                           PolygonVertexAttributes                                        => _offPolygonVertexAttributes.GetValue();
	#endregion

	public FVertexAndAttributes(FVertexInstanceID c_VertexInstanceID, FVertexID c_VertexID, FMeshElementAttributeList c_PolygonVertexAttributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexInstanceID.SetValue(c_VertexInstanceID);
		_offVertexID.SetValue(c_VertexID);
		_offPolygonVertexAttributes.SetValue(c_PolygonVertexAttributes);
	}
}
// ScriptStruct EditableMesh.VertexPair
// 0x0008
public class FVertexPair : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexID>                          _offVertexID0                                                  = new ExternalOffset<FVertexID>(0x0000, false);                // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offVertexID1                                                  = new ExternalOffset<FVertexID>(0x0004, false);                // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexID                                           VertexID0                                                      => _offVertexID0.GetValue();
	public FVertexID                                           VertexID1                                                      => _offVertexID1.GetValue();
	#endregion

	public FVertexPair(FVertexID c_VertexID0, FVertexID c_VertexID1) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexID0.SetValue(c_VertexID0);
		_offVertexID1.SetValue(c_VertexID1);
	}
}
// ScriptStruct EditableMesh.EdgeToCreate
// 0x0030
public class FEdgeToCreate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexID>                          _offVertexID0                                                  = new ExternalOffset<FVertexID>(0x0000, false);                // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offVertexID1                                                  = new ExternalOffset<FVertexID>(0x0004, false);                // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPolygonID>>                 _offConnectedPolygons                                          = new ExternalOffset<TArray<FPolygonID>>(0x0008, false);       // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offEdgeAttributes                                             = new ExternalOffset<FMeshElementAttributeList>(0x0018, false); // 0x0018(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FEdgeID>                            _offOriginalEdgeID                                             = new ExternalOffset<FEdgeID>(0x0028, false);                  // 0x0028(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexID                                           VertexID0                                                      => _offVertexID0.GetValue();
	public FVertexID                                           VertexID1                                                      => _offVertexID1.GetValue();
	public TArray<FPolygonID>                                  ConnectedPolygons                                              => _offConnectedPolygons.GetValue();
	public FMeshElementAttributeList                           EdgeAttributes                                                 => _offEdgeAttributes.GetValue();
	public FEdgeID                                             OriginalEdgeID                                                 => _offOriginalEdgeID.GetValue();
	#endregion

	public FEdgeToCreate(FVertexID c_VertexID0, FVertexID c_VertexID1, TArray<FPolygonID> c_ConnectedPolygons, FMeshElementAttributeList c_EdgeAttributes, FEdgeID c_OriginalEdgeID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexID0.SetValue(c_VertexID0);
		_offVertexID1.SetValue(c_VertexID1);
		_offConnectedPolygons.SetValue(c_ConnectedPolygons);
		_offEdgeAttributes.SetValue(c_EdgeAttributes);
		_offOriginalEdgeID.SetValue(c_OriginalEdgeID);
	}
}
// ScriptStruct EditableMesh.PolygonToSplit
// 0x0018
public class FPolygonToSplit : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonID>                         _offPolygonID                                                  = new ExternalOffset<FPolygonID>(0x0000, false);               // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVertexPair>>                _offVertexPairsToSplitAt                                       = new ExternalOffset<TArray<FVertexPair>>(0x0008, false);      // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonID                                          PolygonID                                                      => _offPolygonID.GetValue();
	public TArray<FVertexPair>                                 VertexPairsToSplitAt                                           => _offVertexPairsToSplitAt.GetValue();
	#endregion

	public FPolygonToSplit(FPolygonID c_PolygonID, TArray<FVertexPair> c_VertexPairsToSplitAt) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonID.SetValue(c_PolygonID);
		_offVertexPairsToSplitAt.SetValue(c_VertexPairsToSplitAt);
	}
}
// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0020
public class FVertexInstanceToCreate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexID>                          _offVertexID                                                   = new ExternalOffset<FVertexID>(0x0000, false);                // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offVertexInstanceAttributes                                   = new ExternalOffset<FMeshElementAttributeList>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexInstanceID>                  _offOriginalVertexInstanceID                                   = new ExternalOffset<FVertexInstanceID>(0x0018, false);        // 0x0018(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexID                                           VertexID                                                       => _offVertexID.GetValue();
	public FMeshElementAttributeList                           VertexInstanceAttributes                                       => _offVertexInstanceAttributes.GetValue();
	public FVertexInstanceID                                   OriginalVertexInstanceID                                       => _offOriginalVertexInstanceID.GetValue();
	#endregion

	public FVertexInstanceToCreate(FVertexID c_VertexID, FMeshElementAttributeList c_VertexInstanceAttributes, FVertexInstanceID c_OriginalVertexInstanceID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexID.SetValue(c_VertexID);
		_offVertexInstanceAttributes.SetValue(c_VertexInstanceAttributes);
		_offOriginalVertexInstanceID.SetValue(c_OriginalVertexInstanceID);
	}
}
// ScriptStruct EditableMesh.AttributesForVertex
// 0x0018
public class FAttributesForVertex : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexID>                          _offVertexID                                                   = new ExternalOffset<FVertexID>(0x0000, false);                // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offVertexAttributes                                           = new ExternalOffset<FMeshElementAttributeList>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexID                                           VertexID                                                       => _offVertexID.GetValue();
	public FMeshElementAttributeList                           VertexAttributes                                               => _offVertexAttributes.GetValue();
	#endregion

	public FAttributesForVertex(FVertexID c_VertexID, FMeshElementAttributeList c_VertexAttributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexID.SetValue(c_VertexID);
		_offVertexAttributes.SetValue(c_VertexAttributes);
	}
}
// ScriptStruct EditableMesh.VertexToCreate
// 0x0018
public class FVertexToCreate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMeshElementAttributeList>          _offVertexAttributes                                           = new ExternalOffset<FMeshElementAttributeList>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offOriginalVertexID                                           = new ExternalOffset<FVertexID>(0x0010, false);                // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMeshElementAttributeList                           VertexAttributes                                               => _offVertexAttributes.GetValue();
	public FVertexID                                           OriginalVertexID                                               => _offOriginalVertexID.GetValue();
	#endregion

	public FVertexToCreate(FMeshElementAttributeList c_VertexAttributes, FVertexID c_OriginalVertexID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexAttributes.SetValue(c_VertexAttributes);
		_offOriginalVertexID.SetValue(c_OriginalVertexID);
	}
}
// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0018
public class FAttributesForVertexInstance : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID                                           = new ExternalOffset<FVertexInstanceID>(0x0000, false);        // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offVertexInstanceAttributes                                   = new ExternalOffset<FMeshElementAttributeList>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexInstanceID                                   VertexInstanceID                                               => _offVertexInstanceID.GetValue();
	public FMeshElementAttributeList                           VertexInstanceAttributes                                       => _offVertexInstanceAttributes.GetValue();
	#endregion

	public FAttributesForVertexInstance(FVertexInstanceID c_VertexInstanceID, FMeshElementAttributeList c_VertexInstanceAttributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexInstanceID.SetValue(c_VertexInstanceID);
		_offVertexInstanceAttributes.SetValue(c_VertexInstanceAttributes);
	}
}
// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0010
public class FVertexAttributesForPolygonHole : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FMeshElementAttributeList>>  _offVertexAttributeList                                        = new ExternalOffset<TArray<FMeshElementAttributeList>>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FMeshElementAttributeList>                   VertexAttributeList                                            => _offVertexAttributeList.GetValue();
	#endregion

	public FVertexAttributesForPolygonHole(TArray<FMeshElementAttributeList> c_VertexAttributeList) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexAttributeList.SetValue(c_VertexAttributeList);
	}
}
// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0028
public class FVertexAttributesForPolygon : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonID>                         _offPolygonID                                                  = new ExternalOffset<FPolygonID>(0x0000, false);               // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FMeshElementAttributeList>>  _offPerimeterVertexAttributeLists                              = new ExternalOffset<TArray<FMeshElementAttributeList>>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVertexAttributesForPolygonHole>> _offVertexAttributeListsForEachHole                            = new ExternalOffset<TArray<FVertexAttributesForPolygonHole>>(0x0018, false); // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonID                                          PolygonID                                                      => _offPolygonID.GetValue();
	public TArray<FMeshElementAttributeList>                   PerimeterVertexAttributeLists                                  => _offPerimeterVertexAttributeLists.GetValue();
	public TArray<FVertexAttributesForPolygonHole>             VertexAttributeListsForEachHole                                => _offVertexAttributeListsForEachHole.GetValue();
	#endregion

	public FVertexAttributesForPolygon(FPolygonID c_PolygonID, TArray<FMeshElementAttributeList> c_PerimeterVertexAttributeLists, TArray<FVertexAttributesForPolygonHole> c_VertexAttributeListsForEachHole) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonID.SetValue(c_PolygonID);
		_offPerimeterVertexAttributeLists.SetValue(c_PerimeterVertexAttributeLists);
		_offVertexAttributeListsForEachHole.SetValue(c_VertexAttributeListsForEachHole);
	}
}
// ScriptStruct EditableMesh.SubdividedQuad
// 0x00D0
public class FSubdividedQuad : ExternalClass
{
	#region Offsets
	private ExternalOffset<FSubdividedQuadVertex>              _offQuadVertex0                                                = new ExternalOffset<FSubdividedQuadVertex>(0x0000, false);    // 0x0000(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSubdividedQuadVertex>              _offQuadVertex1                                                = new ExternalOffset<FSubdividedQuadVertex>(0x0034, false);    // 0x0034(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSubdividedQuadVertex>              _offQuadVertex2                                                = new ExternalOffset<FSubdividedQuadVertex>(0x0068, false);    // 0x0068(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSubdividedQuadVertex>              _offQuadVertex3                                                = new ExternalOffset<FSubdividedQuadVertex>(0x009C, false);    // 0x009C(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSubdividedQuadVertex                               QuadVertex0                                                    => _offQuadVertex0.GetValue();
	public FSubdividedQuadVertex                               QuadVertex1                                                    => _offQuadVertex1.GetValue();
	public FSubdividedQuadVertex                               QuadVertex2                                                    => _offQuadVertex2.GetValue();
	public FSubdividedQuadVertex                               QuadVertex3                                                    => _offQuadVertex3.GetValue();
	#endregion

	public FSubdividedQuad(FSubdividedQuadVertex c_QuadVertex0, FSubdividedQuadVertex c_QuadVertex1, FSubdividedQuadVertex c_QuadVertex2, FSubdividedQuadVertex c_QuadVertex3) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offQuadVertex0.SetValue(c_QuadVertex0);
		_offQuadVertex1.SetValue(c_QuadVertex1);
		_offQuadVertex2.SetValue(c_QuadVertex2);
		_offQuadVertex3.SetValue(c_QuadVertex3);
	}
}
// ScriptStruct EditableMesh.VerticesForEdge
// 0x000C
public class FVerticesForEdge : ExternalClass
{
	#region Offsets
	private ExternalOffset<FEdgeID>                            _offEdgeID                                                     = new ExternalOffset<FEdgeID>(0x0000, false);                  // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offNewVertexID0                                               = new ExternalOffset<FVertexID>(0x0004, false);                // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexID>                          _offNewVertexID1                                               = new ExternalOffset<FVertexID>(0x0008, false);                // 0x0008(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEdgeID                                             EdgeID                                                         => _offEdgeID.GetValue();
	public FVertexID                                           NewVertexID0                                                   => _offNewVertexID0.GetValue();
	public FVertexID                                           NewVertexID1                                                   => _offNewVertexID1.GetValue();
	#endregion

	public FVerticesForEdge(FEdgeID c_EdgeID, FVertexID c_NewVertexID0, FVertexID c_NewVertexID1) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEdgeID.SetValue(c_EdgeID);
		_offNewVertexID0.SetValue(c_NewVertexID0);
		_offNewVertexID1.SetValue(c_NewVertexID1);
	}
}
// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0010
public class FSubdivisionLimitSection : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSubdividedQuad>>            _offSubdividedQuads                                            = new ExternalOffset<TArray<FSubdividedQuad>>(0x0000, false);  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSubdividedQuad>                             SubdividedQuads                                                => _offSubdividedQuads.GetValue();
	#endregion

	public FSubdivisionLimitSection(TArray<FSubdividedQuad> c_SubdividedQuads) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSubdividedQuads.SetValue(c_SubdividedQuads);
	}
}
// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x000C
public class FSubdividedWireEdge : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offEdgeVertex0PositionIndex                                   = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offEdgeVertex1PositionIndex                                   = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 EdgeVertex0PositionIndex                                       => _offEdgeVertex0PositionIndex.GetValue();
	public int                                                 EdgeVertex1PositionIndex                                       => _offEdgeVertex1PositionIndex.GetValue();
	#endregion

	public FSubdividedWireEdge(int c_EdgeVertex0PositionIndex, int c_EdgeVertex1PositionIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEdgeVertex0PositionIndex.SetValue(c_EdgeVertex0PositionIndex);
		_offEdgeVertex1PositionIndex.SetValue(c_EdgeVertex1PositionIndex);
	}
}
// ScriptStruct EditableMesh.AttributesForEdge
// 0x0018
public class FAttributesForEdge : ExternalClass
{
	#region Offsets
	private ExternalOffset<FEdgeID>                            _offEdgeID                                                     = new ExternalOffset<FEdgeID>(0x0000, false);                  // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMeshElementAttributeList>          _offEdgeAttributes                                             = new ExternalOffset<FMeshElementAttributeList>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEdgeID                                             EdgeID                                                         => _offEdgeID.GetValue();
	public FMeshElementAttributeList                           EdgeAttributes                                                 => _offEdgeAttributes.GetValue();
	#endregion

	public FAttributesForEdge(FEdgeID c_EdgeID, FMeshElementAttributeList c_EdgeAttributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEdgeID.SetValue(c_EdgeID);
		_offEdgeAttributes.SetValue(c_EdgeAttributes);
	}
}
// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0030
public class FSubdivisionLimitData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FVector>>                    _offVertexPositions                                            = new ExternalOffset<TArray<FVector>>(0x0000, false);          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSubdivisionLimitSection>>   _offSections                                                   = new ExternalOffset<TArray<FSubdivisionLimitSection>>(0x0010, false); // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSubdividedWireEdge>>        _offSubdividedWireEdges                                        = new ExternalOffset<TArray<FSubdividedWireEdge>>(0x0020, false); // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FVector>                                     VertexPositions                                                => _offVertexPositions.GetValue();
	public TArray<FSubdivisionLimitSection>                    Sections                                                       => _offSections.GetValue();
	public TArray<FSubdividedWireEdge>                         SubdividedWireEdges                                            => _offSubdividedWireEdges.GetValue();
	#endregion

	public FSubdivisionLimitData(TArray<FVector> c_VertexPositions, TArray<FSubdivisionLimitSection> c_Sections, TArray<FSubdividedWireEdge> c_SubdividedWireEdges) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexPositions.SetValue(c_VertexPositions);
		_offSections.SetValue(c_Sections);
		_offSubdividedWireEdges.SetValue(c_SubdividedWireEdges);
	}
}
// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0048
public class FRenderingPolygonGroup : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offRenderingSectionIndex                                      = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaterialIndex                                              = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxTriangles                                               = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public uint                                                RenderingSectionIndex                                          => _offRenderingSectionIndex.GetValue();
	public int                                                 MaterialIndex                                                  => _offMaterialIndex.GetValue();
	public int                                                 MaxTriangles                                                   => _offMaxTriangles.GetValue();
	#endregion

	public FRenderingPolygonGroup(uint c_RenderingSectionIndex, int c_MaterialIndex, int c_MaxTriangles) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRenderingSectionIndex.SetValue(c_RenderingSectionIndex);
		_offMaterialIndex.SetValue(c_MaterialIndex);
		_offMaxTriangles.SetValue(c_MaxTriangles);
	}
}
// ScriptStruct EditableMesh.VertexToMove
// 0x0010
public class FVertexToMove : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVertexID>                          _offVertexID                                                   = new ExternalOffset<FVertexID>(0x0000, false);                // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNewVertexPosition                                          = new ExternalOffset<FVector>(0x0004, false);                  // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVertexID                                           VertexID                                                       => _offVertexID.GetValue();
	public FVector                                             NewVertexPosition                                              => _offNewVertexPosition.GetValue();
	#endregion

	public FVertexToMove(FVertexID c_VertexID, FVector c_NewVertexPosition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexID.SetValue(c_VertexID);
		_offNewVertexPosition.SetValue(c_NewVertexPosition);
	}
}
// ScriptStruct EditableMesh.TriangleID
// 0x0000 (0x0004 - 0x0004)
public class FTriangleID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FTriangleID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct EditableMesh.RenderingPolygon
// 0x0018
public class FRenderingPolygon : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonGroupID>                    _offPolygonGroupID                                             = new ExternalOffset<FPolygonGroupID>(0x0000, false);          // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FTriangleID>>                _offTriangulatedPolygonTriangleIndices                         = new ExternalOffset<TArray<FTriangleID>>(0x0008, false);      // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonGroupID                                     PolygonGroupID                                                 => _offPolygonGroupID.GetValue();
	public TArray<FTriangleID>                                 TriangulatedPolygonTriangleIndices                             => _offTriangulatedPolygonTriangleIndices.GetValue();
	#endregion

	public FRenderingPolygon(FPolygonGroupID c_PolygonGroupID, TArray<FTriangleID> c_TriangulatedPolygonTriangleIndices) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonGroupID.SetValue(c_PolygonGroupID);
		_offTriangulatedPolygonTriangleIndices.SetValue(c_TriangulatedPolygonTriangleIndices);
	}
}
// ScriptStruct EditableMesh.PolygonToCreate
// 0x0020
public class FPolygonToCreate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonGroupID>                    _offPolygonGroupID                                             = new ExternalOffset<FPolygonGroupID>(0x0000, false);          // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVertexAndAttributes>>       _offPerimeterVertices                                          = new ExternalOffset<TArray<FVertexAndAttributes>>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPolygonID>                         _offOriginalPolygonID                                          = new ExternalOffset<FPolygonID>(0x0018, false);               // 0x0018(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPolygonEdgeHardness>               _offPolygonEdgeHardness                                        = new ExternalOffset<EPolygonEdgeHardness>(0x001C, false);     // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonGroupID                                     PolygonGroupID                                                 => _offPolygonGroupID.GetValue();
	public TArray<FVertexAndAttributes>                        PerimeterVertices                                              => _offPerimeterVertices.GetValue();
	public FPolygonID                                          OriginalPolygonID                                              => _offOriginalPolygonID.GetValue();
	public EPolygonEdgeHardness                                PolygonEdgeHardness                                            => _offPolygonEdgeHardness.GetValue();
	#endregion

	public FPolygonToCreate(FPolygonGroupID c_PolygonGroupID, TArray<FVertexAndAttributes> c_PerimeterVertices, FPolygonID c_OriginalPolygonID, EPolygonEdgeHardness c_PolygonEdgeHardness) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonGroupID.SetValue(c_PolygonGroupID);
		_offPerimeterVertices.SetValue(c_PerimeterVertices);
		_offOriginalPolygonID.SetValue(c_OriginalPolygonID);
		_offPolygonEdgeHardness.SetValue(c_PolygonEdgeHardness);
	}
}
// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0018
public class FPolygonGroupToCreate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMeshElementAttributeList>          _offPolygonGroupAttributes                                     = new ExternalOffset<FMeshElementAttributeList>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FPolygonGroupID>                    _offOriginalPolygonGroupID                                     = new ExternalOffset<FPolygonGroupID>(0x0010, false);          // 0x0010(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMeshElementAttributeList                           PolygonGroupAttributes                                         => _offPolygonGroupAttributes.GetValue();
	public FPolygonGroupID                                     OriginalPolygonGroupID                                         => _offOriginalPolygonGroupID.GetValue();
	#endregion

	public FPolygonGroupToCreate(FMeshElementAttributeList c_PolygonGroupAttributes, FPolygonGroupID c_OriginalPolygonGroupID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonGroupAttributes.SetValue(c_PolygonGroupAttributes);
		_offOriginalPolygonGroupID.SetValue(c_OriginalPolygonGroupID);
	}
}
// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0008
public class FVertexIndexAndInstanceID : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offContourIndex                                               = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVertexInstanceID>                  _offVertexInstanceID                                           = new ExternalOffset<FVertexInstanceID>(0x0004, false);        // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ContourIndex                                                   => _offContourIndex.GetValue();
	public FVertexInstanceID                                   VertexInstanceID                                               => _offVertexInstanceID.GetValue();
	#endregion

	public FVertexIndexAndInstanceID(int c_ContourIndex, FVertexInstanceID c_VertexInstanceID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offContourIndex.SetValue(c_ContourIndex);
		_offVertexInstanceID.SetValue(c_VertexInstanceID);
	}
}
// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0010
public class FVertexInstancesForPolygonHole : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FVertexIndexAndInstanceID>>  _offVertexIndicesAndInstanceIDs                                = new ExternalOffset<TArray<FVertexIndexAndInstanceID>>(0x0000, false); // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FVertexIndexAndInstanceID>                   VertexIndicesAndInstanceIDs                                    => _offVertexIndicesAndInstanceIDs.GetValue();
	#endregion

	public FVertexInstancesForPolygonHole(TArray<FVertexIndexAndInstanceID> c_VertexIndicesAndInstanceIDs) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertexIndicesAndInstanceIDs.SetValue(c_VertexIndicesAndInstanceIDs);
	}
}
// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0028
public class FChangeVertexInstancesForPolygon : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonID>                         _offPolygonID                                                  = new ExternalOffset<FPolygonID>(0x0000, false);               // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVertexIndexAndInstanceID>>  _offPerimeterVertexIndicesAndInstanceIDs                       = new ExternalOffset<TArray<FVertexIndexAndInstanceID>>(0x0008, false); // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVertexInstancesForPolygonHole>> _offVertexIndicesAndInstanceIDsForEachHole                     = new ExternalOffset<TArray<FVertexInstancesForPolygonHole>>(0x0018, false); // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonID                                          PolygonID                                                      => _offPolygonID.GetValue();
	public TArray<FVertexIndexAndInstanceID>                   PerimeterVertexIndicesAndInstanceIDs                           => _offPerimeterVertexIndicesAndInstanceIDs.GetValue();
	public TArray<FVertexInstancesForPolygonHole>              VertexIndicesAndInstanceIDsForEachHole                         => _offVertexIndicesAndInstanceIDsForEachHole.GetValue();
	#endregion

	public FChangeVertexInstancesForPolygon(FPolygonID c_PolygonID, TArray<FVertexIndexAndInstanceID> c_PerimeterVertexIndicesAndInstanceIDs, TArray<FVertexInstancesForPolygonHole> c_VertexIndicesAndInstanceIDsForEachHole) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonID.SetValue(c_PolygonID);
		_offPerimeterVertexIndicesAndInstanceIDs.SetValue(c_PerimeterVertexIndicesAndInstanceIDs);
		_offVertexIndicesAndInstanceIDsForEachHole.SetValue(c_VertexIndicesAndInstanceIDsForEachHole);
	}
}
// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0008
public class FPolygonGroupForPolygon : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonID>                         _offPolygonID                                                  = new ExternalOffset<FPolygonID>(0x0000, false);               // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPolygonGroupID>                    _offPolygonGroupID                                             = new ExternalOffset<FPolygonGroupID>(0x0004, false);          // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonID                                          PolygonID                                                      => _offPolygonID.GetValue();
	public FPolygonGroupID                                     PolygonGroupID                                                 => _offPolygonGroupID.GetValue();
	#endregion

	public FPolygonGroupForPolygon(FPolygonID c_PolygonID, FPolygonGroupID c_PolygonGroupID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonID.SetValue(c_PolygonID);
		_offPolygonGroupID.SetValue(c_PolygonGroupID);
	}
}
// ScriptStruct EditableMesh.AdaptorPolygon2Group
// 0x0048
public class FAdaptorPolygon2Group : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offRenderingSectionIndex                                      = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaterialIndex                                              = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxTriangles                                               = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public uint                                                RenderingSectionIndex                                          => _offRenderingSectionIndex.GetValue();
	public int                                                 MaterialIndex                                                  => _offMaterialIndex.GetValue();
	public int                                                 MaxTriangles                                                   => _offMaxTriangles.GetValue();
	#endregion

	public FAdaptorPolygon2Group(uint c_RenderingSectionIndex, int c_MaterialIndex, int c_MaxTriangles) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRenderingSectionIndex.SetValue(c_RenderingSectionIndex);
		_offMaterialIndex.SetValue(c_MaterialIndex);
		_offMaxTriangles.SetValue(c_MaxTriangles);
	}
}
// ScriptStruct EditableMesh.AdaptorTriangleID
// 0x0000 (0x0004 - 0x0004)
public class FAdaptorTriangleID : FElementID
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAdaptorTriangleID() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct EditableMesh.AdaptorPolygon
// 0x0018
public class FAdaptorPolygon : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPolygonGroupID>                    _offPolygonGroupID                                             = new ExternalOffset<FPolygonGroupID>(0x0000, false);          // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAdaptorTriangleID>>         _offTriangulatedPolygonTriangleIndices                         = new ExternalOffset<TArray<FAdaptorTriangleID>>(0x0008, false); // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPolygonGroupID                                     PolygonGroupID                                                 => _offPolygonGroupID.GetValue();
	public TArray<FAdaptorTriangleID>                          TriangulatedPolygonTriangleIndices                             => _offTriangulatedPolygonTriangleIndices.GetValue();
	#endregion

	public FAdaptorPolygon(FPolygonGroupID c_PolygonGroupID, TArray<FAdaptorTriangleID> c_TriangulatedPolygonTriangleIndices) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPolygonGroupID.SetValue(c_PolygonGroupID);
		_offTriangulatedPolygonTriangleIndices.SetValue(c_TriangulatedPolygonTriangleIndices);
	}
}

}