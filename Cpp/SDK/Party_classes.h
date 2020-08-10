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

// Class Party.SocialUser
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USocialUser : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}


};

// Class Party.Chatroom
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_046B - 0x0000 // Minimum to subtract -> (0000)
class UChatroom : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_046B, struct FString,                                                        CurrentChatRoomId);                                        // 0x0028(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_046B, int,                                                                   MaxChatRoomRetries);                                       // 0x0038(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0014 PADDING_046B, int,                                                                   NumChatRoomRetries);                                       // 0x003C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}


};

// Class Party.SocialManager
// 0x003B (FullSize[0x0063] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_046C - 0x0000 // Minimum to subtract -> (0020)
class USocialManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_046C, TArray<class USocialToolkit*>,                                         SocialToolkits);                                           // 0x0048(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_046C, class USocialDebugTools*,                                              SocialDebugTools);                                         // 0x0058(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x003A PADDING_046C, bool,                                                                  bLeavePartyOnDisconnect);                                  // 0x0062(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}


};

// Class Party.SocialParty
// 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_046D - 0x0000 // Minimum to subtract -> (0030)
class USocialParty : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_046D, class UClass*,                                                         ReservationBeaconClientClass);                             // 0x0058(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_046D, class UClass*,                                                         SpectatorBeaconClientClass);                               // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_046D, struct FUniqueNetIdRepl,                                               OwningLocalUserId);                                        // 0x0078(0x0028)  (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_046D, struct FUniqueNetIdRepl,                                               CurrentLeaderId);                                          // 0x00A0(0x0028)  (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_046D, TMap<struct FUniqueNetIdRepl COMMA class UPartyMember*>,               PartyMembersById);                                         // 0x00C8(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_046D, bool,                                                                  bEnableAutomaticPartyRejoin);                              // 0x0118(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0168 PADDING_046D, class APartyBeaconClient*,                                             ReservationBeaconClient);                                  // 0x0190(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0178 PADDING_046D, class ASpectatorBeaconClient*,                                         SpectatorBeaconClient);                                    // 0x01A0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}


};

// Class Party.PartyMember
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_046E - 0x0000 // Minimum to subtract -> (0040)
class UPartyMember : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_046E, class USocialUser*,                                                    SocialUser);                                               // 0x0068(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}


};

// Class Party.SocialToolkit
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_046F - 0x0000 // Minimum to subtract -> (0038)
class USocialToolkit : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0038 PADDING_046F, class USocialUser*,                                                    LocalUser);                                                // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_046F, TArray<class USocialUser*>,                                            AllUsers);                                                 // 0x0068(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_046F, class ULocalPlayer*,                                                   LocalPlayerOwner);                                         // 0x00C8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_046F, class USocialChatManager*,                                             SocialChatManager);                                        // 0x00D0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}


};

// Class Party.SocialChatManager
// 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0470 - 0x0000 // Minimum to subtract -> (0050)
class USocialChatManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0470, TMap<TWeakObjectPtr<class USocialUser> COMMA class USocialPrivateMessageChannel*>, DirectChannelsByTargetUser);                               // 0x0078(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0470, TMap<struct FString COMMA class USocialChatRoom*>,                     ChatRoomsById);                                            // 0x00C8(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0470, TMap<struct FString COMMA class USocialReadOnlyChatChannel*>,          ReadOnlyChannelsByDisplayName);                            // 0x0118(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0140 PADDING_0470, bool,                                                                  bEnableChatSlashCommands);                                 // 0x0168(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0148 PADDING_0470, TMap<struct FUniqueNetIdRepl COMMA class USocialGroupChannel*>,        GroupChannels);                                            // 0x0170(0x0050)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}


};

// Class Party.SocialChatChannel
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USocialChatChannel : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}


};

// Class Party.SocialChatRoom
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USocialChatRoom : public USocialChatChannel
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}


};

// Class Party.SocialDebugTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USocialDebugTools : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}


};

// Class Party.SocialGroupChannel
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0476 - 0x0000 // Minimum to subtract -> (0000)
class USocialGroupChannel : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0476, class USocialUser*,                                                    SocialUser);                                               // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0476, struct FUniqueNetIdRepl,                                               GroupId);                                                  // 0x0030(0x0028)  (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0476, struct FText,                                                          DisplayName);                                              // 0x0058(0x0018)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0476, TArray<class USocialUser*>,                                            Members);                                                  // 0x0070(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}


};

// Class Party.SocialPartyChatRoom
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
// LastOffsetWithSize(0x0028)
class USocialPartyChatRoom : public USocialChatRoom
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}


};

// Class Party.SocialPrivateMessageChannel
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_047A - 0x0000 // Minimum to subtract -> (00C0)
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00C0 PADDING_047A, class USocialUser*,                                                    TargetUser);                                               // 0x00E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}


};

// Class Party.SocialReadOnlyChatChannel
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}


};

// Class Party.SocialSettings
// 0x001C (FullSize[0x0044] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_047D - 0x0000 // Minimum to subtract -> (0000)
class USocialSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_047D, TArray<struct FName>,                                                  OssNamesWithEnvironmentIdPrefix);                          // 0x0028(0x0010)  (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_047D, int,                                                                   DefaultMaxPartySize);                                      // 0x0038(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0014 PADDING_047D, bool,                                                                  bPreferPlatformInvites);                                   // 0x003C(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0015 PADDING_047D, bool,                                                                  bMustSendPrimaryInvites);                                  // 0x003D(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_047D, float,                                                                 UserListAutoUpdateRate);                                   // 0x0040(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
