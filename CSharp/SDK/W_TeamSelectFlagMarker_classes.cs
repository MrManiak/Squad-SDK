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

// WidgetBlueprintGeneratedClass W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C
// 0x0080 (0x0260 - 0x01E0)
public class UW_TeamSelectFlagMarker_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offFlagImage                                                  = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFlagName                                                   = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCloseTooltip                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0248, false); // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<USQCaptureZoneComponent>           _offCaptureZone                                                = new ExternalOffset<USQCaptureZoneComponent>(0x0258, true);   // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             FlagImage                                                      => _offFlagImage.GetValue();
	public UTextBlock                                         FlagName                                                       => _offFlagName.GetValue();
	public FScriptMulticastDelegate                           CloseTooltip                                                   => _offCloseTooltip.GetValue();
	public USQCaptureZoneComponent                            CaptureZone                                                    => _offCaptureZone.GetValue();
	#endregion


}


}