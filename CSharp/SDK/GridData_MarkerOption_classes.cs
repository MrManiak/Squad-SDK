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

// BlueprintGeneratedClass GridData_MarkerOption.GridData_MarkerOption_C
// 0x0010 (0x0070 - 0x0060)
public class UGridData_MarkerOption_C : UGridData_BaseOption_C
{
	#region Offsets
	private ExternalOffset<UClass>                            _offBP_Marker                                                  = new ExternalOffset<UClass>(0x0060, true);                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapMarkerDataAsset>             _offMapMarkerData                                              = new ExternalOffset<USQMapMarkerDataAsset>(0x0068, true);     // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UClass                                             BP_Marker                                                      => _offBP_Marker.GetValue();
	public USQMapMarkerDataAsset                              MapMarkerData                                                  => _offMapMarkerData.GetValue();
	#endregion


}


}