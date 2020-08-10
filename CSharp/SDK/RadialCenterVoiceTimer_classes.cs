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

// WidgetBlueprintGeneratedClass RadialCenterVoiceTimer.RadialCenterVoiceTimer_C
// 0x0048 (0x0340 - 0x02F8)
public class URadialCenterVoiceTimer_C : USQRadialButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02F8, false); // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBackground                                                 = new ExternalOffset<UImage>(0x0300, true);                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_215                                                  = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_CenterText                                              = new ExternalOffset<UTextBlock>(0x0310, true);                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0318, true);  // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UVoiceAction_Component_C>          _offVoice_Component                                            = new ExternalOffset<UVoiceAction_Component_C>(0x0320, true);  // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offName                                                       = new ExternalOffset<FText>(0x0328, false);                    // 0x0328(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Background                                                     => _offBackground.GetValue();
	public UImage                                             Image_215                                                      => _offImage_215.GetValue();
	public UTextBlock                                         TB_CenterText                                                  => _offTB_CenterText.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	public UVoiceAction_Component_C                           Voice_Component                                                => _offVoice_Component.GetValue();
	public FText                                              Name                                                           => _offName.GetValue();
	#endregion


}


}