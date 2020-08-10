#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x0051 (FullSize[0x02DA] - InheritedSize[0x0289])
// LastOffsetWithSize(0x0289)
#define PADDING_029B - 0x0000 // Minimum to subtract -> (003F)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x003F PADDING_029B, class ALobbyBeaconState*,                                              LobbyState);                                               // 0x02C8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_029B, class ALobbyBeaconPlayerState*,                                        PlayerState);                                              // 0x02D0(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_029B, ELobbyBeaconJoinState,                                                 LobbyJoinServerState);                                     // 0x02D9(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}


	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// Class Lobby.LobbyBeaconHost
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
#define PADDING_029C - 0x0000 // Minimum to subtract -> (0030)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_029C, class ALobbyBeaconState*,                                              LobbyState);                                               // 0x02A0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}


};

// Class Lobby.LobbyBeaconPlayerState
// 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0238)
#define PADDING_029F - 0x0000 // Minimum to subtract -> (0010)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_029F, struct FText,                                                          DisplayName);                                              // 0x0248(0x0018)  (Net, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_029F, struct FUniqueNetIdRepl,                                               UniqueID);                                                 // 0x0260(0x0028)  (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_029F, struct FUniqueNetIdRepl,                                               PartyOwnerUniqueId);                                       // 0x0288(0x0028)  (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_029F, bool,                                                                  bInLobby);                                                 // 0x02B0(0x0001)  (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_029F, class AOnlineBeaconClient*,                                            ClientActor);                                              // 0x02B8(0x0008)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// Class Lobby.LobbyBeaconState
// 0x0140 (FullSize[0x0388] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0238)
#define PADDING_02A1 - 0x0000 // Minimum to subtract -> (0010)
class ALobbyBeaconState : public AInfo
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_02A1, int,                                                                   MaxPlayers);                                               // 0x0248(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02A1, class UClass*,                                                         LobbyBeaconPlayerStateClass);                              // 0x0250(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02A1, bool,                                                                  bLobbyStarted);                                            // 0x0260(0x0001)  (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002C PADDING_02A1, float,                                                                 WaitForPlayersTimeRemaining);                              // 0x0264(0x0004)  (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02A1, struct FLobbyPlayerStateInfoArray,                                     Players);                                                  // 0x0268(0x0120)  (Net, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
