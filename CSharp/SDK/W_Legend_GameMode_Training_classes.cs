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

// WidgetBlueprintGeneratedClass W_Legend_GameMode_Training.W_Legend_GameMode_Training_C
// 0x0060 (0x0240 - 0x01E0)
public class UW_Legend_GameMode_Training_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<UImage>                            _offGamemode_Image                                             = new ExternalOffset<UImage>(0x0230, true);                    // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public UImage                                             Gamemode_Image                                                 => _offGamemode_Image.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	#endregion


}


}