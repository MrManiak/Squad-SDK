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

// UserDefinedStruct ScreenResolutionStruct.ScreenResolutionStruct
// 0x0008
public class FScreenResolutionStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offWidth_4_C561351141FBE5318B5BB8B01F9FA073                   = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                                _offHeight_5_61FF2BBC4EB41EA01C79389217A87FD9                  = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public int                                                 Width_4_C561351141FBE5318B5BB8B01F9FA073                       => _offWidth_4_C561351141FBE5318B5BB8B01F9FA073.GetValue();
	public int                                                 Height_5_61FF2BBC4EB41EA01C79389217A87FD9                      => _offHeight_5_61FF2BBC4EB41EA01C79389217A87FD9.GetValue();
	#endregion

	public FScreenResolutionStruct(int c_Width_4_C561351141FBE5318B5BB8B01F9FA073, int c_Height_5_61FF2BBC4EB41EA01C79389217A87FD9) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWidth_4_C561351141FBE5318B5BB8B01F9FA073.SetValue(c_Width_4_C561351141FBE5318B5BB8B01F9FA073);
		_offHeight_5_61FF2BBC4EB41EA01C79389217A87FD9.SetValue(c_Height_5_61FF2BBC4EB41EA01C79389217A87FD9);
	}
}

}