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

// WidgetBlueprintGeneratedClass BP_Role_Inventory.BP_Role_Inventory_C
// 0x00CC (0x02AC - 0x01E0)
public class UBP_Role_Inventory_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UUniformGridPanel>                 _offInventoryGrid                                              = new ExternalOffset<UUniformGridPanel>(0x0238, true);         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRole_WeaponName                                            = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offWeapon_Image                                               = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<FSQInventoryWeaponGroupData>> _offRoleInventory                                              = new ExternalOffset<TArray<FSQInventoryWeaponGroupData>>(0x0250, false); // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	private ExternalOffset<FText>                             _offWeaponName                                                 = new ExternalOffset<FText>(0x0260, false);                    // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<int>                               _offColumns                                                    = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offRulesetItemsToRemove                                       = new ExternalOffset<TArray<UClass>>(0x0280, false);           // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FSQInventoryMod>>           _offRulesetItemsToAdd                                          = new ExternalOffset<TArray<FSQInventoryMod>>(0x0290, false);  // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<USQRoleSettings>                   _offRoleReference                                              = new ExternalOffset<USQRoleSettings>(0x02A0, true);           // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offUpdateTimer                                                = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UUniformGridPanel                                  InventoryGrid                                                  => _offInventoryGrid.GetValue();
	public UTextBlock                                         Role_WeaponName                                                => _offRole_WeaponName.GetValue();
	public UImage                                             Weapon_Image                                                   => _offWeapon_Image.GetValue();
	public TArray<FSQInventoryWeaponGroupData>                RoleInventory                                                  => _offRoleInventory.GetValue();
	public FText                                              WeaponName                                                     => _offWeaponName.GetValue();
	public int                                                Columns                                                        => _offColumns.GetValue();
	public TArray<UClass>                                     RulesetItemsToRemove                                           => _offRulesetItemsToRemove.GetValue();
	public TArray<FSQInventoryMod>                            RulesetItemsToAdd                                              => _offRulesetItemsToAdd.GetValue();
	public USQRoleSettings                                    RoleReference                                                  => _offRoleReference.GetValue();
	public float                                              UpdateTimer                                                    => _offUpdateTimer.GetValue();
	#endregion


}


}