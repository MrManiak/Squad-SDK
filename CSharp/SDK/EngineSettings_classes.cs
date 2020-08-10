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

// Class EngineSettings.ConsoleSettings
// 0x0044 (0x006C - 0x0028)
public class UConsoleSettings : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxScrollbackSize                                          = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAutoCompleteCommand>>      _offManualAutoCompleteList                                     = new ExternalOffset<TArray<FAutoCompleteCommand>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offAutoCompleteMapPaths                                       = new ExternalOffset<TArray<FString>>(0x0040, false);          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offBackgroundOpacityPercentage                                = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbOrderTopToBottom                                          = new ExternalOffset<byte/*(bool)*/>(0x0054);                  // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offInputColor                                                 = new ExternalOffset<FColor>(0x0058, false);                   // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offHistoryColor                                               = new ExternalOffset<FColor>(0x005C, false);                   // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offAutoCompleteCommandColor                                   = new ExternalOffset<FColor>(0x0060, false);                   // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offAutoCompleteCVarColor                                      = new ExternalOffset<FColor>(0x0064, false);                   // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offAutoCompleteFadedColor                                     = new ExternalOffset<FColor>(0x0068, false);                   // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                MaxScrollbackSize                                              => _offMaxScrollbackSize.GetValue();
	public TArray<FAutoCompleteCommand>                       ManualAutoCompleteList                                         => _offManualAutoCompleteList.GetValue();
	public TArray<FString>                                    AutoCompleteMapPaths                                           => _offAutoCompleteMapPaths.GetValue();
	public float                                              BackgroundOpacityPercentage                                    => _offBackgroundOpacityPercentage.GetValue();
	public byte/*(bool)*/                                     bOrderTopToBottom                                              => _offbOrderTopToBottom.GetValue();
	public FColor                                             InputColor                                                     => _offInputColor.GetValue();
	public FColor                                             HistoryColor                                                   => _offHistoryColor.GetValue();
	public FColor                                             AutoCompleteCommandColor                                       => _offAutoCompleteCommandColor.GetValue();
	public FColor                                             AutoCompleteCVarColor                                          => _offAutoCompleteCVarColor.GetValue();
	public FColor                                             AutoCompleteFadedColor                                         => _offAutoCompleteFadedColor.GetValue();
	#endregion


}

// Class EngineSettings.GameMapsSettings
// 0x00E0 (0x0108 - 0x0028)
public class UGameMapsSettings : UObject
{
	#region Offsets
	private ExternalOffset<FSoftObjectPath>                   _offEditorStartupMap                                           = new ExternalOffset<FSoftObjectPath>(0x0028, false);          // 0x0028(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLocalMapOptions                                            = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offTransitionMap                                              = new ExternalOffset<FSoftObjectPath>(0x0050, false);          // 0x0050(0x0018) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseSplitscreen                                            = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETwoPlayerSplitScreenType>> _offTwoPlayerSplitscreenLayout                                 = new ExternalOffset<TEnumAsByte<ETwoPlayerSplitScreenType>>(0x0069, false); // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EThreePlayerSplitScreenType>> _offThreePlayerSplitscreenLayout                               = new ExternalOffset<TEnumAsByte<EThreePlayerSplitScreenType>>(0x006A, false); // 0x006A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EFourPlayerSplitScreenType>        _offFourPlayerSplitscreenLayout                                = new ExternalOffset<EFourPlayerSplitScreenType>(0x006B, false); // 0x006B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbOffsetPlayerGamepadIds                                    = new ExternalOffset<byte/*(bool)*/>(0x006C);                  // 0x006C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftClassPath>                    _offGameInstanceClass                                          = new ExternalOffset<FSoftClassPath>(0x0070, false);           // 0x0070(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offGameDefaultMap                                             = new ExternalOffset<FSoftObjectPath>(0x0088, false);          // 0x0088(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FSoftObjectPath>                   _offServerDefaultMap                                           = new ExternalOffset<FSoftObjectPath>(0x00A0, false);          // 0x00A0(0x0018) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FSoftClassPath>                    _offGlobalDefaultGameMode                                      = new ExternalOffset<FSoftClassPath>(0x00B8, false);           // 0x00B8(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FSoftClassPath>                    _offGlobalDefaultServerGameMode                                = new ExternalOffset<FSoftClassPath>(0x00D0, false);           // 0x00D0(0x0018) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FGameModeName>>             _offGameModeMapPrefixes                                        = new ExternalOffset<TArray<FGameModeName>>(0x00E8, false);    // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FGameModeName>>             _offGameModeClassAliases                                       = new ExternalOffset<TArray<FGameModeName>>(0x00F8, false);    // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FSoftObjectPath                                    EditorStartupMap                                               => _offEditorStartupMap.GetValue();
	public FString                                            LocalMapOptions                                                => _offLocalMapOptions.GetValue();
	public FSoftObjectPath                                    TransitionMap                                                  => _offTransitionMap.GetValue();
	public byte/*(bool)*/                                     bUseSplitscreen                                                => _offbUseSplitscreen.GetValue();
	public TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout                                     => _offTwoPlayerSplitscreenLayout.GetValue();
	public TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout                                   => _offThreePlayerSplitscreenLayout.GetValue();
	public EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout                                    => _offFourPlayerSplitscreenLayout.GetValue();
	public byte/*(bool)*/                                     bOffsetPlayerGamepadIds                                        => _offbOffsetPlayerGamepadIds.GetValue();
	public FSoftClassPath                                     GameInstanceClass                                              => _offGameInstanceClass.GetValue();
	public FSoftObjectPath                                    GameDefaultMap                                                 => _offGameDefaultMap.GetValue();
	public FSoftObjectPath                                    ServerDefaultMap                                               => _offServerDefaultMap.GetValue();
	public FSoftClassPath                                     GlobalDefaultGameMode                                          => _offGlobalDefaultGameMode.GetValue();
	public FSoftClassPath                                     GlobalDefaultServerGameMode                                    => _offGlobalDefaultServerGameMode.GetValue();
	public TArray<FGameModeName>                              GameModeMapPrefixes                                            => _offGameModeMapPrefixes.GetValue();
	public TArray<FGameModeName>                              GameModeClassAliases                                           => _offGameModeClassAliases.GetValue();
	#endregion


}

// Class EngineSettings.GameNetworkManagerSettings
// 0x002C (0x0054 - 0x0028)
public class UGameNetworkManagerSettings : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offMinDynamicBandwidth                                        = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxDynamicBandwidth                                        = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTotalNetBandwidth                                          = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offBadPingThreshold                                           = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsStandbyCheckingEnabled                                  = new ExternalOffset<char>(0x0038, false);                     // 0x0038(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStandbyRxCheatTime                                         = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStandbyTxCheatTime                                         = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPercentMissingForRxStandby                                 = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPercentMissingForTxStandby                                 = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPercentForBadPing                                          = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offJoinInProgressStandbyWaitTime                              = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                MinDynamicBandwidth                                            => _offMinDynamicBandwidth.GetValue();
	public int                                                MaxDynamicBandwidth                                            => _offMaxDynamicBandwidth.GetValue();
	public int                                                TotalNetBandwidth                                              => _offTotalNetBandwidth.GetValue();
	public int                                                BadPingThreshold                                               => _offBadPingThreshold.GetValue();
	public float                                              StandbyRxCheatTime                                             => _offStandbyRxCheatTime.GetValue();
	public float                                              StandbyTxCheatTime                                             => _offStandbyTxCheatTime.GetValue();
	public float                                              PercentMissingForRxStandby                                     => _offPercentMissingForRxStandby.GetValue();
	public float                                              PercentMissingForTxStandby                                     => _offPercentMissingForTxStandby.GetValue();
	public float                                              PercentForBadPing                                              => _offPercentForBadPing.GetValue();
	public float                                              JoinInProgressStandbyWaitTime                                  => _offJoinInProgressStandbyWaitTime.GetValue();
	#endregion


}

// Class EngineSettings.GameSessionSettings
// 0x0009 (0x0031 - 0x0028)
public class UGameSessionSettings : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxSpectators                                              = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxPlayers                                                 = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbRequiresPushToTalk                                        = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                MaxSpectators                                                  => _offMaxSpectators.GetValue();
	public int                                                MaxPlayers                                                     => _offMaxPlayers.GetValue();
	#endregion


}

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
public class UGeneralEngineSettings : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class EngineSettings.GeneralProjectSettings
// 0x00E9 (0x0111 - 0x0028)
public class UGeneralProjectSettings : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offCompanyName                                                = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offCompanyDistinguishedName                                   = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offCopyrightNotice                                            = new ExternalOffset<FString>(0x0048, false);                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offDescription                                                = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offHomepage                                                   = new ExternalOffset<FString>(0x0068, false);                  // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLicensingTerms                                             = new ExternalOffset<FString>(0x0078, false);                  // 0x0078(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offPrivacyPolicy                                              = new ExternalOffset<FString>(0x0088, false);                  // 0x0088(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offProjectID                                                  = new ExternalOffset<FGuid>(0x0098, false);                    // 0x0098(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offProjectName                                                = new ExternalOffset<FString>(0x00A8, false);                  // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offProjectVersion                                             = new ExternalOffset<FString>(0x00B8, false);                  // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offSupportContact                                             = new ExternalOffset<FString>(0x00C8, false);                  // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offProjectDisplayedTitle                                      = new ExternalOffset<FText>(0x00D8, false);                    // 0x00D8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<FText>                             _offProjectDebugTitleInfo                                      = new ExternalOffset<FText>(0x00F0, false);                    // 0x00F0(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShouldWindowPreserveAspectRatio                           = new ExternalOffset<byte/*(bool)*/>(0x0108);                  // 0x0108(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseBorderlessWindow                                       = new ExternalOffset<byte/*(bool)*/>(0x0109);                  // 0x0109(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbStartInVR                                                 = new ExternalOffset<byte/*(bool)*/>(0x010A);                  // 0x010A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbStartInAR                                                 = new ExternalOffset<byte/*(bool)*/>(0x010B);                  // 0x010B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSupportAR                                                 = new ExternalOffset<byte/*(bool)*/>(0x010C);                  // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowWindowResize                                         = new ExternalOffset<byte/*(bool)*/>(0x010D);                  // 0x010D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowClose                                                = new ExternalOffset<byte/*(bool)*/>(0x010E);                  // 0x010E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowMaximize                                             = new ExternalOffset<byte/*(bool)*/>(0x010F);                  // 0x010F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowMinimize                                             = new ExternalOffset<byte/*(bool)*/>(0x0110);                  // 0x0110(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            CompanyName                                                    => _offCompanyName.GetValue();
	public FString                                            CompanyDistinguishedName                                       => _offCompanyDistinguishedName.GetValue();
	public FString                                            CopyrightNotice                                                => _offCopyrightNotice.GetValue();
	public FString                                            Description                                                    => _offDescription.GetValue();
	public FString                                            Homepage                                                       => _offHomepage.GetValue();
	public FString                                            LicensingTerms                                                 => _offLicensingTerms.GetValue();
	public FString                                            PrivacyPolicy                                                  => _offPrivacyPolicy.GetValue();
	public FGuid                                              ProjectID                                                      => _offProjectID.GetValue();
	public FString                                            ProjectName                                                    => _offProjectName.GetValue();
	public FString                                            ProjectVersion                                                 => _offProjectVersion.GetValue();
	public FString                                            SupportContact                                                 => _offSupportContact.GetValue();
	public FText                                              ProjectDisplayedTitle                                          => _offProjectDisplayedTitle.GetValue();
	public FText                                              ProjectDebugTitleInfo                                          => _offProjectDebugTitleInfo.GetValue();
	public byte/*(bool)*/                                     bShouldWindowPreserveAspectRatio                               => _offbShouldWindowPreserveAspectRatio.GetValue();
	public byte/*(bool)*/                                     bUseBorderlessWindow                                           => _offbUseBorderlessWindow.GetValue();
	public byte/*(bool)*/                                     bStartInVR                                                     => _offbStartInVR.GetValue();
	public byte/*(bool)*/                                     bStartInAR                                                     => _offbStartInAR.GetValue();
	public byte/*(bool)*/                                     bSupportAR                                                     => _offbSupportAR.GetValue();
	public byte/*(bool)*/                                     bAllowWindowResize                                             => _offbAllowWindowResize.GetValue();
	public byte/*(bool)*/                                     bAllowClose                                                    => _offbAllowClose.GetValue();
	public byte/*(bool)*/                                     bAllowMaximize                                                 => _offbAllowMaximize.GetValue();
	public byte/*(bool)*/                                     bAllowMinimize                                                 => _offbAllowMinimize.GetValue();
	#endregion


}

// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
public class UHudSettings : UObject
{
	#region Offsets
//	private ExternalOffset<char>                              _offbShowHUD                                                   = new ExternalOffset<char>(0x0028, false);                     // 0x0028(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offDebugDisplay                                               = new ExternalOffset<TArray<FName>>(0x0030, false);            // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FName>                                      DebugDisplay                                                   => _offDebugDisplay.GetValue();
	#endregion


}


}