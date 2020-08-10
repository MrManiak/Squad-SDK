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

// Class CableComponent.CableComponent
// 0x007F (0x04A8 - 0x0429)
public class UCableComponent : UMeshComponent
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbAttachStart                                               = new ExternalOffset<byte/*(bool)*/>(0x0430);                  // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAttachEnd                                                 = new ExternalOffset<byte/*(bool)*/>(0x0431);                  // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FComponentReference>               _offAttachEndTo                                                = new ExternalOffset<FComponentReference>(0x0438, false);      // 0x0438(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offAttachEndToSocketName                                      = new ExternalOffset<FName>(0x0460, false);                    // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offEndLocation                                                = new ExternalOffset<FVector>(0x0468, false);                  // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCableLength                                                = new ExternalOffset<float>(0x0474);                           // 0x0474(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumSegments                                                = new ExternalOffset<int>(0x0478);                             // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSubstepTime                                                = new ExternalOffset<float>(0x047C);                           // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSolverIterations                                           = new ExternalOffset<int>(0x0480);                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableStiffness                                           = new ExternalOffset<byte/*(bool)*/>(0x0484);                  // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableCollision                                           = new ExternalOffset<byte/*(bool)*/>(0x0485);                  // 0x0485(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionFriction                                          = new ExternalOffset<float>(0x0488);                           // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offCableForce                                                 = new ExternalOffset<FVector>(0x048C, false);                  // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCableGravityScale                                          = new ExternalOffset<float>(0x0498);                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCableWidth                                                 = new ExternalOffset<float>(0x049C);                           // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumSides                                                   = new ExternalOffset<int>(0x04A0);                             // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTileMaterial                                               = new ExternalOffset<float>(0x04A4);                           // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bAttachStart                                                   => _offbAttachStart.GetValue();
	public byte/*(bool)*/                                     bAttachEnd                                                     => _offbAttachEnd.GetValue();
	public FComponentReference                                AttachEndTo                                                    => _offAttachEndTo.GetValue();
	public FName                                              AttachEndToSocketName                                          => _offAttachEndToSocketName.GetValue();
	public FVector                                            EndLocation                                                    => _offEndLocation.GetValue();
	public float                                              CableLength                                                    => _offCableLength.GetValue();
	public int                                                NumSegments                                                    => _offNumSegments.GetValue();
	public float                                              SubstepTime                                                    => _offSubstepTime.GetValue();
	public int                                                SolverIterations                                               => _offSolverIterations.GetValue();
	public byte/*(bool)*/                                     bEnableStiffness                                               => _offbEnableStiffness.GetValue();
	public byte/*(bool)*/                                     bEnableCollision                                               => _offbEnableCollision.GetValue();
	public float                                              CollisionFriction                                              => _offCollisionFriction.GetValue();
	public FVector                                            CableForce                                                     => _offCableForce.GetValue();
	public float                                              CableGravityScale                                              => _offCableGravityScale.GetValue();
	public float                                              CableWidth                                                     => _offCableWidth.GetValue();
	public int                                                NumSides                                                       => _offNumSides.GetValue();
	public float                                              TileMaterial                                                   => _offTileMaterial.GetValue();
	#endregion


}

// Class CableComponent.CableActor
// 0x0018 (0x0250 - 0x0238)
public class ACableActor : AActor
{
	#region Offsets
	private ExternalOffset<UCableComponent>                   _offCableComponent                                             = new ExternalOffset<UCableComponent>(0x0248, true);           // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCableComponent                                    CableComponent                                                 => _offCableComponent.GetValue();
	#endregion


}


}