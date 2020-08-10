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

// BlueprintGeneratedClass BP_LastingEffect_Demolition_Medium.BP_LastingEffect_Demolition_Medium_C
// 0x0020 (0x02A8 - 0x0288)
public class ABP_LastingEffect_Demolition_Medium_C : ASQLastingEffect
{
	#region Offsets
	private ExternalOffset<UAudioComponent>                   _offAudio1                                                     = new ExternalOffset<UAudioComponent>(0x02A0, true);           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UAudioComponent                                    Audio1                                                         => _offAudio1.GetValue();
	#endregion


}


}