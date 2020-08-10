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
// Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x0120 - 0x0108)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          Players;                                                   // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                           ParentState;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
