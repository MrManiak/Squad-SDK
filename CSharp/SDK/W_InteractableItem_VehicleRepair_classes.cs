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

// WidgetBlueprintGeneratedClass W_InteractableItem_VehicleRepair.W_InteractableItem_VehicleRepair_C
// 0x0048 (0x02D8 - 0x0290)
public class UW_InteractableItem_VehicleRepair_C : UW_InteractableItem_Master_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0290, false); // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0298, true);          // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFormatBox                                                  = new ExternalOffset<UHorizontalBox>(0x02A0, true);            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProgressBar_Hull                                           = new ExternalOffset<UProgressBar>(0x02B8, true);              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Health                                         = new ExternalOffset<UVerticalBox>(0x02C0, true);              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_VehicleStatusSmall_C>           _offW_VehicleStatusSmall                                       = new ExternalOffset<UW_VehicleStatusSmall_C>(0x02C8, true);   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLast_Is_Full                                               = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UHorizontalBox                                     FormatBox                                                      => _offFormatBox.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UProgressBar                                       ProgressBar_Hull                                               => _offProgressBar_Hull.GetValue();
	public UVerticalBox                                       VerticalBox_Health                                             => _offVerticalBox_Health.GetValue();
	public UW_VehicleStatusSmall_C                            W_VehicleStatusSmall                                           => _offW_VehicleStatusSmall.GetValue();
	public byte/*(bool)*/                                     Last_Is_Full                                                   => _offLast_Is_Full.GetValue();
	#endregion


}


}