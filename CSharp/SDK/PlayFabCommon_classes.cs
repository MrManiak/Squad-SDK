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

// Class PlayFabCommon.PlayFabAuthenticationContext
// 0x0040 (0x0068 - 0x0028)
public class UPlayFabAuthenticationContext : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offClientSessionTicket                                        = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offEntityToken                                                = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offDeveloperSecretKey                                         = new ExternalOffset<FString>(0x0048, false);                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offPlayFabId                                                  = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                            ClientSessionTicket                                            => _offClientSessionTicket.GetValue();
	public FString                                            EntityToken                                                    => _offEntityToken.GetValue();
	public FString                                            DeveloperSecretKey                                             => _offDeveloperSecretKey.GetValue();
	public FString                                            PlayFabId                                                      => _offPlayFabId.GetValue();
	#endregion


}

// Class PlayFabCommon.PlayFabRuntimeSettings
// 0x0030 (0x0058 - 0x0028)
public class UPlayFabRuntimeSettings : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offProductionEnvironmentURL                                   = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTitleId                                                    = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offDeveloperSecretKey                                         = new ExternalOffset<FString>(0x0048, false);                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            ProductionEnvironmentURL                                       => _offProductionEnvironmentURL.GetValue();
	public FString                                            TitleId                                                        => _offTitleId.GetValue();
	public FString                                            DeveloperSecretKey                                             => _offDeveloperSecretKey.GetValue();
	#endregion


}


}