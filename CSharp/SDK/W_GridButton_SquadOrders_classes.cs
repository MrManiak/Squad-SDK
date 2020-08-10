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

// WidgetBlueprintGeneratedClass W_GridButton_SquadOrders.W_GridButton_SquadOrders_C
// 0x0018 (0x02F0 - 0x02D8)
public class UW_GridButton_SquadOrders_C : UW_GridButton_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D8, false); // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<UClass>>                    _offFT_Action_List                                             = new ExternalOffset<TArray<UClass>>(0x02E0, false);           // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<UClass>                                     FT_Action_List                                                 => _offFT_Action_List.GetValue();
	#endregion


}


}