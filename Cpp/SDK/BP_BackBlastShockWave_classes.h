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

// BlueprintGeneratedClass BP_BackBlastShockWave.BP_BackBlastShockWave_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
#define PADDING_036E - 0x0000 // Minimum to subtract -> (0000)
class ABP_BackBlastShockWave_C : public ABP_Shockwave_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_036E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0270(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

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
