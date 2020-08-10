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

// WidgetBlueprintGeneratedClass BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C
// 0x004C (0x032C - 0x02E0)
public class UBP_MapWidgetRallyPoint_C : USQMapWidgetRallyPoint
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02E0, false); // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offCornerPulse                                                = new ExternalOffset<UWidgetAnimation>(0x02E8, true);          // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorners                                                    = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRallypointBrush                                            = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_SpawnRally                                        = new ExternalOffset<UScaleBox>(0x0300, true);                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offselected                                                   = new ExternalOffset<UBorder>(0x0308, true);                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadNumber                                                = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ShareRally_C>                   _offW_ShareRally                                               = new ExternalOffset<UW_ShareRally_C>(0x0318, true);           // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_RallyPoint_C>           _offRally_Tooltip                                              = new ExternalOffset<UW_Tooltip_RallyPoint_C>(0x0320, true);   // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLast_Click_Time                                            = new ExternalOffset<float>(0x0328);                           // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   CornerPulse                                                    => _offCornerPulse.GetValue();
	public UImage                                             Corners                                                        => _offCorners.GetValue();
	public UImage                                             RallypointBrush                                                => _offRallypointBrush.GetValue();
	public UScaleBox                                          ScaleBox_SpawnRally                                            => _offScaleBox_SpawnRally.GetValue();
	public UBorder                                            selected                                                       => _offselected.GetValue();
	public UTextBlock                                         SquadNumber                                                    => _offSquadNumber.GetValue();
	public UW_ShareRally_C                                    W_ShareRally                                                   => _offW_ShareRally.GetValue();
	public UW_Tooltip_RallyPoint_C                            Rally_Tooltip                                                  => _offRally_Tooltip.GetValue();
	public float                                              Last_Click_Time                                                => _offLast_Click_Time.GetValue();
	#endregion


}


}