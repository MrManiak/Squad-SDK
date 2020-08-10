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

// BlueprintGeneratedClass BPComponent_RadialModel.BPComponent_RadialModel_C
// 0x0018 (0x00E0 - 0x00C8)
public class UBPComponent_RadialModel_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<UClass>                            _offRadial_Model                                               = new ExternalOffset<UClass>(0x00D8, true);                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UClass                                             Radial_Model                                                   => _offRadial_Model.GetValue();
	#endregion


}


}