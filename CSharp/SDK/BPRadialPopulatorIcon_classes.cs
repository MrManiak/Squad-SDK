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

// BlueprintGeneratedClass BPRadialPopulatorIcon.BPRadialPopulatorIcon_C
// 0x0008 (0x0030 - 0x0028)
public class UBPRadialPopulatorIcon_C : UObject
{
	#region Offsets
	private ExternalOffset<UClass>                            _offWidgetClass                                                = new ExternalOffset<UClass>(0x0028, true);                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UClass                                             WidgetClass                                                    => _offWidgetClass.GetValue();
	#endregion


}


}