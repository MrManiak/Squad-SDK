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

// WidgetBlueprintGeneratedClass W_Training_LevelList.W_Training_LevelList_C
// 0x00D8 (0x02B8 - 0x01E0)
public class UW_Training_LevelList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_1                                            = new ExternalOffset<UHorizontalBox>(0x0238, true);            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_3                                            = new ExternalOffset<UHorizontalBox>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offHorizontalBox_4                                            = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offLevelList                                                  = new ExternalOffset<UHorizontalBox>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offLevelSelector                                              = new ExternalOffset<ULevelSelector_C>(0x0258, true);          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offLevelSelector_3                                            = new ExternalOffset<ULevelSelector_C>(0x0260, true);          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offLevelSelector_C_1                                          = new ExternalOffset<ULevelSelector_C>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offLevelSelector_C_2                                          = new ExternalOffset<ULevelSelector_C>(0x0270, true);          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offLevelSelector_C_3                                          = new ExternalOffset<ULevelSelector_C>(0x0278, true);          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UChallengeWindow_C>                _offPopupTraining                                              = new ExternalOffset<UChallengeWindow_C>(0x0280, true);        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ULevelSelector_C>                  _offTutorial_LevelSelector                                     = new ExternalOffset<ULevelSelector_C>(0x0288, true);          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_1                                           = new ExternalOffset<UWidgetSwitcher>(0x0290, true);           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offCurrent_Level_Selection                                    = new ExternalOffset<FString>(0x0298, false);                  // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offCurrent_Mode_Selection                                     = new ExternalOffset<FString>(0x02A8, false);                  // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UHorizontalBox                                     HorizontalBox_1                                                => _offHorizontalBox_1.GetValue();
	public UHorizontalBox                                     HorizontalBox_3                                                => _offHorizontalBox_3.GetValue();
	public UHorizontalBox                                     HorizontalBox_4                                                => _offHorizontalBox_4.GetValue();
	public UHorizontalBox                                     LevelList                                                      => _offLevelList.GetValue();
	public ULevelSelector_C                                   LevelSelector                                                  => _offLevelSelector.GetValue();
	public ULevelSelector_C                                   LevelSelector_3                                                => _offLevelSelector_3.GetValue();
	public ULevelSelector_C                                   LevelSelector_C_1                                              => _offLevelSelector_C_1.GetValue();
	public ULevelSelector_C                                   LevelSelector_C_2                                              => _offLevelSelector_C_2.GetValue();
	public ULevelSelector_C                                   LevelSelector_C_3                                              => _offLevelSelector_C_3.GetValue();
	public UChallengeWindow_C                                 PopupTraining                                                  => _offPopupTraining.GetValue();
	public ULevelSelector_C                                   Tutorial_LevelSelector                                         => _offTutorial_LevelSelector.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_1                                               => _offWidgetSwitcher_1.GetValue();
	public FString                                            Current_Level_Selection                                        => _offCurrent_Level_Selection.GetValue();
	public FString                                            Current_Mode_Selection                                         => _offCurrent_Mode_Selection.GetValue();
	#endregion


}


}