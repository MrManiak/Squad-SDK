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

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_017C - 0x0000 // Minimum to subtract -> (01B8)
class UOnlineHotfixManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x01B8 PADDING_017C, struct FString,                                                        OssName);                                                  // 0x01E0(0x0010)  (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_017C, struct FString,                                                        HotfixManagerClassName);                                   // 0x01F0(0x0010)  (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_017C, struct FString,                                                        DebugPrefix);                                              // 0x0200(0x0010)  (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E8 PADDING_017C, TArray<class UObject*>,                                                AssetsHotfixedFromIniFiles);                               // 0x0210(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}


	void StartHotfixProcess();
};

// Class Hotfix.UpdateManager
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_017E - 0x0000 // Minimum to subtract -> (0060)
class UUpdateManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0060 PADDING_017E, float,                                                                 HotfixCheckCompleteDelay);                                 // 0x0088(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0064 PADDING_017E, float,                                                                 UpdateCheckCompleteDelay);                                 // 0x008C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_017E, float,                                                                 HotfixAvailabilityCheckCompleteDelay);                     // 0x0090(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006C PADDING_017E, float,                                                                 UpdateCheckAvailabilityCompleteDelay);                     // 0x0094(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_017E, bool,                                                                  bCheckPlatformOSSForUpdate);                               // 0x0098(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0071 PADDING_017E, bool,                                                                  bCheckOSSForUpdate);                                       // 0x0099(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0074 PADDING_017E, int,                                                                   AppSuspendedUpdateCheckTimeSeconds);                       // 0x009C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0080 PADDING_017E, bool,                                                                  bPlatformEnvironmentDetected);                             // 0x00A8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0081 PADDING_017E, bool,                                                                  bInitialUpdateFinished);                                   // 0x00A9(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0082 PADDING_017E, bool,                                                                  bCheckHotfixAvailabilityOnly);                             // 0x00AA(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0083 PADDING_017E, EUpdateState,                                                          CurrentUpdateState);                                       // 0x00AB(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0084 PADDING_017E, int,                                                                   WorstNumFilesPendingLoadViewed);                           // 0x00AC(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_017E, EPatchCheckResult,                                                     LastPatchCheckResult);                                     // 0x00B0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0089 PADDING_017E, EHotfixResult,                                                         LastHotfixResult);                                         // 0x00B1(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_017E, struct FDateTime,                                                      LastUpdateCheck[0x2]);                                     // 0x00E0(0x0008)  (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_017E, EUpdateCompletionStatus,                                               LastCompletionResult[0x2]);                                // 0x00F0(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_017E, class UEnum*,                                                          UpdateStateEnum);                                          // 0x0108(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_017E, class UEnum*,                                                          UpdateCompletionEnum);                                     // 0x0110(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
