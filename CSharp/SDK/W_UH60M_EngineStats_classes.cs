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

// WidgetBlueprintGeneratedClass W_UH60M_EngineStats.W_UH60M_EngineStats_C
// 0x00D8 (0x02B8 - 0x01E0)
public class UW_UH60M_EngineStats_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offdisabledmask                                               = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offengine_health                                              = new ExternalOffset<UProgressBar>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offhull_health                                                = new ExternalOffset<UProgressBar>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_99                                                   = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_100                                                  = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offmainrotor_health                                           = new ExternalOffset<UProgressBar>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offtailrotor_health                                           = new ExternalOffset<UProgressBar>(0x0278, true);              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TScriptInterface<USQHelicopterInstruments>> _offOwningVehicle                                              = new ExternalOffset<TScriptInterface<USQHelicopterInstruments>>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<USQCoreStateMapComponent>          _offMapComponent                                               = new ExternalOffset<USQCoreStateMapComponent>(0x0290, true);  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMapMaterialInstance                                        = new ExternalOffset<UMaterialInstanceDynamic>(0x0298, true);  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleEngine>                  _offVehicleEngine                                              = new ExternalOffset<USQVehicleEngine>(0x02A0, true);          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_UH60_C>                        _offVehicleHull                                                = new ExternalOffset<ABP_UH60_C>(0x02A8, true);                // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQHelicopter2>                    _offVehicleRef                                                 = new ExternalOffset<ASQHelicopter2>(0x02B0, true);            // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             disabledmask                                                   => _offdisabledmask.GetValue();
	public UProgressBar                                       engine_health                                                  => _offengine_health.GetValue();
	public UProgressBar                                       hull_health                                                    => _offhull_health.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_99                                                       => _offImage_99.GetValue();
	public UImage                                             Image_100                                                      => _offImage_100.GetValue();
	public UProgressBar                                       mainrotor_health                                               => _offmainrotor_health.GetValue();
	public UProgressBar                                       tailrotor_health                                               => _offtailrotor_health.GetValue();
	public TScriptInterface<USQHelicopterInstruments>         OwningVehicle                                                  => _offOwningVehicle.GetValue();
	public USQCoreStateMapComponent                           MapComponent                                                   => _offMapComponent.GetValue();
	public UMaterialInstanceDynamic                           MapMaterialInstance                                            => _offMapMaterialInstance.GetValue();
	public USQVehicleEngine                                   VehicleEngine                                                  => _offVehicleEngine.GetValue();
	public ABP_UH60_C                                         VehicleHull                                                    => _offVehicleHull.GetValue();
	public ASQHelicopter2                                     VehicleRef                                                     => _offVehicleRef.GetValue();
	#endregion


}


}