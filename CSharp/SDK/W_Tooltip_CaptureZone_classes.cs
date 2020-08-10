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

// WidgetBlueprintGeneratedClass W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C
// 0x0038 (0x0278 - 0x0240)
public class UW_Tooltip_CaptureZone_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpenAnim                                                   = new ExternalOffset<UWidgetAnimation>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBackgroundImage                                            = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offCapturePointText                                           = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offZone_Name                                                  = new ExternalOffset<FText>(0x0260, false);                    // 0x0260(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   OpenAnim                                                       => _offOpenAnim.GetValue();
	public UImage                                             BackgroundImage                                                => _offBackgroundImage.GetValue();
	public UTextBlock                                         CapturePointText                                               => _offCapturePointText.GetValue();
	public FText                                              Zone_Name                                                      => _offZone_Name.GetValue();
	#endregion


}


}