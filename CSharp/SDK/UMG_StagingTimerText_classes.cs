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

// WidgetBlueprintGeneratedClass UMG_StagingTimerText.UMG_StagingTimerText_C
// 0x0048 (0x02A8 - 0x0260)
public class UUMG_StagingTimerText_C : USQStagingTimerText
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0268, false); // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offClose                                                      = new ExternalOffset<UWidgetAnimation>(0x0270, true);          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offBlinking                                                   = new ExternalOffset<UWidgetAnimation>(0x0278, true);          // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorderMain                                                 = new ExternalOffset<UBorder>(0x0280, true);                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offClock                                                      = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offStaging                                                    = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Defenders                                               = new ExternalOffset<UTextBlock>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Notes                                                   = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Close                                                          => _offClose.GetValue();
	public UWidgetAnimation                                   Blinking                                                       => _offBlinking.GetValue();
	public UBorder                                            BorderMain                                                     => _offBorderMain.GetValue();
	public UImage                                             Clock                                                          => _offClock.GetValue();
	public UTextBlock                                         Staging                                                        => _offStaging.GetValue();
	public UTextBlock                                         TB_Defenders                                                   => _offTB_Defenders.GetValue();
	public UTextBlock                                         TB_Notes                                                       => _offTB_Notes.GetValue();
	#endregion


}


}