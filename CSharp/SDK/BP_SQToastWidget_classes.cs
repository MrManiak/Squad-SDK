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

// WidgetBlueprintGeneratedClass BP_SQToastWidget.BP_SQToastWidget_C
// 0x002C (0x0288 - 0x025C)
public class UBP_SQToastWidget_C : USQToastWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0260, false); // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offClose_Anim                                                 = new ExternalOffset<UWidgetAnimation>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offOpen_Anim                                                  = new ExternalOffset<UWidgetAnimation>(0x0270, true);          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offToastTextWidget                                            = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Close_Anim                                                     => _offClose_Anim.GetValue();
	public UWidgetAnimation                                   Open_Anim                                                      => _offOpen_Anim.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UTextBlock                                         ToastTextWidget                                                => _offToastTextWidget.GetValue();
	#endregion


}


}