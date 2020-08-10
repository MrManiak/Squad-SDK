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

// WidgetBlueprintGeneratedClass UMG_Tooltip.UMG_Tooltip_C
// 0x0030 (0x0270 - 0x0240)
public class UUMG_Tooltip_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpenAnim                                                   = new ExternalOffset<UWidgetAnimation>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_8                                                = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offInherit_Text                                               = new ExternalOffset<FText>(0x0258, false);                    // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OpenAnim                                                       => _offOpenAnim.GetValue();
	public UTextBlock                                         TextBlock_8                                                    => _offTextBlock_8.GetValue();
	public FText                                              Inherit_Text                                                   => _offInherit_Text.GetValue();
	#endregion


}


}