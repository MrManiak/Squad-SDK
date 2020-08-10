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

// WidgetBlueprintGeneratedClass UMG_VehicleCargo.UMG_VehicleCargo_C
// 0x00E0 (0x02C0 - 0x01E0)
public class UUMG_VehicleCargo_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offAmmoAmount                                                 = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offConstructionAmount                                         = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offEmptyAmount                                                = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offH_Ammo                                                     = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offH_Construction                                             = new ExternalOffset<UHorizontalBox>(0x0258, true);            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Parent                                             = new ExternalOffset<USizeBox>(0x0270, true);                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_AmmoAmount                                              = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ConstructionAmount                                      = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Max                                                     = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offWeaponName                                                 = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAmmo                                                       = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offConstruction                                               = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTotal_Points                                               = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offHas_Ammo_Weapon                                            = new ExternalOffset<byte/*(bool)*/>(0x02A4);                  // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offHas_Construction_Weapon                                    = new ExternalOffset<byte/*(bool)*/>(0x02A5);                  // 0x02A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02A8, true);       // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleSeatComponent>           _offCurrent_Seat                                               = new ExternalOffset<USQVehicleSeatComponent>(0x02B0, true);   // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQVehicleResourceWeaponInventoryComponent> _offVehicleResourceInventory                                   = new ExternalOffset<USQVehicleResourceWeaponInventoryComponent>(0x02B8, true); // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             AmmoAmount                                                     => _offAmmoAmount.GetValue();
	public UImage                                             ConstructionAmount                                             => _offConstructionAmount.GetValue();
	public UImage                                             EmptyAmount                                                    => _offEmptyAmount.GetValue();
	public UHorizontalBox                                     H_Ammo                                                         => _offH_Ammo.GetValue();
	public UHorizontalBox                                     H_Construction                                                 => _offH_Construction.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public USizeBox                                           SizeBox_Parent                                                 => _offSizeBox_Parent.GetValue();
	public UTextBlock                                         TB_AmmoAmount                                                  => _offTB_AmmoAmount.GetValue();
	public UTextBlock                                         TB_ConstructionAmount                                          => _offTB_ConstructionAmount.GetValue();
	public UTextBlock                                         TB_Max                                                         => _offTB_Max.GetValue();
	public UTextBlock                                         WeaponName                                                     => _offWeaponName.GetValue();
	public float                                              Ammo                                                           => _offAmmo.GetValue();
	public float                                              Construction                                                   => _offConstruction.GetValue();
	public float                                              Total_Points                                                   => _offTotal_Points.GetValue();
	public byte/*(bool)*/                                     Has_Ammo_Weapon                                                => _offHas_Ammo_Weapon.GetValue();
	public byte/*(bool)*/                                     Has_Construction_Weapon                                        => _offHas_Construction_Weapon.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public USQVehicleSeatComponent                            Current_Seat                                                   => _offCurrent_Seat.GetValue();
	public USQVehicleResourceWeaponInventoryComponent         VehicleResourceInventory                                       => _offVehicleResourceInventory.GetValue();
	#endregion


}


}