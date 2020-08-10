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

// WidgetBlueprintGeneratedClass BP_Tooltip_RallyPoint.BP_Tooltip_RallyPoint_C
// 0x0020 (0x0260 - 0x0240)
public class UBP_Tooltip_RallyPoint_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpenAnim                                                   = new ExternalOffset<UWidgetAnimation>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBackgroundImage                                            = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRallyPointText                                             = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OpenAnim                                                       => _offOpenAnim.GetValue();
	public UImage                                             BackgroundImage                                                => _offBackgroundImage.GetValue();
	public UTextBlock                                         RallyPointText                                                 => _offRallyPointText.GetValue();
	#endregion


}


}