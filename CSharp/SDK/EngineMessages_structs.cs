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

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
public class FEngineServicePing : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FEngineServicePing() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
public class FEngineServiceTerminate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offusername                                                   = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             username                                                       => _offusername.GetValue();
	#endregion

	public FEngineServiceTerminate(FString c_username) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offusername.SetValue(c_username);
	}
}
// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
public class FEngineServiceExecuteCommand : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offCommand                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offusername                                                   = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Command                                                        => _offCommand.GetValue();
	public FString                                             username                                                       => _offusername.GetValue();
	#endregion

	public FEngineServiceExecuteCommand(FString c_Command, FString c_username) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCommand.SetValue(c_Command);
		_offusername.SetValue(c_username);
	}
}
// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
public class FEngineServiceNotification : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offText                                                       = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<double>                             _offTimeSeconds                                                = new ExternalOffset<double>(0x0010, false);                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Text                                                           => _offText.GetValue();
	public double                                              TimeSeconds                                                    => _offTimeSeconds.GetValue();
	#endregion

	public FEngineServiceNotification(FString c_Text, double c_TimeSeconds) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offText.SetValue(c_Text);
		_offTimeSeconds.SetValue(c_TimeSeconds);
	}
}
// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
public class FEngineServiceAuthDeny : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offusername                                                   = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offUserToDeny                                                 = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             username                                                       => _offusername.GetValue();
	public FString                                             UserToDeny                                                     => _offUserToDeny.GetValue();
	#endregion

	public FEngineServiceAuthDeny(FString c_username, FString c_UserToDeny) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offusername.SetValue(c_username);
		_offUserToDeny.SetValue(c_UserToDeny);
	}
}
// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
public class FEngineServicePong : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offCurrentLevel                                               = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offEngineVersion                                              = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offHasBegunPlay                                               = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offInstanceId                                                 = new ExternalOffset<FGuid>(0x0018, false);                    // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offInstanceType                                               = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offSessionId                                                  = new ExternalOffset<FGuid>(0x0038, false);                    // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWorldTimeSeconds                                           = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             CurrentLevel                                                   => _offCurrentLevel.GetValue();
	public int                                                 EngineVersion                                                  => _offEngineVersion.GetValue();
	public byte/*(bool)*/                                      HasBegunPlay                                                   => _offHasBegunPlay.GetValue();
	public FGuid                                               InstanceId                                                     => _offInstanceId.GetValue();
	public FString                                             InstanceType                                                   => _offInstanceType.GetValue();
	public FGuid                                               SessionId                                                      => _offSessionId.GetValue();
	public float                                               WorldTimeSeconds                                               => _offWorldTimeSeconds.GetValue();
	#endregion

	public FEngineServicePong(FString c_CurrentLevel, int c_EngineVersion, byte/*(bool)*/ c_HasBegunPlay, FGuid c_InstanceId, FString c_InstanceType, FGuid c_SessionId, float c_WorldTimeSeconds) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCurrentLevel.SetValue(c_CurrentLevel);
		_offEngineVersion.SetValue(c_EngineVersion);
		_offHasBegunPlay.SetValue(c_HasBegunPlay);
		_offInstanceId.SetValue(c_InstanceId);
		_offInstanceType.SetValue(c_InstanceType);
		_offSessionId.SetValue(c_SessionId);
		_offWorldTimeSeconds.SetValue(c_WorldTimeSeconds);
	}
}

}