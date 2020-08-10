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

// Class Rejoin.RejoinCheck
// 0x0003 (FullSize[0x002B] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00A0 - 0x0000 // Minimum to subtract -> (0000)
class URejoinCheck : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00A0, ERejoinStatus,                                                         LastKnownStatus);                                          // 0x0028(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0001 PADDING_00A0, bool,                                                                  bRejoinAfterCheck);                                        // 0x0029(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0002 PADDING_00A0, bool,                                                                  bAttemptingRejoin);                                        // 0x002A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Rejoin.RejoinCheck");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
