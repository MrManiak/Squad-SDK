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

// WidgetBlueprintGeneratedClass RadialRearmWidget.RadialRearmWidget_C
// 0x00AC (0x04D0 - 0x0424)
public class URadialRearmWidget_C : USQRadialIconToggleButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0428, false); // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBPElementImage                                             = new ExternalOffset<UImage>(0x0430, true);                    // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPIconImage                                                = new ExternalOffset<UImage>(0x0438, true);                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPOuterRimImage                                            = new ExternalOffset<UImage>(0x0440, true);                    // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offMagCounterTextBox                                          = new ExternalOffset<UTextBlock>(0x0448, true);                // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0450, true);     // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQEquipableItem>                  _offEquippable                                                 = new ExternalOffset<ASQEquipableItem>(0x0458, true);          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offCannotRearmBackgroundColor                                 = new ExternalOffset<FLinearColor>(0x0460, false);             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offAmmoFullBackgroundColor                                    = new ExternalOffset<FLinearColor>(0x0470, false);             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialCenterRearmButton_C>        _offCenterWidget                                               = new ExternalOffset<URadialCenterRearmButton_C>(0x0480, true); // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TScriptInterface<USQRearmSource>>  _offRearmSource                                                = new ExternalOffset<TScriptInterface<USQRearmSource>>(0x0488, false); // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                               _offMagsToRearmCounter                                         = new ExternalOffset<int>(0x0498);                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAmmoAvailable                                              = new ExternalOffset<float>(0x049C);                           // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offAmmoFullToggledColor                                       = new ExternalOffset<FLinearColor>(0x04A0, false);             // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offNoAmmoLeftToggledColor                                     = new ExternalOffset<FLinearColor>(0x04B0, false);             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offDefaultToggledColor                                        = new ExternalOffset<FLinearColor>(0x04C0, false);             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             BPElementImage                                                 => _offBPElementImage.GetValue();
	public UImage                                             BPIconImage                                                    => _offBPIconImage.GetValue();
	public UImage                                             BPOuterRimImage                                                => _offBPOuterRimImage.GetValue();
	public UTextBlock                                         MagCounterTextBox                                              => _offMagCounterTextBox.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	public ASQEquipableItem                                   Equippable                                                     => _offEquippable.GetValue();
	public FLinearColor                                       CannotRearmBackgroundColor                                     => _offCannotRearmBackgroundColor.GetValue();
	public FLinearColor                                       AmmoFullBackgroundColor                                        => _offAmmoFullBackgroundColor.GetValue();
	public URadialCenterRearmButton_C                         CenterWidget                                                   => _offCenterWidget.GetValue();
	public TScriptInterface<USQRearmSource>                   RearmSource                                                    => _offRearmSource.GetValue();
	public int                                                MagsToRearmCounter                                             => _offMagsToRearmCounter.GetValue();
	public float                                              AmmoAvailable                                                  => _offAmmoAvailable.GetValue();
	public FLinearColor                                       AmmoFullToggledColor                                           => _offAmmoFullToggledColor.GetValue();
	public FLinearColor                                       NoAmmoLeftToggledColor                                         => _offNoAmmoLeftToggledColor.GetValue();
	public FLinearColor                                       DefaultToggledColor                                            => _offDefaultToggledColor.GetValue();
	#endregion


}


}