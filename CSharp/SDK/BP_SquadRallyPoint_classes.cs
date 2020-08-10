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

// BlueprintGeneratedClass BP_SquadRallyPoint.BP_SquadRallyPoint_C
// 0x0058 (0x0478 - 0x0420)
public class ABP_SquadRallyPoint_C : ASQSquadRallyPoint
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0420, false); // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBoxComponent>                     _offInteractBox                                                = new ExternalOffset<UBoxComponent>(0x0428, true);             // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offRally_Static_Sound                                         = new ExternalOffset<UAudioComponent>(0x0430, true);           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSQUsableData>                     _offData                                                       = new ExternalOffset<FSQUsableData>(0x0438, false);            // 0x0438(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBoxComponent                                      InteractBox                                                    => _offInteractBox.GetValue();
	public UAudioComponent                                    Rally_Static_Sound                                             => _offRally_Static_Sound.GetValue();
	public FSQUsableData                                      Data                                                           => _offData.GetValue();
	#endregion


}


}