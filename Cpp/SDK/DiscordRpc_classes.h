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

// Class DiscordRpc.DiscordRpc
// 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_04D6 - 0x0000 // Minimum to subtract -> (0000)
class UDiscordRpc : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04D6, bool,                                                                  IsConnected);                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnConnected);                                              // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnDisconnected);                                           // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnErrored);                                                // 0x0050(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnJoin);                                                   // 0x0060(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnSpectate);                                               // 0x0070(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04D6, struct FScriptMulticastDelegate,                                       OnJoinRequest);                                            // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04D6, struct FDiscordRichPresence,                                           RichPresence);                                             // 0x0090(0x00B8)  (BlueprintVisible, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DiscordRpc.DiscordRpc");
		return ptr;
	}


	void UpdatePresence();
	void Shutdown();
	void RunCallbacks();
	void Respond(const struct FString& userId, int Reply);
	void Initialize(const struct FString& applicationId, bool autoRegister, const struct FString& optionalSteamId);
	void ClearPresence();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
