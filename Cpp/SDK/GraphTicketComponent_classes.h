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

// BlueprintGeneratedClass GraphTicketComponent.GraphTicketComponent_C
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_09C5 - 0x0000 // Minimum to subtract -> (0010)
class UGraphTicketComponent_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09C5, TArray<class USQGraphNodeComponent*>,                                  NewVar_1);                                                 // 0x00E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0028 PADDING_09C5, int,                                                                   TicketLoss);                                               // 0x00F0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_09C5, int,                                                                   TicketGain);                                               // 0x00F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_09C5, int,                                                                   InitialNeutralFlagTicketLoss);                             // 0x00F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_09C5, int,                                                                   InitialNeutralFlagTicketGain);                             // 0x00FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GraphTicketComponent.GraphTicketComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnLatticeUpdated_Event_1();
	void CaptureStateChangeEvent_Event_1(class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	void ExecuteUbergraph_GraphTicketComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
