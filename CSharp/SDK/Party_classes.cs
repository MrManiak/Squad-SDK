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

// Class Party.SocialUser
// 0x0000 (0x0028 - 0x0028)
public class USocialUser : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.Chatroom
// 0x0018 (0x0040 - 0x0028)
public class UChatroom : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offCurrentChatRoomId                                          = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offMaxChatRoomRetries                                         = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offNumChatRoomRetries                                         = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                            CurrentChatRoomId                                              => _offCurrentChatRoomId.GetValue();
	public int                                                MaxChatRoomRetries                                             => _offMaxChatRoomRetries.GetValue();
	public int                                                NumChatRoomRetries                                             => _offNumChatRoomRetries.GetValue();
	#endregion


}

// Class Party.SocialManager
// 0x003B (0x0063 - 0x0028)
public class USocialManager : UObject
{
	#region Offsets
	private ExternalOffset<TArray<USocialToolkit>>            _offSocialToolkits                                             = new ExternalOffset<TArray<USocialToolkit>>(0x0048, false);   // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<USocialDebugTools>                 _offSocialDebugTools                                           = new ExternalOffset<USocialDebugTools>(0x0058, true);         // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbLeavePartyOnDisconnect                                    = new ExternalOffset<byte/*(bool)*/>(0x0062);                  // 0x0062(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<USocialToolkit>                             SocialToolkits                                                 => _offSocialToolkits.GetValue();
	public USocialDebugTools                                  SocialDebugTools                                               => _offSocialDebugTools.GetValue();
	public byte/*(bool)*/                                     bLeavePartyOnDisconnect                                        => _offbLeavePartyOnDisconnect.GetValue();
	#endregion


}

// Class Party.SocialParty
// 0x0180 (0x01A8 - 0x0028)
public class USocialParty : UObject
{
	#region Offsets
	private ExternalOffset<UClass>                            _offReservationBeaconClientClass                               = new ExternalOffset<UClass>(0x0058, true);                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offSpectatorBeaconClientClass                                 = new ExternalOffset<UClass>(0x0060, true);                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FUniqueNetIdRepl>                  _offOwningLocalUserId                                          = new ExternalOffset<FUniqueNetIdRepl>(0x0078, false);         // 0x0078(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FUniqueNetIdRepl>                  _offCurrentLeaderId                                            = new ExternalOffset<FUniqueNetIdRepl>(0x00A0, false);         // 0x00A0(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private TMap<struct FUniqueNetIdRepl, class UPartyMember*> _offPartyMembersById                                           = new ExternalOffset<TMap<UPartyMember>>(0x00C8, false);       // 0x00C8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableAutomaticPartyRejoin                                = new ExternalOffset<byte/*(bool)*/>(0x0118);                  // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<APartyBeaconClient>                _offReservationBeaconClient                                    = new ExternalOffset<APartyBeaconClient>(0x0190, true);        // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<ASpectatorBeaconClient>            _offSpectatorBeaconClient                                      = new ExternalOffset<ASpectatorBeaconClient>(0x01A0, true);    // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UClass                                             ReservationBeaconClientClass                                   => _offReservationBeaconClientClass.GetValue();
	public UClass                                             SpectatorBeaconClientClass                                     => _offSpectatorBeaconClientClass.GetValue();
	public FUniqueNetIdRepl                                   OwningLocalUserId                                              => _offOwningLocalUserId.GetValue();
	public FUniqueNetIdRepl                                   CurrentLeaderId                                                => _offCurrentLeaderId.GetValue();
	public byte/*(bool)*/                                     bEnableAutomaticPartyRejoin                                    => _offbEnableAutomaticPartyRejoin.GetValue();
	public APartyBeaconClient                                 ReservationBeaconClient                                        => _offReservationBeaconClient.GetValue();
	public ASpectatorBeaconClient                             SpectatorBeaconClient                                          => _offSpectatorBeaconClient.GetValue();
	#endregion


}

// Class Party.PartyMember
// 0x0048 (0x0070 - 0x0028)
public class UPartyMember : UObject
{
	#region Offsets
	private ExternalOffset<USocialUser>                       _offSocialUser                                                 = new ExternalOffset<USocialUser>(0x0068, true);               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USocialUser                                        SocialUser                                                     => _offSocialUser.GetValue();
	#endregion


}

// Class Party.SocialToolkit
// 0x00B0 (0x00D8 - 0x0028)
public class USocialToolkit : UObject
{
	#region Offsets
	private ExternalOffset<USocialUser>                       _offLocalUser                                                  = new ExternalOffset<USocialUser>(0x0060, true);               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<USocialUser>>               _offAllUsers                                                   = new ExternalOffset<TArray<USocialUser>>(0x0068, false);      // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<ULocalPlayer>                      _offLocalPlayerOwner                                           = new ExternalOffset<ULocalPlayer>(0x00C8, true);              // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USocialChatManager>                _offSocialChatManager                                          = new ExternalOffset<USocialChatManager>(0x00D0, true);        // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USocialUser                                        LocalUser                                                      => _offLocalUser.GetValue();
	public TArray<USocialUser>                                AllUsers                                                       => _offAllUsers.GetValue();
	public ULocalPlayer                                       LocalPlayerOwner                                               => _offLocalPlayerOwner.GetValue();
	public USocialChatManager                                 SocialChatManager                                              => _offSocialChatManager.GetValue();
	#endregion


}

// Class Party.SocialChatManager
// 0x0198 (0x01C0 - 0x0028)
public class USocialChatManager : UObject
{
	#region Offsets
//	private TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> _offDirectChannelsByTargetUser                                 = new ExternalOffset<USocialPrivateMessageChannel*>>(0x0078, false); // 0x0078(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private TMap<struct FString, class USocialChatRoom*>      _offChatRoomsById                                              = new ExternalOffset<TMap<USocialChatRoom>>(0x00C8, false);    // 0x00C8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private TMap<struct FString, class USocialReadOnlyChatChannel*> _offReadOnlyChannelsByDisplayName                              = new ExternalOffset<TMap<USocialReadOnlyChatChannel>>(0x0118, false); // 0x0118(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableChatSlashCommands                                   = new ExternalOffset<byte/*(bool)*/>(0x0168);                  // 0x0168(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> _offGroupChannels                                              = new ExternalOffset<TMap<USocialGroupChannel>>(0x0170, false); // 0x0170(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bEnableChatSlashCommands                                       => _offbEnableChatSlashCommands.GetValue();
	#endregion


}

// Class Party.SocialChatChannel
// 0x0000 (0x0028 - 0x0028)
public class USocialChatChannel : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.SocialChatRoom
// 0x00C0 (0x00E8 - 0x0028)
public class USocialChatRoom : USocialChatChannel
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.SocialDebugTools
// 0x0000 (0x0028 - 0x0028)
public class USocialDebugTools : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.SocialGroupChannel
// 0x0058 (0x0080 - 0x0028)
public class USocialGroupChannel : UObject
{
	#region Offsets
	private ExternalOffset<USocialUser>                       _offSocialUser                                                 = new ExternalOffset<USocialUser>(0x0028, true);               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FUniqueNetIdRepl>                  _offGroupId                                                    = new ExternalOffset<FUniqueNetIdRepl>(0x0030, false);         // 0x0030(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FText>                             _offDisplayName                                                = new ExternalOffset<FText>(0x0058, false);                    // 0x0058(0x0018) (NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<USocialUser>>               _offMembers                                                    = new ExternalOffset<TArray<USocialUser>>(0x0070, false);      // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USocialUser                                        SocialUser                                                     => _offSocialUser.GetValue();
	public FUniqueNetIdRepl                                   GroupId                                                        => _offGroupId.GetValue();
	public FText                                              DisplayName                                                    => _offDisplayName.GetValue();
	public TArray<USocialUser>                                Members                                                        => _offMembers.GetValue();
	#endregion


}

// Class Party.SocialPartyChatRoom
// 0x0010 (0x00F8 - 0x00E8)
public class USocialPartyChatRoom : USocialChatRoom
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.SocialPrivateMessageChannel
// 0x00C8 (0x00F0 - 0x0028)
public class USocialPrivateMessageChannel : USocialChatChannel
{
	#region Offsets
	private ExternalOffset<USocialUser>                       _offTargetUser                                                 = new ExternalOffset<USocialUser>(0x00E8, true);               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USocialUser                                        TargetUser                                                     => _offTargetUser.GetValue();
	#endregion


}

// Class Party.SocialReadOnlyChatChannel
// 0x00C0 (0x00E8 - 0x0028)
public class USocialReadOnlyChatChannel : USocialChatChannel
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Party.SocialSettings
// 0x001C (0x0044 - 0x0028)
public class USocialSettings : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FName>>                     _offOssNamesWithEnvironmentIdPrefix                            = new ExternalOffset<TArray<FName>>(0x0028, false);            // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offDefaultMaxPartySize                                        = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbPreferPlatformInvites                                     = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbMustSendPrimaryInvites                                    = new ExternalOffset<byte/*(bool)*/>(0x003D);                  // 0x003D(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offUserListAutoUpdateRate                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FName>                                      OssNamesWithEnvironmentIdPrefix                                => _offOssNamesWithEnvironmentIdPrefix.GetValue();
	public int                                                DefaultMaxPartySize                                            => _offDefaultMaxPartySize.GetValue();
	public byte/*(bool)*/                                     bPreferPlatformInvites                                         => _offbPreferPlatformInvites.GetValue();
	public byte/*(bool)*/                                     bMustSendPrimaryInvites                                        => _offbMustSendPrimaryInvites.GetValue();
	public float                                              UserListAutoUpdateRate                                         => _offUserListAutoUpdateRate.GetValue();
	#endregion


}


}