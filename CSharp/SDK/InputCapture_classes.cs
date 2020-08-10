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

// WidgetBlueprintGeneratedClass InputCapture.InputCapture_C
// 0x0074 (0x0254 - 0x01E0)
public class UInputCapture_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UImage>                            _offImage_21                                                   = new ExternalOffset<UImage>(0x0230, true);                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnInput                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0238, false); // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offbCapturingInput                                            = new ExternalOffset<byte/*(bool)*/>(0x0248);                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector2D>                         _offMouse_Delta                                                = new ExternalOffset<FVector2D>(0x024C, false);                // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UImage                                             Image_21                                                       => _offImage_21.GetValue();
	public FScriptMulticastDelegate                           OnInput                                                        => _offOnInput.GetValue();
	public byte/*(bool)*/                                     bCapturingInput                                                => _offbCapturingInput.GetValue();
	public FVector2D                                          Mouse_Delta                                                    => _offMouse_Delta.GetValue();
	#endregion


}


}