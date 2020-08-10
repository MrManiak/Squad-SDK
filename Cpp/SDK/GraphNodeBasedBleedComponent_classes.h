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

// BlueprintGeneratedClass GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C
// 0x007C (FullSize[0x0144] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0229 - 0x0000 // Minimum to subtract -> (0010)
class UGraphNodeBasedBleedComponent_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0229, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0229, TArray<class USQGraphNodeComponent*>,                                  GraphNodes);                                               // 0x00E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0229, TArray<int>,                                                           CapturezonesByTeam);                                       // 0x00F0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0229, TArray<int>,                                                           CurrentLosers);                                            // 0x0100(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0229, int,                                                                   CurrentWinner);                                            // 0x0110(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_0229, bool,                                                                  CountNeutralizedCP_asLost);                                // 0x0114(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0229, int,                                                                   TicketBleedPerLostCPPerTick);                              // 0x0118(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0229, float,                                                                 BleedTickFrequencyInSeconds);                              // 0x011C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0229, bool,                                                                  BleedOverUnevenCaptureZone);                               // 0x0120(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0229, TArray<int>,                                                           CachedBleedByTeam);                                        // 0x0128(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0229, int,                                                                   MercyBleedValuePerTick);                                   // 0x0138(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0229, bool,                                                                  bIsMercyBleedActive);                                      // 0x013C(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0075 PADDING_0229, bool,                                                                  EnableMercyBleedFeature);                                  // 0x013D(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0229, float,                                                                 MercyBleedTickFrequencyInSeconds);                         // 0x0140(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GraphNodeBasedBleedComponent.GraphNodeBasedBleedComponent_C");
		return ptr;
	}


	void SetMercyBleedState(bool Enable);
	void CalculateBleed();
	void FindLosers();
	void CountCaptureZonesByTeam();
	void CleanArrays();
	void TickBleed();
	void ReceiveBeginPlay();
	void OnLatticeUpdated_Event_1();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GraphNodeBasedBleedComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
