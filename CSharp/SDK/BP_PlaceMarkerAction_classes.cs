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

// BlueprintGeneratedClass BP_PlaceMarkerAction.BP_PlaceMarkerAction_C
// 0x001C (0x004C - 0x0030)
public class UBP_PlaceMarkerAction_C : UBP_RadialAction_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0030, false); // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FScriptMulticastDelegate>          _offDoAction                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<int>                               _offPlaceMarkerRange                                           = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FScriptMulticastDelegate                           DoAction                                                       => _offDoAction.GetValue();
	public int                                                PlaceMarkerRange                                               => _offPlaceMarkerRange.GetValue();
	#endregion


}


}