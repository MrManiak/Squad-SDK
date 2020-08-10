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

// BlueprintGeneratedClass BP_UH60.BP_UH60_C
// 0x0171 (0x0E29 - 0x0CB8)
public class ABP_UH60_C : ABP_Generic_Helicopter_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0CB8, false); // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint4                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CC0, true); // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint9                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CC8, true); // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint8                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CD0, true); // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint7                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CD8, true); // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint6                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CE0, true); // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint5                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0CE8, true); // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offEngine_Stats_Plane_2                                       = new ExternalOffset<UStaticMeshComponent>(0x0CF0, true);      // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offDirection_Plane                                            = new ExternalOffset<UStaticMeshComponent>(0x0CF8, true);      // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCamera_Plane                                               = new ExternalOffset<UStaticMeshComponent>(0x0D00, true);      // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offEngine_Stats_Plane                                         = new ExternalOffset<UStaticMeshComponent>(0x0D08, true);      // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offMap_Plane                                                  = new ExternalOffset<UStaticMeshComponent>(0x0D10, true);      // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCompass_Plane                                              = new ExternalOffset<UStaticMeshComponent>(0x0D18, true);      // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offCopilot_Plane                                              = new ExternalOffset<UStaticMeshComponent>(0x0D20, true);      // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offMain_Plane                                                 = new ExternalOffset<UStaticMeshComponent>(0x0D28, true);      // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint3                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0D30, true); // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleExitPointComponent>      _offSQVehicleExitPoint2                                        = new ExternalOffset<USQVehicleExitPointComponent>(0x0D38, true); // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offNoPenetationCol                                            = new ExternalOffset<UStaticMeshComponent>(0x0D40, true);      // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offPawnBlockingVolume                                         = new ExternalOffset<UBoxComponent>(0x0D48, true);             // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleResourceWeaponInventoryComponent> _offSQVehicleResourceWeaponInventory                           = new ExternalOffset<USQVehicleResourceWeaponInventoryComponent>(0x0D50, true); // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offL_GunMount                                                 = new ExternalOffset<UStaticMeshComponent>(0x0D58, true);      // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offR_GunMount                                                 = new ExternalOffset<UStaticMeshComponent>(0x0D60, true);      // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offSupplyCrate2                                               = new ExternalOffset<UStaticMeshComponent>(0x0D68, true);      // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offSupplyCrate                                                = new ExternalOffset<UStaticMeshComponent>(0x0D70, true);      // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offDirectionScreen                                            = new ExternalOffset<UWidgetComponent>(0x0D78, true);          // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offForwardCamera                                              = new ExternalOffset<UWidgetComponent>(0x0D80, true);          // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offEngineStats2                                               = new ExternalOffset<UWidgetComponent>(0x0D88, true);          // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPointLightComponent>              _offPointLight_1                                               = new ExternalOffset<UPointLightComponent>(0x0D90, true);      // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPointLightComponent>              _offPointLight3_1                                              = new ExternalOffset<UPointLightComponent>(0x0D98, true);      // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPointLightComponent>              _offPointLight2_1                                              = new ExternalOffset<UPointLightComponent>(0x0DA0, true);      // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPointLightComponent>              _offPointLight1_1                                              = new ExternalOffset<UPointLightComponent>(0x0DA8, true);      // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offEngineStats                                                = new ExternalOffset<UWidgetComponent>(0x0DB0, true);          // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offCompass                                                    = new ExternalOffset<UWidgetComponent>(0x0DB8, true);          // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offMapDisplay                                                 = new ExternalOffset<UWidgetComponent>(0x0DC0, true);          // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offCopilotDisplay                                             = new ExternalOffset<UWidgetComponent>(0x0DC8, true);          // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetComponent>                  _offMainDisplay                                                = new ExternalOffset<UWidgetComponent>(0x0DD0, true);          // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTimeline_1_0_LightIntensity_859CD02A453ADBC451100F93F6EE56E8 = new ExternalOffset<float>(0x0DD8);                           // 0x0DD8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offTimeline_1_0__Direction_859CD02A453ADBC451100F93F6EE56E8   = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x0DDC, false); // 0x0DDC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offTimeline_1_1                                               = new ExternalOffset<UTimelineComponent>(0x0DE0, true);        // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTimeline_0_0_Progress_3BA5EA3845B56EB865203BA049C8B264     = new ExternalOffset<float>(0x0DE8);                           // 0x0DE8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimelineDirection>>   _offTimeline_0_0__Direction_3BA5EA3845B56EB865203BA049C8B264   = new ExternalOffset<TEnumAsByte<ETimelineDirection>>(0x0DEC, false); // 0x0DEC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTimelineComponent>                _offTimeline_0_1                                               = new ExternalOffset<UTimelineComponent>(0x0DF0, true);        // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offReadyToFly                                                 = new ExternalOffset<byte/*(bool)*/>(0x0DF8);                  // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UMaterialInstanceDynamic>          _offUH60_Mat                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0E00, true);  // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offActivationProgress                                         = new ExternalOffset<float>(0x0E08);                           // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offWarning_Light_On_Timer                                     = new ExternalOffset<FTimerHandle>(0x0E10, false);             // 0x0E10(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offWarning_On_1                                               = new ExternalOffset<byte/*(bool)*/>(0x0E18);                  // 0x0E18(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	private ExternalOffset<UMaterial>                         _offScreenMat                                                  = new ExternalOffset<UMaterial>(0x0E20, true);                 // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIsCASVariant                                               = new ExternalOffset<byte/*(bool)*/>(0x0E28);                  // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint4                                            => _offSQVehicleExitPoint4.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint9                                            => _offSQVehicleExitPoint9.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint8                                            => _offSQVehicleExitPoint8.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint7                                            => _offSQVehicleExitPoint7.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint6                                            => _offSQVehicleExitPoint6.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint5                                            => _offSQVehicleExitPoint5.GetValue();
	public UStaticMeshComponent                               Engine_Stats_Plane_2                                           => _offEngine_Stats_Plane_2.GetValue();
	public UStaticMeshComponent                               Direction_Plane                                                => _offDirection_Plane.GetValue();
	public UStaticMeshComponent                               Camera_Plane                                                   => _offCamera_Plane.GetValue();
	public UStaticMeshComponent                               Engine_Stats_Plane                                             => _offEngine_Stats_Plane.GetValue();
	public UStaticMeshComponent                               Map_Plane                                                      => _offMap_Plane.GetValue();
	public UStaticMeshComponent                               Compass_Plane                                                  => _offCompass_Plane.GetValue();
	public UStaticMeshComponent                               Copilot_Plane                                                  => _offCopilot_Plane.GetValue();
	public UStaticMeshComponent                               Main_Plane                                                     => _offMain_Plane.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint3                                            => _offSQVehicleExitPoint3.GetValue();
	public USQVehicleExitPointComponent                       SQVehicleExitPoint2                                            => _offSQVehicleExitPoint2.GetValue();
	public UStaticMeshComponent                               NoPenetationCol                                                => _offNoPenetationCol.GetValue();
	public UBoxComponent                                      PawnBlockingVolume                                             => _offPawnBlockingVolume.GetValue();
	public USQVehicleResourceWeaponInventoryComponent         SQVehicleResourceWeaponInventory                               => _offSQVehicleResourceWeaponInventory.GetValue();
	public UStaticMeshComponent                               L_GunMount                                                     => _offL_GunMount.GetValue();
	public UStaticMeshComponent                               R_GunMount                                                     => _offR_GunMount.GetValue();
	public UStaticMeshComponent                               SupplyCrate2                                                   => _offSupplyCrate2.GetValue();
	public UStaticMeshComponent                               SupplyCrate                                                    => _offSupplyCrate.GetValue();
	public UWidgetComponent                                   DirectionScreen                                                => _offDirectionScreen.GetValue();
	public UWidgetComponent                                   ForwardCamera                                                  => _offForwardCamera.GetValue();
	public UWidgetComponent                                   EngineStats2                                                   => _offEngineStats2.GetValue();
	public UPointLightComponent                               PointLight_1                                                   => _offPointLight_1.GetValue();
	public UPointLightComponent                               PointLight3_1                                                  => _offPointLight3_1.GetValue();
	public UPointLightComponent                               PointLight2_1                                                  => _offPointLight2_1.GetValue();
	public UPointLightComponent                               PointLight1_1                                                  => _offPointLight1_1.GetValue();
	public UWidgetComponent                                   EngineStats                                                    => _offEngineStats.GetValue();
	public UWidgetComponent                                   Compass                                                        => _offCompass.GetValue();
	public UWidgetComponent                                   MapDisplay                                                     => _offMapDisplay.GetValue();
	public UWidgetComponent                                   CopilotDisplay                                                 => _offCopilotDisplay.GetValue();
	public UWidgetComponent                                   MainDisplay                                                    => _offMainDisplay.GetValue();
	public float                                              Timeline_1_0_LightIntensity_859CD02A453ADBC451100F93F6EE56E8   => _offTimeline_1_0_LightIntensity_859CD02A453ADBC451100F93F6EE56E8.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Timeline_1_0__Direction_859CD02A453ADBC451100F93F6EE56E8       => _offTimeline_1_0__Direction_859CD02A453ADBC451100F93F6EE56E8.GetValue();
	public UTimelineComponent                                 Timeline_1_1                                                   => _offTimeline_1_1.GetValue();
	public float                                              Timeline_0_0_Progress_3BA5EA3845B56EB865203BA049C8B264         => _offTimeline_0_0_Progress_3BA5EA3845B56EB865203BA049C8B264.GetValue();
	public TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_3BA5EA3845B56EB865203BA049C8B264       => _offTimeline_0_0__Direction_3BA5EA3845B56EB865203BA049C8B264.GetValue();
	public UTimelineComponent                                 Timeline_0_1                                                   => _offTimeline_0_1.GetValue();
	public byte/*(bool)*/                                     ReadyToFly                                                     => _offReadyToFly.GetValue();
	public UMaterialInstanceDynamic                           UH60_Mat                                                       => _offUH60_Mat.GetValue();
	public float                                              ActivationProgress                                             => _offActivationProgress.GetValue();
	public FTimerHandle                                       Warning_Light_On_Timer                                         => _offWarning_Light_On_Timer.GetValue();
	public byte/*(bool)*/                                     Warning_On_1                                                   => _offWarning_On_1.GetValue();
	public UMaterial                                          ScreenMat                                                      => _offScreenMat.GetValue();
	public byte/*(bool)*/                                     IsCASVariant                                                   => _offIsCASVariant.GetValue();
	#endregion


}


}