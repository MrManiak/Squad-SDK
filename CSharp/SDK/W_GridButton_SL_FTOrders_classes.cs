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

// WidgetBlueprintGeneratedClass W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C
// 0x0008 (0x02E0 - 0x02D8)
public class UW_GridButton_SL_FTOrders_C : UW_GridButton_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D8, false); // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	#endregion


}


}