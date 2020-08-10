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

// ScriptStruct RCONServer.RCONMessage
// 0x0018
public class FRCONMessage : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMessage                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offID                                                         = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offType                                                       = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Message                                                        => _offMessage.GetValue();
	public int                                                 ID                                                             => _offID.GetValue();
	public int                                                 Type                                                           => _offType.GetValue();
	#endregion

	public FRCONMessage(FString c_Message, int c_ID, int c_Type) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMessage.SetValue(c_Message);
		_offID.SetValue(c_ID);
		_offType.SetValue(c_Type);
	}
}

}