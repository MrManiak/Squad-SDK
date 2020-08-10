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

// WidgetBlueprintGeneratedClass W_Grid_ActionList_CO.W_Grid_ActionList_CO_C
// 0x0018 (0x02B0 - 0x0298)
public class UW_Grid_ActionList_CO_C : UW_Grid_ActionList_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0298, false); // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<TArray<UClass>>                    _offSQCommandActions                                           = new ExternalOffset<TArray<UClass>>(0x02A0, false);           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public TArray<UClass>                                     SQCommandActions                                               => _offSQCommandActions.GetValue();
	#endregion


}


}