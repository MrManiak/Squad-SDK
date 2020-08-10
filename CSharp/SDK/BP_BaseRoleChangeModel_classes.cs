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

// BlueprintGeneratedClass BP_BaseRoleChangeModel.BP_BaseRoleChangeModel_C
// 0x0010 (0x00B0 - 0x00A0)
public class UBP_BaseRoleChangeModel_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQRoleSettings>                   _offRole                                                       = new ExternalOffset<USQRoleSettings>(0x00A8, true);           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQRoleSettings                                    Role                                                           => _offRole.GetValue();
	#endregion


}


}