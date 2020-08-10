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

// WidgetBlueprintGeneratedClass BP_MapWidgetCameraman.BP_MapWidgetCameraman_C
// 0x0028 (0x02E0 - 0x02B8)
public class UBP_MapWidgetCameraman_C : USQMapWidgetCameraman
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02B8, false); // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offPlayer_Cone_Image                                          = new ExternalOffset<UImage>(0x02C0, true);                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offPlayer_Image                                               = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScaleBox>                         _offScaleBox_1                                                 = new ExternalOffset<UScaleBox>(0x02D0, true);                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offWidgetOverlay                                              = new ExternalOffset<UOverlay>(0x02D8, true);                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Player_Cone_Image                                              => _offPlayer_Cone_Image.GetValue();
	public UImage                                             Player_Image                                                   => _offPlayer_Image.GetValue();
	public UScaleBox                                          ScaleBox_1                                                     => _offScaleBox_1.GetValue();
	public UOverlay                                           WidgetOverlay                                                  => _offWidgetOverlay.GetValue();
	#endregion


}


}