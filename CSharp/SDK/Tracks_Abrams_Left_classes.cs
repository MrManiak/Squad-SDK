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

// BlueprintGeneratedClass Tracks_Abrams_Left.Tracks_Abrams_Left_C
// 0x00B8 (0x0340 - 0x0288)
public class ATracks_Abrams_Left_C : ASQLastingEffect
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02A0, false); // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystemComponent>          _offBackDebris                                                 = new ExternalOffset<UParticleSystemComponent>(0x02A8, true);  // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offFrontDebris                                                = new ExternalOffset<UParticleSystemComponent>(0x02B0, true);  // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offPanelFx                                                    = new ExternalOffset<UParticleSystemComponent>(0x02B8, true);  // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce1                                               = new ExternalOffset<URadialForceComponent>(0x02C0, true);     // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh3                                                = new ExternalOffset<UStaticMeshComponent>(0x02C8, true);      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh2                                                = new ExternalOffset<UStaticMeshComponent>(0x02D0, true);      // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh1                                                = new ExternalOffset<UStaticMeshComponent>(0x02D8, true);      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh                                                 = new ExternalOffset<UStaticMeshComponent>(0x02E0, true);      // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce                                                = new ExternalOffset<URadialForceComponent>(0x02E8, true);     // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece10                                                    = new ExternalOffset<UStaticMeshComponent>(0x02F0, true);      // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece9                                                     = new ExternalOffset<UStaticMeshComponent>(0x02F8, true);      // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece8                                                     = new ExternalOffset<UStaticMeshComponent>(0x0300, true);      // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece7                                                     = new ExternalOffset<UStaticMeshComponent>(0x0308, true);      // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece6                                                     = new ExternalOffset<UStaticMeshComponent>(0x0310, true);      // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece5                                                     = new ExternalOffset<UStaticMeshComponent>(0x0318, true);      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece4                                                     = new ExternalOffset<UStaticMeshComponent>(0x0320, true);      // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece3                                                     = new ExternalOffset<UStaticMeshComponent>(0x0328, true);      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece2                                                     = new ExternalOffset<UStaticMeshComponent>(0x0330, true);      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPiece1                                                     = new ExternalOffset<UStaticMeshComponent>(0x0338, true);      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystemComponent                           BackDebris                                                     => _offBackDebris.GetValue();
	public UParticleSystemComponent                           FrontDebris                                                    => _offFrontDebris.GetValue();
	public UParticleSystemComponent                           PanelFx                                                        => _offPanelFx.GetValue();
	public URadialForceComponent                              RadialForce1                                                   => _offRadialForce1.GetValue();
	public UStaticMeshComponent                               StaticMesh3                                                    => _offStaticMesh3.GetValue();
	public UStaticMeshComponent                               StaticMesh2                                                    => _offStaticMesh2.GetValue();
	public UStaticMeshComponent                               StaticMesh1                                                    => _offStaticMesh1.GetValue();
	public UStaticMeshComponent                               StaticMesh                                                     => _offStaticMesh.GetValue();
	public URadialForceComponent                              RadialForce                                                    => _offRadialForce.GetValue();
	public UStaticMeshComponent                               Piece10                                                        => _offPiece10.GetValue();
	public UStaticMeshComponent                               Piece9                                                         => _offPiece9.GetValue();
	public UStaticMeshComponent                               Piece8                                                         => _offPiece8.GetValue();
	public UStaticMeshComponent                               Piece7                                                         => _offPiece7.GetValue();
	public UStaticMeshComponent                               Piece6                                                         => _offPiece6.GetValue();
	public UStaticMeshComponent                               Piece5                                                         => _offPiece5.GetValue();
	public UStaticMeshComponent                               Piece4                                                         => _offPiece4.GetValue();
	public UStaticMeshComponent                               Piece3                                                         => _offPiece3.GetValue();
	public UStaticMeshComponent                               Piece2                                                         => _offPiece2.GetValue();
	public UStaticMeshComponent                               Piece1                                                         => _offPiece1.GetValue();
	#endregion


}


}