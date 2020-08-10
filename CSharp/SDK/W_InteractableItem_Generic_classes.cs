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

// WidgetBlueprintGeneratedClass W_InteractableItem_Generic.W_InteractableItem_Generic_C
// 0x0018 (0x02A8 - 0x0290)
public class UW_InteractableItem_Generic_C : UW_InteractableItem_Master_C
{
	#region Offsets
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0290, true);          // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offFormatBox                                                  = new ExternalOffset<UHorizontalBox>(0x0298, true);            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UHorizontalBox                                     FormatBox                                                      => _offFormatBox.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	#endregion


}


}