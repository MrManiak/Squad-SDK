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

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0A84 - 0x0000 // Minimum to subtract -> (0018)
class AOnlineBeacon : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A84, float,                                                                 BeaconConnectionInitialTimeout);                           // 0x0250(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001C PADDING_0A84, float,                                                                 BeaconConnectionTimeout);                                  // 0x0254(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A84, class UNetDriver*,                                                     NetDriver);                                                // 0x0258(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
// LastOffsetWithSize(0x0260)
#define PADDING_0A85 - 0x0000 // Minimum to subtract -> (0018)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A85, class AOnlineBeaconHostObject*,                                        BeaconOwner);                                              // 0x0278(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A85, class UNetConnection*,                                                 BeaconConnection);                                         // 0x0280(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A85, EBeaconConnectionState,                                                ConnectionState);                                          // 0x0288(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}


	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0A86 - 0x0000 // Minimum to subtract -> (0010)
class AOnlineBeaconHostObject : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A86, struct FString,                                                        BeaconTypeName);                                           // 0x0248(0x0010)  (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A86, class UClass*,                                                         ClientBeaconActorClass);                                   // 0x0258(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0A86, TArray<class AOnlineBeaconClient*>,                                    ClientActors);                                             // 0x0260(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	static void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	static void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A88 - 0x0000 // Minimum to subtract -> (0000)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A88, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A88, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}


	static class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	static class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A89 - 0x0000 // Minimum to subtract -> (0000)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A89, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A89, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}


	static class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8A - 0x0000 // Minimum to subtract -> (0000)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8A, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8A, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}


	static class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8B - 0x0000 // Minimum to subtract -> (0000)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8B, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8B, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}


	static class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8C - 0x0000 // Minimum to subtract -> (0000)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8C, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8C, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}


	static class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8D - 0x0000 // Minimum to subtract -> (0000)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8D, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8D, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}


	static class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8E - 0x0000 // Minimum to subtract -> (0000)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8E, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8E, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}


	static class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A8F - 0x0000 // Minimum to subtract -> (0000)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A8F, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A8F, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}


	static struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	static int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	static int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	static int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	static class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A90 - 0x0000 // Minimum to subtract -> (0000)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A90, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A90, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}


	static class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A91 - 0x0000 // Minimum to subtract -> (0000)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A91, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A91, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}


	static class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A92 - 0x0000 // Minimum to subtract -> (0000)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A92, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A92, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}


	static class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A93 - 0x0000 // Minimum to subtract -> (0000)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A93, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A93, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}


	static class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.IpConnection
// 0x052C (FullSize[0x19F4] - InheritedSize[0x14C8])
// LastOffsetWithSize(0x14C8)
#define PADDING_0A94 - 0x0000 // Minimum to subtract -> (0528)
class UIpConnection : public UNetConnection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0528 PADDING_0A94, float,                                                                 SocketErrorDisconnectDelay);                               // 0x19F0(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0054 (FullSize[0x077C] - InheritedSize[0x0728])
// LastOffsetWithSize(0x0728)
#define PADDING_0A95 - 0x0000 // Minimum to subtract -> (0020)
class UIpNetDriver : public UNetDriver
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A95, unsigned char,                                                         LogPortUnreach);                                           // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A95, unsigned char,                                                         AllowPlayerPortUnreach);                                   // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0A95, uint32_t,                                                              MaxPortCountToTry);                                        // 0x074C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0A95, uint32_t,                                                              ServerDesiredSocketReceiveBufferBytes);                    // 0x075C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0A95, uint32_t,                                                              ServerDesiredSocketSendBufferBytes);                       // 0x0760(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x003C PADDING_0A95, uint32_t,                                                              ClientDesiredSocketReceiveBufferBytes);                    // 0x0764(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0A95, uint32_t,                                                              ClientDesiredSocketSendBufferBytes);                       // 0x0768(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0A95, double,                                                                MaxSecondsInReceive);                                      // 0x0770(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0A95, int,                                                                   NbPacketsBetweenReceiveTimeTest);                          // 0x0778(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A96 - 0x0000 // Minimum to subtract -> (0000)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A96, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A96, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}


	static class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	static bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A98 - 0x0000 // Minimum to subtract -> (0000)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A98, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A98, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}


	static class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A99 - 0x0000 // Minimum to subtract -> (0000)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A99, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A99, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}


	static class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A9A - 0x0000 // Minimum to subtract -> (0008)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0A9A, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A9A, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}


	static class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
// LastOffsetWithSize(0x0260)
#define PADDING_0A9B - 0x0000 // Minimum to subtract -> (0018)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A9B, int,                                                                   ListenPort);                                               // 0x0278(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0A9B, TArray<class AOnlineBeaconClient*>,                                    ClientActors);                                             // 0x0280(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A9C - 0x0000 // Minimum to subtract -> (0000)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0A9C, struct FName,                                                          VoiceSubsystemNameOverride);                               // 0x0028(0x0008)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A9D - 0x0000 // Minimum to subtract -> (0010)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0A9D, bool,                                                                  bOnlinePIEEnabled);                                        // 0x0038(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0A9D, TArray<struct FPIELoginSettingsInternal>,                              Logins);                                                   // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0162 (FullSize[0x018A] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0A9E - 0x0000 // Minimum to subtract -> (0160)
class UOnlineSessionClient : public UOnlineSession
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0160 PADDING_0A9E, bool,                                                                  bIsFromInvite);                                            // 0x0188(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0161 PADDING_0A9E, bool,                                                                  bHandlingDisconnect);                                      // 0x0189(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00D2 (FullSize[0x035B] - InheritedSize[0x0289])
// LastOffsetWithSize(0x0289)
#define PADDING_0A9F - 0x0000 // Minimum to subtract -> (006F)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x006F PADDING_0A9F, struct FString,                                                        DestSessionId);                                            // 0x02F8(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x007F PADDING_0A9F, struct FPartyReservation,                                              PendingReservation);                                       // 0x0308(0x0050)  (Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00CF PADDING_0A9F, EClientRequestType,                                                    RequestType);                                              // 0x0358(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0A9F, bool,                                                                  bPendingReservationSent);                                  // 0x0359(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00D1 PADDING_0A9F, bool,                                                                  bCancelReservation);                                       // 0x035A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}


	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0074 (FullSize[0x02E4] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
#define PADDING_0AA0 - 0x0000 // Minimum to subtract -> (0000)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AA0, class UPartyBeaconState*,                                              State);                                                    // 0x0270(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0AA0, bool,                                                                  bLogoutOnSessionTimeout);                                  // 0x02D8(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006C PADDING_0AA0, float,                                                                 SessionTimeoutSecs);                                       // 0x02DC(0x0004)  (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0AA0, float,                                                                 TravelSessionTimeoutSecs);                                 // 0x02E0(0x0004)  (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0AA1 - 0x0000 // Minimum to subtract -> (0000)
class UPartyBeaconState : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AA1, struct FName,                                                          SessionName);                                              // 0x0028(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AA1, int,                                                                   NumConsumedReservations);                                  // 0x0030(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000C PADDING_0AA1, int,                                                                   MaxReservations);                                          // 0x0034(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0AA1, int,                                                                   NumTeams);                                                 // 0x0038(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0AA1, int,                                                                   NumPlayersPerTeam);                                        // 0x003C(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0AA1, struct FName,                                                          TeamAssignmentMethod);                                     // 0x0040(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0AA1, int,                                                                   ReservedHostTeamNum);                                      // 0x0048(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0AA1, int,                                                                   ForceTeamNum);                                             // 0x004C(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0AA1, bool,                                                                  bRestrictCrossConsole);                                    // 0x0050(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0AA1, TArray<struct FPartyReservation>,                                      Reservations);                                             // 0x0058(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0AA2 - 0x0000 // Minimum to subtract -> (0000)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AA2, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0AA2, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}


	static class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0AA3 - 0x0000 // Minimum to subtract -> (0008)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AA3, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0AA3, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}


	static class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00FA (FullSize[0x0383] - InheritedSize[0x0289])
// LastOffsetWithSize(0x0289)
#define PADDING_0AA4 - 0x0000 // Minimum to subtract -> (006F)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x006F PADDING_0AA4, struct FString,                                                        DestSessionId);                                            // 0x02F8(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x007F PADDING_0AA4, struct FSpectatorReservation,                                          PendingReservation);                                       // 0x0308(0x0078)  (Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F7 PADDING_0AA4, ESpectatorClientRequestType,                                           RequestType);                                              // 0x0380(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0AA4, bool,                                                                  bPendingReservationSent);                                  // 0x0381(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F9 PADDING_0AA4, bool,                                                                  bCancelReservation);                                       // 0x0382(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		return ptr;
	}


	void ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0074 (FullSize[0x02E4] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
#define PADDING_0AA5 - 0x0000 // Minimum to subtract -> (0000)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AA5, class USpectatorBeaconState*,                                          State);                                                    // 0x0270(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0AA5, bool,                                                                  bLogoutOnSessionTimeout);                                  // 0x02D8(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006C PADDING_0AA5, float,                                                                 SessionTimeoutSecs);                                       // 0x02DC(0x0004)  (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0AA5, float,                                                                 TravelSessionTimeoutSecs);                                 // 0x02E0(0x0004)  (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0AA6 - 0x0000 // Minimum to subtract -> (0000)
class USpectatorBeaconState : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AA6, struct FName,                                                          SessionName);                                              // 0x0028(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AA6, int,                                                                   NumConsumedReservations);                                  // 0x0030(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000C PADDING_0AA6, int,                                                                   MaxReservations);                                          // 0x0034(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0AA6, bool,                                                                  bRestrictCrossConsole);                                    // 0x0038(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0AA6, TArray<struct FSpectatorReservation>,                                  Reservations);                                             // 0x0040(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x003F (FullSize[0x02C8] - InheritedSize[0x0289])
// LastOffsetWithSize(0x0289)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}


};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}


	static void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	static void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	static void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	static void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0080 (FullSize[0x0640] - InheritedSize[0x05C0])
// LastOffsetWithSize(0x0610)
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}


	bool IsIdling();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
