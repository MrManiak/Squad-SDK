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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
public class UMeshReconstructorBase : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MRMesh.MockDataMeshTrackerComponent
// 0x00F0 (0x0270 - 0x0180)
public class UMockDataMeshTrackerComponent : USceneComponent
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMeshTrackerUpdated                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0218, false); // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offScanWorld                                                  = new ExternalOffset<byte/*(bool)*/>(0x0228);                  // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRequestNormals                                             = new ExternalOffset<byte/*(bool)*/>(0x0229);                  // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRequestVertexConfidence                                    = new ExternalOffset<byte/*(bool)*/>(0x022A);                  // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMeshTrackerVertexColorMode>       _offVertexColorMode                                            = new ExternalOffset<EMeshTrackerVertexColorMode>(0x022B, false); // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FColor>>                    _offBlockVertexColors                                          = new ExternalOffset<TArray<FColor>>(0x0230, false);           // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offVertexColorFromConfidenceZero                              = new ExternalOffset<FLinearColor>(0x0240, false);             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offVertexColorFromConfidenceOne                               = new ExternalOffset<FLinearColor>(0x0250, false);             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offUpdateInterval                                             = new ExternalOffset<float>(0x0260);                           // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMRMeshComponent>                  _offMRMesh                                                     = new ExternalOffset<UMRMeshComponent>(0x0268, true);          // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnMeshTrackerUpdated                                           => _offOnMeshTrackerUpdated.GetValue();
	public byte/*(bool)*/                                     ScanWorld                                                      => _offScanWorld.GetValue();
	public byte/*(bool)*/                                     RequestNormals                                                 => _offRequestNormals.GetValue();
	public byte/*(bool)*/                                     RequestVertexConfidence                                        => _offRequestVertexConfidence.GetValue();
	public EMeshTrackerVertexColorMode                        VertexColorMode                                                => _offVertexColorMode.GetValue();
	public TArray<FColor>                                     BlockVertexColors                                              => _offBlockVertexColors.GetValue();
	public FLinearColor                                       VertexColorFromConfidenceZero                                  => _offVertexColorFromConfidenceZero.GetValue();
	public FLinearColor                                       VertexColorFromConfidenceOne                                   => _offVertexColorFromConfidenceOne.GetValue();
	public float                                              UpdateInterval                                                 => _offUpdateInterval.GetValue();
	public UMRMeshComponent                                   MRMesh                                                         => _offMRMesh.GetValue();
	#endregion


}

// Class MRMesh.MRMeshComponent
// 0x003B (0x0440 - 0x0405)
public class UMRMeshComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<UMaterialInterface>                _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x0410, true);        // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbCreateMeshProxySections                                   = new ExternalOffset<byte/*(bool)*/>(0x0418);                  // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbUpdateNavMeshOnMeshUpdate                                 = new ExternalOffset<byte/*(bool)*/>(0x0419);                  // 0x0419(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbNeverCreateCollisionMesh                                  = new ExternalOffset<byte/*(bool)*/>(0x041A);                  // 0x041A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UBodySetup>                        _offCachedBodySetup                                            = new ExternalOffset<UBodySetup>(0x0420, true);                // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UBodySetup>>                _offBodySetups                                                 = new ExternalOffset<TArray<UBodySetup>>(0x0428, false);       // 0x0428(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	private ExternalOffset<UMaterialInterface>                _offWireframeMaterial                                          = new ExternalOffset<UMaterialInterface>(0x0438, true);        // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UMaterialInterface                                 Material                                                       => _offMaterial.GetValue();
	public byte/*(bool)*/                                     bCreateMeshProxySections                                       => _offbCreateMeshProxySections.GetValue();
	public byte/*(bool)*/                                     bUpdateNavMeshOnMeshUpdate                                     => _offbUpdateNavMeshOnMeshUpdate.GetValue();
	public byte/*(bool)*/                                     bNeverCreateCollisionMesh                                      => _offbNeverCreateCollisionMesh.GetValue();
	public UBodySetup                                         CachedBodySetup                                                => _offCachedBodySetup.GetValue();
	public TArray<UBodySetup>                                 BodySetups                                                     => _offBodySetups.GetValue();
	public UMaterialInterface                                 WireframeMaterial                                              => _offWireframeMaterial.GetValue();
	#endregion


}


}