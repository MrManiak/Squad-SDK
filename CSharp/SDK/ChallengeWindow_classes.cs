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

// WidgetBlueprintGeneratedClass ChallengeWindow.ChallengeWindow_C
// 0x0108 (0x02E8 - 0x01E0)
public class UChallengeWindow_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offAcceptButton                                               = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offDenyButton                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offDescription                                                = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTitleTextBlock                                             = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTopLine                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offTitleText                                                  = new ExternalOffset<FText>(0x0268, false);                    // 0x0268(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offDescriptionText                                            = new ExternalOffset<FText>(0x0280, false);                    // 0x0280(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offLeftButtonText                                             = new ExternalOffset<FText>(0x0298, false);                    // 0x0298(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offRightButtonText                                            = new ExternalOffset<FText>(0x02B0, false);                    // 0x02B0(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnLeftButtonClicked                                        = new ExternalOffset<FScriptMulticastDelegate>(0x02C8, false); // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRightButtonClicked                                       = new ExternalOffset<FScriptMulticastDelegate>(0x02D8, false); // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 AcceptButton                                                   => _offAcceptButton.GetValue();
	public UMainMenu_Button_C                                 DenyButton                                                     => _offDenyButton.GetValue();
	public UTextBlock                                         Description                                                    => _offDescription.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UTextBlock                                         TitleTextBlock                                                 => _offTitleTextBlock.GetValue();
	public UImage                                             TopLine                                                        => _offTopLine.GetValue();
	public FText                                              TitleText                                                      => _offTitleText.GetValue();
	public FText                                              DescriptionText                                                => _offDescriptionText.GetValue();
	public FText                                              LeftButtonText                                                 => _offLeftButtonText.GetValue();
	public FText                                              RightButtonText                                                => _offRightButtonText.GetValue();
	public FScriptMulticastDelegate                           OnLeftButtonClicked                                            => _offOnLeftButtonClicked.GetValue();
	public FScriptMulticastDelegate                           OnRightButtonClicked                                           => _offOnRightButtonClicked.GetValue();
	#endregion


}


}