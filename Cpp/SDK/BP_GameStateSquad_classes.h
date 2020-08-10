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

// BlueprintGeneratedClass BP_GameStateSquad.BP_GameStateSquad_C
// 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
// LastOffsetWithSize(0x03C8)
#define PADDING_007C - 0x0000 // Minimum to subtract -> (0000)
class ABP_GameStateSquad_C : public ASQGameState
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_007C, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x03C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameStateSquad.BP_GameStateSquad_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
