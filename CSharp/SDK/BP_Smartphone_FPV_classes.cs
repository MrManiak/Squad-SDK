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

// BlueprintGeneratedClass BP_Smartphone_FPV.BP_Smartphone_FPV_C
// 0x0030 (0x0728 - 0x06F8)
public class ABP_Smartphone_FPV_C : ABP_Weapon2_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x06F8, false); // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetComponent>                  _offScreenWidget                                               = new ExternalOffset<UWidgetComponent>(0x0700, true);          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_FlyingDrone_C>                 _offMy_Drone                                                   = new ExternalOffset<ABP_FlyingDrone_C>(0x0708, true);         // 0x0708(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_DroneUI_C>                      _offDrone_UI                                                   = new ExternalOffset<UW_DroneUI_C>(0x0710, true);              // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offAction                                                     = new ExternalOffset<UClass>(0x0718, true);                    // 0x0718(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offSQ_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0720, true);       // 0x0720(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetComponent                                   ScreenWidget                                                   => _offScreenWidget.GetValue();
	public ABP_FlyingDrone_C                                  My_Drone                                                       => _offMy_Drone.GetValue();
	public UW_DroneUI_C                                       Drone_UI                                                       => _offDrone_UI.GetValue();
	public UClass                                             Action                                                         => _offAction.GetValue();
	public ASQPlayerController                                SQ_PC                                                          => _offSQ_PC.GetValue();
	#endregion


}


}