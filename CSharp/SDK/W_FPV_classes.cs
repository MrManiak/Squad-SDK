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

// WidgetBlueprintGeneratedClass W_FPV.W_FPV_C
// 0x0080 (0x0260 - 0x01E0)
public class UW_FPV_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offIdle                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_199                                                  = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_201                                                  = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0250, true);           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_FlyingDrone_C>                 _offDrone                                                      = new ExternalOffset<ABP_FlyingDrone_C>(0x0258, true);         // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Idle                                                           => _offIdle.GetValue();
	public UImage                                             Image_199                                                      => _offImage_199.GetValue();
	public UImage                                             Image_201                                                      => _offImage_201.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public ABP_FlyingDrone_C                                  Drone                                                          => _offDrone.GetValue();
	#endregion


}


}