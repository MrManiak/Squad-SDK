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

// BlueprintGeneratedClass BP_WeatherSystem.BP_WeatherSystem_C
// 0x0144 (0x037C - 0x0238)
public class ABP_WeatherSystem_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UAudioComponent>                   _offWeatherAudio                                               = new ExternalOffset<UAudioComponent>(0x0250, true);           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBillboardComponent>               _offWeatherIcon                                                = new ExternalOffset<UBillboardComponent>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UArrowComponent>                   _offWindDirection                                              = new ExternalOffset<UArrowComponent>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USphereComponent>                  _offWeatherEffectCoverage                                      = new ExternalOffset<USphereComponent>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0270, true);           // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offAreaRadius                                                 = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offParticleSystem                                             = new ExternalOffset<UParticleSystem>(0x0280, true);           // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTransform>                        _offSpawnTransform                                             = new ExternalOffset<FTransform>(0x0290, false);               // 0x0290(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<AActor>                            _offLocalPlayer                                                = new ExternalOffset<AActor>(0x02C0, true);                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystemRef                                          = new ExternalOffset<UParticleSystemComponent>(0x02C8, true);  // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCameraUpdateFrequency                                      = new ExternalOffset<float>(0x02D0);                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offSystemActive                                               = new ExternalOffset<byte/*(bool)*/>(0x02D4);                  // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TEnumAsByte<EN_Weather>>           _offWeatherType                                                = new ExternalOffset<TEnumAsByte<EN_Weather>>(0x02D5, false);  // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offDistantParticles                                           = new ExternalOffset<UParticleSystemComponent>(0x02D8, true);  // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UObject>>                   _offNegativeAreas                                              = new ExternalOffset<TArray<UObject>>(0x02E0, false);          // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offUseArea                                                    = new ExternalOffset<byte/*(bool)*/>(0x02F0);                  // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offPreviousMat                                                = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F1, false); // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomsFloor                                                 = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F2, false); // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomFrontWall                                              = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F3, false); // 0x02F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomBackWall                                               = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F4, false); // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomLeftWall                                               = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F5, false); // 0x02F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomRightWall                                              = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F6, false); // 0x02F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EPhysicalSurface>>     _offRoomCeiling                                                = new ExternalOffset<TEnumAsByte<EPhysicalSurface>>(0x02F7, false); // 0x02F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCeilingHeight                                              = new ExternalOffset<float>(0x02F8);                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRoomWidth                                                  = new ExternalOffset<float>(0x02FC);                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRoomLenght                                                 = new ExternalOffset<float>(0x0300);                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offPlayerIsInside                                             = new ExternalOffset<byte/*(bool)*/>(0x0304);                  // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UParticleSystem>                   _offClearWeather                                               = new ExternalOffset<UParticleSystem>(0x0308, true);           // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offSandstorm                                                  = new ExternalOffset<UParticleSystem>(0x0310, true);           // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offLightSnow                                                  = new ExternalOffset<UParticleSystem>(0x0318, true);           // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offHeavySnow                                                  = new ExternalOffset<UParticleSystem>(0x0320, true);           // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offLightRain                                                  = new ExternalOffset<UParticleSystem>(0x0328, true);           // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offHeavyRain                                                  = new ExternalOffset<UParticleSystem>(0x0330, true);           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offWeatherCylinder                                            = new ExternalOffset<UParticleSystemComponent>(0x0338, true);  // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offSandstorm_Cylinder                                         = new ExternalOffset<UParticleSystem>(0x0340, true);           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offLightSnow_Cylinder                                         = new ExternalOffset<UParticleSystem>(0x0348, true);           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offHeavySnow_Cylinder                                         = new ExternalOffset<UParticleSystem>(0x0350, true);           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offLightRain_Cylinder                                         = new ExternalOffset<UParticleSystem>(0x0358, true);           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offHeavyRain_Cylinder                                         = new ExternalOffset<UParticleSystem>(0x0360, true);           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUseWeatherCylinder                                         = new ExternalOffset<byte/*(bool)*/>(0x0368);                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<float>                             _offParticleSystemOffset                                       = new ExternalOffset<float>(0x036C);                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offGlobalWind                                                 = new ExternalOffset<byte/*(bool)*/>(0x0370);                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offWindAngle                                                  = new ExternalOffset<float>(0x0374);                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offWindStrength                                               = new ExternalOffset<float>(0x0378);                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UAudioComponent                                    WeatherAudio                                                   => _offWeatherAudio.GetValue();
	public UBillboardComponent                                WeatherIcon                                                    => _offWeatherIcon.GetValue();
	public UArrowComponent                                    WindDirection                                                  => _offWindDirection.GetValue();
	public USphereComponent                                   WeatherEffectCoverage                                          => _offWeatherEffectCoverage.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public int                                                AreaRadius                                                     => _offAreaRadius.GetValue();
	public UParticleSystem                                    ParticleSystem                                                 => _offParticleSystem.GetValue();
	public FTransform                                         SpawnTransform                                                 => _offSpawnTransform.GetValue();
	public AActor                                             LocalPlayer                                                    => _offLocalPlayer.GetValue();
	public UParticleSystemComponent                           ParticleSystemRef                                              => _offParticleSystemRef.GetValue();
	public float                                              CameraUpdateFrequency                                          => _offCameraUpdateFrequency.GetValue();
	public byte/*(bool)*/                                     SystemActive                                                   => _offSystemActive.GetValue();
	public TEnumAsByte<EN_Weather>                            WeatherType                                                    => _offWeatherType.GetValue();
	public UParticleSystemComponent                           DistantParticles                                               => _offDistantParticles.GetValue();
	public TArray<UObject>                                    NegativeAreas                                                  => _offNegativeAreas.GetValue();
	public byte/*(bool)*/                                     UseArea                                                        => _offUseArea.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      PreviousMat                                                    => _offPreviousMat.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomsFloor                                                     => _offRoomsFloor.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomFrontWall                                                  => _offRoomFrontWall.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomBackWall                                                   => _offRoomBackWall.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomLeftWall                                                   => _offRoomLeftWall.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomRightWall                                                  => _offRoomRightWall.GetValue();
	public TEnumAsByte<EPhysicalSurface>                      RoomCeiling                                                    => _offRoomCeiling.GetValue();
	public float                                              CeilingHeight                                                  => _offCeilingHeight.GetValue();
	public float                                              RoomWidth                                                      => _offRoomWidth.GetValue();
	public float                                              RoomLenght                                                     => _offRoomLenght.GetValue();
	public byte/*(bool)*/                                     PlayerIsInside                                                 => _offPlayerIsInside.GetValue();
	public UParticleSystem                                    ClearWeather                                                   => _offClearWeather.GetValue();
	public UParticleSystem                                    Sandstorm                                                      => _offSandstorm.GetValue();
	public UParticleSystem                                    LightSnow                                                      => _offLightSnow.GetValue();
	public UParticleSystem                                    HeavySnow                                                      => _offHeavySnow.GetValue();
	public UParticleSystem                                    LightRain                                                      => _offLightRain.GetValue();
	public UParticleSystem                                    HeavyRain                                                      => _offHeavyRain.GetValue();
	public UParticleSystemComponent                           WeatherCylinder                                                => _offWeatherCylinder.GetValue();
	public UParticleSystem                                    Sandstorm_Cylinder                                             => _offSandstorm_Cylinder.GetValue();
	public UParticleSystem                                    LightSnow_Cylinder                                             => _offLightSnow_Cylinder.GetValue();
	public UParticleSystem                                    HeavySnow_Cylinder                                             => _offHeavySnow_Cylinder.GetValue();
	public UParticleSystem                                    LightRain_Cylinder                                             => _offLightRain_Cylinder.GetValue();
	public UParticleSystem                                    HeavyRain_Cylinder                                             => _offHeavyRain_Cylinder.GetValue();
	public byte/*(bool)*/                                     UseWeatherCylinder                                             => _offUseWeatherCylinder.GetValue();
	public float                                              ParticleSystemOffset                                           => _offParticleSystemOffset.GetValue();
	public byte/*(bool)*/                                     GlobalWind                                                     => _offGlobalWind.GetValue();
	public float                                              WindAngle                                                      => _offWindAngle.GetValue();
	public float                                              WindStrength                                                   => _offWindStrength.GetValue();
	#endregion


}


}