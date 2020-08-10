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

// BlueprintGeneratedClass BP_LastingEffect_Demolition_Wreck.BP_LastingEffect_Demolition_Wreck_C
// 0x0008 (0x02B0 - 0x02A8)
public class ABP_LastingEffect_Demolition_Wreck_C : ABP_LastingEffect_Demolition_Medium_C
{
	#region Offsets
	private ExternalOffset<UParticleSystemComponent>          _offMetalPieces                                                = new ExternalOffset<UParticleSystemComponent>(0x02A8, true);  // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UParticleSystemComponent                           MetalPieces                                                    => _offMetalPieces.GetValue();
	#endregion


}


}