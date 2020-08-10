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

// BlueprintGeneratedClass BP_RadialActionModel_EmergencyTeleport.BP_RadialActionModel_EmergencyTeleport_C
// 0x0018 (0x00B8 - 0x00A0)
public class UBP_RadialActionModel_EmergencyTeleport_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offJump                                                       = new ExternalOffset<byte/*(bool)*/>(0x00A8);                  // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offYaw                                                        = new ExternalOffset<float>(0x00AC);                           // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_RadialTowingWidget_C>           _offTowingCenterWidget                                         = new ExternalOffset<UW_RadialTowingWidget_C>(0x00B0, true);   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     Jump                                                           => _offJump.GetValue();
	public float                                              Yaw                                                            => _offYaw.GetValue();
	public UW_RadialTowingWidget_C                            TowingCenterWidget                                             => _offTowingCenterWidget.GetValue();
	#endregion


}


}