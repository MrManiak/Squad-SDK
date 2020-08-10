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

// BlueprintGeneratedClass BP_SquadRallyPoint.BP_SquadRallyPoint_C
// 0x0058 (FullSize[0x0478] - InheritedSize[0x0420])
// LastOffsetWithSize(0x0420)
#define PADDING_0274 - 0x0000 // Minimum to subtract -> (0000)
class ABP_SquadRallyPoint_C : public ASQSquadRallyPoint
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0274, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0420(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0274, class UBoxComponent*,                                                  InteractBox);                                              // 0x0428(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0274, class UAudioComponent*,                                                Rally_Static_Sound);                                       // 0x0430(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0274, struct FSQUsableData,                                                  Data);                                                     // 0x0438(0x0040)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SquadRallyPoint.BP_SquadRallyPoint_C");
		return ptr;
	}


	bool ShouldDisplayPrompt(class AController* User);
	int GetInterfaceTeam();
	struct FSQUsableData GetUsableData();
	void BPOnUsed(class AController* User);
	void BPStopUsed(class AController* User);
	void ServerOnUsed(class AController* User);
	void ServerStopUsed(class AController* User);
	void BPDisplayPrompt(class AController* User);
	void BPHidePrompt();
	void ExecuteUbergraph_BP_SquadRallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
