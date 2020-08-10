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

// BlueprintGeneratedClass BP_PBR_TimeOfDay.BP_PBR_TimeOfDay_C
// 0x00A8 (0x02E0 - 0x0238)
public class ABP_PBR_TimeOfDay_C : AActor
{
	#region Offsets
	private ExternalOffset<UAtmosphericFogComponent>          _offAtmosphericFog                                             = new ExternalOffset<UAtmosphericFogComponent>(0x0248, true);  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPostProcessComponent>             _offPostProcess                                                = new ExternalOffset<UPostProcessComponent>(0x0250, true);     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UExponentialHeightFogComponent>    _offNight_Fog                                                  = new ExternalOffset<UExponentialHeightFogComponent>(0x0258, true); // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDirectionalLightComponent>        _offNight_Directional                                          = new ExternalOffset<UDirectionalLightComponent>(0x0260, true); // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkyLightComponent>                _offNight_Skylight                                             = new ExternalOffset<USkyLightComponent>(0x0268, true);        // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkyLightComponent>                _offDusk_Skylight                                              = new ExternalOffset<USkyLightComponent>(0x0270, true);        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UExponentialHeightFogComponent>    _offDusk_Fog                                                   = new ExternalOffset<UExponentialHeightFogComponent>(0x0278, true); // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDirectionalLightComponent>        _offDusk_Directional                                           = new ExternalOffset<UDirectionalLightComponent>(0x0280, true); // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDirectionalLightComponent>        _offSunset_Directional                                         = new ExternalOffset<UDirectionalLightComponent>(0x0288, true); // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkyLightComponent>                _offSunset_Skylight                                            = new ExternalOffset<USkyLightComponent>(0x0290, true);        // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UExponentialHeightFogComponent>    _offSunset_Fog                                                 = new ExternalOffset<UExponentialHeightFogComponent>(0x0298, true); // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UExponentialHeightFogComponent>    _offOvercast_Fog                                               = new ExternalOffset<UExponentialHeightFogComponent>(0x02A0, true); // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UExponentialHeightFogComponent>    _offMidday_Fog                                                 = new ExternalOffset<UExponentialHeightFogComponent>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDirectionalLightComponent>        _offMidday_Directional                                         = new ExternalOffset<UDirectionalLightComponent>(0x02B0, true); // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkyLightComponent>                _offMidday_Skylight                                            = new ExternalOffset<USkyLightComponent>(0x02B8, true);        // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkyLightComponent>                _offOvercast_Skylight                                          = new ExternalOffset<USkyLightComponent>(0x02C0, true);        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDirectionalLightComponent>        _offOvercast_Directional                                       = new ExternalOffset<UDirectionalLightComponent>(0x02C8, true); // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBillboardComponent>               _offToD                                                        = new ExternalOffset<UBillboardComponent>(0x02D0, true);       // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<ETimeOfDay_list>>      _offTime_of_Day                                                = new ExternalOffset<TEnumAsByte<ETimeOfDay_list>>(0x02D8, false); // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSun_Angle__Z_                                              = new ExternalOffset<int>(0x02DC);                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UAtmosphericFogComponent                           AtmosphericFog                                                 => _offAtmosphericFog.GetValue();
	public UPostProcessComponent                              PostProcess                                                    => _offPostProcess.GetValue();
	public UExponentialHeightFogComponent                     Night_Fog                                                      => _offNight_Fog.GetValue();
	public UDirectionalLightComponent                         Night_Directional                                              => _offNight_Directional.GetValue();
	public USkyLightComponent                                 Night_Skylight                                                 => _offNight_Skylight.GetValue();
	public USkyLightComponent                                 Dusk_Skylight                                                  => _offDusk_Skylight.GetValue();
	public UExponentialHeightFogComponent                     Dusk_Fog                                                       => _offDusk_Fog.GetValue();
	public UDirectionalLightComponent                         Dusk_Directional                                               => _offDusk_Directional.GetValue();
	public UDirectionalLightComponent                         Sunset_Directional                                             => _offSunset_Directional.GetValue();
	public USkyLightComponent                                 Sunset_Skylight                                                => _offSunset_Skylight.GetValue();
	public UExponentialHeightFogComponent                     Sunset_Fog                                                     => _offSunset_Fog.GetValue();
	public UExponentialHeightFogComponent                     Overcast_Fog                                                   => _offOvercast_Fog.GetValue();
	public UExponentialHeightFogComponent                     Midday_Fog                                                     => _offMidday_Fog.GetValue();
	public UDirectionalLightComponent                         Midday_Directional                                             => _offMidday_Directional.GetValue();
	public USkyLightComponent                                 Midday_Skylight                                                => _offMidday_Skylight.GetValue();
	public USkyLightComponent                                 Overcast_Skylight                                              => _offOvercast_Skylight.GetValue();
	public UDirectionalLightComponent                         Overcast_Directional                                           => _offOvercast_Directional.GetValue();
	public UBillboardComponent                                ToD                                                            => _offToD.GetValue();
	public TEnumAsByte<ETimeOfDay_list>                       Time_of_Day                                                    => _offTime_of_Day.GetValue();
	public int                                                Sun_Angle__Z_                                                  => _offSun_Angle__Z_.GetValue();
	#endregion


}


}