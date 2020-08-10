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

// Enum Lobby.ELobbyBeaconJoinState
public enum ELobbyBeaconJoinState : byte
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
public class FLobbyPlayerStateActorInfo : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<ALobbyBeaconPlayerState>            _offLobbyPlayerState                                           = new ExternalOffset<ALobbyBeaconPlayerState>(0x0010, true);   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ALobbyBeaconPlayerState                             LobbyPlayerState                                               => _offLobbyPlayerState.GetValue();
	#endregion

	public FLobbyPlayerStateActorInfo(ALobbyBeaconPlayerState c_LobbyPlayerState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLobbyPlayerState.SetValue(c_LobbyPlayerState);
	}
}
// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x0120 - 0x0108)
public class FLobbyPlayerStateInfoArray : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FLobbyPlayerStateActorInfo>> _offPlayers                                                    = new ExternalOffset<TArray<FLobbyPlayerStateActorInfo>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<ALobbyBeaconState>                  _offParentState                                                = new ExternalOffset<ALobbyBeaconState>(0x0118, true);         // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FLobbyPlayerStateActorInfo>                  Players                                                        => _offPlayers.GetValue();
	public ALobbyBeaconState                                   ParentState                                                    => _offParentState.GetValue();
	#endregion

	public FLobbyPlayerStateInfoArray(TArray<FLobbyPlayerStateActorInfo> c_Players, ALobbyBeaconState c_ParentState) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayers.SetValue(c_Players);
		_offParentState.SetValue(c_ParentState);
	}
}

}