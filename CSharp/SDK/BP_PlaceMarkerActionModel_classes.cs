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

// BlueprintGeneratedClass BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C
// 0x0018 (0x00B8 - 0x00A0)
public class UBP_PlaceMarkerActionModel_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USQMapMarkerDataAsset>             _offMapMarkerData                                              = new ExternalOffset<USQMapMarkerDataAsset>(0x00A8, true);     // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offMarkerClass                                                = new ExternalOffset<UClass>(0x00B0, true);                    // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USQMapMarkerDataAsset                              MapMarkerData                                                  => _offMapMarkerData.GetValue();
	public UClass                                             MarkerClass                                                    => _offMarkerClass.GetValue();
	#endregion


}


}