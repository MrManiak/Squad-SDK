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

// Class Lobby.LobbyBeaconClient
// 0x0051 (0x02DA - 0x0289)
public class ALobbyBeaconClient : AOnlineBeaconClient
{
	#region Offsets
	private ExternalOffset<ALobbyBeaconState>                 _offLobbyState                                                 = new ExternalOffset<ALobbyBeaconState>(0x02C8, true);         // 0x02C8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ALobbyBeaconPlayerState>           _offPlayerState                                                = new ExternalOffset<ALobbyBeaconPlayerState>(0x02D0, true);   // 0x02D0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ELobbyBeaconJoinState>             _offLobbyJoinServerState                                       = new ExternalOffset<ELobbyBeaconJoinState>(0x02D9, false);    // 0x02D9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public ALobbyBeaconState                                  LobbyState                                                     => _offLobbyState.GetValue();
	public ALobbyBeaconPlayerState                            PlayerState                                                    => _offPlayerState.GetValue();
	public ELobbyBeaconJoinState                              LobbyJoinServerState                                           => _offLobbyJoinServerState.GetValue();
	#endregion


}

// Class Lobby.LobbyBeaconHost
// 0x0010 (0x0280 - 0x0270)
public class ALobbyBeaconHost : AOnlineBeaconHostObject
{
	#region Offsets
	private ExternalOffset<ALobbyBeaconState>                 _offLobbyState                                                 = new ExternalOffset<ALobbyBeaconState>(0x02A0, true);         // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public ALobbyBeaconState                                  LobbyState                                                     => _offLobbyState.GetValue();
	#endregion


}

// Class Lobby.LobbyBeaconPlayerState
// 0x0078 (0x02C0 - 0x0248)
public class ALobbyBeaconPlayerState : AInfo
{
	#region Offsets
	private ExternalOffset<FText>                             _offDisplayName                                                = new ExternalOffset<FText>(0x0248, false);                    // 0x0248(0x0018) (Net, NativeAccessSpecifierPublic)
	private ExternalOffset<FUniqueNetIdRepl>                  _offUniqueID                                                   = new ExternalOffset<FUniqueNetIdRepl>(0x0260, false);         // 0x0260(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FUniqueNetIdRepl>                  _offPartyOwnerUniqueId                                         = new ExternalOffset<FUniqueNetIdRepl>(0x0288, false);         // 0x0288(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbInLobby                                                   = new ExternalOffset<byte/*(bool)*/>(0x02B0);                  // 0x02B0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AOnlineBeaconClient>               _offClientActor                                                = new ExternalOffset<AOnlineBeaconClient>(0x02B8, true);       // 0x02B8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              DisplayName                                                    => _offDisplayName.GetValue();
	public FUniqueNetIdRepl                                   UniqueID                                                       => _offUniqueID.GetValue();
	public FUniqueNetIdRepl                                   PartyOwnerUniqueId                                             => _offPartyOwnerUniqueId.GetValue();
	public byte/*(bool)*/                                     bInLobby                                                       => _offbInLobby.GetValue();
	public AOnlineBeaconClient                                ClientActor                                                    => _offClientActor.GetValue();
	#endregion


}

// Class Lobby.LobbyBeaconState
// 0x0140 (0x0388 - 0x0248)
public class ALobbyBeaconState : AInfo
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxPlayers                                                 = new ExternalOffset<int>(0x0248);                             // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offLobbyBeaconPlayerStateClass                                = new ExternalOffset<UClass>(0x0250, true);                    // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbLobbyStarted                                              = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offWaitForPlayersTimeRemaining                                = new ExternalOffset<float>(0x0264);                           // 0x0264(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FLobbyPlayerStateInfoArray>        _offPlayers                                                    = new ExternalOffset<FLobbyPlayerStateInfoArray>(0x0268, false); // 0x0268(0x0120) (Net, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                MaxPlayers                                                     => _offMaxPlayers.GetValue();
	public UClass                                             LobbyBeaconPlayerStateClass                                    => _offLobbyBeaconPlayerStateClass.GetValue();
	public byte/*(bool)*/                                     bLobbyStarted                                                  => _offbLobbyStarted.GetValue();
	public float                                              WaitForPlayersTimeRemaining                                    => _offWaitForPlayersTimeRemaining.GetValue();
	public FLobbyPlayerStateInfoArray                         Players                                                        => _offPlayers.GetValue();
	#endregion


}


}