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

// BlueprintGeneratedClass GraphMercyBleedComponent.GraphMercyBleedComponent_C
// 0x0034 (FullSize[0x010C] - InheritedSize[0x00D8])
class UGraphMercyBleedComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                TicketLoss;                                                // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TicketGain;                                                // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        CapturezonesByTeam;                                        // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CurrentLosers;                                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TickFrequencyInSeconds;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GraphMercyBleedComponent.GraphMercyBleedComponent_C");
		return ptr;
	}



	bool IsLoser(int CaptureZones, int Team);
	void FindLosers();
	void CountCaptureZonesByTeam();
	void TickBleed();
	void ReceiveBeginPlay();
	void OnLatticeUpdated_Event_1();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GraphMercyBleedComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
