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

// BlueprintGeneratedClass BP_SpawnIconComponent.BP_SpawnIconComponent_C
// 0x0048 (0x01A0 - 0x0158)
public class UBP_SpawnIconComponent_C : USQMapIconComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0188, false); // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FLinearColor>                      _offInvalidTint                                                = new ExternalOffset<FLinearColor>(0x0190, false);             // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FLinearColor                                       InvalidTint                                                    => _offInvalidTint.GetValue();
	#endregion


}


}