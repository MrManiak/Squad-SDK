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

// BlueprintGeneratedClass BP_M1A2_Turret.BP_M1A2_Turret_C
// 0x0010 (0x04C8 - 0x04B8)
public class ABP_M1A2_Turret_C : ABP_GenericVehicleClosedTurret_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x04B8, false); // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UStaticMeshComponent>              _offM1A1_Decoration                                            = new ExternalOffset<UStaticMeshComponent>(0x04C0, true);      // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UStaticMeshComponent                               M1A1_Decoration                                                => _offM1A1_Decoration.GetValue();
	#endregion


}


}