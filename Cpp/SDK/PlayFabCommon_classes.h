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

// Class PlayFabCommon.PlayFabAuthenticationContext
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0233 - 0x0000 // Minimum to subtract -> (0000)
class UPlayFabAuthenticationContext : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0233, struct FString,                                                        ClientSessionTicket);                                      // 0x0028(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0233, struct FString,                                                        EntityToken);                                              // 0x0038(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0233, struct FString,                                                        DeveloperSecretKey);                                       // 0x0048(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0233, struct FString,                                                        PlayFabId);                                                // 0x0058(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabCommon.PlayFabAuthenticationContext");
		return ptr;
	}


	void SetPlayFabId(const struct FString& InKey);
	void SetEntityToken(const struct FString& InToken);
	void SetDeveloperSecretKey(const struct FString& InKey);
	void SetClientSessionTicket(const struct FString& InTicket);
	struct FString GetPlayFabId();
	struct FString GetEntityToken();
	struct FString GetDeveloperSecretKey();
	struct FString GetClientSessionTicket();
	void ForgetAllCredentials();
};

// Class PlayFabCommon.PlayFabRuntimeSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0234 - 0x0000 // Minimum to subtract -> (0000)
class UPlayFabRuntimeSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0234, struct FString,                                                        ProductionEnvironmentURL);                                 // 0x0028(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0234, struct FString,                                                        TitleId);                                                  // 0x0038(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0234, struct FString,                                                        DeveloperSecretKey);                                       // 0x0048(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabCommon.PlayFabRuntimeSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
