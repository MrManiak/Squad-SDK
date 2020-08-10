// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Overlay.OverlayItem
// 0x0028
public class FOverlayItem : ExternalClass
{
	#region Offsets
	private ExternalOffset<FTimespan>                          _offStartTime                                                  = new ExternalOffset<FTimespan>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTimespan>                          _offEndTime                                                    = new ExternalOffset<FTimespan>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offText                                                       = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offPosition                                                   = new ExternalOffset<FVector2D>(0x0020, false);                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTimespan                                           StartTime                                                      => _offStartTime.GetValue();
	public FTimespan                                           EndTime                                                        => _offEndTime.GetValue();
	public FString                                             Text                                                           => _offText.GetValue();
	public FVector2D                                           Position                                                       => _offPosition.GetValue();
	#endregion

	public FOverlayItem(FTimespan c_StartTime, FTimespan c_EndTime, FString c_Text, FVector2D c_Position) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStartTime.SetValue(c_StartTime);
		_offEndTime.SetValue(c_EndTime);
		_offText.SetValue(c_Text);
		_offPosition.SetValue(c_Position);
	}
}

}