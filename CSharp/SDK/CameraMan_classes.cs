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

// BlueprintGeneratedClass CameraMan.CameraMan_C
// 0x0010 (0x06B8 - 0x06A8)
public class ACameraMan_C : ASQCameraMan
{
	#region Offsets
	private ExternalOffset<USQMapIconComponent>               _offSquadMapIcon                                               = new ExternalOffset<USQMapIconComponent>(0x06B0, true);       // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public USQMapIconComponent                                SquadMapIcon                                                   => _offSquadMapIcon.GetValue();
	#endregion


}


}