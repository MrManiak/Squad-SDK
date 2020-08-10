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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Cameraman.BP_MarkerWidget_Cameraman_C
// 0x00BC (0x030C - 0x0250)
public class UBP_MarkerWidget_Cameraman_C : USQMapIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerWoundedAnim                                          = new ExternalOffset<UWidgetAnimation>(0x0258, true);          // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offPlayerIncapAnim                                            = new ExternalOffset<UWidgetAnimation>(0x0260, true);          // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UWidgetAnimation>                  _offSelfPulseAnim                                              = new ExternalOffset<UWidgetAnimation>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Cone_Image                                          = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Image                                               = new ExternalOffset<UImage>(0x0278, true);                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x0280, true);                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelf_Color                                                 = new ExternalOffset<FLinearColor>(0x0288, false);             // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offTeamColor                                                  = new ExternalOffset<FLinearColor>(0x0298, false);             // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offSquadLeaderImage                                           = new ExternalOffset<UTexture2D>(0x02A8, true);                // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offMedic_Overlay_Image                                        = new ExternalOffset<UTexture2D>(0x02B0, true);                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offSelf_Image                                                 = new ExternalOffset<UTexture2D>(0x02B8, true);                // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offPlayerImage                                                = new ExternalOffset<UTexture2D>(0x02C0, true);                // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMapAngleAdjust                                             = new ExternalOffset<float>(0x02C8);                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSL_Scale                                                   = new ExternalOffset<float>(0x02CC);                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSelfScale                                                  = new ExternalOffset<float>(0x02D0);                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMedic_Overlay_Scale                                        = new ExternalOffset<float>(0x02D4);                           // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSoldierScale                                               = new ExternalOffset<float>(0x02D8);                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMedic_Scale                                                = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCloseTooltip                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UTexture2D>                        _offVehicleImage                                               = new ExternalOffset<UTexture2D>(0x02F0, true);                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offVehicleScale                                               = new ExternalOffset<float>(0x02F8);                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offEnemyColor                                                 = new ExternalOffset<FLinearColor>(0x02FC, false);             // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   PlayerWoundedAnim                                              => _offPlayerWoundedAnim.GetValue();
	public UWidgetAnimation                                   PlayerIncapAnim                                                => _offPlayerIncapAnim.GetValue();
	public UWidgetAnimation                                   SelfPulseAnim                                                  => _offSelfPulseAnim.GetValue();
	public UImage                                             Player_Cone_Image                                              => _offPlayer_Cone_Image.GetValue();
	public UImage                                             Player_Image                                                   => _offPlayer_Image.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	public FLinearColor                                       Self_Color                                                     => _offSelf_Color.GetValue();
	public FLinearColor                                       TeamColor                                                      => _offTeamColor.GetValue();
	public UTexture2D                                         SquadLeaderImage                                               => _offSquadLeaderImage.GetValue();
	public UTexture2D                                         Medic_Overlay_Image                                            => _offMedic_Overlay_Image.GetValue();
	public UTexture2D                                         Self_Image                                                     => _offSelf_Image.GetValue();
	public UTexture2D                                         PlayerImage                                                    => _offPlayerImage.GetValue();
	public float                                              MapAngleAdjust                                                 => _offMapAngleAdjust.GetValue();
	public float                                              SL_Scale                                                       => _offSL_Scale.GetValue();
	public float                                              SelfScale                                                      => _offSelfScale.GetValue();
	public float                                              Medic_Overlay_Scale                                            => _offMedic_Overlay_Scale.GetValue();
	public float                                              SoldierScale                                                   => _offSoldierScale.GetValue();
	public float                                              Medic_Scale                                                    => _offMedic_Scale.GetValue();
	public FScriptMulticastDelegate                           CloseTooltip                                                   => _offCloseTooltip.GetValue();
	public UTexture2D                                         VehicleImage                                                   => _offVehicleImage.GetValue();
	public float                                              VehicleScale                                                   => _offVehicleScale.GetValue();
	public FLinearColor                                       EnemyColor                                                     => _offEnemyColor.GetValue();
	#endregion


}


}