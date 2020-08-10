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

// WidgetBlueprintGeneratedClass W_VehicleStatus.W_VehicleStatus_C
// 0x00A0 (0x0280 - 0x01E0)
public class UW_VehicleStatus_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UProgressBar>                      _offHealthBar                                                  = new ExternalOffset<UProgressBar>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offState_AmmoHealth                                           = new ExternalOffset<UUMG_GenericState_C>(0x0248, true);       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offState_EngineHealth                                         = new ExternalOffset<UUMG_GenericState_C>(0x0250, true);       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offState_TrackHealth                                          = new ExternalOffset<UUMG_GenericState_C>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offState_TurretHealth                                         = new ExternalOffset<UUMG_GenericState_C>(0x0260, true);       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offVehicleHealth                                              = new ExternalOffset<UBorder>(0x0268, true);                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicle>                        _offREF_Vehicle                                                = new ExternalOffset<ASQVehicle>(0x0270, true);                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0278, true);       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UProgressBar                                       HealthBar                                                      => _offHealthBar.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UUMG_GenericState_C                                State_AmmoHealth                                               => _offState_AmmoHealth.GetValue();
	public UUMG_GenericState_C                                State_EngineHealth                                             => _offState_EngineHealth.GetValue();
	public UUMG_GenericState_C                                State_TrackHealth                                              => _offState_TrackHealth.GetValue();
	public UUMG_GenericState_C                                State_TurretHealth                                             => _offState_TurretHealth.GetValue();
	public UBorder                                            VehicleHealth                                                  => _offVehicleHealth.GetValue();
	public ASQVehicle                                         REF_Vehicle                                                    => _offREF_Vehicle.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}