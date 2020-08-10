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

// WidgetBlueprintGeneratedClass RadialCenterRearmButton.RadialCenterRearmButton_C
// 0x010C (0x0518 - 0x040C)
public class URadialCenterRearmButton_C : USQRadialIconButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0410, false); // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBG                                                         = new ExternalOffset<UImage>(0x0418, true);                    // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPIconImage                                                = new ExternalOffset<UImage>(0x0420, true);                    // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRearmCostTextbox                                           = new ExternalOffset<UTextBlock>(0x0428, true);                // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRearmItemsText                                             = new ExternalOffset<UTextBlock>(0x0430, true);                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offResupplyLitBG                                              = new ExternalOffset<UImage>(0x0438, true);                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offRearmCostText                                              = new ExternalOffset<FText>(0x0440, false);                    // 0x0440(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UBaseRadialMenu_C>                 _offOwnerRadialMenu                                            = new ExternalOffset<UBaseRadialMenu_C>(0x0458, true);         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0460, true);     // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQPawnInventoryComponent>         _offInventoryComponent                                         = new ExternalOffset<USQPawnInventoryComponent>(0x0468, true); // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAmmoCostToRearmSelectedWeapons                             = new ExternalOffset<float>(0x0470);                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//	private TMap<class ASQEquipableItem*, int>                _offWeaponsToRearm                                             = new ExternalOffset<TMap<int>>(0x0478, false);                // 0x0478(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offUpdateAmmoRemaining                                        = new ExternalOffset<FScriptMulticastDelegate>(0x04C8, false); // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offAmmoInSourceRemaining                                      = new ExternalOffset<float>(0x04D8);                           // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TScriptInterface<USQRearmSource>>  _offRearmSource                                                = new ExternalOffset<TScriptInterface<USQRearmSource>>(0x04E0, false); // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offbCachedCanRearmAll                                         = new ExternalOffset<byte/*(bool)*/>(0x04F0);                  // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offIsRearmAllCostCached                                       = new ExternalOffset<byte/*(bool)*/>(0x04F1);                  // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offInventoryUpdated                                           = new ExternalOffset<FScriptMulticastDelegate>(0x04F8, false); // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offCachedCostToRearmAll                                       = new ExternalOffset<float>(0x0508);                           // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbCachedCanRearmSelected                                    = new ExternalOffset<byte/*(bool)*/>(0x050C);                  // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offPreviousRearmCount                                         = new ExternalOffset<int>(0x0510);                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offMissingRearmItems                                          = new ExternalOffset<int>(0x0514);                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             BG                                                             => _offBG.GetValue();
	public UImage                                             BPIconImage                                                    => _offBPIconImage.GetValue();
	public UTextBlock                                         RearmCostTextbox                                               => _offRearmCostTextbox.GetValue();
	public UTextBlock                                         RearmItemsText                                                 => _offRearmItemsText.GetValue();
	public UImage                                             ResupplyLitBG                                                  => _offResupplyLitBG.GetValue();
	public FText                                              RearmCostText                                                  => _offRearmCostText.GetValue();
	public UBaseRadialMenu_C                                  OwnerRadialMenu                                                => _offOwnerRadialMenu.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	public USQPawnInventoryComponent                          InventoryComponent                                             => _offInventoryComponent.GetValue();
	public float                                              AmmoCostToRearmSelectedWeapons                                 => _offAmmoCostToRearmSelectedWeapons.GetValue();
	public FScriptMulticastDelegate                           UpdateAmmoRemaining                                            => _offUpdateAmmoRemaining.GetValue();
	public float                                              AmmoInSourceRemaining                                          => _offAmmoInSourceRemaining.GetValue();
	public TScriptInterface<USQRearmSource>                   RearmSource                                                    => _offRearmSource.GetValue();
	public byte/*(bool)*/                                     bCachedCanRearmAll                                             => _offbCachedCanRearmAll.GetValue();
	public byte/*(bool)*/                                     IsRearmAllCostCached                                           => _offIsRearmAllCostCached.GetValue();
	public FScriptMulticastDelegate                           InventoryUpdated                                               => _offInventoryUpdated.GetValue();
	public float                                              CachedCostToRearmAll                                           => _offCachedCostToRearmAll.GetValue();
	public byte/*(bool)*/                                     bCachedCanRearmSelected                                        => _offbCachedCanRearmSelected.GetValue();
	public int                                                PreviousRearmCount                                             => _offPreviousRearmCount.GetValue();
	public int                                                MissingRearmItems                                              => _offMissingRearmItems.GetValue();
	#endregion


}


}