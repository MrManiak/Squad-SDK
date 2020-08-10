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

// BlueprintGeneratedClass BP_VoiceAction.BP_VoiceAction_C
// 0x0020 (0x0050 - 0x0030)
public class UBP_VoiceAction_C : UBP_RadialAction_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0030, false); // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FScriptMulticastDelegate>          _offDoAction                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<USoundBase>                        _offSound                                                      = new ExternalOffset<USoundBase>(0x0048, true);                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FScriptMulticastDelegate                           DoAction                                                       => _offDoAction.GetValue();
	public USoundBase                                         Sound                                                          => _offSound.GetValue();
	#endregion


}


}