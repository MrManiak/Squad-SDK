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

// WidgetBlueprintGeneratedClass AmmoWidget.AmmoWidget_C
// 0x0068 (0x03A0 - 0x0338)
public class UAmmoWidget_C : USQAmmoWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0340, false); // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offBPAmmoCountTextBlock                                       = new ExternalOffset<UTextBlock>(0x0348, true);                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPChamberedRound                                           = new ExternalOffset<UImage>(0x0350, true);                    // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPFiremode                                                 = new ExternalOffset<UTextBlock>(0x0358, true);                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPWeaponName                                               = new ExternalOffset<UTextBlock>(0x0360, true);                // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offBPZeroingTextblock                                         = new ExternalOffset<UTextBlock>(0x0368, true);                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_2                                              = new ExternalOffset<UCanvasPanel>(0x0370, true);              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offCanvasWeaponName                                           = new ExternalOffset<UCanvasPanel>(0x0378, true);              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMagazineGroupWidget_C>            _offMagGroup1                                                  = new ExternalOffset<UMagazineGroupWidget_C>(0x0380, true);    // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMagazineGroupWidget_C>            _offMagGroup2                                                  = new ExternalOffset<UMagazineGroupWidget_C>(0x0388, true);    // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_VehicleCargo_C>               _offUMG_VehicleCargo_610                                       = new ExternalOffset<UUMG_VehicleCargo_C>(0x0390, true);       // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_2                                           = new ExternalOffset<UWidgetSwitcher>(0x0398, true);           // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         BPAmmoCountTextBlock                                           => _offBPAmmoCountTextBlock.GetValue();
	public UImage                                             BPChamberedRound                                               => _offBPChamberedRound.GetValue();
	public UTextBlock                                         BPFiremode                                                     => _offBPFiremode.GetValue();
	public UTextBlock                                         BPWeaponName                                                   => _offBPWeaponName.GetValue();
	public UTextBlock                                         BPZeroingTextblock                                             => _offBPZeroingTextblock.GetValue();
	public UCanvasPanel                                       CanvasPanel_2                                                  => _offCanvasPanel_2.GetValue();
	public UCanvasPanel                                       CanvasWeaponName                                               => _offCanvasWeaponName.GetValue();
	public UMagazineGroupWidget_C                             MagGroup1                                                      => _offMagGroup1.GetValue();
	public UMagazineGroupWidget_C                             MagGroup2                                                      => _offMagGroup2.GetValue();
	public UUMG_VehicleCargo_C                                UMG_VehicleCargo_610                                           => _offUMG_VehicleCargo_610.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_2                                               => _offWidgetSwitcher_2.GetValue();
	#endregion


}


}