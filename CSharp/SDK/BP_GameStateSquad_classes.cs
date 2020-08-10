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

// BlueprintGeneratedClass BP_GameStateSquad.BP_GameStateSquad_C
// 0x0008 (0x03D0 - 0x03C8)
public class ABP_GameStateSquad_C : ASQGameState
{
	#region Offsets
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x03C8, true);           // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	#endregion


}


}