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

// WidgetBlueprintGeneratedClass SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C
// 0x0070 (0x0250 - 0x01E0)
public class USQNetInfoWidgetSlot_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage                                                      = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRichTextBlock>                  _offSQRichTextBlock_48                                         = new ExternalOffset<USQRichTextBlock>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTitleText                                                  = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image                                                          => _offImage.GetValue();
	public USQRichTextBlock                                   SQRichTextBlock_48                                             => _offSQRichTextBlock_48.GetValue();
	public UTextBlock                                         TitleText                                                      => _offTitleText.GetValue();
	#endregion


}


}