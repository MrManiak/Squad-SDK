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

// BlueprintGeneratedClass BP_GenericKits.BP_GenericKits_C
// 0x0009 (0x0061 - 0x0058)
public class UBP_GenericKits_C : UBP_RadialMenuModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0058, false); // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ESQRoleTypeEnum>                   _offRole_Category                                              = new ExternalOffset<ESQRoleTypeEnum>(0x0060, false);          // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ESQRoleTypeEnum                                    Role_Category                                                  => _offRole_Category.GetValue();
	#endregion


}


}