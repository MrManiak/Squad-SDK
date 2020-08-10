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

// Class TcpMessaging.TcpMessagingSettings
// 0x002C (FullSize[0x0054] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0131 - 0x0000 // Minimum to subtract -> (0000)
class UTcpMessagingSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0131, bool,                                                                  EnableTransport);                                          // 0x0028(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0131, struct FString,                                                        ListenEndpoint);                                           // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0131, TArray<struct FString>,                                                ConnectToEndpoints);                                       // 0x0040(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0131, int,                                                                   ConnectionRetryDelay);                                     // 0x0050(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
