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

// BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C
// 0x02A0 (0x0730 - 0x0490)
public class ABP_MenuGameMode_C : ASQGameMode
{
	#region Offsets
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0728, true);           // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	#endregion


}


}