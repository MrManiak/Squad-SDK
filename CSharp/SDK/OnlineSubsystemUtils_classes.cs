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

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (0x0260 - 0x0238)
public class AOnlineBeacon : AActor
{
	#region Offsets
	private ExternalOffset<float>                             _offBeaconConnectionInitialTimeout                             = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBeaconConnectionTimeout                                    = new ExternalOffset<float>(0x0254);                           // 0x0254(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UNetDriver>                        _offNetDriver                                                  = new ExternalOffset<UNetDriver>(0x0258, true);                // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              BeaconConnectionInitialTimeout                                 => _offBeaconConnectionInitialTimeout.GetValue();
	public float                                              BeaconConnectionTimeout                                        => _offBeaconConnectionTimeout.GetValue();
	public UNetDriver                                         NetDriver                                                      => _offNetDriver.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0029 (0x0289 - 0x0260)
public class AOnlineBeaconClient : AOnlineBeacon
{
	#region Offsets
	private ExternalOffset<AOnlineBeaconHostObject>           _offBeaconOwner                                                = new ExternalOffset<AOnlineBeaconHostObject>(0x0278, true);   // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UNetConnection>                    _offBeaconConnection                                           = new ExternalOffset<UNetConnection>(0x0280, true);            // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EBeaconConnectionState>            _offConnectionState                                            = new ExternalOffset<EBeaconConnectionState>(0x0288, false);   // 0x0288(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AOnlineBeaconHostObject                            BeaconOwner                                                    => _offBeaconOwner.GetValue();
	public UNetConnection                                     BeaconConnection                                               => _offBeaconConnection.GetValue();
	public EBeaconConnectionState                             ConnectionState                                                => _offConnectionState.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0038 (0x0270 - 0x0238)
public class AOnlineBeaconHostObject : AActor
{
	#region Offsets
	private ExternalOffset<FString>                           _offBeaconTypeName                                             = new ExternalOffset<FString>(0x0248, false);                  // 0x0248(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offClientBeaconActorClass                                     = new ExternalOffset<UClass>(0x0258, true);                    // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<AOnlineBeaconClient>>       _offClientActors                                               = new ExternalOffset<TArray<AOnlineBeaconClient>>(0x0260, false); // 0x0260(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                            BeaconTypeName                                                 => _offBeaconTypeName.GetValue();
	public UClass                                             ClientBeaconActorClass                                         => _offClientBeaconActorClass.GetValue();
	public TArray<AOnlineBeaconClient>                        ClientActors                                                   => _offClientActors.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UInAppPurchaseCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UInAppPurchaseQueryCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UInAppPurchaseRestoreCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.IpConnection
// 0x052C (0x19F4 - 0x14C8)
public class UIpConnection : UNetConnection
{
	#region Offsets
	private ExternalOffset<float>                             _offSocketErrorDisconnectDelay                                 = new ExternalOffset<float>(0x19F0);                           // 0x19F0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              SocketErrorDisconnectDelay                                     => _offSocketErrorDisconnectDelay.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0054 (0x077C - 0x0728)
public class UIpNetDriver : UNetDriver
{
	#region Offsets
//	private ExternalOffset<char>                              _offLogPortUnreach                                             = new ExternalOffset<char>(0x0748, false);                     // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offAllowPlayerPortUnreach                                     = new ExternalOffset<char>(0x0748, false);                     // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                              _offMaxPortCountToTry                                          = new ExternalOffset<uint>(0x074C);                            // 0x074C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<uint>                              _offServerDesiredSocketReceiveBufferBytes                      = new ExternalOffset<uint>(0x075C);                            // 0x075C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<uint>                              _offServerDesiredSocketSendBufferBytes                         = new ExternalOffset<uint>(0x0760);                            // 0x0760(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<uint>                              _offClientDesiredSocketReceiveBufferBytes                      = new ExternalOffset<uint>(0x0764);                            // 0x0764(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<uint>                              _offClientDesiredSocketSendBufferBytes                         = new ExternalOffset<uint>(0x0768);                            // 0x0768(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<double>                            _offMaxSecondsInReceive                                        = new ExternalOffset<double>(0x0770, false);                   // 0x0770(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offNbPacketsBetweenReceiveTimeTest                            = new ExternalOffset<int>(0x0778);                             // 0x0778(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                               MaxPortCountToTry                                              => _offMaxPortCountToTry.GetValue();
	public uint                                               ServerDesiredSocketReceiveBufferBytes                          => _offServerDesiredSocketReceiveBufferBytes.GetValue();
	public uint                                               ServerDesiredSocketSendBufferBytes                             => _offServerDesiredSocketSendBufferBytes.GetValue();
	public uint                                               ClientDesiredSocketReceiveBufferBytes                          => _offClientDesiredSocketReceiveBufferBytes.GetValue();
	public uint                                               ClientDesiredSocketSendBufferBytes                             => _offClientDesiredSocketSendBufferBytes.GetValue();
	public double                                             MaxSecondsInReceive                                            => _offMaxSecondsInReceive.GetValue();
	public int                                                NbPacketsBetweenReceiveTimeTest                                => _offNbPacketsBetweenReceiveTimeTest.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class ULeaderboardFlushCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class ULeaderboardQueryCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0028 (0x0050 - 0x0028)
public class ULogoutCallbackProxy : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x0030 (0x0290 - 0x0260)
public class AOnlineBeaconHost : AOnlineBeacon
{
	#region Offsets
	private ExternalOffset<int>                               _offListenPort                                                 = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<AOnlineBeaconClient>>       _offClientActors                                               = new ExternalOffset<TArray<AOnlineBeaconClient>>(0x0280, false); // 0x0280(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                ListenPort                                                     => _offListenPort.GetValue();
	public TArray<AOnlineBeaconClient>                        ClientActors                                                   => _offClientActors.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0008 (0x0030 - 0x0028)
public class UOnlineEngineInterfaceImpl : UOnlineEngineInterface
{
	#region Offsets
	private ExternalOffset<FName>                             _offVoiceSubsystemNameOverride                                 = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                              VoiceSubsystemNameOverride                                     => _offVoiceSubsystemNameOverride.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0028 (0x0050 - 0x0028)
public class UOnlinePIESettings : UDeveloperSettings
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbOnlinePIEEnabled                                          = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPIELoginSettingsInternal>> _offLogins                                                     = new ExternalOffset<TArray<FPIELoginSettingsInternal>>(0x0040, false); // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bOnlinePIEEnabled                                              => _offbOnlinePIEEnabled.GetValue();
	public TArray<FPIELoginSettingsInternal>                  Logins                                                         => _offLogins.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0162 (0x018A - 0x0028)
public class UOnlineSessionClient : UOnlineSession
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbIsFromInvite                                              = new ExternalOffset<byte/*(bool)*/>(0x0188);                  // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbHandlingDisconnect                                        = new ExternalOffset<byte/*(bool)*/>(0x0189);                  // 0x0189(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bIsFromInvite                                                  => _offbIsFromInvite.GetValue();
	public byte/*(bool)*/                                     bHandlingDisconnect                                            => _offbHandlingDisconnect.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00D2 (0x035B - 0x0289)
public class APartyBeaconClient : AOnlineBeaconClient
{
	#region Offsets
	private ExternalOffset<FString>                           _offDestSessionId                                              = new ExternalOffset<FString>(0x02F8, false);                  // 0x02F8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FPartyReservation>                 _offPendingReservation                                         = new ExternalOffset<FPartyReservation>(0x0308, false);        // 0x0308(0x0050) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EClientRequestType>                _offRequestType                                                = new ExternalOffset<EClientRequestType>(0x0358, false);       // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbPendingReservationSent                                    = new ExternalOffset<byte/*(bool)*/>(0x0359);                  // 0x0359(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCancelReservation                                         = new ExternalOffset<byte/*(bool)*/>(0x035A);                  // 0x035A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                            DestSessionId                                                  => _offDestSessionId.GetValue();
	public FPartyReservation                                  PendingReservation                                             => _offPendingReservation.GetValue();
	public EClientRequestType                                 RequestType                                                    => _offRequestType.GetValue();
	public byte/*(bool)*/                                     bPendingReservationSent                                        => _offbPendingReservationSent.GetValue();
	public byte/*(bool)*/                                     bCancelReservation                                             => _offbCancelReservation.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0074 (0x02E4 - 0x0270)
public class APartyBeaconHost : AOnlineBeaconHostObject
{
	#region Offsets
	private ExternalOffset<UPartyBeaconState>                 _offState                                                      = new ExternalOffset<UPartyBeaconState>(0x0270, true);         // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbLogoutOnSessionTimeout                                    = new ExternalOffset<byte/*(bool)*/>(0x02D8);                  // 0x02D8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSessionTimeoutSecs                                         = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offTravelSessionTimeoutSecs                                   = new ExternalOffset<float>(0x02E0);                           // 0x02E0(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UPartyBeaconState                                  State                                                          => _offState.GetValue();
	public byte/*(bool)*/                                     bLogoutOnSessionTimeout                                        => _offbLogoutOnSessionTimeout.GetValue();
	public float                                              SessionTimeoutSecs                                             => _offSessionTimeoutSecs.GetValue();
	public float                                              TravelSessionTimeoutSecs                                       => _offTravelSessionTimeoutSecs.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0040 (0x0068 - 0x0028)
public class UPartyBeaconState : UObject
{
	#region Offsets
	private ExternalOffset<FName>                             _offSessionName                                                = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offNumConsumedReservations                                    = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxReservations                                            = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offNumTeams                                                   = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offNumPlayersPerTeam                                          = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FName>                             _offTeamAssignmentMethod                                       = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offReservedHostTeamNum                                        = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offForceTeamNum                                               = new ExternalOffset<int>(0x004C);                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRestrictCrossConsole                                      = new ExternalOffset<byte/*(bool)*/>(0x0050);                  // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FPartyReservation>>         _offReservations                                               = new ExternalOffset<TArray<FPartyReservation>>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              SessionName                                                    => _offSessionName.GetValue();
	public int                                                NumConsumedReservations                                        => _offNumConsumedReservations.GetValue();
	public int                                                MaxReservations                                                => _offMaxReservations.GetValue();
	public int                                                NumTeams                                                       => _offNumTeams.GetValue();
	public int                                                NumPlayersPerTeam                                              => _offNumPlayersPerTeam.GetValue();
	public FName                                              TeamAssignmentMethod                                           => _offTeamAssignmentMethod.GetValue();
	public int                                                ReservedHostTeamNum                                            => _offReservedHostTeamNum.GetValue();
	public int                                                ForceTeamNum                                                   => _offForceTeamNum.GetValue();
	public byte/*(bool)*/                                     bRestrictCrossConsole                                          => _offbRestrictCrossConsole.GetValue();
	public TArray<FPartyReservation>                          Reservations                                                   => _offReservations.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0020 (0x0048 - 0x0028)
public class UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0028 (0x0050 - 0x0028)
public class UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00FA (0x0383 - 0x0289)
public class ASpectatorBeaconClient : AOnlineBeaconClient
{
	#region Offsets
	private ExternalOffset<FString>                           _offDestSessionId                                              = new ExternalOffset<FString>(0x02F8, false);                  // 0x02F8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSpectatorReservation>             _offPendingReservation                                         = new ExternalOffset<FSpectatorReservation>(0x0308, false);    // 0x0308(0x0078) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<ESpectatorClientRequestType>       _offRequestType                                                = new ExternalOffset<ESpectatorClientRequestType>(0x0380, false); // 0x0380(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbPendingReservationSent                                    = new ExternalOffset<byte/*(bool)*/>(0x0381);                  // 0x0381(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCancelReservation                                         = new ExternalOffset<byte/*(bool)*/>(0x0382);                  // 0x0382(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                            DestSessionId                                                  => _offDestSessionId.GetValue();
	public FSpectatorReservation                              PendingReservation                                             => _offPendingReservation.GetValue();
	public ESpectatorClientRequestType                        RequestType                                                    => _offRequestType.GetValue();
	public byte/*(bool)*/                                     bPendingReservationSent                                        => _offbPendingReservationSent.GetValue();
	public byte/*(bool)*/                                     bCancelReservation                                             => _offbCancelReservation.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0074 (0x02E4 - 0x0270)
public class ASpectatorBeaconHost : AOnlineBeaconHostObject
{
	#region Offsets
	private ExternalOffset<USpectatorBeaconState>             _offState                                                      = new ExternalOffset<USpectatorBeaconState>(0x0270, true);     // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbLogoutOnSessionTimeout                                    = new ExternalOffset<byte/*(bool)*/>(0x02D8);                  // 0x02D8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSessionTimeoutSecs                                         = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offTravelSessionTimeoutSecs                                   = new ExternalOffset<float>(0x02E0);                           // 0x02E0(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public USpectatorBeaconState                              State                                                          => _offState.GetValue();
	public byte/*(bool)*/                                     bLogoutOnSessionTimeout                                        => _offbLogoutOnSessionTimeout.GetValue();
	public float                                              SessionTimeoutSecs                                             => _offSessionTimeoutSecs.GetValue();
	public float                                              TravelSessionTimeoutSecs                                       => _offTravelSessionTimeoutSecs.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0028 (0x0050 - 0x0028)
public class USpectatorBeaconState : UObject
{
	#region Offsets
	private ExternalOffset<FName>                             _offSessionName                                                = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offNumConsumedReservations                                    = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxReservations                                            = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRestrictCrossConsole                                      = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FSpectatorReservation>>     _offReservations                                               = new ExternalOffset<TArray<FSpectatorReservation>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              SessionName                                                    => _offSessionName.GetValue();
	public int                                                NumConsumedReservations                                        => _offNumConsumedReservations.GetValue();
	public int                                                MaxReservations                                                => _offMaxReservations.GetValue();
	public byte/*(bool)*/                                     bRestrictCrossConsole                                          => _offbRestrictCrossConsole.GetValue();
	public TArray<FSpectatorReservation>                      Reservations                                                   => _offReservations.GetValue();
	#endregion


}

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x003F (0x02C8 - 0x0289)
public class ATestBeaconClient : AOnlineBeaconClient
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x0270 - 0x0270)
public class ATestBeaconHost : AOnlineBeaconHostObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0080 (0x0640 - 0x05C0)
public class UVoipListenerSynthComponent : USynthComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}