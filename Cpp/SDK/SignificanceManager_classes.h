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

// Class SignificanceManager.SignificanceManager
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09C4 - 0x0000 // Minimum to subtract -> (00D8)
class USignificanceManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00D8 PADDING_09C4, struct FSoftClassPath,                                                 SignificanceManagerClassName);                             // 0x0100(0x0018)  (Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
