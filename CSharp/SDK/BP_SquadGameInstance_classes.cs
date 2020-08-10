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

// BlueprintGeneratedClass BP_SquadGameInstance.BP_SquadGameInstance_C
// 0x0050 (0x05C8 - 0x0578)
public class UBP_SquadGameInstance_C : USQGameInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x05A8, false); // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USaveDataUIWrapper_C>              _offUISaveDataWrapper                                          = new ExternalOffset<USaveDataUIWrapper_C>(0x05B0, true);      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offUI_Data_Changed                                            = new ExternalOffset<FScriptMulticastDelegate>(0x05B8, false); // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USaveDataUIWrapper_C                               UISaveDataWrapper                                              => _offUISaveDataWrapper.GetValue();
	public FScriptMulticastDelegate                           UI_Data_Changed                                                => _offUI_Data_Changed.GetValue();
	#endregion


}


}