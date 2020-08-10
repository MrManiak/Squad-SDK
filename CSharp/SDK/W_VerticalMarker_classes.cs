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

// WidgetBlueprintGeneratedClass W_VerticalMarker.W_VerticalMarker_C
// 0x0068 (0x0248 - 0x01E0)
public class UW_VerticalMarker_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UImage>                            _offImage_15                                                   = new ExternalOffset<UImage>(0x0230, true);                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_16                                                   = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offText                                                       = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public UImage                                             Image_15                                                       => _offImage_15.GetValue();
	public UImage                                             Image_16                                                       => _offImage_16.GetValue();
	public UTextBlock                                         Text                                                           => _offText.GetValue();
	#endregion


}


}