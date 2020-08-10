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

// WidgetBlueprintGeneratedClass UMG_SeatProgress.UMG_SeatProgress_C
// 0x004B (0x02AC - 0x0261)
public class UUMG_SeatProgress_C : USQSeatProgressWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0268, false); // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_Main                                           = new ExternalOffset<UCanvasPanel>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleAmmo_C>                _offUMG_VehicleCargoSmall                                      = new ExternalOffset<UUMG_VehicleAmmo_C>(0x0278, true);        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ESlateVisibility>                  _offDesired_Visibility                                         = new ExternalOffset<ESlateVisibility>(0x0280, false);         // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBaseRadialMenu_C>                 _offVehicle_Radial                                             = new ExternalOffset<UBaseRadialMenu_C>(0x0288, true);         // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0290, true);       // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offUpdateFTextTimerHandle                                     = new ExternalOffset<FTimerHandle>(0x0298, false);             // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialCenterVehicle_C>            _offRadialCenterVehicle                                        = new ExternalOffset<URadialCenterVehicle_C>(0x02A0, true);    // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offValidRadialModelEnteringDuration                           = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCanvasPanel                                       CanvasPanel_Main                                               => _offCanvasPanel_Main.GetValue();
	public UUMG_VehicleAmmo_C                                 UMG_VehicleCargoSmall                                          => _offUMG_VehicleCargoSmall.GetValue();
	public ESlateVisibility                                   Desired_Visibility                                             => _offDesired_Visibility.GetValue();
	public UBaseRadialMenu_C                                  Vehicle_Radial                                                 => _offVehicle_Radial.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public FTimerHandle                                       UpdateFTextTimerHandle                                         => _offUpdateFTextTimerHandle.GetValue();
	public URadialCenterVehicle_C                             RadialCenterVehicle                                            => _offRadialCenterVehicle.GetValue();
	public float                                              ValidRadialModelEnteringDuration                               => _offValidRadialModelEnteringDuration.GetValue();
	#endregion


}


}