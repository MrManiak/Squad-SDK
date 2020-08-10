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

// WidgetBlueprintGeneratedClass W_InteractableItem_Master.W_InteractableItem_Master_C
// 0x0060 (0x0290 - 0x0230)
public class UW_InteractableItem_Master_C : USQInteractableWidgetItem
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FSQUsableWidgetData>               _offData                                                       = new ExternalOffset<FSQUsableWidgetData>(0x0238, false);      // 0x0238(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<AActor>                            _offInteract_Actor                                             = new ExternalOffset<AActor>(0x0270, true);                    // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offLast_Text                                                  = new ExternalOffset<FText>(0x0278, false);                    // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FSQUsableWidgetData                                Data                                                           => _offData.GetValue();
	public AActor                                             Interact_Actor                                                 => _offInteract_Actor.GetValue();
	public FText                                              Last_Text                                                      => _offLast_Text.GetValue();
	#endregion


}


}