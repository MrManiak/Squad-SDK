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

// BlueprintGeneratedClass BP_RadialActionModel_ControlSupplies.BP_RadialActionModel_ControlSupplies_C
// 0x000A (0x00AA - 0x00A0)
public class UBP_RadialActionModel_ControlSupplies_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offAmmo                                                       = new ExternalOffset<byte/*(bool)*/>(0x00A8);                  // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offPickup                                                     = new ExternalOffset<byte/*(bool)*/>(0x00A9);                  // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     Ammo                                                           => _offAmmo.GetValue();
	public byte/*(bool)*/                                     Pickup                                                         => _offPickup.GetValue();
	#endregion


}


}