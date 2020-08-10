// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Qos.EQosResponseType
public enum EQosResponseType : byte
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3
}

// Enum Qos.EQosCompletionResult
public enum EQosCompletionResult : byte
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4
}

// Enum Qos.EQosDatacenterResult
public enum EQosDatacenterResult : byte
{
	EQosDatacenterResult__Invalid  = 0,
	EQosDatacenterResult__Success  = 1,
	EQosDatacenterResult__Incomplete = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
public class FQosPingServerInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offAddress                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPort                                                       = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Address                                                        => _offAddress.GetValue();
	public int                                                 Port                                                           => _offPort.GetValue();
	#endregion

	public FQosPingServerInfo(FString c_Address, int c_Port) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAddress.SetValue(c_Address);
		_offPort.SetValue(c_Port);
	}
}
// ScriptStruct Qos.QosRegionInfo
// 0x0030
public class FQosRegionInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offDisplayName                                                = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offRegionId                                                   = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbVisible                                                   = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAutoAssignable                                            = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               DisplayName                                                    => _offDisplayName.GetValue();
	public FString                                             RegionId                                                       => _offRegionId.GetValue();
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	public byte/*(bool)*/                                      bVisible                                                       => _offbVisible.GetValue();
	public byte/*(bool)*/                                      bAutoAssignable                                                => _offbAutoAssignable.GetValue();
	#endregion

	public FQosRegionInfo(FText c_DisplayName, FString c_RegionId, byte/*(bool)*/ c_bEnabled, byte/*(bool)*/ c_bVisible, byte/*(bool)*/ c_bAutoAssignable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDisplayName.SetValue(c_DisplayName);
		_offRegionId.SetValue(c_RegionId);
		_offbEnabled.SetValue(c_bEnabled);
		_offbVisible.SetValue(c_bVisible);
		_offbAutoAssignable.SetValue(c_bAutoAssignable);
	}
}
// ScriptStruct Qos.QosDatacenterInfo
// 0x0038
public class FQosDatacenterInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offID                                                         = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offRegionId                                                   = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FQosPingServerInfo>>         _offServers                                                    = new ExternalOffset<TArray<FQosPingServerInfo>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ID                                                             => _offID.GetValue();
	public FString                                             RegionId                                                       => _offRegionId.GetValue();
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	public TArray<FQosPingServerInfo>                          Servers                                                        => _offServers.GetValue();
	#endregion

	public FQosDatacenterInfo(FString c_ID, FString c_RegionId, byte/*(bool)*/ c_bEnabled, TArray<FQosPingServerInfo> c_Servers) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offRegionId.SetValue(c_RegionId);
		_offbEnabled.SetValue(c_bEnabled);
		_offServers.SetValue(c_Servers);
	}
}
// ScriptStruct Qos.DatacenterQosInstance
// 0x0068
public class FDatacenterQosInstance : ExternalClass
{
	#region Offsets
	private ExternalOffset<FQosDatacenterInfo>                 _offDefinition                                                 = new ExternalOffset<FQosDatacenterInfo>(0x0000, false);       // 0x0000(0x0038) (Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<EQosDatacenterResult>               _offResult                                                     = new ExternalOffset<EQosDatacenterResult>(0x0038, false);     // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAvgPingMs                                                  = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offPingResults                                                = new ExternalOffset<TArray<int>>(0x0040, false);              // 0x0040(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<FDateTime>                          _offLastCheckTimestamp                                         = new ExternalOffset<FDateTime>(0x0058, false);                // 0x0058(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUsable                                                    = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FQosDatacenterInfo                                  Definition                                                     => _offDefinition.GetValue();
	public EQosDatacenterResult                                Result                                                         => _offResult.GetValue();
	public int                                                 AvgPingMs                                                      => _offAvgPingMs.GetValue();
	public TArray<int>                                         PingResults                                                    => _offPingResults.GetValue();
	public FDateTime                                           LastCheckTimestamp                                             => _offLastCheckTimestamp.GetValue();
	public byte/*(bool)*/                                      bUsable                                                        => _offbUsable.GetValue();
	#endregion

	public FDatacenterQosInstance(FQosDatacenterInfo c_Definition, EQosDatacenterResult c_Result, int c_AvgPingMs, TArray<int> c_PingResults, FDateTime c_LastCheckTimestamp, byte/*(bool)*/ c_bUsable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefinition.SetValue(c_Definition);
		_offResult.SetValue(c_Result);
		_offAvgPingMs.SetValue(c_AvgPingMs);
		_offPingResults.SetValue(c_PingResults);
		_offLastCheckTimestamp.SetValue(c_LastCheckTimestamp);
		_offbUsable.SetValue(c_bUsable);
	}
}
// ScriptStruct Qos.RegionQosInstance
// 0x0040
public class FRegionQosInstance : ExternalClass
{
	#region Offsets
	private ExternalOffset<FQosRegionInfo>                     _offDefinition                                                 = new ExternalOffset<FQosRegionInfo>(0x0000, false);           // 0x0000(0x0030) (Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FDatacenterQosInstance>>     _offDatacenterOptions                                          = new ExternalOffset<TArray<FDatacenterQosInstance>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FQosRegionInfo                                      Definition                                                     => _offDefinition.GetValue();
	public TArray<FDatacenterQosInstance>                      DatacenterOptions                                              => _offDatacenterOptions.GetValue();
	#endregion

	public FRegionQosInstance(FQosRegionInfo c_Definition, TArray<FDatacenterQosInstance> c_DatacenterOptions) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDefinition.SetValue(c_Definition);
		_offDatacenterOptions.SetValue(c_DatacenterOptions);
	}
}

}