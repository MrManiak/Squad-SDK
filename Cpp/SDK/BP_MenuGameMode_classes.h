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

// BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C
// 0x02A0 (FullSize[0x0730] - InheritedSize[0x0490])
// LastOffsetWithSize(0x0490)
#define PADDING_0394 - 0x0000 // Minimum to subtract -> (0298)
class ABP_MenuGameMode_C : public ASQGameMode
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0298 PADDING_0394, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0728(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif