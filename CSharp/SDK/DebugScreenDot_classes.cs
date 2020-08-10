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

// WidgetBlueprintGeneratedClass DebugScreenDot.DebugScreenDot_C
// 0x0058 (0x0238 - 0x01E0)
public class UDebugScreenDot_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UImage>                            _offDebugCenterDot                                             = new ExternalOffset<UImage>(0x0230, true);                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public UImage                                             DebugCenterDot                                                 => _offDebugCenterDot.GetValue();
	#endregion


}


}