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

// Class StaticCableComponent.StaticCableComponent
// 0x0020 (FullSize[0x04C8] - InheritedSize[0x04A8])
// LastOffsetWithSize(0x04A8)
#define PADDING_02E9 - 0x0000 // Minimum to subtract -> (0018)
class UStaticCableComponent : public UCableComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_02E9, float,                                                                 SleepMoveSensitivity);                                     // 0x04C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001C PADDING_02E9, float,                                                                 SleepTimeSensitivity);                                     // 0x04C4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StaticCableComponent.StaticCableComponent");
		return ptr;
	}


	void Wake();
	void Sleep();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
