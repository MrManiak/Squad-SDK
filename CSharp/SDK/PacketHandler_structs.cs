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

// ScriptStruct PacketHandler.NetAnalyticsDataConfig
// 0x000C
public class FNetAnalyticsDataConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offDataName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               DataName                                                       => _offDataName.GetValue();
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	#endregion

	public FNetAnalyticsDataConfig(FName c_DataName, byte/*(bool)*/ c_bEnabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDataName.SetValue(c_DataName);
		_offbEnabled.SetValue(c_bEnabled);
	}
}

}