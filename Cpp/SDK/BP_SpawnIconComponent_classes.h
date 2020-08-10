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

// BlueprintGeneratedClass BP_SpawnIconComponent.BP_SpawnIconComponent_C
// 0x0048 (FullSize[0x01A0] - InheritedSize[0x0158])
// LastOffsetWithSize(0x0158)
#define PADDING_0C98 - 0x0000 // Minimum to subtract -> (0030)
class UBP_SpawnIconComponent_C : public USQMapIconComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_0C98, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0188(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0C98, struct FLinearColor,                                                   InvalidTint);                                              // 0x0190(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnIconComponent.BP_SpawnIconComponent_C");
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SpawnIconComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
