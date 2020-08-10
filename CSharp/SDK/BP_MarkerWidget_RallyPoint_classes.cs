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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C
// 0x008C (0x02DC - 0x0250)
public class UBP_MarkerWidget_RallyPoint_C : USQMapIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCanvasPanel>                      _offCanvasPanel_1                                              = new ExternalOffset<UCanvasPanel>(0x0258, true);              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRallypointBrush                                            = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSelectedIcon                                               = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpawnFront_IMG                                             = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadNumber                                                = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsSelected                                                = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FSlateColor>                       _offOwnSquadTint                                               = new ExternalOffset<FSlateColor>(0x0288, false);              // 0x0288(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FSlateColor>                       _offOtherSquadTint                                             = new ExternalOffset<FSlateColor>(0x02B0, false);              // 0x02B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<float>                             _offStateUpdateTime                                            = new ExternalOffset<float>(0x02D8);                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCanvasPanel                                       CanvasPanel_1                                                  => _offCanvasPanel_1.GetValue();
	public UImage                                             RallypointBrush                                                => _offRallypointBrush.GetValue();
	public UImage                                             SelectedIcon                                                   => _offSelectedIcon.GetValue();
	public UImage                                             SpawnFront_IMG                                                 => _offSpawnFront_IMG.GetValue();
	public UTextBlock                                         SquadNumber                                                    => _offSquadNumber.GetValue();
	public byte/*(bool)*/                                     bIsSelected                                                    => _offbIsSelected.GetValue();
	public FSlateColor                                        OwnSquadTint                                                   => _offOwnSquadTint.GetValue();
	public FSlateColor                                        OtherSquadTint                                                 => _offOtherSquadTint.GetValue();
	public float                                              StateUpdateTime                                                => _offStateUpdateTime.GetValue();
	#endregion


}


}