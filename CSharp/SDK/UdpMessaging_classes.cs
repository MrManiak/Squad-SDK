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

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00A0 - 0x0028)
public class UUdpMessagingSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offEnableTransport                                            = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offUnicastEndpoint                                            = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offMulticastEndpoint                                          = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offMulticastTimeToLive                                        = new ExternalOffset<char>(0x0050, false);                     // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offStaticEndpoints                                            = new ExternalOffset<TArray<FString>>(0x0058, false);          // 0x0058(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEnableTunnel                                               = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTunnelUnicastEndpoint                                      = new ExternalOffset<FString>(0x0070, false);                  // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTunnelMulticastEndpoint                                    = new ExternalOffset<FString>(0x0080, false);                  // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offRemoteTunnelEndpoints                                      = new ExternalOffset<TArray<FString>>(0x0090, false);          // 0x0090(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     EnableTransport                                                => _offEnableTransport.GetValue();
	public FString                                            UnicastEndpoint                                                => _offUnicastEndpoint.GetValue();
	public FString                                            MulticastEndpoint                                              => _offMulticastEndpoint.GetValue();
	public TArray<FString>                                    StaticEndpoints                                                => _offStaticEndpoints.GetValue();
	public byte/*(bool)*/                                     EnableTunnel                                                   => _offEnableTunnel.GetValue();
	public FString                                            TunnelUnicastEndpoint                                          => _offTunnelUnicastEndpoint.GetValue();
	public FString                                            TunnelMulticastEndpoint                                        => _offTunnelMulticastEndpoint.GetValue();
	public TArray<FString>                                    RemoteTunnelEndpoints                                          => _offRemoteTunnelEndpoints.GetValue();
	#endregion


}


}