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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
public class FSessionServiceLogUnsubscribe : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSessionServiceLogUnsubscribe() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
public class FSessionServicePing : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offusername                                                   = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             username                                                       => _offusername.GetValue();
	#endregion

	public FSessionServicePing(FString c_username) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offusername.SetValue(c_username);
	}
}
// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
public class FSessionServiceLogSubscribe : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FSessionServiceLogSubscribe() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
public class FSessionServiceLog : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offCategory                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offData                                                       = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offInstanceId                                                 = new ExternalOffset<FGuid>(0x0018, false);                    // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offTimeSeconds                                                = new ExternalOffset<double>(0x0028, false);                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offVerbosity                                                  = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Category                                                       => _offCategory.GetValue();
	public FString                                             Data                                                           => _offData.GetValue();
	public FGuid                                               InstanceId                                                     => _offInstanceId.GetValue();
	public double                                              TimeSeconds                                                    => _offTimeSeconds.GetValue();
	#endregion

	public FSessionServiceLog(FName c_Category, FString c_Data, FGuid c_InstanceId, double c_TimeSeconds) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCategory.SetValue(c_Category);
		_offData.SetValue(c_Data);
		_offInstanceId.SetValue(c_InstanceId);
		_offTimeSeconds.SetValue(c_TimeSeconds);
	}
}
// ScriptStruct SessionMessages.SessionServicePong
// 0x0098
public class FSessionServicePong : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offAuthorized                                                 = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offBuildDate                                                  = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDeviceName                                                 = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offInstanceId                                                 = new ExternalOffset<FGuid>(0x0028, false);                    // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offInstanceName                                               = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offIsConsoleBuild                                             = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offPlatformName                                               = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offSessionId                                                  = new ExternalOffset<FGuid>(0x0060, false);                    // 0x0060(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSessionName                                                = new ExternalOffset<FString>(0x0070, false);                  // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSessionOwner                                               = new ExternalOffset<FString>(0x0080, false);                  // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offStandalone                                                 = new ExternalOffset<byte/*(bool)*/>(0x0090);                  // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      Authorized                                                     => _offAuthorized.GetValue();
	public FString                                             BuildDate                                                      => _offBuildDate.GetValue();
	public FString                                             DeviceName                                                     => _offDeviceName.GetValue();
	public FGuid                                               InstanceId                                                     => _offInstanceId.GetValue();
	public FString                                             InstanceName                                                   => _offInstanceName.GetValue();
	public byte/*(bool)*/                                      IsConsoleBuild                                                 => _offIsConsoleBuild.GetValue();
	public FString                                             PlatformName                                                   => _offPlatformName.GetValue();
	public FGuid                                               SessionId                                                      => _offSessionId.GetValue();
	public FString                                             SessionName                                                    => _offSessionName.GetValue();
	public FString                                             SessionOwner                                                   => _offSessionOwner.GetValue();
	public byte/*(bool)*/                                      Standalone                                                     => _offStandalone.GetValue();
	#endregion

	public FSessionServicePong(byte/*(bool)*/ c_Authorized, FString c_BuildDate, FString c_DeviceName, FGuid c_InstanceId, FString c_InstanceName, byte/*(bool)*/ c_IsConsoleBuild, FString c_PlatformName, FGuid c_SessionId, FString c_SessionName, FString c_SessionOwner, byte/*(bool)*/ c_Standalone) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAuthorized.SetValue(c_Authorized);
		_offBuildDate.SetValue(c_BuildDate);
		_offDeviceName.SetValue(c_DeviceName);
		_offInstanceId.SetValue(c_InstanceId);
		_offInstanceName.SetValue(c_InstanceName);
		_offIsConsoleBuild.SetValue(c_IsConsoleBuild);
		_offPlatformName.SetValue(c_PlatformName);
		_offSessionId.SetValue(c_SessionId);
		_offSessionName.SetValue(c_SessionName);
		_offSessionOwner.SetValue(c_SessionOwner);
		_offStandalone.SetValue(c_Standalone);
	}
}

}