#pragma once

// Name: S, Version: b


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

// Class PlayFabCommon.PlayFabRuntimeSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UPlayFabRuntimeSettings : public UObject
{
public:
	struct FString                                     ProductionEnvironmentURL;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeveloperSecretKey;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabCommon.PlayFabRuntimeSettings");
		return ptr;
	}



};

// Class PlayFabCommon.PlayFabAuthenticationContext
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UPlayFabAuthenticationContext : public UObject
{
public:
	struct FString                                     ClientSessionTicket;                                       // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     EntityToken;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DeveloperSecretKey;                                        // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayFabId;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
