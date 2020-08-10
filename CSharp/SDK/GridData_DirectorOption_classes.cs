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

// BlueprintGeneratedClass GridData_DirectorOption.GridData_DirectorOption_C
// 0x0020 (0x0080 - 0x0060)
public class UGridData_DirectorOption_C : UGridData_BaseOption_C
{
	#region Offsets
	private ExternalOffset<UClass>                            _offControl_Widget                                             = new ExternalOffset<UClass>(0x0060, true);                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offMap_Marker_Class                                           = new ExternalOffset<UClass>(0x0068, true);                    // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMin_Distance                                               = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Distance                                               = new ExternalOffset<float>(0x0074);                           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapMarkerDataAsset>             _offMapMarkerDataAsset                                         = new ExternalOffset<USQMapMarkerDataAsset>(0x0078, true);     // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UClass                                             Control_Widget                                                 => _offControl_Widget.GetValue();
	public UClass                                             Map_Marker_Class                                               => _offMap_Marker_Class.GetValue();
	public float                                              Min_Distance                                                   => _offMin_Distance.GetValue();
	public float                                              Max_Distance                                                   => _offMax_Distance.GetValue();
	public USQMapMarkerDataAsset                              MapMarkerDataAsset                                             => _offMapMarkerDataAsset.GetValue();
	#endregion


}


}