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

// WidgetBlueprintGeneratedClass RadialTextEntry.RadialTextEntry_C
// 0x003C (0x0448 - 0x040C)
public class URadialTextEntry_C : USQRadialIconButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0410, false); // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBPElementImage                                             = new ExternalOffset<UImage>(0x0418, true);                    // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPIconImage                                                = new ExternalOffset<UImage>(0x0420, true);                    // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBPOuterRimImage                                            = new ExternalOffset<UImage>(0x0428, true);                    // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Text                                                    = new ExternalOffset<UTextBlock>(0x0430, true);                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offBPIconImageTexture                                         = new ExternalOffset<UTexture2D>(0x0438, true);                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_RadialItemModel_C>             _offRelatedActionModel                                         = new ExternalOffset<UBP_RadialItemModel_C>(0x0440, true);     // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             BPElementImage                                                 => _offBPElementImage.GetValue();
	public UImage                                             BPIconImage                                                    => _offBPIconImage.GetValue();
	public UImage                                             BPOuterRimImage                                                => _offBPOuterRimImage.GetValue();
	public UTextBlock                                         TB_Text                                                        => _offTB_Text.GetValue();
	public UTexture2D                                         BPIconImageTexture                                             => _offBPIconImageTexture.GetValue();
	public UBP_RadialItemModel_C                              RelatedActionModel                                             => _offRelatedActionModel.GetValue();
	#endregion


}


}