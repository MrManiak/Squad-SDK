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

// WidgetBlueprintGeneratedClass W_CameraWidget.W_CameraWidget_C
// 0x006A (0x024A - 0x01E0)
public class UW_CameraWidget_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ABP_ControlledCamera_C>            _offCamera_BP                                                  = new ExternalOffset<ABP_ControlledCamera_C>(0x0238, true);    // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0240, true);       // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFollowing_Vehicle                                          = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offStabilized                                                 = new ExternalOffset<byte/*(bool)*/>(0x0249);                  // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ABP_ControlledCamera_C                             Camera_BP                                                      => _offCamera_BP.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Following_Vehicle                                              => _offFollowing_Vehicle.GetValue();
	public byte/*(bool)*/                                     Stabilized                                                     => _offStabilized.GetValue();
	#endregion


}


}