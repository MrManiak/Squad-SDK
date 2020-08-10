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

// BlueprintGeneratedClass CameraMan.CameraMan_C
// 0x0010 (FullSize[0x06B8] - InheritedSize[0x06A8])
// LastOffsetWithSize(0x06A8)
#define PADDING_0235 - 0x0000 // Minimum to subtract -> (0008)
class ACameraMan_C : public ASQCameraMan
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0235, class USQMapIconComponent*,                                            SquadMapIcon);                                             // 0x06B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraMan.CameraMan_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
