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

// WidgetBlueprintGeneratedClass LevelSelector.LevelSelector_C
// 0x0110 (0x02F0 - 0x01E0)
public class ULevelSelector_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offBounceAnim                                                 = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Main                                                = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonLINK                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Main                                                 = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offInfoBG                                                     = new ExternalOffset<UBorder>(0x0258, true);                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Mode                                                    = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ModName                                                 = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offLevel_Selected                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FText>                             _offGOTO_Text                                                  = new ExternalOffset<FText>(0x0280, false);                    // 0x0280(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offLevel_Text                                                 = new ExternalOffset<FText>(0x0298, false);                    // 0x0298(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                             _offMode_Text                                                  = new ExternalOffset<FText>(0x02B0, false);                    // 0x02B0(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FString>                           _offLevel_Name                                                 = new ExternalOffset<FString>(0x02C8, false);                  // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offLevel_Mode                                                 = new ExternalOffset<FString>(0x02D8, false);                  // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offLevel_Texture                                              = new ExternalOffset<UTexture2D>(0x02E8, true);                // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   BounceAnim                                                     => _offBounceAnim.GetValue();
	public UButton                                            Button_Main                                                    => _offButton_Main.GetValue();
	public UMainMenu_Button_C                                 ButtonLINK                                                     => _offButtonLINK.GetValue();
	public UImage                                             Image_Main                                                     => _offImage_Main.GetValue();
	public UBorder                                            InfoBG                                                         => _offInfoBG.GetValue();
	public UTextBlock                                         TB_Mode                                                        => _offTB_Mode.GetValue();
	public UTextBlock                                         TB_ModName                                                     => _offTB_ModName.GetValue();
	public FScriptMulticastDelegate                           Level_Selected                                                 => _offLevel_Selected.GetValue();
	public FText                                              GOTO_Text                                                      => _offGOTO_Text.GetValue();
	public FText                                              Level_Text                                                     => _offLevel_Text.GetValue();
	public FText                                              Mode_Text                                                      => _offMode_Text.GetValue();
	public FString                                            Level_Name                                                     => _offLevel_Name.GetValue();
	public FString                                            Level_Mode                                                     => _offLevel_Mode.GetValue();
	public UTexture2D                                         Level_Texture                                                  => _offLevel_Texture.GetValue();
	#endregion


}


}