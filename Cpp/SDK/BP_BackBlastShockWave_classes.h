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

// BlueprintGeneratedClass BP_BackBlastShockWave.BP_BackBlastShockWave_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class ABP_BackBlastShockWave_C : public ABP_Shockwave_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BackBlastShockWave.BP_BackBlastShockWave_C");
		return ptr;
	}



	void BackBlastShockWave(class AActor* Instigator);
	void Explode(class AActor* Instigator);
	void ExecuteUbergraph_BP_BackBlastShockWave(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
