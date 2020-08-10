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

// WidgetBlueprintGeneratedClass BP_MapWidgetVehicle.BP_MapWidgetVehicle_C
// 0x00C4 (0x03B8 - 0x02F4)
public class UBP_MapWidgetVehicle_C : USQMapWidgetVehicle
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0310, false); // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPulseAnim                                                  = new ExternalOffset<UWidgetAnimation>(0x0318, true);          // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCommanderStar                                              = new ExternalOffset<UImage>(0x0320, true);                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCommanderStarDropShadow                                    = new ExternalOffset<UImage>(0x0328, true);                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPulseImage                                                 = new ExternalOffset<UImage>(0x0330, true);                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x0338, true);                 // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSelection                                                  = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_SquadID                                            = new ExternalOffset<USizeBox>(0x0348, true);                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadID_Text                                               = new ExternalOffset<UTextBlock>(0x0350, true);                // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSquadLeaderBG                                              = new ExternalOffset<UImage>(0x0358, true);                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSquadTintBorder                                            = new ExternalOffset<UBorder>(0x0360, true);                   // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offTooltipHitBox                                              = new ExternalOffset<UBorder>(0x0368, true);                   // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offVehicle_Image                                              = new ExternalOffset<UImage>(0x0370, true);                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offVehicle_Rotation                                           = new ExternalOffset<UCanvasPanel>(0x0378, true);              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offViewCone_Image                                             = new ExternalOffset<UImage>(0x0380, true);                    // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offViewCone_Rotation                                          = new ExternalOffset<UCanvasPanel>(0x0388, true);              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x0390, true);                  // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDefaultScale                                               = new ExternalOffset<float>(0x0398);                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSelfScale                                                  = new ExternalOffset<float>(0x039C);                           // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offVehicle_Angle_Offset                                       = new ExternalOffset<float>(0x03A0);                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offView_Cone_Angle_Offset                                     = new ExternalOffset<float>(0x03A4);                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_Tooltip_Vehicle_C>              _offREF_Tooltip                                                = new ExternalOffset<UW_Tooltip_Vehicle_C>(0x03A8, true);      // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x03B0, true);       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   PulseAnim                                                      => _offPulseAnim.GetValue();
	public UImage                                             CommanderStar                                                  => _offCommanderStar.GetValue();
	public UImage                                             CommanderStarDropShadow                                        => _offCommanderStarDropShadow.GetValue();
	public UImage                                             PulseImage                                                     => _offPulseImage.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public UImage                                             Selection                                                      => _offSelection.GetValue();
	public USizeBox                                           SizeBox_SquadID                                                => _offSizeBox_SquadID.GetValue();
	public UTextBlock                                         SquadID_Text                                                   => _offSquadID_Text.GetValue();
	public UImage                                             SquadLeaderBG                                                  => _offSquadLeaderBG.GetValue();
	public UBorder                                            SquadTintBorder                                                => _offSquadTintBorder.GetValue();
	public UBorder                                            TooltipHitBox                                                  => _offTooltipHitBox.GetValue();
	public UImage                                             Vehicle_Image                                                  => _offVehicle_Image.GetValue();
	public UCanvasPanel                                       Vehicle_Rotation                                               => _offVehicle_Rotation.GetValue();
	public UImage                                             ViewCone_Image                                                 => _offViewCone_Image.GetValue();
	public UCanvasPanel                                       ViewCone_Rotation                                              => _offViewCone_Rotation.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	public float                                              DefaultScale                                                   => _offDefaultScale.GetValue();
	public float                                              SelfScale                                                      => _offSelfScale.GetValue();
	public float                                              Vehicle_Angle_Offset                                           => _offVehicle_Angle_Offset.GetValue();
	public float                                              View_Cone_Angle_Offset                                         => _offView_Cone_Angle_Offset.GetValue();
	public UW_Tooltip_Vehicle_C                               REF_Tooltip                                                    => _offREF_Tooltip.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}