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

// WidgetBlueprintGeneratedClass W_HealPrompt.W_HealPrompt_C
// 0x0068 (0x0248 - 0x01E0)
public class UW_HealPrompt_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQSoldier>                        _offSoldier                                                    = new ExternalOffset<ASQSoldier>(0x0238, true);                // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offCollapse_Timer                                             = new ExternalOffset<FTimerHandle>(0x0240, false);             // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQSoldier                                         Soldier                                                        => _offSoldier.GetValue();
	public FTimerHandle                                       Collapse_Timer                                                 => _offCollapse_Timer.GetValue();
	#endregion


}


}