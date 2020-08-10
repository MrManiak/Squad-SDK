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

// BlueprintGeneratedClass GraphMercyBleedComponent.GraphMercyBleedComponent_C
// 0x0044 (FullSize[0x010C] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0205 - 0x0000 // Minimum to subtract -> (0010)
class UGraphMercyBleedComponent_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0205, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0205, int,                                                                   TicketLoss);                                               // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0205, int,                                                                   TicketGain);                                               // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0205, TArray<int>,                                                           CapturezonesByTeam);                                       // 0x00E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0205, TArray<int>,                                                           CurrentLosers);                                            // 0x00F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0205, float,                                                                 TickFrequencyInSeconds);                                   // 0x0108(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
