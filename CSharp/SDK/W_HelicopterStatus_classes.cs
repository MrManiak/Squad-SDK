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

// WidgetBlueprintGeneratedClass W_HelicopterStatus.W_HelicopterStatus_C
// 0x0098 (0x0278 - 0x01E0)
public class UW_HelicopterStatus_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UUMG_GenericState_C>               _offEngineState                                                = new ExternalOffset<UUMG_GenericState_C>(0x0238, true);       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offHealthBar                                                  = new ExternalOffset<UProgressBar>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offMainRotor                                                  = new ExternalOffset<UUMG_GenericState_C>(0x0250, true);       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_GenericState_C>               _offTailRotor                                                  = new ExternalOffset<UUMG_GenericState_C>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offVehicleHealth                                              = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQHelicopter2>                    _offREF_Helicopter                                             = new ExternalOffset<ASQHelicopter2>(0x0268, true);            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0270, true);       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UUMG_GenericState_C                                EngineState                                                    => _offEngineState.GetValue();
	public UProgressBar                                       HealthBar                                                      => _offHealthBar.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UUMG_GenericState_C                                MainRotor                                                      => _offMainRotor.GetValue();
	public UUMG_GenericState_C                                TailRotor                                                      => _offTailRotor.GetValue();
	public UBorder                                            VehicleHealth                                                  => _offVehicleHealth.GetValue();
	public ASQHelicopter2                                     REF_Helicopter                                                 => _offREF_Helicopter.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}