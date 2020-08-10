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

// WidgetBlueprintGeneratedClass UMG_MenuBase.UMG_MenuBase_C
// 0x00D0 (0x02B0 - 0x01E0)
public class UUMG_MenuBase_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<byte/*(bool)*/>                    _offbOpen                                                      = new ExternalOffset<byte/*(bool)*/>(0x0238);                  // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UWidgetAnimation>                  _offOpen_Close_Anim                                            = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbHasOpenCloseOnce                                          = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_SQMapCore_C>                    _offMapCore                                                    = new ExternalOffset<UW_SQMapCore_C>(0x0250, true);            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offOpen_Close_Sound                                           = new ExternalOffset<USoundBase>(0x0258, true);                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offTeam_Selected                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0260, false); // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offStarted_Open                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offStarted_Close                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offFinished_Open                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0290, false); // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offFinished_Close                                             = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public byte/*(bool)*/                                     bOpen                                                          => _offbOpen.GetValue();
	public UWidgetAnimation                                   Open_Close_Anim                                                => _offOpen_Close_Anim.GetValue();
	public byte/*(bool)*/                                     bHasOpenCloseOnce                                              => _offbHasOpenCloseOnce.GetValue();
	public UW_SQMapCore_C                                     MapCore                                                        => _offMapCore.GetValue();
	public USoundBase                                         Open_Close_Sound                                               => _offOpen_Close_Sound.GetValue();
	public FScriptMulticastDelegate                           Team_Selected                                                  => _offTeam_Selected.GetValue();
	public FScriptMulticastDelegate                           Started_Open                                                   => _offStarted_Open.GetValue();
	public FScriptMulticastDelegate                           Started_Close                                                  => _offStarted_Close.GetValue();
	public FScriptMulticastDelegate                           Finished_Open                                                  => _offFinished_Open.GetValue();
	public FScriptMulticastDelegate                           Finished_Close                                                 => _offFinished_Close.GetValue();
	#endregion


}


}