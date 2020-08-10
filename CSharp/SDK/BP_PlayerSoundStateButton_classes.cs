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

// WidgetBlueprintGeneratedClass BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C
// 0x0024 (0x0298 - 0x0274)
public class UBP_PlayerSoundStateButton_C : USQStatefulButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0288, false); // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_59                                                   = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_59                                                       => _offImage_59.GetValue();
	#endregion


}


}