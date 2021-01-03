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

// BlueprintGeneratedClass BP_ProjectileBlank.BP_ProjectileBlank_C
// 0x0008 (FullSize[0x04A8] - InheritedSize[0x04A0])
class ABP_ProjectileBlank_C : public ABP_Projectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


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
