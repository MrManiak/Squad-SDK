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

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (0x0220 - 0x0028)
public class UOnlineHotfixManager : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offOssName                                                    = new ExternalOffset<FString>(0x01E0, false);                  // 0x01E0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offHotfixManagerClassName                                     = new ExternalOffset<FString>(0x01F0, false);                  // 0x01F0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offDebugPrefix                                                = new ExternalOffset<FString>(0x0200, false);                  // 0x0200(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UObject>>                   _offAssetsHotfixedFromIniFiles                                 = new ExternalOffset<TArray<UObject>>(0x0210, false);          // 0x0210(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            OssName                                                        => _offOssName.GetValue();
	public FString                                            HotfixManagerClassName                                         => _offHotfixManagerClassName.GetValue();
	public FString                                            DebugPrefix                                                    => _offDebugPrefix.GetValue();
	public TArray<UObject>                                    AssetsHotfixedFromIniFiles                                     => _offAssetsHotfixedFromIniFiles.GetValue();
	#endregion


}

// Class Hotfix.UpdateManager
// 0x00F0 (0x0118 - 0x0028)
public class UUpdateManager : UObject
{
	#region Offsets
	private ExternalOffset<float>                             _offHotfixCheckCompleteDelay                                   = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offUpdateCheckCompleteDelay                                   = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offHotfixAvailabilityCheckCompleteDelay                       = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offUpdateCheckAvailabilityCompleteDelay                       = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCheckPlatformOSSForUpdate                                 = new ExternalOffset<byte/*(bool)*/>(0x0098);                  // 0x0098(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCheckOSSForUpdate                                         = new ExternalOffset<byte/*(bool)*/>(0x0099);                  // 0x0099(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offAppSuspendedUpdateCheckTimeSeconds                         = new ExternalOffset<int>(0x009C);                             // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbPlatformEnvironmentDetected                               = new ExternalOffset<byte/*(bool)*/>(0x00A8);                  // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbInitialUpdateFinished                                     = new ExternalOffset<byte/*(bool)*/>(0x00A9);                  // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbCheckHotfixAvailabilityOnly                               = new ExternalOffset<byte/*(bool)*/>(0x00AA);                  // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EUpdateState>                      _offCurrentUpdateState                                         = new ExternalOffset<EUpdateState>(0x00AB, false);             // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offWorstNumFilesPendingLoadViewed                             = new ExternalOffset<int>(0x00AC);                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EPatchCheckResult>                 _offLastPatchCheckResult                                       = new ExternalOffset<EPatchCheckResult>(0x00B0, false);        // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EHotfixResult>                     _offLastHotfixResult                                           = new ExternalOffset<EHotfixResult>(0x00B1, false);            // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<FDateTime>                         _offLastUpdateCheck[0x2]                                       = new ExternalOffset<FDateTime>(0x00E0, false);                // 0x00E0(0x0008) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<EUpdateCompletionStatus>           _offLastCompletionResult[0x2]                                  = new ExternalOffset<EUpdateCompletionStatus>(0x00F0, false);  // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UEnum>                             _offUpdateStateEnum                                            = new ExternalOffset<UEnum>(0x0108, true);                     // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UEnum>                             _offUpdateCompletionEnum                                       = new ExternalOffset<UEnum>(0x0110, true);                     // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              HotfixCheckCompleteDelay                                       => _offHotfixCheckCompleteDelay.GetValue();
	public float                                              UpdateCheckCompleteDelay                                       => _offUpdateCheckCompleteDelay.GetValue();
	public float                                              HotfixAvailabilityCheckCompleteDelay                           => _offHotfixAvailabilityCheckCompleteDelay.GetValue();
	public float                                              UpdateCheckAvailabilityCompleteDelay                           => _offUpdateCheckAvailabilityCompleteDelay.GetValue();
	public byte/*(bool)*/                                     bCheckPlatformOSSForUpdate                                     => _offbCheckPlatformOSSForUpdate.GetValue();
	public byte/*(bool)*/                                     bCheckOSSForUpdate                                             => _offbCheckOSSForUpdate.GetValue();
	public int                                                AppSuspendedUpdateCheckTimeSeconds                             => _offAppSuspendedUpdateCheckTimeSeconds.GetValue();
	public byte/*(bool)*/                                     bPlatformEnvironmentDetected                                   => _offbPlatformEnvironmentDetected.GetValue();
	public byte/*(bool)*/                                     bInitialUpdateFinished                                         => _offbInitialUpdateFinished.GetValue();
	public byte/*(bool)*/                                     bCheckHotfixAvailabilityOnly                                   => _offbCheckHotfixAvailabilityOnly.GetValue();
	public EUpdateState                                       CurrentUpdateState                                             => _offCurrentUpdateState.GetValue();
	public int                                                WorstNumFilesPendingLoadViewed                                 => _offWorstNumFilesPendingLoadViewed.GetValue();
	public EPatchCheckResult                                  LastPatchCheckResult                                           => _offLastPatchCheckResult.GetValue();
	public EHotfixResult                                      LastHotfixResult                                               => _offLastHotfixResult.GetValue();
	public UEnum                                              UpdateStateEnum                                                => _offUpdateStateEnum.GetValue();
	public UEnum                                              UpdateCompletionEnum                                           => _offUpdateCompletionEnum.GetValue();
	#endregion


}


}