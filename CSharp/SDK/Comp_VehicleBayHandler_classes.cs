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

// BlueprintGeneratedClass Comp_VehicleBayHandler.Comp_VehicleBayHandler_C
// 0x0030 (0x00F8 - 0x00C8)
public class UComp_VehicleBayHandler_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ASQPlayerController>               _offSQ_PC                                                      = new ExternalOffset<ASQPlayerController>(0x00E0, true);       // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQForwardBase>                    _offTarget_Fob                                                 = new ExternalOffset<ASQForwardBase>(0x00E8, true);            // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_VehicleBay_C>                  _offVehicle_Bay                                                = new ExternalOffset<ABP_VehicleBay_C>(0x00F0, true);          // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ASQPlayerController                                SQ_PC                                                          => _offSQ_PC.GetValue();
	public ASQForwardBase                                     Target_Fob                                                     => _offTarget_Fob.GetValue();
	public ABP_VehicleBay_C                                   Vehicle_Bay                                                    => _offVehicle_Bay.GetValue();
	#endregion


}


}