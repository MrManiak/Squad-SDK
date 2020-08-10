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

// WidgetBlueprintGeneratedClass RadialCenterVehicle.RadialCenterVehicle_C
// 0x0098 (0x0390 - 0x02F8)
public class URadialCenterVehicle_C : USQRadialButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02F8, false); // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offbigbackground                                              = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offEnterExitText                                              = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0310, true);                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0318, true);                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offsmallcirclebackground                                      = new ExternalOffset<UImage>(0x0320, true);                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSupplyTimer                                                = new ExternalOffset<UImage>(0x0328, true);                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextCenter                                                 = new ExternalOffset<UTextBlock>(0x0330, true);                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Entry_Supply                                = new ExternalOffset<UWidgetSwitcher>(0x0338, true);           // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBaseRadialMenu_C>                 _offOwnerRadialMenu                                            = new ExternalOffset<UBaseRadialMenu_C>(0x0340, true);         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0348, true);     // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offHovered                                                    = new ExternalOffset<byte/*(bool)*/>(0x0350);                  // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FText>                             _offAmmo_Text                                                  = new ExternalOffset<FText>(0x0358, false);                    // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ASQVehicle>                        _offVehicle                                                    = new ExternalOffset<ASQVehicle>(0x0370, true);                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UUMG_SeatProgress_C>               _offParentProgressBar                                          = new ExternalOffset<UUMG_SeatProgress_C>(0x0378, true);       // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UComp_ResourceControl_C>           _offResource_Supply_Controller                                 = new ExternalOffset<UComp_ResourceControl_C>(0x0380, true);   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0388, true);  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             bigbackground                                                  => _offbigbackground.GetValue();
	public UTextBlock                                         EnterExitText                                                  => _offEnterExitText.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             smallcirclebackground                                          => _offsmallcirclebackground.GetValue();
	public UImage                                             SupplyTimer                                                    => _offSupplyTimer.GetValue();
	public UTextBlock                                         TextCenter                                                     => _offTextCenter.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Entry_Supply                                    => _offWidgetSwitcher_Entry_Supply.GetValue();
	public UBaseRadialMenu_C                                  OwnerRadialMenu                                                => _offOwnerRadialMenu.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	public byte/*(bool)*/                                     Hovered                                                        => _offHovered.GetValue();
	public FText                                              Ammo_Text                                                      => _offAmmo_Text.GetValue();
	public ASQVehicle                                         Vehicle                                                        => _offVehicle.GetValue();
	public UUMG_SeatProgress_C                                ParentProgressBar                                              => _offParentProgressBar.GetValue();
	public UComp_ResourceControl_C                            Resource_Supply_Controller                                     => _offResource_Supply_Controller.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	#endregion


}


}