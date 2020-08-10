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

// WidgetBlueprintGeneratedClass UMG_InventoryGroup.UMG_InventoryGroup_C
// 0x0060 (0x02E8 - 0x0288)
public class UUMG_InventoryGroup_C : USQInventoryGroupWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0288, false); // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextBlock>                        _offButtonNr                                                   = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCategory                                                   = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x02A0, true);            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offItemName                                                   = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTab                                                        = new ExternalOffset<UImage>(0x02B0, true);                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryItem_C>              _offUMG_InventoryItem_C                                        = new ExternalOffset<UUMG_InventoryItem_C>(0x02B8, true);      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryItem_C>              _offUMG_InventoryItem_C_65                                     = new ExternalOffset<UUMG_InventoryItem_C>(0x02C0, true);      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryItem_C>              _offUMG_InventoryItem_C_66                                     = new ExternalOffset<UUMG_InventoryItem_C>(0x02C8, true);      // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryItem_C>              _offUMG_InventoryItem_C_67                                     = new ExternalOffset<UUMG_InventoryItem_C>(0x02D0, true);      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UUMG_InventoryItem_C>              _offUMG_InventoryItem_C_68                                     = new ExternalOffset<UUMG_InventoryItem_C>(0x02D8, true);      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offUnselectedPanel                                            = new ExternalOffset<UCanvasPanel>(0x02E0, true);              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextBlock                                         ButtonNr                                                       => _offButtonNr.GetValue();
	public UImage                                             Category                                                       => _offCategory.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UTextBlock                                         ItemName                                                       => _offItemName.GetValue();
	public UImage                                             Tab                                                            => _offTab.GetValue();
	public UUMG_InventoryItem_C                               UMG_InventoryItem_C                                            => _offUMG_InventoryItem_C.GetValue();
	public UUMG_InventoryItem_C                               UMG_InventoryItem_C_65                                         => _offUMG_InventoryItem_C_65.GetValue();
	public UUMG_InventoryItem_C                               UMG_InventoryItem_C_66                                         => _offUMG_InventoryItem_C_66.GetValue();
	public UUMG_InventoryItem_C                               UMG_InventoryItem_C_67                                         => _offUMG_InventoryItem_C_67.GetValue();
	public UUMG_InventoryItem_C                               UMG_InventoryItem_C_68                                         => _offUMG_InventoryItem_C_68.GetValue();
	public UCanvasPanel                                       UnselectedPanel                                                => _offUnselectedPanel.GetValue();
	#endregion


}


}