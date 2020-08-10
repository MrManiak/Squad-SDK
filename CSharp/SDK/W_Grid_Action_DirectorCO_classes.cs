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

// WidgetBlueprintGeneratedClass W_Grid_Action_DirectorCO.W_Grid_Action_DirectorCO_C
// 0x000C (0x0284 - 0x0278)
public class UW_Grid_Action_DirectorCO_C : UW_Grid_Action_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0278, false); // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<int>                               _offInterval_Index                                             = new ExternalOffset<int>(0x0280);                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public int                                                Interval_Index                                                 => _offInterval_Index.GetValue();
	#endregion


}


}