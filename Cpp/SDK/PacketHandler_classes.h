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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UHandlerComponentFactory : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}


};

// Class PacketHandler.NetAnalyticsAggregatorConfig
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0136 - 0x0000 // Minimum to subtract -> (0000)
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0136, TArray<struct FNetAnalyticsDataConfig>,                                NetAnalyticsData);                                         // 0x0028(0x0010)  (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.NetAnalyticsAggregatorConfig");
		return ptr;
	}


};

// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0138 - 0x0000 // Minimum to subtract -> (0000)
class UPacketHandlerProfileConfig : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0138, TArray<struct FString>,                                                Components);                                               // 0x0028(0x0010)  (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
