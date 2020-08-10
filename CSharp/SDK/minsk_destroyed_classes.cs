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

// BlueprintGeneratedClass minsk_destroyed.minsk_destroyed_C
// 0x000C (0x0318 - 0x030C)
public class Aminsk_destroyed_C : ASQDestroyedVehicle
{
	#region Offsets
	private ExternalOffset<UParticleSystemComponent>          _offexplosion                                                  = new ExternalOffset<UParticleSystemComponent>(0x0310, true);  // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UParticleSystemComponent                           explosion                                                      => _offexplosion.GetValue();
	#endregion


}


}