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

// WidgetBlueprintGeneratedClass W_HelicopterInputDisplay.W_HelicopterInputDisplay_C
// 0x0088 (0x0268 - 0x01E0)
public class UW_HelicopterInputDisplay_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_114                                                  = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_115                                                  = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProgressLeftRudder                                         = new ExternalOffset<UProgressBar>(0x0248, true);              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProgressRightRudder                                        = new ExternalOffset<UProgressBar>(0x0250, true);              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TScriptInterface<USQHelicopterInstruments>> _offParentVehicleRef                                           = new ExternalOffset<TScriptInterface<USQHelicopterInstruments>>(0x0258, false); // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_114                                                      => _offImage_114.GetValue();
	public UImage                                             Image_115                                                      => _offImage_115.GetValue();
	public UProgressBar                                       ProgressLeftRudder                                             => _offProgressLeftRudder.GetValue();
	public UProgressBar                                       ProgressRightRudder                                            => _offProgressRightRudder.GetValue();
	public TScriptInterface<USQHelicopterInstruments>         ParentVehicleRef                                               => _offParentVehicleRef.GetValue();
	#endregion


}


}