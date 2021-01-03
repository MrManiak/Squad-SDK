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

// Class StaticCableComponent.StaticCableComponent
// 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
class UStaticCableComponent : public UCableComponent
{
public:
	float                                              SleepMoveSensitivity;                                      // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SleepTimeSensitivity;                                      // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z4DS[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


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
