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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C
// 0x0070 (0x02D8 - 0x0268)
public class UBP_MarkerWidget_Vehicle_C : USQMapVehicleIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0268, false); // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCanvasPanel>                      _offCanvas_SquadNum                                            = new ExternalOffset<UCanvasPanel>(0x0270, true);              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSquadID_Circle                                             = new ExternalOffset<UBorder>(0x0278, true);                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offSquadID_Text                                               = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offVehicle_Image                                              = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offViewCone                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x0298, true);                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCloseTooltip                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UTexture2D>                        _offVehicleImage                                               = new ExternalOffset<UTexture2D>(0x02B0, true);                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStateUpdateTime                                            = new ExternalOffset<float>(0x02B8);                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelfColor                                                  = new ExternalOffset<FLinearColor>(0x02BC, false);             // 0x02BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offOwning_PC                                                  = new ExternalOffset<ASQPlayerController>(0x02D0, true);       // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCanvasPanel                                       Canvas_SquadNum                                                => _offCanvas_SquadNum.GetValue();
	public UBorder                                            SquadID_Circle                                                 => _offSquadID_Circle.GetValue();
	public UTextBlock                                         SquadID_Text                                                   => _offSquadID_Text.GetValue();
	public UImage                                             Vehicle_Image                                                  => _offVehicle_Image.GetValue();
	public UImage                                             ViewCone                                                       => _offViewCone.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	public FScriptMulticastDelegate                           CloseTooltip                                                   => _offCloseTooltip.GetValue();
	public UTexture2D                                         VehicleImage                                                   => _offVehicleImage.GetValue();
	public float                                              StateUpdateTime                                                => _offStateUpdateTime.GetValue();
	public FLinearColor                                       SelfColor                                                      => _offSelfColor.GetValue();
	public ASQPlayerController                                Owning_PC                                                      => _offOwning_PC.GetValue();
	#endregion


}


}