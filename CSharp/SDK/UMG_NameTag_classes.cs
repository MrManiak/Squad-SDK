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

// WidgetBlueprintGeneratedClass UMG_NameTag.UMG_NameTag_C
// 0x0184 (0x0364 - 0x01E0)
public class UUMG_NameTag_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFadeIn                                                     = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offFTID                                                       = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offKit_Image                                                  = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offOpacityBorder_Info                                         = new ExternalOffset<UBorder>(0x0258, true);                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offOpacityBorder_Rank                                         = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRankImage                                                  = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offRootBox                                                    = new ExternalOffset<UVerticalBox>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleKit                                                   = new ExternalOffset<UScaleBox>(0x0278, true);                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSQID                                                       = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadID_Top                                                = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Name                                                    = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Rank                                        = new ExternalOffset<UWidgetSwitcher>(0x0298, true);           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Render                                                 = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQPlayerState>                    _offREF_Owning_Player_State                                    = new ExternalOffset<ASQPlayerState>(0x02A8, true);            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<APlayerCameraManager>              _offREF_CameraManager                                          = new ExternalOffset<APlayerCameraManager>(0x02B0, true);      // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCurrent_Rank_Opacity                                       = new ExternalOffset<float>(0x02B8);                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCurrent_Info_Opacity                                       = new ExternalOffset<float>(0x02BC);                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSmooth_Screen_Position_Speed                               = new ExternalOffset<float>(0x02C0);                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_My_Squad_Leader_Tag                                     = new ExternalOffset<byte/*(bool)*/>(0x02C4);                  // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offScale                                                      = new ExternalOffset<float>(0x02C8);                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Opacity                                                = new ExternalOffset<float>(0x02CC);                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Kit                                                   = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Name                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D1);                  // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<APawn>                             _offFocussed_Pawn                                              = new ExternalOffset<APawn>(0x02D8, true);                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZ_Offset_Standing                                          = new ExternalOffset<float>(0x02E0);                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZ_Offset_Crouching                                         = new ExternalOffset<float>(0x02E4);                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZ_Offset_Prone                                             = new ExternalOffset<float>(0x02E8);                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offDesired_Screen_Location                                    = new ExternalOffset<FVector2D>(0x02EC, false);                // 0x02EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanelSlot>                  _offMy_Canvas_Slot                                             = new ExternalOffset<UCanvasPanelSlot>(0x02F8, true);          // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZ_Offset_Vehicle                                           = new ExternalOffset<float>(0x0300);                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offClose_Range_for_Close_Angle___cm_                          = new ExternalOffset<float>(0x0304);                           // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offFar_Range_for_Far_Angle__cm_                               = new ExternalOffset<float>(0x0308);                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRequired_Close_Angle__0_1_                                 = new ExternalOffset<float>(0x030C);                           // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRequired_Far_Angle__0_0_9999_                              = new ExternalOffset<float>(0x0310);                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaximum_Range_Whole__cm_                                   = new ExternalOffset<float>(0x0314);                           // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMinimum_Fade_Range_My_SL__cm_                              = new ExternalOffset<float>(0x0318);                           // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaximum_Fade_Range_My_SL__cm_                              = new ExternalOffset<float>(0x031C);                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIn_Threshold                                               = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FNametagTargetInfo>                _offCachedTargetInfo                                           = new ExternalOffset<FNametagTargetInfo>(0x0328, false);       // 0x0328(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offSave_Data_SL_Visible                                       = new ExternalOffset<byte/*(bool)*/>(0x0358);                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offSave_Data_FT_Visible                                       = new ExternalOffset<byte/*(bool)*/>(0x0359);                  // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offMaximum_Range_Info__cm_                                    = new ExternalOffset<float>(0x035C);                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCurrent_Focus_Strength                                     = new ExternalOffset<float>(0x0360);                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   FadeIn                                                         => _offFadeIn.GetValue();
	public UTextBlock                                         FTID                                                           => _offFTID.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Kit_Image                                                      => _offKit_Image.GetValue();
	public UBorder                                            OpacityBorder_Info                                             => _offOpacityBorder_Info.GetValue();
	public UBorder                                            OpacityBorder_Rank                                             => _offOpacityBorder_Rank.GetValue();
	public UImage                                             RankImage                                                      => _offRankImage.GetValue();
	public UVerticalBox                                       RootBox                                                        => _offRootBox.GetValue();
	public UScaleBox                                          ScaleKit                                                       => _offScaleKit.GetValue();
	public UTextBlock                                         SQID                                                           => _offSQID.GetValue();
	public UTextBlock                                         SquadID_Top                                                    => _offSquadID_Top.GetValue();
	public UTextBlock                                         TB_Name                                                        => _offTB_Name.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Rank                                            => _offWidgetSwitcher_Rank.GetValue();
	public byte/*(bool)*/                                     Can_Render                                                     => _offCan_Render.GetValue();
	public ASQPlayerState                                     REF_Owning_Player_State                                        => _offREF_Owning_Player_State.GetValue();
	public APlayerCameraManager                               REF_CameraManager                                              => _offREF_CameraManager.GetValue();
	public float                                              Current_Rank_Opacity                                           => _offCurrent_Rank_Opacity.GetValue();
	public float                                              Current_Info_Opacity                                           => _offCurrent_Info_Opacity.GetValue();
	public float                                              Smooth_Screen_Position_Speed                                   => _offSmooth_Screen_Position_Speed.GetValue();
	public byte/*(bool)*/                                     Is_My_Squad_Leader_Tag                                         => _offIs_My_Squad_Leader_Tag.GetValue();
	public float                                              Scale                                                          => _offScale.GetValue();
	public float                                              Max_Opacity                                                    => _offMax_Opacity.GetValue();
	public byte/*(bool)*/                                     Show_Kit                                                       => _offShow_Kit.GetValue();
	public byte/*(bool)*/                                     Show_Name                                                      => _offShow_Name.GetValue();
	public APawn                                              Focussed_Pawn                                                  => _offFocussed_Pawn.GetValue();
	public float                                              Z_Offset_Standing                                              => _offZ_Offset_Standing.GetValue();
	public float                                              Z_Offset_Crouching                                             => _offZ_Offset_Crouching.GetValue();
	public float                                              Z_Offset_Prone                                                 => _offZ_Offset_Prone.GetValue();
	public FVector2D                                          Desired_Screen_Location                                        => _offDesired_Screen_Location.GetValue();
	public UCanvasPanelSlot                                   My_Canvas_Slot                                                 => _offMy_Canvas_Slot.GetValue();
	public float                                              Z_Offset_Vehicle                                               => _offZ_Offset_Vehicle.GetValue();
	public float                                              Close_Range_for_Close_Angle___cm_                              => _offClose_Range_for_Close_Angle___cm_.GetValue();
	public float                                              Far_Range_for_Far_Angle__cm_                                   => _offFar_Range_for_Far_Angle__cm_.GetValue();
	public float                                              Required_Close_Angle__0_1_                                     => _offRequired_Close_Angle__0_1_.GetValue();
	public float                                              Required_Far_Angle__0_0_9999_                                  => _offRequired_Far_Angle__0_0_9999_.GetValue();
	public float                                              Maximum_Range_Whole__cm_                                       => _offMaximum_Range_Whole__cm_.GetValue();
	public float                                              Minimum_Fade_Range_My_SL__cm_                                  => _offMinimum_Fade_Range_My_SL__cm_.GetValue();
	public float                                              Maximum_Fade_Range_My_SL__cm_                                  => _offMaximum_Fade_Range_My_SL__cm_.GetValue();
	public byte/*(bool)*/                                     In_Threshold                                                   => _offIn_Threshold.GetValue();
	public FNametagTargetInfo                                 CachedTargetInfo                                               => _offCachedTargetInfo.GetValue();
	public byte/*(bool)*/                                     Save_Data_SL_Visible                                           => _offSave_Data_SL_Visible.GetValue();
	public byte/*(bool)*/                                     Save_Data_FT_Visible                                           => _offSave_Data_FT_Visible.GetValue();
	public float                                              Maximum_Range_Info__cm_                                        => _offMaximum_Range_Info__cm_.GetValue();
	public float                                              Current_Focus_Strength                                         => _offCurrent_Focus_Strength.GetValue();
	#endregion


}


}