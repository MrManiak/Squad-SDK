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

// WidgetBlueprintGeneratedClass W_Grid_Action_COOrder_List.W_Grid_Action_COOrder_List_C
// 0x0010 (0x0288 - 0x0278)
public class UW_Grid_Action_COOrder_List_C : UW_Grid_Action_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0278, false); // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWrapBox>                          _offWrapBox_1                                                  = new ExternalOffset<UWrapBox>(0x0280, true);                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWrapBox                                           WrapBox_1                                                      => _offWrapBox_1.GetValue();
	#endregion


}


}