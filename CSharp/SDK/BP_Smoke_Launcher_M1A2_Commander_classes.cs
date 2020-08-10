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

// BlueprintGeneratedClass BP_Smoke_Launcher_M1A2_Commander.BP_Smoke_Launcher_M1A2_Commander_C
// 0x0010 (0x09C8 - 0x09B8)
public class ABP_Smoke_Launcher_M1A2_Commander_C : ASmoke_Launcher_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x09B8, false); // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQVehicleSeat>                    _offOwningTurret                                               = new ExternalOffset<ASQVehicleSeat>(0x09C0, true);            // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQVehicleSeat                                     OwningTurret                                                   => _offOwningTurret.GetValue();
	#endregion


}


}