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

// WidgetBlueprintGeneratedClass BP_MapMarker_Selectable.BP_MapMarker_Selectable_C
// 0x000F (0x0328 - 0x0319)
public class UBP_MapMarker_Selectable_C : USQMapMarkerBase
{
	#region Offsets
	private ExternalOffset<float>                             _offMarkerScale                                                = new ExternalOffset<float>(0x0320);                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offFadeOpacity                                                = new ExternalOffset<float>(0x0324);                           // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public float                                              MarkerScale                                                    => _offMarkerScale.GetValue();
	public float                                              FadeOpacity                                                    => _offFadeOpacity.GetValue();
	#endregion


}


}