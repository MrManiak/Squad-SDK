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

// WidgetBlueprintGeneratedClass BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C
// 0x0044 (0x0304 - 0x02C0)
public class UBP_MapWidgetSpawnPoint_C : USQMapWidgetSpawnPoint
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02C8, false); // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offCornerPulse                                                = new ExternalOffset<UWidgetAnimation>(0x02D0, true);          // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCorners                                                    = new ExternalOffset<UImage>(0x02D8, true);                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_Spawn                                             = new ExternalOffset<UScaleBox>(0x02E0, true);                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offselected                                                   = new ExternalOffset<UBorder>(0x02E8, true);                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSiegedIcon                                                 = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpawnTypeIcon                                              = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLast_Click_Time                                            = new ExternalOffset<float>(0x0300);                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   CornerPulse                                                    => _offCornerPulse.GetValue();
	public UImage                                             Corners                                                        => _offCorners.GetValue();
	public UScaleBox                                          ScaleBox_Spawn                                                 => _offScaleBox_Spawn.GetValue();
	public UBorder                                            selected                                                       => _offselected.GetValue();
	public UImage                                             SiegedIcon                                                     => _offSiegedIcon.GetValue();
	public UImage                                             SpawnTypeIcon                                                  => _offSpawnTypeIcon.GetValue();
	public float                                              Last_Click_Time                                                => _offLast_Click_Time.GetValue();
	#endregion


}


}