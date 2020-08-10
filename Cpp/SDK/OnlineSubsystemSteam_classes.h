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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}


};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0014 (FullSize[0x0790] - InheritedSize[0x077C])
// LastOffsetWithSize(0x077C)
class USteamNetDriver : public UIpNetDriver
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}


};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x000D (FullSize[0x1A01] - InheritedSize[0x19F4])
// LastOffsetWithSize(0x19F4)
#define PADDING_04F5 - 0x0000 // Minimum to subtract -> (000C)
class USteamNetConnection : public UIpConnection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000C PADDING_04F5, bool,                                                                  bIsPassthrough);                                           // 0x1A00(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
