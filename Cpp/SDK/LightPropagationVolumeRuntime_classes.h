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

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x004C (FullSize[0x0074] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_04D5 - 0x0000 // Minimum to subtract -> (0008)
class ULightPropagationVolumeBlendable : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_04D5, struct FLightPropagationVolumeSettings,                                Settings);                                                 // 0x0030(0x0040)  (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04D5, float,                                                                 BlendWeight);                                              // 0x0070(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
