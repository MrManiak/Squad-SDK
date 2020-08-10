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

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_012D - 0x0000 // Minimum to subtract -> (0000)
class UUdpMessagingSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_012D, bool,                                                                  EnableTransport);                                          // 0x0028(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_012D, struct FString,                                                        UnicastEndpoint);                                          // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_012D, struct FString,                                                        MulticastEndpoint);                                        // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_012D, unsigned char,                                                         MulticastTimeToLive);                                      // 0x0050(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_012D, TArray<struct FString>,                                                StaticEndpoints);                                          // 0x0058(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_012D, bool,                                                                  EnableTunnel);                                             // 0x0068(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_012D, struct FString,                                                        TunnelUnicastEndpoint);                                    // 0x0070(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_012D, struct FString,                                                        TunnelMulticastEndpoint);                                  // 0x0080(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_012D, TArray<struct FString>,                                                RemoteTunnelEndpoints);                                    // 0x0090(0x0010)  (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
