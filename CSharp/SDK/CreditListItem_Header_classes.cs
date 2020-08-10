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

// WidgetBlueprintGeneratedClass CreditListItem_Header.CreditListItem_Header_C
// 0x0078 (0x0258 - 0x01E0)
public class UCreditListItem_Header_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UTextBlock>                        _offTitle                                                      = new ExternalOffset<UTextBlock>(0x0230, true);                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCreditsWindow_C>                  _offCreditsWindow                                              = new ExternalOffset<UCreditsWindow_C>(0x0238, true);          // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offHeader_Text                                                = new ExternalOffset<FText>(0x0240, false);                    // 0x0240(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	#endregion

	#region Props
	public UTextBlock                                         Title                                                          => _offTitle.GetValue();
	public UCreditsWindow_C                                   CreditsWindow                                                  => _offCreditsWindow.GetValue();
	public FText                                              Header_Text                                                    => _offHeader_Text.GetValue();
	#endregion


}


}