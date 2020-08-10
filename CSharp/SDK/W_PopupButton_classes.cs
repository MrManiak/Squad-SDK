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

// WidgetBlueprintGeneratedClass W_PopupButton.W_PopupButton_C
// 0x009C (0x027C - 0x01E0)
public class UW_PopupButton_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offMainMenu_Button_Development                                = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offPopupButtonText                                            = new ExternalOffset<FText>(0x0240, false);                    // 0x0240(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<FScriptMulticastDelegate>          _offClicked                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0258, false); // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FLinearColor>                      _offCustom_Color                                               = new ExternalOffset<FLinearColor>(0x0268, false);             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offID                                                         = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 MainMenu_Button_Development                                    => _offMainMenu_Button_Development.GetValue();
	public FText                                              PopupButtonText                                                => _offPopupButtonText.GetValue();
	public FScriptMulticastDelegate                           Clicked                                                        => _offClicked.GetValue();
	public FLinearColor                                       Custom_Color                                                   => _offCustom_Color.GetValue();
	public int                                                ID                                                             => _offID.GetValue();
	#endregion


}


}