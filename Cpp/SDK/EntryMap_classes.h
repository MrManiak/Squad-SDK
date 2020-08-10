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

// BlueprintGeneratedClass EntryMap.Kamdesh_Highlands_C
// 0x000F (FullSize[0x0258] - InheritedSize[0x0249])
// LastOffsetWithSize(0x0249)
#define PADDING_034D - 0x0000 // Minimum to subtract -> (0007)
class AKamdesh_Highlands_C : public ALevelScriptActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_034D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EntryMap.Kamdesh_Highlands_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_EntryMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
