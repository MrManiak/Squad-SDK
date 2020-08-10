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

// Class EngineSettings.ConsoleSettings
// 0x0044 (FullSize[0x006C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0124 - 0x0000 // Minimum to subtract -> (0000)
class UConsoleSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0124, int,                                                                   MaxScrollbackSize);                                        // 0x0028(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0124, TArray<struct FAutoCompleteCommand>,                                   ManualAutoCompleteList);                                   // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0124, TArray<struct FString>,                                                AutoCompleteMapPaths);                                     // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0124, float,                                                                 BackgroundOpacityPercentage);                              // 0x0050(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0124, bool,                                                                  bOrderTopToBottom);                                        // 0x0054(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0124, struct FColor,                                                         InputColor);                                               // 0x0058(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0124, struct FColor,                                                         HistoryColor);                                             // 0x005C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0124, struct FColor,                                                         AutoCompleteCommandColor);                                 // 0x0060(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0124, struct FColor,                                                         AutoCompleteCVarColor);                                    // 0x0064(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0124, struct FColor,                                                         AutoCompleteFadedColor);                                   // 0x0068(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}


};

// Class EngineSettings.GameMapsSettings
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0125 - 0x0000 // Minimum to subtract -> (0000)
class UGameMapsSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0125, struct FSoftObjectPath,                                                EditorStartupMap);                                         // 0x0028(0x0018)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0125, struct FString,                                                        LocalMapOptions);                                          // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0125, struct FSoftObjectPath,                                                TransitionMap);                                            // 0x0050(0x0018)  (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0125, bool,                                                                  bUseSplitscreen);                                          // 0x0068(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0041 PADDING_0125, TEnumAsByte<ETwoPlayerSplitScreenType>,                                TwoPlayerSplitscreenLayout);                               // 0x0069(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0042 PADDING_0125, TEnumAsByte<EThreePlayerSplitScreenType>,                              ThreePlayerSplitscreenLayout);                             // 0x006A(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0043 PADDING_0125, EFourPlayerSplitScreenType,                                            FourPlayerSplitscreenLayout);                              // 0x006B(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0125, bool,                                                                  bOffsetPlayerGamepadIds);                                  // 0x006C(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0125, struct FSoftClassPath,                                                 GameInstanceClass);                                        // 0x0070(0x0018)  (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0125, struct FSoftObjectPath,                                                GameDefaultMap);                                           // 0x0088(0x0018)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0125, struct FSoftObjectPath,                                                ServerDefaultMap);                                         // 0x00A0(0x0018)  (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0125, struct FSoftClassPath,                                                 GlobalDefaultGameMode);                                    // 0x00B8(0x0018)  (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0125, struct FSoftClassPath,                                                 GlobalDefaultServerGameMode);                              // 0x00D0(0x0018)  (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0125, TArray<struct FGameModeName>,                                          GameModeMapPrefixes);                                      // 0x00E8(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0125, TArray<struct FGameModeName>,                                          GameModeClassAliases);                                     // 0x00F8(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}


};

// Class EngineSettings.GameNetworkManagerSettings
// 0x002C (FullSize[0x0054] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0126 - 0x0000 // Minimum to subtract -> (0000)
class UGameNetworkManagerSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0126, int,                                                                   MinDynamicBandwidth);                                      // 0x0028(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0126, int,                                                                   MaxDynamicBandwidth);                                      // 0x002C(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0126, int,                                                                   TotalNetBandwidth);                                        // 0x0030(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0126, int,                                                                   BadPingThreshold);                                         // 0x0034(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0126, unsigned char,                                                         bIsStandbyCheckingEnabled);                                // 0x0038(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0126, float,                                                                 StandbyRxCheatTime);                                       // 0x003C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0126, float,                                                                 StandbyTxCheatTime);                                       // 0x0040(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0126, float,                                                                 PercentMissingForRxStandby);                               // 0x0044(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0126, float,                                                                 PercentMissingForTxStandby);                               // 0x0048(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0126, float,                                                                 PercentForBadPing);                                        // 0x004C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0126, float,                                                                 JoinInProgressStandbyWaitTime);                            // 0x0050(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}


};

// Class EngineSettings.GameSessionSettings
// 0x0009 (FullSize[0x0031] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0129 - 0x0000 // Minimum to subtract -> (0000)
class UGameSessionSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0129, int,                                                                   MaxSpectators);                                            // 0x0028(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0129, int,                                                                   MaxPlayers);                                               // 0x002C(0x0004)  (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0129, unsigned char,                                                         bRequiresPushToTalk);                                      // 0x0030(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}


};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGeneralEngineSettings : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}


};

// Class EngineSettings.GeneralProjectSettings
// 0x00E9 (FullSize[0x0111] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_012C - 0x0000 // Minimum to subtract -> (0000)
class UGeneralProjectSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_012C, struct FString,                                                        CompanyName);                                              // 0x0028(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_012C, struct FString,                                                        CompanyDistinguishedName);                                 // 0x0038(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_012C, struct FString,                                                        CopyrightNotice);                                          // 0x0048(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_012C, struct FString,                                                        Description);                                              // 0x0058(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_012C, struct FString,                                                        Homepage);                                                 // 0x0068(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_012C, struct FString,                                                        LicensingTerms);                                           // 0x0078(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_012C, struct FString,                                                        PrivacyPolicy);                                            // 0x0088(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_012C, struct FGuid,                                                          ProjectID);                                                // 0x0098(0x0010)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_012C, struct FString,                                                        ProjectName);                                              // 0x00A8(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_012C, struct FString,                                                        ProjectVersion);                                           // 0x00B8(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_012C, struct FString,                                                        SupportContact);                                           // 0x00C8(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_012C, struct FText,                                                          ProjectDisplayedTitle);                                    // 0x00D8(0x0018)  (Edit, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_012C, struct FText,                                                          ProjectDebugTitleInfo);                                    // 0x00F0(0x0018)  (Edit, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_012C, bool,                                                                  bShouldWindowPreserveAspectRatio);                         // 0x0108(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E1 PADDING_012C, bool,                                                                  bUseBorderlessWindow);                                     // 0x0109(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E2 PADDING_012C, bool,                                                                  bStartInVR);                                               // 0x010A(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E3 PADDING_012C, bool,                                                                  bStartInAR);                                               // 0x010B(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_012C, bool,                                                                  bSupportAR);                                               // 0x010C(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E5 PADDING_012C, bool,                                                                  bAllowWindowResize);                                       // 0x010D(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E6 PADDING_012C, bool,                                                                  bAllowClose);                                              // 0x010E(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E7 PADDING_012C, bool,                                                                  bAllowMaximize);                                           // 0x010F(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_012C, bool,                                                                  bAllowMinimize);                                           // 0x0110(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}


};

// Class EngineSettings.HudSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_012E - 0x0000 // Minimum to subtract -> (0000)
class UHudSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_012E, unsigned char,                                                         bShowHUD);                                                 // 0x0028(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_012E, TArray<struct FName>,                                                  DebugDisplay);                                             // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
