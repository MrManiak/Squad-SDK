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

// WidgetBlueprintGeneratedClass W_GiveUp.W_GiveUp_C
// 0x0099 (0x0279 - 0x01E0)
public class UW_GiveUp_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offGiveUpButton                                               = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Bleed                                                   = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0250, true);       // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offGiveUpPressed                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0258, false); // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offHide_Confirmation                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0268, false); // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offCollapse_On_Hide                                           = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 GiveUpButton                                                   => _offGiveUpButton.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UTextBlock                                         TB_Bleed                                                       => _offTB_Bleed.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public FScriptMulticastDelegate                           GiveUpPressed                                                  => _offGiveUpPressed.GetValue();
	public FScriptMulticastDelegate                           Hide_Confirmation                                              => _offHide_Confirmation.GetValue();
	public byte/*(bool)*/                                     Collapse_On_Hide                                               => _offCollapse_On_Hide.GetValue();
	#endregion


}


}