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

// BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C
// 0x0010 (0x00A0 - 0x0090)
public class UBP_RadialActionModel_C : UBP_RadialItemModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0090, false); // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UClass>                            _offAction                                                     = new ExternalOffset<UClass>(0x0098, true);                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UClass                                             Action                                                         => _offAction.GetValue();
	#endregion


}


}