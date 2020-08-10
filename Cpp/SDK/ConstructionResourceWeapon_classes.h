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

// BlueprintGeneratedClass ConstructionResourceWeapon.ConstructionResourceWeapon_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_0189 - 0x0000 // Minimum to subtract -> (0000)
class AConstructionResourceWeapon_C : public ASQConstructionResource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0189, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0189, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0288(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConstructionResourceWeapon.ConstructionResourceWeapon_C");
		return ptr;
	}


	void ResourceDropOff();
	void ExecuteUbergraph_ConstructionResourceWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
