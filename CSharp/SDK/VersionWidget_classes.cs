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

// WidgetBlueprintGeneratedClass VersionWidget.VersionWidget_C
// 0x0058 (0x0238 - 0x01E0)
public class UVersionWidget_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UTextBlock>                        _offTextBlock_3166                                             = new ExternalOffset<UTextBlock>(0x0230, true);                // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public UTextBlock                                         TextBlock_3166                                                 => _offTextBlock_3166.GetValue();
	#endregion


}


}