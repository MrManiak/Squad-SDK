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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_RepairStation.BP_MarkerWidget_RepairStation_C
// 0x0028 (0x0278 - 0x0250)
public class UBP_MarkerWidget_RepairStation_C : USQMapIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offMarkerImage                                                = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offOverlay_1                                                  = new ExternalOffset<UOverlay>(0x0260, true);                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStateUpdateTime                                            = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapIconComponent>               _offSQ_Map_Icon                                                = new ExternalOffset<USQMapIconComponent>(0x0270, true);       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             MarkerImage                                                    => _offMarkerImage.GetValue();
	public UOverlay                                           Overlay_1                                                      => _offOverlay_1.GetValue();
	public float                                              StateUpdateTime                                                => _offStateUpdateTime.GetValue();
	public USQMapIconComponent                                SQ_Map_Icon                                                    => _offSQ_Map_Icon.GetValue();
	#endregion


}


}