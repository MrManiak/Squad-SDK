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

// WidgetBlueprintGeneratedClass W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C
// 0x0018 (0x02E8 - 0x02D0)
public class UW_MapMarker_DirectorParent_C : USQMapWidgetMapMarkerSelectable
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D0, false); // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<ABP_MapMarker_DirectorMaster_C>    _offMapMarker_Director                                         = new ExternalOffset<ABP_MapMarker_DirectorMaster_C>(0x02D8, true); // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFaded                                                      = new ExternalOffset<byte/*(bool)*/>(0x02E0);                  // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offFade_Time                                                  = new ExternalOffset<float>(0x02E4);                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public ABP_MapMarker_DirectorMaster_C                     MapMarker_Director                                             => _offMapMarker_Director.GetValue();
	public byte/*(bool)*/                                     Faded                                                          => _offFaded.GetValue();
	public float                                              Fade_Time                                                      => _offFade_Time.GetValue();
	#endregion


}


}