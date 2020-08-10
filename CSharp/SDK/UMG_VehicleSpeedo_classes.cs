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

// WidgetBlueprintGeneratedClass UMG_VehicleSpeedo.UMG_VehicleSpeedo_C
// 0x0118 (0x02F8 - 0x01E0)
public class UUMG_VehicleSpeedo_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Gear                                                = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCanvasPanel>                      _offDialNumParent                                              = new ExternalOffset<UCanvasPanel>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offFrontImage                                                 = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offPitchParent                                                = new ExternalOffset<UOverlay>(0x0258, true);                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offRearmBox                                                   = new ExternalOffset<UHorizontalBox>(0x0260, true);            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offREVs                                                       = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offRollParent                                                 = new ExternalOffset<UOverlay>(0x0270, true);                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSideImage                                                  = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpeedArrow                                                 = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offSpeedParent                                                = new ExternalOffset<UOverlay>(0x0288, true);                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Cost                                                    = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Gear                                                    = new ExternalOffset<UTextBlock>(0x0298, true);                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQGroundVehicle>                  _offMy_Vehicle                                                 = new ExternalOffset<ASQGroundVehicle>(0x02A0, true);          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSpeed                                                      = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRPM                                                        = new ExternalOffset<float>(0x02AC);                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offWarning_Roll                                               = new ExternalOffset<float>(0x02B0);                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offWarning_Pitch                                              = new ExternalOffset<float>(0x02B4);                           // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Revs                                                    = new ExternalOffset<UMaterialInstanceDynamic>(0x02B8, true);  // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offRevsPercent                                                = new ExternalOffset<float>(0x02C0);                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02C8, true);       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x02D0, true);            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offDefaultFrontImage                                          = new ExternalOffset<UTexture2D>(0x02D8, true);                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offDefaultSideImage                                           = new ExternalOffset<UTexture2D>(0x02E0, true);                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQSoldierNew>                     _offMy_Soldier                                                 = new ExternalOffset<ASQSoldierNew>(0x02E8, true);             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offRefresh_Timer                                              = new ExternalOffset<FTimerHandle>(0x02F0, false);             // 0x02F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Gear                                                    => _offBorder_Gear.GetValue();
	public UCanvasPanel                                       DialNumParent                                                  => _offDialNumParent.GetValue();
	public UImage                                             FrontImage                                                     => _offFrontImage.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UOverlay                                           PitchParent                                                    => _offPitchParent.GetValue();
	public UHorizontalBox                                     RearmBox                                                       => _offRearmBox.GetValue();
	public UImage                                             REVs                                                           => _offREVs.GetValue();
	public UOverlay                                           RollParent                                                     => _offRollParent.GetValue();
	public UImage                                             SideImage                                                      => _offSideImage.GetValue();
	public UImage                                             SpeedArrow                                                     => _offSpeedArrow.GetValue();
	public UOverlay                                           SpeedParent                                                    => _offSpeedParent.GetValue();
	public UTextBlock                                         TB_Cost                                                        => _offTB_Cost.GetValue();
	public UTextBlock                                         TB_Gear                                                        => _offTB_Gear.GetValue();
	public ASQGroundVehicle                                   My_Vehicle                                                     => _offMy_Vehicle.GetValue();
	public float                                              Speed                                                          => _offSpeed.GetValue();
	public float                                              RPM                                                            => _offRPM.GetValue();
	public float                                              Warning_Roll                                                   => _offWarning_Roll.GetValue();
	public float                                              Warning_Pitch                                                  => _offWarning_Pitch.GetValue();
	public UMaterialInstanceDynamic                           MI_Revs                                                        => _offMI_Revs.GetValue();
	public float                                              RevsPercent                                                    => _offRevsPercent.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public UTexture2D                                         DefaultFrontImage                                              => _offDefaultFrontImage.GetValue();
	public UTexture2D                                         DefaultSideImage                                               => _offDefaultSideImage.GetValue();
	public ASQSoldierNew                                      My_Soldier                                                     => _offMy_Soldier.GetValue();
	public FTimerHandle                                       Refresh_Timer                                                  => _offRefresh_Timer.GetValue();
	#endregion


}


}