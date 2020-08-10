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

// ScriptStruct UdpMessaging.UdpMockMessage
// 0x0010
public class FUdpMockMessage : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<char>>                       _offData                                                       = new ExternalOffset<TArray<char>>(0x0000, false);             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<char>                                        Data                                                           => _offData.GetValue();
	#endregion

	public FUdpMockMessage(TArray<char> c_Data) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offData.SetValue(c_Data);
	}
}

}