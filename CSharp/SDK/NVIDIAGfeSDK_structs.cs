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

// Enum NVIDIAGfeSDK.EGfeSDKPermission
public enum EGfeSDKPermission : byte
{
	EGfeSDKPermission__Granted     = 0,
	EGfeSDKPermission__Denied      = 1,
	EGfeSDKPermission__MustAsk     = 2,
	EGfeSDKPermission__Unknown     = 3,
	EGfeSDKPermission__MAX         = 4
}

// Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
public enum EGfeSDKHighlightSignificance : byte
{
	EGfeSDKHighlightSignificance__NONE = 0,
	EGfeSDKHighlightSignificance__ExtremelyBad = 1,
	EGfeSDKHighlightSignificance__VeryBad = 2,
	EGfeSDKHighlightSignificance__Bad = 3,
	EGfeSDKHighlightSignificance__Neutral = 4,
	EGfeSDKHighlightSignificance__Good = 5,
	EGfeSDKHighlightSignificance__VeryGood = 6,
	EGfeSDKHighlightSignificance__ExtremelyGood = 7,
	EGfeSDKHighlightSignificance__MAX = 8
}

// Enum NVIDIAGfeSDK.EGfeSDKHighlightType
public enum EGfeSDKHighlightType : byte
{
	EGfeSDKHighlightType__NONE     = 0,
	EGfeSDKHighlightType__Milestone = 1,
	EGfeSDKHighlightType__Achievement = 2,
	EGfeSDKHighlightType__Incident = 3,
	EGfeSDKHighlightType__StateChange = 4,
	EGfeSDKHighlightType__Unannounced = 5,
	EGfeSDKHighlightType__MAX      = 6
}

// Enum NVIDIAGfeSDK.EGfeSDKReturnCode
public enum EGfeSDKReturnCode : byte
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
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX = 38
}

// Enum NVIDIAGfeSDK.EGfeSDKScope
public enum EGfeSDKScope : byte
{
	EGfeSDKScope__Highlights       = 0,
	EGfeSDKScope__HighlightsRecordVideo = 1,
	EGfeSDKScope__HighlightsRecordScreenshot = 2,
	EGfeSDKScope__MAX              = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// 0x0028
public class FGfeSDKHighlightVideoParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offHighlightId                                                = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStartDelta                                                 = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offEndDelta                                                   = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GroupId                                                        => _offGroupId.GetValue();
	public FString                                             HighlightId                                                    => _offHighlightId.GetValue();
	public int                                                 StartDelta                                                     => _offStartDelta.GetValue();
	public int                                                 EndDelta                                                       => _offEndDelta.GetValue();
	#endregion

	public FGfeSDKHighlightVideoParams(FString c_GroupId, FString c_HighlightId, int c_StartDelta, int c_EndDelta) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId.SetValue(c_GroupId);
		_offHighlightId.SetValue(c_HighlightId);
		_offStartDelta.SetValue(c_StartDelta);
		_offEndDelta.SetValue(c_EndDelta);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// 0x0010
public class FGfeSDKRequestPermissionsParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<EGfeSDKScope>>               _offScopes                                                     = new ExternalOffset<TArray<EGfeSDKScope>>(0x0000, false);     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<EGfeSDKScope>                                Scopes                                                         => _offScopes.GetValue();
	#endregion

	public FGfeSDKRequestPermissionsParams(TArray<EGfeSDKScope> c_Scopes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScopes.SetValue(c_Scopes);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// 0x0020
public class FGfeSDKHighlightScreenshotParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offHighlightId                                                = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GroupId                                                        => _offGroupId.GetValue();
	public FString                                             HighlightId                                                    => _offHighlightId.GetValue();
	#endregion

	public FGfeSDKHighlightScreenshotParams(FString c_GroupId, FString c_HighlightId) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId.SetValue(c_GroupId);
		_offHighlightId.SetValue(c_HighlightId);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
// 0x0068
public class FGfeSDKCreateResponse : ExternalClass
{
	#region Offsets
	private ExternalOffset<ushort>                             _offVersionMajor                                               = new ExternalOffset<ushort>(0x0000);                          // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offVersionMinor                                               = new ExternalOffset<ushort>(0x0002);                          // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNVIDIAGfeVersion                                           = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<EGfeSDKScope, EGfeSDKPermission>              _offScopePermissions                                           = new ExternalOffset<TMap<EGfeSDKPermission>>(0x0018, false);  // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ushort                                              VersionMajor                                                   => _offVersionMajor.GetValue();
	public ushort                                              VersionMinor                                                   => _offVersionMinor.GetValue();
	public FString                                             NVIDIAGfeVersion                                               => _offNVIDIAGfeVersion.GetValue();
	#endregion

	public FGfeSDKCreateResponse(ushort c_VersionMajor, ushort c_VersionMinor, FString c_NVIDIAGfeVersion) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVersionMajor.SetValue(c_VersionMajor);
		_offVersionMinor.SetValue(c_VersionMinor);
		_offNVIDIAGfeVersion.SetValue(c_NVIDIAGfeVersion);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// 0x0018
public class FGfeSDKHighlightCloseGroupParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offDestroyHighlights                                          = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GroupId                                                        => _offGroupId.GetValue();
	public byte/*(bool)*/                                      DestroyHighlights                                              => _offDestroyHighlights.GetValue();
	#endregion

	public FGfeSDKHighlightCloseGroupParams(FString c_GroupId, byte/*(bool)*/ c_DestroyHighlights) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId.SetValue(c_GroupId);
		_offDestroyHighlights.SetValue(c_DestroyHighlights);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// 0x0060
public class FGfeSDKHighlightOpenGroupParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FString>               _offGroupDescriptionTranslationTable                           = new ExternalOffset<TMap<FString>>(0x0010, false);            // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GroupId                                                        => _offGroupId.GetValue();
	#endregion

	public FGfeSDKHighlightOpenGroupParams(FString c_GroupId) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId.SetValue(c_GroupId);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
// 0x0068
public class FGfeSDKHighlightDefinition : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offID                                                         = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offUserDefaultInterest                                        = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGfeSDKHighlightType>               _offHighlightTags                                              = new ExternalOffset<EGfeSDKHighlightType>(0x0011, false);     // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGfeSDKHighlightSignificance>       _offSignificance                                               = new ExternalOffset<EGfeSDKHighlightSignificance>(0x0012, false); // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FString, struct FString>               _offNameTranslationTable                                       = new ExternalOffset<TMap<FString>>(0x0018, false);            // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ID                                                             => _offID.GetValue();
	public byte/*(bool)*/                                      UserDefaultInterest                                            => _offUserDefaultInterest.GetValue();
	public EGfeSDKHighlightType                                HighlightTags                                                  => _offHighlightTags.GetValue();
	public EGfeSDKHighlightSignificance                        Significance                                                   => _offSignificance.GetValue();
	#endregion

	public FGfeSDKHighlightDefinition(FString c_ID, byte/*(bool)*/ c_UserDefaultInterest, EGfeSDKHighlightType c_HighlightTags, EGfeSDKHighlightSignificance c_Significance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offUserDefaultInterest.SetValue(c_UserDefaultInterest);
		_offHighlightTags.SetValue(c_HighlightTags);
		_offSignificance.SetValue(c_Significance);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// 0x0020
public class FGfeSDKHighlightConfigParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGfeSDKHighlightDefinition>> _offHighlightDefinitions                                       = new ExternalOffset<TArray<FGfeSDKHighlightDefinition>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDefaultLocale                                              = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGfeSDKHighlightDefinition>                  HighlightDefinitions                                           => _offHighlightDefinitions.GetValue();
	public FString                                             DefaultLocale                                                  => _offDefaultLocale.GetValue();
	#endregion

	public FGfeSDKHighlightConfigParams(TArray<FGfeSDKHighlightDefinition> c_HighlightDefinitions, FString c_DefaultLocale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHighlightDefinitions.SetValue(c_HighlightDefinitions);
		_offDefaultLocale.SetValue(c_DefaultLocale);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// 0x0050
public class FGfeSDKPermissionsChangedData : ExternalClass
{
	#region Offsets
//	private TMap<EGfeSDKScope, EGfeSDKPermission>              _offScopePermissions                                           = new ExternalOffset<TMap<EGfeSDKPermission>>(0x0000, false);  // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FGfeSDKPermissionsChangedData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
// 0x0018
public class FGfeSDKHighlightGroupView : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offGroupId                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGfeSDKHighlightType>               _offTagsFilter                                                 = new ExternalOffset<EGfeSDKHighlightType>(0x0010, false);     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGfeSDKHighlightSignificance>       _offSignificanceFilter                                         = new ExternalOffset<EGfeSDKHighlightSignificance>(0x0011, false); // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             GroupId                                                        => _offGroupId.GetValue();
	public EGfeSDKHighlightType                                TagsFilter                                                     => _offTagsFilter.GetValue();
	public EGfeSDKHighlightSignificance                        SignificanceFilter                                             => _offSignificanceFilter.GetValue();
	#endregion

	public FGfeSDKHighlightGroupView(FString c_GroupId, EGfeSDKHighlightType c_TagsFilter, EGfeSDKHighlightSignificance c_SignificanceFilter) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupId.SetValue(c_GroupId);
		_offTagsFilter.SetValue(c_TagsFilter);
		_offSignificanceFilter.SetValue(c_SignificanceFilter);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// 0x0010
public class FGfeSDKHighlightSummaryParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGfeSDKHighlightGroupView>>  _offGroupViews                                                 = new ExternalOffset<TArray<FGfeSDKHighlightGroupView>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGfeSDKHighlightGroupView>                   GroupViews                                                     => _offGroupViews.GetValue();
	#endregion

	public FGfeSDKHighlightSummaryParams(TArray<FGfeSDKHighlightGroupView> c_GroupViews) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGroupViews.SetValue(c_GroupViews);
	}
}
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
// 0x0028
public class FGfeSDKCreateInputParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offAppName                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<EGfeSDKScope>>               _offRequiredScopes                                             = new ExternalOffset<TArray<EGfeSDKScope>>(0x0010, false);     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offPollForCallbacks                                           = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             AppName                                                        => _offAppName.GetValue();
	public TArray<EGfeSDKScope>                                RequiredScopes                                                 => _offRequiredScopes.GetValue();
	public byte/*(bool)*/                                      PollForCallbacks                                               => _offPollForCallbacks.GetValue();
	#endregion

	public FGfeSDKCreateInputParams(FString c_AppName, TArray<EGfeSDKScope> c_RequiredScopes, byte/*(bool)*/ c_PollForCallbacks) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAppName.SetValue(c_AppName);
		_offRequiredScopes.SetValue(c_RequiredScopes);
		_offPollForCallbacks.SetValue(c_PollForCallbacks);
	}
}

}