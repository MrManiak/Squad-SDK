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

// Class TcpMessaging.TcpMessagingSettings
// 0x002C (0x0054 - 0x0028)
public class UTcpMessagingSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offEnableTransport                                            = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offListenEndpoint                                             = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FString>>                   _offConnectToEndpoints                                         = new ExternalOffset<TArray<FString>>(0x0040, false);          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offConnectionRetryDelay                                       = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     EnableTransport                                                => _offEnableTransport.GetValue();
	public FString                                            ListenEndpoint                                                 => _offListenEndpoint.GetValue();
	public TArray<FString>                                    ConnectToEndpoints                                             => _offConnectToEndpoints.GetValue();
	public int                                                ConnectionRetryDelay                                           => _offConnectionRetryDelay.GetValue();
	#endregion


}


}