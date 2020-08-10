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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
public class UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x006F (0x0498 - 0x0429)
public class UProceduralMeshComponent : UMeshComponent
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbUseComplexAsSimpleCollision                               = new ExternalOffset<byte/*(bool)*/>(0x0438);                  // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseAsyncCooking                                           = new ExternalOffset<byte/*(bool)*/>(0x0439);                  // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBodySetup>                        _offProcMeshBodySetup                                          = new ExternalOffset<UBodySetup>(0x0440, true);                // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FProcMeshSection>>          _offProcMeshSections                                           = new ExternalOffset<TArray<FProcMeshSection>>(0x0448, false); // 0x0448(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FKConvexElem>>              _offCollisionConvexElems                                       = new ExternalOffset<TArray<FKConvexElem>>(0x0458, false);     // 0x0458(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FBoxSphereBounds>                  _offLocalBounds                                                = new ExternalOffset<FBoxSphereBounds>(0x0468, false);         // 0x0468(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UBodySetup>>                _offAsyncBodySetupQueue                                        = new ExternalOffset<TArray<UBodySetup>>(0x0488, false);       // 0x0488(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bUseComplexAsSimpleCollision                                   => _offbUseComplexAsSimpleCollision.GetValue();
	public byte/*(bool)*/                                     bUseAsyncCooking                                               => _offbUseAsyncCooking.GetValue();
	public UBodySetup                                         ProcMeshBodySetup                                              => _offProcMeshBodySetup.GetValue();
	public TArray<FProcMeshSection>                           ProcMeshSections                                               => _offProcMeshSections.GetValue();
	public TArray<FKConvexElem>                               CollisionConvexElems                                           => _offCollisionConvexElems.GetValue();
	public FBoxSphereBounds                                   LocalBounds                                                    => _offLocalBounds.GetValue();
	public TArray<UBodySetup>                                 AsyncBodySetupQueue                                            => _offAsyncBodySetupQueue.GetValue();
	#endregion


}


}