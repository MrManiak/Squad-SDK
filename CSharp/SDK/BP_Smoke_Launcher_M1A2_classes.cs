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

// BlueprintGeneratedClass BP_Smoke_Launcher_M1A2.BP_Smoke_Launcher_M1A2_C
// 0x0008 (0x09C0 - 0x09B8)
public class ABP_Smoke_Launcher_M1A2_C : ASmoke_Launcher_C
{
	#region Offsets
	private ExternalOffset<ASQVehicleSeat>                    _offOwningTurret                                               = new ExternalOffset<ASQVehicleSeat>(0x09B8, true);            // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public ASQVehicleSeat                                     OwningTurret                                                   => _offOwningTurret.GetValue();
	#endregion


}


}