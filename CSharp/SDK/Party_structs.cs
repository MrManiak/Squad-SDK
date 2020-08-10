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

// Enum Party.EApprovalAction
public enum EApprovalAction : byte
{
	EApprovalAction__Approve       = 0,
	EApprovalAction__Enqueue       = 1,
	EApprovalAction__EnqueueAndStartBeacon = 2,
	EApprovalAction__Deny          = 3,
	EApprovalAction__EApprovalAction_MAX = 4
}

// Enum Party.EPartyJoinDenialReason
public enum EPartyJoinDenialReason : byte
{
	EPartyJoinDenialReason__NoReason = 0,
	EPartyJoinDenialReason__JoinAttemptAborted = 1,
	EPartyJoinDenialReason__Busy   = 2,
	EPartyJoinDenialReason__OssUnavailable = 3,
	EPartyJoinDenialReason__PartyFull = 4,
	EPartyJoinDenialReason__GameFull = 5,
	EPartyJoinDenialReason__NotPartyLeader = 6,
	EPartyJoinDenialReason__PartyPrivate = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted = 9,
	EPartyJoinDenialReason__GameModeRestricted = 10,
	EPartyJoinDenialReason__Banned = 11,
	EPartyJoinDenialReason__NotLoggedIn = 12,
	EPartyJoinDenialReason__CheckingForRejoin = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable = 15,
	EPartyJoinDenialReason__TargetUserAway = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId = 22,
	EPartyJoinDenialReason__TargetUserBlocked = 23,
	EPartyJoinDenialReason__CustomReason0 = 24,
	EPartyJoinDenialReason__CustomReason1 = 25,
	EPartyJoinDenialReason__CustomReason2 = 26,
	EPartyJoinDenialReason__CustomReason3 = 27,
	EPartyJoinDenialReason__CustomReason4 = 28,
	EPartyJoinDenialReason__CustomReason5 = 29,
	EPartyJoinDenialReason__CustomReason6 = 30,
	EPartyJoinDenialReason__CustomReason7 = 31,
	EPartyJoinDenialReason__CustomReason8 = 32,
	EPartyJoinDenialReason__CustomReason9 = 33,
	EPartyJoinDenialReason__CustomReason10 = 34,
	EPartyJoinDenialReason__CustomReason11 = 35,
	EPartyJoinDenialReason__CustomReason12 = 36,
	EPartyJoinDenialReason__CustomReason13 = 37,
	EPartyJoinDenialReason__CustomReason14 = 38,
	EPartyJoinDenialReason__CustomReason15 = 39,
	EPartyJoinDenialReason__CustomReason16 = 40,
	EPartyJoinDenialReason__CustomReason17 = 41,
	EPartyJoinDenialReason__CustomReason18 = 42,
	EPartyJoinDenialReason__CustomReason19 = 43,
	EPartyJoinDenialReason__CustomReason20 = 44,
	EPartyJoinDenialReason__CustomReason21 = 45,
	EPartyJoinDenialReason__CustomReason22 = 46,
	EPartyJoinDenialReason__CustomReason23 = 47,
	EPartyJoinDenialReason__CustomReason24 = 48,
	EPartyJoinDenialReason__CustomReason25 = 49,
	EPartyJoinDenialReason__CustomReason26 = 50,
	EPartyJoinDenialReason__CustomReason27 = 51,
	EPartyJoinDenialReason__CustomReason28 = 52,
	EPartyJoinDenialReason__CustomReason29 = 53,
	EPartyJoinDenialReason__CustomReason30 = 54,
	EPartyJoinDenialReason__CustomReason31 = 55,
	EPartyJoinDenialReason__CustomReason32 = 56,
	EPartyJoinDenialReason__CustomReason33 = 57,
	EPartyJoinDenialReason__CustomReason34 = 58,
	EPartyJoinDenialReason__CustomReason35 = 59,
	EPartyJoinDenialReason__CustomReason36 = 60,
	EPartyJoinDenialReason__CustomReason37 = 61,
	EPartyJoinDenialReason__CustomReason38 = 62,
	EPartyJoinDenialReason__CustomReason39 = 63,
	EPartyJoinDenialReason__MAX    = 64
}

// Enum Party.EPartyInviteRestriction
public enum EPartyInviteRestriction : byte
{
	EPartyInviteRestriction__AnyMember = 0,
	EPartyInviteRestriction__LeaderOnly = 1,
	EPartyInviteRestriction__NoInvites = 2,
	EPartyInviteRestriction__EPartyInviteRestriction_MAX = 3
}

// Enum Party.EPartyType
public enum EPartyType : byte
{
	EPartyType__Public             = 0,
	EPartyType__FriendsOnly        = 1,
	EPartyType__Private            = 2,
	EPartyType__EPartyType_MAX     = 3
}

// Enum Party.ESocialChannelType
public enum ESocialChannelType : byte
{
	ESocialChannelType__General    = 0,
	ESocialChannelType__Founder    = 1,
	ESocialChannelType__Party      = 2,
	ESocialChannelType__Team       = 3,
	ESocialChannelType__System     = 4,
	ESocialChannelType__Private    = 5,
	ESocialChannelType__ESocialChannelType_MAX = 6
}

// Enum Party.ESendFriendInviteFailureReason
public enum ESendFriendInviteFailureReason : byte
{
	ESendFriendInviteFailureReason__NotFound = 0,
	ESendFriendInviteFailureReason__AlreadyFriends = 1,
	ESendFriendInviteFailureReason__InvitePending = 2,
	ESendFriendInviteFailureReason__AddingSelfFail = 3,
	ESendFriendInviteFailureReason__AddingBlockedFail = 4,
	ESendFriendInviteFailureReason__UnknownError = 5,
	ESendFriendInviteFailureReason__ESendFriendInviteFailureReason_MAX = 6
}

// Enum Party.ECrossplayPreference
public enum ECrossplayPreference : byte
{
	ECrossplayPreference__NoSelection = 0,
	ECrossplayPreference__OptedIn  = 1,
	ECrossplayPreference__OptedOut = 2,
	ECrossplayPreference__OptedOutRestricted = 3,
	ECrossplayPreference__ECrossplayPreference_MAX = 4
}

// Enum Party.ESocialRelationship
public enum ESocialRelationship : byte
{
	ESocialRelationship__Any       = 0,
	ESocialRelationship__FriendInviteReceived = 1,
	ESocialRelationship__FriendInviteSent = 2,
	ESocialRelationship__PartyInvite = 3,
	ESocialRelationship__Friend    = 4,
	ESocialRelationship__BlockedPlayer = 5,
	ESocialRelationship__SuggestedFriend = 6,
	ESocialRelationship__RecentPlayer = 7,
	ESocialRelationship__ESocialRelationship_MAX = 8
}

// Enum Party.ESocialSubsystem
public enum ESocialSubsystem : byte
{
	ESocialSubsystem__Primary      = 0,
	ESocialSubsystem__Platform     = 1,
	ESocialSubsystem__MAX          = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.OnlinePartyRepDataBase
// 0x0018
public class FOnlinePartyRepDataBase : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FOnlinePartyRepDataBase() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Party.UserPlatform
// 0x0010
public class FUserPlatform : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offPlatformStr                                                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                             PlatformStr                                                    => _offPlatformStr.GetValue();
	#endregion

	public FUserPlatform(FString c_PlatformStr) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlatformStr.SetValue(c_PlatformStr);
	}
}
// ScriptStruct Party.PartyPlatformSessionInfo
// 0x0040
public class FPartyPlatformSessionInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offOssName                                                    = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offSessionId                                                  = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FUniqueNetIdRepl>                   _offOwnerPrimaryId                                             = new ExternalOffset<FUniqueNetIdRepl>(0x0018, false);         // 0x0018(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               OssName                                                        => _offOssName.GetValue();
	public FString                                             SessionId                                                      => _offSessionId.GetValue();
	public FUniqueNetIdRepl                                    OwnerPrimaryId                                                 => _offOwnerPrimaryId.GetValue();
	#endregion

	public FPartyPlatformSessionInfo(FName c_OssName, FString c_SessionId, FUniqueNetIdRepl c_OwnerPrimaryId) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOssName.SetValue(c_OssName);
		_offSessionId.SetValue(c_SessionId);
		_offOwnerPrimaryId.SetValue(c_OwnerPrimaryId);
	}
}
// ScriptStruct Party.SocialChatChannelConfig
// 0x0040
public class FSocialChatChannelConfig : ExternalClass
{
	#region Offsets
	private ExternalOffset<USocialUser>                        _offSocialUser                                                 = new ExternalOffset<USocialUser>(0x0000, true);               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<USocialChatChannel>>         _offListenChannels                                             = new ExternalOffset<TArray<USocialChatChannel>>(0x0018, false); // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USocialUser                                         SocialUser                                                     => _offSocialUser.GetValue();
	public TArray<USocialChatChannel>                          ListenChannels                                                 => _offListenChannels.GetValue();
	#endregion

	public FSocialChatChannelConfig(USocialUser c_SocialUser, TArray<USocialChatChannel> c_ListenChannels) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSocialUser.SetValue(c_SocialUser);
		_offListenChannels.SetValue(c_ListenChannels);
	}
}
// ScriptStruct Party.PartyPrivacySettings
// 0x0003
public class FPartyPrivacySettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<EPartyType>                         _offPartyType                                                  = new ExternalOffset<EPartyType>(0x0000, false);               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPartyInviteRestriction>            _offPartyInviteRestriction                                     = new ExternalOffset<EPartyInviteRestriction>(0x0001, false);  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOnlyLeaderFriendsCanJoin                                  = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EPartyType                                          PartyType                                                      => _offPartyType.GetValue();
	public EPartyInviteRestriction                             PartyInviteRestriction                                         => _offPartyInviteRestriction.GetValue();
	public byte/*(bool)*/                                      bOnlyLeaderFriendsCanJoin                                      => _offbOnlyLeaderFriendsCanJoin.GetValue();
	#endregion

	public FPartyPrivacySettings(EPartyType c_PartyType, EPartyInviteRestriction c_PartyInviteRestriction, byte/*(bool)*/ c_bOnlyLeaderFriendsCanJoin) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPartyType.SetValue(c_PartyType);
		_offPartyInviteRestriction.SetValue(c_PartyInviteRestriction);
		_offbOnlyLeaderFriendsCanJoin.SetValue(c_bOnlyLeaderFriendsCanJoin);
	}
}
// ScriptStruct Party.PartyRepData
// 0x0068 (0x0080 - 0x0018)
public class FPartyRepData : FOnlinePartyRepDataBase
{
	#region Offsets
	private ExternalOffset<FPartyPrivacySettings>              _offPrivacySettings                                            = new ExternalOffset<FPartyPrivacySettings>(0x0020, false);    // 0x0020(0x0003) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FPartyPlatformSessionInfo>>  _offPlatformSessions                                           = new ExternalOffset<TArray<FPartyPlatformSessionInfo>>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FPartyPrivacySettings                               PrivacySettings                                                => _offPrivacySettings.GetValue();
	public TArray<FPartyPlatformSessionInfo>                   PlatformSessions                                               => _offPlatformSessions.GetValue();
	#endregion

	public FPartyRepData(FPartyPrivacySettings c_PrivacySettings, TArray<FPartyPlatformSessionInfo> c_PlatformSessions) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPrivacySettings.SetValue(c_PrivacySettings);
		_offPlatformSessions.SetValue(c_PlatformSessions);
	}
}
// ScriptStruct Party.PartyMemberRepData
// 0x0118 (0x0130 - 0x0018)
public class FPartyMemberRepData : FOnlinePartyRepDataBase
{
	#region Offsets
	private ExternalOffset<FUserPlatform>                      _offPlatform                                                   = new ExternalOffset<FUserPlatform>(0x0020, false);            // 0x0020(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FUniqueNetIdRepl>                   _offPlatformUniqueId                                           = new ExternalOffset<FUniqueNetIdRepl>(0x0060, false);         // 0x0060(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offPlatformSessionId                                          = new ExternalOffset<FString>(0x00B8, false);                  // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<ECrossplayPreference>               _offCrossplayPreference                                        = new ExternalOffset<ECrossplayPreference>(0x00F8, false);     // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FUserPlatform                                       Platform                                                       => _offPlatform.GetValue();
	public FUniqueNetIdRepl                                    PlatformUniqueId                                               => _offPlatformUniqueId.GetValue();
	public FString                                             PlatformSessionId                                              => _offPlatformSessionId.GetValue();
	public ECrossplayPreference                                CrossplayPreference                                            => _offCrossplayPreference.GetValue();
	#endregion

	public FPartyMemberRepData(FUserPlatform c_Platform, FUniqueNetIdRepl c_PlatformUniqueId, FString c_PlatformSessionId, ECrossplayPreference c_CrossplayPreference) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlatform.SetValue(c_Platform);
		_offPlatformUniqueId.SetValue(c_PlatformUniqueId);
		_offPlatformSessionId.SetValue(c_PlatformSessionId);
		_offCrossplayPreference.SetValue(c_CrossplayPreference);
	}
}

}