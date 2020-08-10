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

// Class FacialAnimation.AudioCurveSourceComponent
// 0x00F4 (FullSize[0x0744] - InheritedSize[0x0650])
// LastOffsetWithSize(0x06A0)
#define PADDING_0AAB - 0x0000 // Minimum to subtract -> (0098)
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0098 PADDING_0AAB, struct FName,                                                          CurveSourceBindingName);                                   // 0x0738(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0AAB, float,                                                                 CurveSyncOffset);                                          // 0x0740(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FacialAnimation.AudioCurveSourceComponent");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
