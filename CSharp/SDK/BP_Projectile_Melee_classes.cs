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

// BlueprintGeneratedClass BP_Projectile_Melee.BP_Projectile_Melee_C
// 0x0008 (0x0498 - 0x0490)
public class ABP_Projectile_Melee_C : ABP_Projectile_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0490, false); // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	#endregion


}


}