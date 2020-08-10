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

// BlueprintGeneratedClass BP_ProjectileBlank.BP_ProjectileBlank_C
// 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
// LastOffsetWithSize(0x0490)
#define PADDING_03EF - 0x0000 // Minimum to subtract -> (0000)
class ABP_ProjectileBlank_C : public ABP_Projectile_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03EF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0490(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileBlank.BP_ProjectileBlank_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileBlank(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
