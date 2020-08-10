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

// WidgetBlueprintGeneratedClass W_InteractableList_Helicopter.W_InteractableList_Helicopter_C
// 0x00BF (0x0368 - 0x02A9)
public class UW_InteractableList_Helicopter_C : UW_InteractableWidgetList_Master_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B0, false); // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x02B8, true);          // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_5                                                   = new ExternalOffset<UBorder>(0x02C0, true);                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offCommandSwitch                                              = new ExternalOffset<UWidgetSwitcher>(0x02C8, true);           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconSquad                                                  = new ExternalOffset<UImage>(0x02D0, true);                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offIconSwitch                                                 = new ExternalOffset<UWidgetSwitcher>(0x02D8, true);           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x02E0, true);                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offInteractList                                               = new ExternalOffset<UVerticalBox>(0x02E8, true);              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offObjectName                                                 = new ExternalOffset<UTextBlock>(0x02F0, true);                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeClaim                                                  = new ExternalOffset<USizeBox>(0x02F8, true);                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSquadColorBorder                                           = new ExternalOffset<UBorder>(0x0300, true);                   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SquadID                                                 = new ExternalOffset<UTextBlock>(0x0308, true);                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offInteract_Item_Class                                        = new ExternalOffset<UClass>(0x0310, true);                    // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offFade_Timer_1                                               = new ExternalOffset<FTimerHandle>(0x0318, false);             // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpening_1                                                  = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FSQUsableData>                     _offRepair_Data                                                = new ExternalOffset<FSQUsableData>(0x0328, false);            // 0x0328(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UBorder                                            Border_5                                                       => _offBorder_5.GetValue();
	public UWidgetSwitcher                                    CommandSwitch                                                  => _offCommandSwitch.GetValue();
	public UImage                                             IconSquad                                                      => _offIconSquad.GetValue();
	public UWidgetSwitcher                                    IconSwitch                                                     => _offIconSwitch.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UVerticalBox                                       InteractList                                                   => _offInteractList.GetValue();
	public UTextBlock                                         ObjectName                                                     => _offObjectName.GetValue();
	public USizeBox                                           SizeClaim                                                      => _offSizeClaim.GetValue();
	public UBorder                                            SquadColorBorder                                               => _offSquadColorBorder.GetValue();
	public UTextBlock                                         TB_SquadID                                                     => _offTB_SquadID.GetValue();
	public UClass                                             Interact_Item_Class                                            => _offInteract_Item_Class.GetValue();
	public FTimerHandle                                       Fade_Timer_1                                                   => _offFade_Timer_1.GetValue();
	public byte/*(bool)*/                                     Opening_1                                                      => _offOpening_1.GetValue();
	public FSQUsableData                                      Repair_Data                                                    => _offRepair_Data.GetValue();
	#endregion


}


}