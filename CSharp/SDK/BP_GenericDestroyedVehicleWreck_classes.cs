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

// BlueprintGeneratedClass BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C
// 0x0014 (0x0320 - 0x030C)
public class ABP_GenericDestroyedVehicleWreck_C : ASQDestroyedVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0310, false); // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UClass>                            _offWreckDestructionLastingEffect                              = new ExternalOffset<UClass>(0x0318, true);                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UClass                                             WreckDestructionLastingEffect                                  => _offWreckDestructionLastingEffect.GetValue();
	#endregion


}


}