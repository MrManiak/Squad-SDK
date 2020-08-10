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

// WidgetBlueprintGeneratedClass BP_MapWidgetSoldier.BP_MapWidgetSoldier_C
// 0x014D (0x0469 - 0x031C)
public class UBP_MapWidgetSoldier_C : USQMapWidgetSoldier
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0320, false); // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offSelfPulseAnim                                              = new ExternalOffset<UWidgetAnimation>(0x0328, true);          // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerBleedingAnim                                         = new ExternalOffset<UWidgetAnimation>(0x0330, true);          // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerIncapAnim                                            = new ExternalOffset<UWidgetAnimation>(0x0338, true);          // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offArrow                                                      = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offBleedingPanel                                              = new ExternalOffset<UOverlay>(0x0348, true);                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offBleedingRing                                               = new ExternalOffset<UImage>(0x0350, true);                    // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFireteamDiamondRoles                                       = new ExternalOffset<UImage>(0x0358, true);                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFireteamDot                                                = new ExternalOffset<UImage>(0x0360, true);                    // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFTL                                                        = new ExternalOffset<UImage>(0x0368, true);                    // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offIconParent                                                 = new ExternalOffset<UBorder>(0x0370, true);                   // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIncapIcon                                                  = new ExternalOffset<UImage>(0x0378, true);                    // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offIncapPanel                                                 = new ExternalOffset<UOverlay>(0x0380, true);                  // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIncapRing                                                  = new ExternalOffset<UImage>(0x0388, true);                    // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIsCommanderImage                                           = new ExternalOffset<UImage>(0x0390, true);                    // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIsCommanderImageOutline                                    = new ExternalOffset<UImage>(0x0398, true);                    // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIsMedicImage                                               = new ExternalOffset<UImage>(0x03A0, true);                    // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Cone_Image                                          = new ExternalOffset<UImage>(0x03A8, true);                    // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offPlayerIconSizeBox                                          = new ExternalOffset<USizeBox>(0x03B0, true);                  // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offPlayerIconSwitcher                                         = new ExternalOffset<UWidgetSwitcher>(0x03B8, true);           // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offPlayerImage                                                = new ExternalOffset<UBorder>(0x03C0, true);                   // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPulseImage                                                 = new ExternalOffset<UImage>(0x03C8, true);                    // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offRoleImage                                                  = new ExternalOffset<UBorder>(0x03D0, true);                   // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x03D8, true);                 // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSelection                                                  = new ExternalOffset<UImage>(0x03E0, true);                    // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Identifier                                              = new ExternalOffset<UTextBlock>(0x03E8, true);                // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTooltipHitBox                                              = new ExternalOffset<UImage>(0x03F0, true);                    // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offViewCone_Rotation                                          = new ExternalOffset<UCanvasPanel>(0x03F8, true);              // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x0400, true);                  // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDefaultScale                                               = new ExternalOffset<float>(0x0408);                           // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMedicScale                                                 = new ExternalOffset<float>(0x040C);                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSquadLeaderScale                                           = new ExternalOffset<float>(0x0410);                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSelfScale                                                  = new ExternalOffset<float>(0x0414);                           // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offDir_DefaultImage                                           = new ExternalOffset<UTexture2D>(0x0418, true);                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offDir_SquadLeaderImage                                       = new ExternalOffset<UTexture2D>(0x0420, true);                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offDir_SelfImage                                              = new ExternalOffset<UTexture2D>(0x0428, true);                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_Soldier_C>              _offREF_Tooltip                                                = new ExternalOffset<UW_Tooltip_Soldier_C>(0x0430, true);      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offPulse_Animation_Loops                                      = new ExternalOffset<int>(0x0438);                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Animating                                               = new ExternalOffset<byte/*(bool)*/>(0x043C);                  // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0440, true);       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offPlayer_Image_Angle_Offset                                  = new ExternalOffset<float>(0x0448);                           // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShowing_Roles                                              = new ExternalOffset<byte/*(bool)*/>(0x044C);                  // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UTexture2D>                        _offNonDir_DefaultImage                                        = new ExternalOffset<UTexture2D>(0x0450, true);                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offNonDir_SquadLeaderImage                                    = new ExternalOffset<UTexture2D>(0x0458, true);                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offNonDir_SelfImage                                           = new ExternalOffset<UTexture2D>(0x0460, true);                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Fireteam_Letters                                      = new ExternalOffset<byte/*(bool)*/>(0x0468);                  // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   SelfPulseAnim                                                  => _offSelfPulseAnim.GetValue();
	public UWidgetAnimation                                   PlayerBleedingAnim                                             => _offPlayerBleedingAnim.GetValue();
	public UWidgetAnimation                                   PlayerIncapAnim                                                => _offPlayerIncapAnim.GetValue();
	public UImage                                             Arrow                                                          => _offArrow.GetValue();
	public UOverlay                                           BleedingPanel                                                  => _offBleedingPanel.GetValue();
	public UImage                                             BleedingRing                                                   => _offBleedingRing.GetValue();
	public UImage                                             FireteamDiamondRoles                                           => _offFireteamDiamondRoles.GetValue();
	public UImage                                             FireteamDot                                                    => _offFireteamDot.GetValue();
	public UImage                                             FTL                                                            => _offFTL.GetValue();
	public UBorder                                            IconParent                                                     => _offIconParent.GetValue();
	public UImage                                             IncapIcon                                                      => _offIncapIcon.GetValue();
	public UOverlay                                           IncapPanel                                                     => _offIncapPanel.GetValue();
	public UImage                                             IncapRing                                                      => _offIncapRing.GetValue();
	public UImage                                             IsCommanderImage                                               => _offIsCommanderImage.GetValue();
	public UImage                                             IsCommanderImageOutline                                        => _offIsCommanderImageOutline.GetValue();
	public UImage                                             IsMedicImage                                                   => _offIsMedicImage.GetValue();
	public UImage                                             Player_Cone_Image                                              => _offPlayer_Cone_Image.GetValue();
	public USizeBox                                           PlayerIconSizeBox                                              => _offPlayerIconSizeBox.GetValue();
	public UWidgetSwitcher                                    PlayerIconSwitcher                                             => _offPlayerIconSwitcher.GetValue();
	public UBorder                                            PlayerImage                                                    => _offPlayerImage.GetValue();
	public UImage                                             PulseImage                                                     => _offPulseImage.GetValue();
	public UBorder                                            RoleImage                                                      => _offRoleImage.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public UImage                                             Selection                                                      => _offSelection.GetValue();
	public UTextBlock                                         TB_Identifier                                                  => _offTB_Identifier.GetValue();
	public UImage                                             TooltipHitBox                                                  => _offTooltipHitBox.GetValue();
	public UCanvasPanel                                       ViewCone_Rotation                                              => _offViewCone_Rotation.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	public float                                              DefaultScale                                                   => _offDefaultScale.GetValue();
	public float                                              MedicScale                                                     => _offMedicScale.GetValue();
	public float                                              SquadLeaderScale                                               => _offSquadLeaderScale.GetValue();
	public float                                              SelfScale                                                      => _offSelfScale.GetValue();
	public UTexture2D                                         Dir_DefaultImage                                               => _offDir_DefaultImage.GetValue();
	public UTexture2D                                         Dir_SquadLeaderImage                                           => _offDir_SquadLeaderImage.GetValue();
	public UTexture2D                                         Dir_SelfImage                                                  => _offDir_SelfImage.GetValue();
	public UW_Tooltip_Soldier_C                               REF_Tooltip                                                    => _offREF_Tooltip.GetValue();
	public int                                                Pulse_Animation_Loops                                          => _offPulse_Animation_Loops.GetValue();
	public byte/*(bool)*/                                     Is_Animating                                                   => _offIs_Animating.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public float                                              Player_Image_Angle_Offset                                      => _offPlayer_Image_Angle_Offset.GetValue();
	public byte/*(bool)*/                                     Showing_Roles                                                  => _offShowing_Roles.GetValue();
	public UTexture2D                                         NonDir_DefaultImage                                            => _offNonDir_DefaultImage.GetValue();
	public UTexture2D                                         NonDir_SquadLeaderImage                                        => _offNonDir_SquadLeaderImage.GetValue();
	public UTexture2D                                         NonDir_SelfImage                                               => _offNonDir_SelfImage.GetValue();
	public byte/*(bool)*/                                     Show_Fireteam_Letters                                          => _offShow_Fireteam_Letters.GetValue();
	#endregion


}


}