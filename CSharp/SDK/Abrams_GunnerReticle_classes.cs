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

// WidgetBlueprintGeneratedClass Abrams_GunnerReticle.Abrams_GunnerReticle_C
// 0x00E0 (0x0338 - 0x0258)
public class UAbrams_GunnerReticle_C : USQVehicleViewWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0260, false); // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offblink_ammo                                                 = new ExternalOffset<UWidgetAnimation>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offammoIndicator                                              = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBody                                                       = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCommander                                                  = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCracked_Screen                                             = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLightBleed                                                 = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offMainReticle                                                = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offrangeFinder_Distance                                       = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offstablizationIndicator                                      = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTunnel                                                     = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTurret                                                     = new ExternalOffset<UImage>(0x02B8, true);                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offUnzoomed                                                   = new ExternalOffset<UCanvasPanel>(0x02C0, true);              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUnzoomedImage                                              = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offWeaponName                                                 = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offweaponStatus                                               = new ExternalOffset<UTextBlock>(0x02D8, true);                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FRotator>                          _offLastRot                                                    = new ExternalOffset<FRotator>(0x02E0, false);                 // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offOffsetX                                                    = new ExternalOffset<float>(0x02EC);                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FRotator>                          _offRotInterp                                                  = new ExternalOffset<FRotator>(0x02F0, false);                 // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offOffsetY                                                    = new ExternalOffset<float>(0x02FC);                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRange                                                      = new ExternalOffset<float>(0x0300);                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offTotalAmmoRemaining                                         = new ExternalOffset<int>(0x0304);                             // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleWeapon>                  _offCurrentWeapon                                              = new ExternalOffset<ASQVehicleWeapon>(0x0308, true);          // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleWeapon>                  _offLastWeapon                                                 = new ExternalOffset<ASQVehicleWeapon>(0x0310, true);          // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offReticleMat                                                 = new ExternalOffset<UMaterialInstanceDynamic>(0x0318, true);  // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleSeat>                    _offTurretRef                                                  = new ExternalOffset<ASQVehicleSeat>(0x0320, true);            // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_M1A2_Turret_C>                 _offM1A2_TurretRef                                             = new ExternalOffset<ABP_M1A2_Turret_C>(0x0328, true);         // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleSeat>                    _offCommanderTurret                                            = new ExternalOffset<ASQVehicleSeat>(0x0330, true);            // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   blink_ammo                                                     => _offblink_ammo.GetValue();
	public UTextBlock                                         ammoIndicator                                                  => _offammoIndicator.GetValue();
	public UImage                                             Body                                                           => _offBody.GetValue();
	public UImage                                             Commander                                                      => _offCommander.GetValue();
	public UImage                                             Cracked_Screen                                                 => _offCracked_Screen.GetValue();
	public UImage                                             LightBleed                                                     => _offLightBleed.GetValue();
	public UImage                                             MainReticle                                                    => _offMainReticle.GetValue();
	public UTextBlock                                         rangeFinder_Distance                                           => _offrangeFinder_Distance.GetValue();
	public UTextBlock                                         stablizationIndicator                                          => _offstablizationIndicator.GetValue();
	public UImage                                             Tunnel                                                         => _offTunnel.GetValue();
	public UImage                                             Turret                                                         => _offTurret.GetValue();
	public UCanvasPanel                                       Unzoomed                                                       => _offUnzoomed.GetValue();
	public UImage                                             UnzoomedImage                                                  => _offUnzoomedImage.GetValue();
	public UTextBlock                                         WeaponName                                                     => _offWeaponName.GetValue();
	public UTextBlock                                         weaponStatus                                                   => _offweaponStatus.GetValue();
	public FRotator                                           LastRot                                                        => _offLastRot.GetValue();
	public float                                              OffsetX                                                        => _offOffsetX.GetValue();
	public FRotator                                           RotInterp                                                      => _offRotInterp.GetValue();
	public float                                              OffsetY                                                        => _offOffsetY.GetValue();
	public float                                              Range                                                          => _offRange.GetValue();
	public int                                                TotalAmmoRemaining                                             => _offTotalAmmoRemaining.GetValue();
	public ASQVehicleWeapon                                   CurrentWeapon                                                  => _offCurrentWeapon.GetValue();
	public ASQVehicleWeapon                                   LastWeapon                                                     => _offLastWeapon.GetValue();
	public UMaterialInstanceDynamic                           ReticleMat                                                     => _offReticleMat.GetValue();
	public ASQVehicleSeat                                     TurretRef                                                      => _offTurretRef.GetValue();
	public ABP_M1A2_Turret_C                                  M1A2_TurretRef                                                 => _offM1A2_TurretRef.GetValue();
	public ASQVehicleSeat                                     CommanderTurret                                                => _offCommanderTurret.GetValue();
	#endregion


}


}