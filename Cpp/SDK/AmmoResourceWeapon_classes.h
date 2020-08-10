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

// BlueprintGeneratedClass AmmoResourceWeapon.AmmoResourceWeapon_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_04E7 - 0x0000 // Minimum to subtract -> (0000)
class AAmmoResourceWeapon_C : public ASQAmmoResource
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04E7, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0280(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmmoResourceWeapon.AmmoResourceWeapon_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
