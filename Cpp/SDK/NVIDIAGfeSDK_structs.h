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

// Enum NVIDIAGfeSDK.EGfeSDKPermission
enum class EGfeSDKPermission : uint8_t
{
	EGfeSDKPermission__Granted     = 0,
	EGfeSDKPermission__Denied      = 1,
	EGfeSDKPermission__MustAsk     = 2,
	EGfeSDKPermission__Unknown     = 3,
	EGfeSDKPermission__MAX         = 4,

};

// Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
enum class EGfeSDKHighlightSignificance : uint8_t
{
	EGfeSDKHighlightSignificance__NONE = 0,
	EGfeSDKHighlightSignificance__ExtremelyBad = 1,
	EGfeSDKHighlightSignificance__VeryBad = 2,
	EGfeSDKHighlightSignificance__Bad = 3,
	EGfeSDKHighlightSignificance__Neutral = 4,
	EGfeSDKHighlightSignificance__Good = 5,
	EGfeSDKHighlightSignificance__VeryGood = 6,
	EGfeSDKHighlightSignificance__ExtremelyGood = 7,
	EGfeSDKHighlightSignificance__MAX = 8,

};

// Enum NVIDIAGfeSDK.EGfeSDKHighlightType
enum class EGfeSDKHighlightType : uint8_t
{
	EGfeSDKHighlightType__NONE     = 0,
	EGfeSDKHighlightType__Milestone = 1,
	EGfeSDKHighlightType__Achievement = 2,
	EGfeSDKHighlightType__Incident = 3,
	EGfeSDKHighlightType__StateChange = 4,
	EGfeSDKHighlightType__Unannounced = 5,
	EGfeSDKHighlightType__MAX      = 6,

};

// Enum NVIDIAGfeSDK.EGfeSDKReturnCode
enum class EGfeSDKReturnCode : uint8_t
{
	EGfeSDKReturnCode__Success     = 0,
	EGfeSDKReturnCode__SuccessIpcOldSdk = 1,
	EGfeSDKReturnCode__SuccessIpcOldGfe = 2,
	EGfeSDKReturnCode__Error       = 3,
	EGfeSDKReturnCode__ErrorGfeVersion = 4,
	EGfeSDKReturnCode__ErrorSdkVersion = 5,
	EGfeSDKReturnCode__ErrorModuleNotLoaded = 6,
	EGfeSDKReturnCode__ErrorWrongTimeRangeSet = 7,
	EGfeSDKReturnCode__ErrorGeneric = 8,
	EGfeSDKReturnCode__ErrorNotImplemented = 9,
	EGfeSDKReturnCode__ErrorInvalidParameter = 10,
	EGfeSDKReturnCode__ErrorNotSet = 11,
	EGfeSDKReturnCode__ErrorShadowplayIRDisabled = 12,
	EGfeSDKReturnCode__ErrorSDKInUse = 13,
	EGfeSDKReturnCode__ErrorGroupNotFound = 14,
	EGfeSDKReturnCode__ErrorFileNotFound = 15,
	EGfeSDKReturnCode__ErrorHighlightsSetupFailed = 16,
	EGfeSDKReturnCode__ErrorHighlightsNotConfigured = 17,
	EGfeSDKReturnCode__ErrorHighlightSaveFailed = 18,
	EGfeSDKReturnCode__ErrorUnexpectedException = 19,
	EGfeSDKReturnCode__ErrorNoHighlights = 20,
	EGfeSDKReturnCode__ErrorNoConnection = 21,
	EGfeSDKReturnCode__ErrorPermissionNotGranted = 22,
	EGfeSDKReturnCode__ErrorPermissionDenied = 23,
	EGfeSDKReturnCode__ErrorInvalidHandle = 24,
	EGfeSDKReturnCode__ErrorUnhandledException = 25,
	EGfeSDKReturnCode__ErrorOutOfMemory = 26,
	EGfeSDKReturnCode__ErrorLoadLibrary = 27,
	EGfeSDKReturnCode__ErrorLibraryCallFailed = 28,
	EGfeSDKReturnCode__ErrorIPCFailed = 29,
	EGfeSDKReturnCode__ErrorConnection = 30,
	EGfeSDKReturnCode__ErrorLibCallTimeout = 31,
	EGfeSDKReturnCode__ErrorApplicationLookupFailed = 32,
	EGfeSDKReturnCode__ErrorApplicationNotKnown = 33,
	EGfeSDKReturnCode__ErrorFeatureDisabled = 34,
	EGfeSDKReturnCode__ErrorAppNoOptimization = 35,
	EGfeSDKReturnCode__ErrorAppSettingsRead = 36,
	EGfeSDKReturnCode__ErrorAppSettingsWrite = 37,
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX = 38,

};

// Enum NVIDIAGfeSDK.EGfeSDKScope
enum class EGfeSDKScope : uint8_t
{
	EGfeSDKScope__Highlights       = 0,
	EGfeSDKScope__HighlightsRecordVideo = 1,
	EGfeSDKScope__HighlightsRecordScreenshot = 2,
	EGfeSDKScope__MAX              = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// 0x0028
struct FGfeSDKHighlightVideoParams
{
	struct FString                                     GroupId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HighlightId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartDelta;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndDelta;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// 0x0010
struct FGfeSDKRequestPermissionsParams
{
	TArray<EGfeSDKScope>                               Scopes;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// 0x0020
struct FGfeSDKHighlightScreenshotParams
{
	struct FString                                     GroupId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HighlightId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
// 0x0068
struct FGfeSDKCreateResponse
{
	uint16_t                                           VersionMajor;                                              // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           VersionMinor;                                              // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NVIDIAGfeVersion;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                          // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// 0x0018
struct FGfeSDKHighlightCloseGroupParams
{
	struct FString                                     GroupId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DestroyHighlights;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// 0x0060
struct FGfeSDKHighlightOpenGroupParams
{
	struct FString                                     GroupId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               GroupDescriptionTranslationTable;                          // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
// 0x0068
struct FGfeSDKHighlightDefinition
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UserDefaultInterest;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGfeSDKHighlightType                               HighlightTags;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGfeSDKHighlightSignificance                       Significance;                                              // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               NameTranslationTable;                                      // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// 0x0020
struct FGfeSDKHighlightConfigParams
{
	TArray<struct FGfeSDKHighlightDefinition>          HighlightDefinitions;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DefaultLocale;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// 0x0050
struct FGfeSDKPermissionsChangedData
{
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                          // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
// 0x0018
struct FGfeSDKHighlightGroupView
{
	struct FString                                     GroupId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGfeSDKHighlightType                               TagsFilter;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGfeSDKHighlightSignificance                       SignificanceFilter;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// 0x0010
struct FGfeSDKHighlightSummaryParams
{
	TArray<struct FGfeSDKHighlightGroupView>           GroupViews;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
// 0x0028
struct FGfeSDKCreateInputParams
{
	struct FString                                     AppName;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EGfeSDKScope>                               RequiredScopes;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               PollForCallbacks;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
