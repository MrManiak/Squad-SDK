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

// BlueprintGeneratedClass MenuCamera.MenuCamera_C
// 0x0019 (FullSize[0x0251] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_00EF - 0x0000 // Minimum to subtract -> (0010)
class AMenuCamera_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_00EF, class UCameraComponent*,                                               Camera);                                                   // 0x0248(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00EF, TEnumAsByte<EMenuCameraScreen>,                                        Camera_Name);                                              // 0x0250(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuCamera.MenuCamera_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
