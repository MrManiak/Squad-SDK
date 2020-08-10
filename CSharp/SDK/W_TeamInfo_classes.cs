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

// WidgetBlueprintGeneratedClass W_TeamInfo.W_TeamInfo_C
// 0x0148 (0x0328 - 0x01E0)
public class UW_TeamInfo_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offBounceArrow                                                = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offAlpha                                                      = new ExternalOffset<UWidgetAnimation>(0x0240, true);          // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBadge                                                      = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButtonSelect                                               = new ExternalOffset<UButton>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_7                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offInfo                                                       = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLargeFlag                                                  = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_Arrow                                             = new ExternalOffset<UScaleBox>(0x0270, true);                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_TeamImage                                         = new ExternalOffset<UScaleBox>(0x0278, true);                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSelectedBorder                                             = new ExternalOffset<UBorder>(0x0280, true);                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSize_Blurb                                                 = new ExternalOffset<USizeBox>(0x0288, true);                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_1                                                  = new ExternalOffset<USizeBox>(0x0290, true);                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_SmallFlag                                          = new ExternalOffset<USizeBox>(0x0298, true);                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Blurb                                                   = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Division                                                = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Players                                                 = new ExternalOffset<UTextBlock>(0x02B0, true);                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_TeamName                                                = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Text                                                    = new ExternalOffset<UTextBlock>(0x02C0, true);                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTeamImage                                                  = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offTeam2_                                                     = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offClicked                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x02D8, false); // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offselected                                                   = new ExternalOffset<byte/*(bool)*/>(0x02E8);                  // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMID_RendTex                                                = new ExternalOffset<UMaterialInstanceDynamic>(0x02F0, true);  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_R2T_Soldier_C>                 _offR2T_Blueprint                                              = new ExternalOffset<ABP_R2T_Soldier_C>(0x02F8, true);         // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMID_Flag                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0300, true);  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTeamIcon                                                   = new ExternalOffset<UImage>(0x0308, true);                    // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offTeam                                                       = new ExternalOffset<ASQTeamState>(0x0310, true);              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0318, true);       // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0320, true);            // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   BounceArrow                                                    => _offBounceArrow.GetValue();
	public UWidgetAnimation                                   Alpha                                                          => _offAlpha.GetValue();
	public UImage                                             Badge                                                          => _offBadge.GetValue();
	public UButton                                            ButtonSelect                                                   => _offButtonSelect.GetValue();
	public UImage                                             Image_7                                                        => _offImage_7.GetValue();
	public UBorder                                            Info                                                           => _offInfo.GetValue();
	public UImage                                             LargeFlag                                                      => _offLargeFlag.GetValue();
	public UScaleBox                                          ScaleBox_Arrow                                                 => _offScaleBox_Arrow.GetValue();
	public UScaleBox                                          ScaleBox_TeamImage                                             => _offScaleBox_TeamImage.GetValue();
	public UBorder                                            SelectedBorder                                                 => _offSelectedBorder.GetValue();
	public USizeBox                                           Size_Blurb                                                     => _offSize_Blurb.GetValue();
	public USizeBox                                           SizeBox_1                                                      => _offSizeBox_1.GetValue();
	public USizeBox                                           SizeBox_SmallFlag                                              => _offSizeBox_SmallFlag.GetValue();
	public UTextBlock                                         TB_Blurb                                                       => _offTB_Blurb.GetValue();
	public UTextBlock                                         TB_Division                                                    => _offTB_Division.GetValue();
	public UTextBlock                                         TB_Players                                                     => _offTB_Players.GetValue();
	public UTextBlock                                         TB_TeamName                                                    => _offTB_TeamName.GetValue();
	public UTextBlock                                         TB_Text                                                        => _offTB_Text.GetValue();
	public UImage                                             TeamImage                                                      => _offTeamImage.GetValue();
	public byte/*(bool)*/                                     Team2_                                                         => _offTeam2_.GetValue();
	public FScriptMulticastDelegate                           Clicked                                                        => _offClicked.GetValue();
	public byte/*(bool)*/                                     selected                                                       => _offselected.GetValue();
	public UMaterialInstanceDynamic                           MID_RendTex                                                    => _offMID_RendTex.GetValue();
	public ABP_R2T_Soldier_C                                  R2T_Blueprint                                                  => _offR2T_Blueprint.GetValue();
	public UMaterialInstanceDynamic                           MID_Flag                                                       => _offMID_Flag.GetValue();
	public UImage                                             TeamIcon                                                       => _offTeamIcon.GetValue();
	public ASQTeamState                                       Team                                                           => _offTeam.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	#endregion


}


}