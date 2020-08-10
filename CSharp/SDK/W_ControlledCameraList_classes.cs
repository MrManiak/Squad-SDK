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

// WidgetBlueprintGeneratedClass W_ControlledCameraList.W_ControlledCameraList_C
// 0x0078 (0x0258 - 0x01E0)
public class UW_ControlledCameraList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWrapBox>                          _offCamControlWrapBox                                          = new ExternalOffset<UWrapBox>(0x0238, true);                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0240, true);       // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_CamControlButton_C>>     _offCamera_Widgets                                             = new ExternalOffset<TArray<UW_CamControlButton_C>>(0x0248, false); // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWrapBox                                           CamControlWrapBox                                              => _offCamControlWrapBox.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public TArray<UW_CamControlButton_C>                      Camera_Widgets                                                 => _offCamera_Widgets.GetValue();
	#endregion


}


}