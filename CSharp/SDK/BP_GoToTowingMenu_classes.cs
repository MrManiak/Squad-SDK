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

// BlueprintGeneratedClass BP_GoToTowingMenu.BP_GoToTowingMenu_C
// 0x0009 (0x00B9 - 0x00B0)
public class UBP_GoToTowingMenu_C : UBP_GotoMenuActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00B0, false); // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offActiveButton                                               = new ExternalOffset<byte/*(bool)*/>(0x00B8);                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     ActiveButton                                                   => _offActiveButton.GetValue();
	#endregion


}


}