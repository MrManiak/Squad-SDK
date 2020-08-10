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

// WidgetBlueprintGeneratedClass W_PilotCamera.W_PilotCamera_C
// 0x0078 (0x0258 - 0x01E0)
public class UW_PilotCamera_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UImage>                            _offGPSMap                                                     = new ExternalOffset<UImage>(0x0230, true);                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UObject>                           _offOwningVehicle                                              = new ExternalOffset<UObject>(0x0238, true);                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMapMaterialInstance                                        = new ExternalOffset<UMaterialInstanceDynamic>(0x0240, true);  // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCoreStateMapComponent>          _offMap_Component                                              = new ExternalOffset<USQCoreStateMapComponent>(0x0248, true);  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<APlayerController>                 _offOwningPlayerRef                                            = new ExternalOffset<APlayerController>(0x0250, true);         // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UImage                                             GPSMap                                                         => _offGPSMap.GetValue();
	public UObject                                            OwningVehicle                                                  => _offOwningVehicle.GetValue();
	public UMaterialInstanceDynamic                           MapMaterialInstance                                            => _offMapMaterialInstance.GetValue();
	public USQCoreStateMapComponent                           Map_Component                                                  => _offMap_Component.GetValue();
	public APlayerController                                  OwningPlayerRef                                                => _offOwningPlayerRef.GetValue();
	#endregion


}


}