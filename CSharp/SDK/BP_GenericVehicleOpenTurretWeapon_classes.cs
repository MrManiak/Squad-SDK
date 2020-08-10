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

// BlueprintGeneratedClass BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C
// 0x000C (0x0B20 - 0x0B14)
public class ABP_GenericVehicleOpenTurretWeapon_C : ABP_GenericDeployableWeapon_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0B18, false); // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	#endregion


}


}