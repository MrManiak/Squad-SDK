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

// BlueprintGeneratedClass BP_GotoMenuAction.BP_GotoMenuAction_C
// 0x0010 (0x0040 - 0x0030)
public class UBP_GotoMenuAction_C : UBP_RadialAction_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0030, false); // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UClass>                            _offGotoMenuModel                                              = new ExternalOffset<UClass>(0x0038, true);                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UClass                                             GotoMenuModel                                                  => _offGotoMenuModel.GetValue();
	#endregion


}


}