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

// Class Qos.QosBeaconClient
// 0x003F (0x02C8 - 0x0289)
public class AQosBeaconClient : AOnlineBeaconClient
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Qos.QosBeaconHost
// 0x0000 (0x0270 - 0x0270)
public class AQosBeaconHost : AOnlineBeaconHostObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Qos.QosEvaluator
// 0x0038 (0x0060 - 0x0028)
public class UQosEvaluator : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbInProgress                                                = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbCancelOperation                                           = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FDatacenterQosInstance>>    _offDatacenters                                                = new ExternalOffset<TArray<FDatacenterQosInstance>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bInProgress                                                    => _offbInProgress.GetValue();
	public byte/*(bool)*/                                     bCancelOperation                                               => _offbCancelOperation.GetValue();
	public TArray<FDatacenterQosInstance>                     Datacenters                                                    => _offDatacenters.GetValue();
	#endregion


}

// Class Qos.QosRegionManager
// 0x0078 (0x00A0 - 0x0028)
public class UQosRegionManager : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offNumTestsPerRegion                                          = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offPingTimeout                                                = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FQosRegionInfo>>            _offRegionDefinitions                                          = new ExternalOffset<TArray<FQosRegionInfo>>(0x0030, false);   // 0x0030(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FQosDatacenterInfo>>        _offDatacenterDefinitions                                      = new ExternalOffset<TArray<FQosDatacenterInfo>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	private ExternalOffset<FDateTime>                         _offLastCheckTimestamp                                         = new ExternalOffset<FDateTime>(0x0050, false);                // 0x0050(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UQosEvaluator>                     _offEvaluator                                                  = new ExternalOffset<UQosEvaluator>(0x0058, true);             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EQosCompletionResult>              _offQosEvalResult                                              = new ExternalOffset<EQosCompletionResult>(0x0060, false);     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FRegionQosInstance>>        _offRegionOptions                                              = new ExternalOffset<TArray<FRegionQosInstance>>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offForceRegionId                                              = new ExternalOffset<FString>(0x0078, false);                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbRegionForcedViaCommandline                                = new ExternalOffset<byte/*(bool)*/>(0x0088);                  // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offSelectedRegionId                                           = new ExternalOffset<FString>(0x0090, false);                  // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                NumTestsPerRegion                                              => _offNumTestsPerRegion.GetValue();
	public float                                              PingTimeout                                                    => _offPingTimeout.GetValue();
	public TArray<FQosRegionInfo>                             RegionDefinitions                                              => _offRegionDefinitions.GetValue();
	public TArray<FQosDatacenterInfo>                         DatacenterDefinitions                                          => _offDatacenterDefinitions.GetValue();
	public FDateTime                                          LastCheckTimestamp                                             => _offLastCheckTimestamp.GetValue();
	public UQosEvaluator                                      Evaluator                                                      => _offEvaluator.GetValue();
	public EQosCompletionResult                               QosEvalResult                                                  => _offQosEvalResult.GetValue();
	public TArray<FRegionQosInstance>                         RegionOptions                                                  => _offRegionOptions.GetValue();
	public FString                                            ForceRegionId                                                  => _offForceRegionId.GetValue();
	public byte/*(bool)*/                                     bRegionForcedViaCommandline                                    => _offbRegionForcedViaCommandline.GetValue();
	public FString                                            SelectedRegionId                                               => _offSelectedRegionId.GetValue();
	#endregion


}


}