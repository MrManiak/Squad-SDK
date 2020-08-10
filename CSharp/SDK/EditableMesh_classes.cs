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

// Class EditableMesh.EditableMeshAdapter
// 0x0000 (0x0028 - 0x0028)
public class UEditableMeshAdapter : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class EditableMesh.EditableGeometryCollectionAdapter
// 0x0014 (0x003C - 0x0028)
public class UEditableGeometryCollectionAdapter : UEditableMeshAdapter
{
	#region Offsets
	private ExternalOffset<UGeometryCollection>               _offGeometryCollection                                         = new ExternalOffset<UGeometryCollection>(0x0028, true);       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UGeometryCollection>               _offOriginalGeometryCollection                                 = new ExternalOffset<UGeometryCollection>(0x0030, true);       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offGeometryCollectionLODIndex                                 = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UGeometryCollection                                GeometryCollection                                             => _offGeometryCollection.GetValue();
	public UGeometryCollection                                OriginalGeometryCollection                                     => _offOriginalGeometryCollection.GetValue();
	public int                                                GeometryCollectionLODIndex                                     => _offGeometryCollectionLODIndex.GetValue();
	#endregion


}

// Class EditableMesh.EditableMesh
// 0x046C (0x0494 - 0x0028)
public class UEditableMesh : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UEditableMeshAdapter>>      _offAdapters                                                   = new ExternalOffset<TArray<UEditableMeshAdapter>>(0x0328, false); // 0x0328(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTextureCoordinateCount                                     = new ExternalOffset<int>(0x0340);                             // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPendingCompactCounter                                      = new ExternalOffset<int>(0x048C);                             // 0x048C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSubdivisionCount                                           = new ExternalOffset<int>(0x0490);                             // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UEditableMeshAdapter>                       Adapters                                                       => _offAdapters.GetValue();
	public int                                                TextureCoordinateCount                                         => _offTextureCoordinateCount.GetValue();
	public int                                                PendingCompactCounter                                          => _offPendingCompactCounter.GetValue();
	public int                                                SubdivisionCount                                               => _offSubdivisionCount.GetValue();
	#endregion


}

// Class EditableMesh.EditableMeshFactory
// 0x0000 (0x0028 - 0x0028)
public class UEditableMeshFactory : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class EditableMesh.EditableStaticMeshAdapter
// 0x0014 (0x003C - 0x0028)
public class UEditableStaticMeshAdapter : UEditableMeshAdapter
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                       _offStaticMesh                                                 = new ExternalOffset<UStaticMesh>(0x0028, true);               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UStaticMesh>                       _offOriginalStaticMesh                                         = new ExternalOffset<UStaticMesh>(0x0030, true);               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offStaticMeshLODIndex                                         = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UStaticMesh                                        StaticMesh                                                     => _offStaticMesh.GetValue();
	public UStaticMesh                                        OriginalStaticMesh                                             => _offOriginalStaticMesh.GetValue();
	public int                                                StaticMeshLODIndex                                             => _offStaticMeshLODIndex.GetValue();
	#endregion


}


}