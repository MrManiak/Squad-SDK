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

// WidgetBlueprintGeneratedClass W_GridButton.W_GridButton_C
// 0x00F8 (0x02D8 - 0x01E0)
public class UW_GridButton_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_Main                                                = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offSwitch_IconText                                            = new ExternalOffset<UWidgetSwitcher>(0x0248, true);           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ID                                                      = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<E_HeaderDirection>>    _offParent_Draw_Direction                                      = new ExternalOffset<TEnumAsByte<E_HeaderDirection>>(0x0258, false); // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<E_HeaderDirection>>    _offBuild_Direction                                            = new ExternalOffset<TEnumAsByte<E_HeaderDirection>>(0x0259, false); // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offButton_Icon                                                = new ExternalOffset<UTexture2D>(0x0260, true);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offIcon_Color                                                 = new ExternalOffset<FLinearColor>(0x0268, false);             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_GridHeader_C>                   _offHeader_Parent                                              = new ExternalOffset<UW_GridHeader_C>(0x0278, true);           // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offParent_Button                                              = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offActions_Visible                                            = new ExternalOffset<byte/*(bool)*/>(0x0281);                  // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offDefault_Map_Marker                                         = new ExternalOffset<UClass>(0x0288, true);                    // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offAction_List_Class                                          = new ExternalOffset<UClass>(0x0290, true);                    // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offTooltip                                                    = new ExternalOffset<FText>(0x0298, false);                    // 0x0298(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<TArray<UClass>>                    _offAction_List                                                = new ExternalOffset<TArray<UClass>>(0x02B0, false);           // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<UW_Grid_ActionList_C>              _offREF_Action_List                                            = new ExternalOffset<UW_Grid_ActionList_C>(0x02C0, true);      // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offFireteam_ID                                                = new ExternalOffset<int>(0x02C8);                             // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSquad_ID                                                   = new ExternalOffset<int>(0x02CC);                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<USQMapMarkerDataAsset>             _offMapMarkerData                                              = new ExternalOffset<USQMapMarkerDataAsset>(0x02D0, true);     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_Main                                                    => _offButton_Main.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UWidgetSwitcher                                    Switch_IconText                                                => _offSwitch_IconText.GetValue();
	public UTextBlock                                         TB_ID                                                          => _offTB_ID.GetValue();
	public TEnumAsByte<E_HeaderDirection>                     Parent_Draw_Direction                                          => _offParent_Draw_Direction.GetValue();
	public TEnumAsByte<E_HeaderDirection>                     Build_Direction                                                => _offBuild_Direction.GetValue();
	public UTexture2D                                         Button_Icon                                                    => _offButton_Icon.GetValue();
	public FLinearColor                                       Icon_Color                                                     => _offIcon_Color.GetValue();
	public UW_GridHeader_C                                    Header_Parent                                                  => _offHeader_Parent.GetValue();
	public byte/*(bool)*/                                     Parent_Button                                                  => _offParent_Button.GetValue();
	public byte/*(bool)*/                                     Actions_Visible                                                => _offActions_Visible.GetValue();
	public UClass                                             Default_Map_Marker                                             => _offDefault_Map_Marker.GetValue();
	public UClass                                             Action_List_Class                                              => _offAction_List_Class.GetValue();
	public FText                                              Tooltip                                                        => _offTooltip.GetValue();
	public TArray<UClass>                                     Action_List                                                    => _offAction_List.GetValue();
	public UW_Grid_ActionList_C                               REF_Action_List                                                => _offREF_Action_List.GetValue();
	public int                                                Fireteam_ID                                                    => _offFireteam_ID.GetValue();
	public int                                                Squad_ID                                                       => _offSquad_ID.GetValue();
	public USQMapMarkerDataAsset                              MapMarkerData                                                  => _offMapMarkerData.GetValue();
	#endregion


}


}