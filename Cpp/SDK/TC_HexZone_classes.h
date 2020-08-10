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

// BlueprintGeneratedClass TC_HexZone.TC_HexZone_C
// 0x00B1 (FullSize[0x02E9] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_038D - 0x0000 // Minimum to subtract -> (0010)
class ATC_HexZone_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_038D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_038D, class UTextRenderComponent*,                                           TextRender);                                               // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_038D, class USQCaptureZoneTCComponent*,                                      SQCaptureZoneTC);                                          // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_038D, class UArrowComponent*,                                                Arrow);                                                    // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_038D, class UStaticMeshComponent*,                                           Hex);                                                      // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_038D, class UMaterialInstanceDynamic*,                                       MI_Hex);                                                   // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_038D, int,                                                                   Hex_Num);                                                  // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_038D, struct FScriptMulticastDelegate,                                       Flag_Info_Changed);                                        // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0058 PADDING_038D, TArray<class ATC_HexZone_C*>,                                          Neighbour_Hexes);                                          // 0x0290(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0068 PADDING_038D, class ATC_HexGraph_C*,                                                 TC_Graph);                                                 // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_038D, class UMaterialInterface*,                                             Material);                                                 // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_038D, TArray<int>,                                                           Nearby_Zone_Team_Counts);                                  // 0x02B0(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0088 PADDING_038D, int,                                                                   Nearby_Hexes_Required_To_Cap);                             // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_038D, bool,                                                                  Locked);                                                   // 0x02C4(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0090 PADDING_038D, TArray<bool>,                                                          Touching_Anchor);                                          // 0x02C8(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_038D, bool,                                                                  Is_Anchor);                                                // 0x02D8(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_038D, bool,                                                                  Protected);                                                // 0x02D9(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_038D, class AActor*,                                                         Protecting_Actor);                                         // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_038D, bool,                                                                  Can_Protect_Neighbours);                                   // 0x02E8(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TC_HexZone.TC_HexZone_C");
		return ptr;
	}


	void Refresh_Protection();
	void Get_Protected_By_Neighbours(bool* Protected);
	void Set_ID(int Hex_Num);
	void Calculate_Can_Capture(int Nearby_Zones, int Team, bool* Can_Capture);
	void Refresh_Local_Zones();
	void Refresh_Can_Cap();
	void Cache_Local_Hexes();
	void Init_Data();
	void Refresh_Zone_Debug();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void State_Changed_Notify(unsigned char Team);
	void Debug();
	void ReceiveTick(float DeltaSeconds);
	void State_Changed(class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	void Make_Team_One();
	void Make_Team_Two();
	void Make_Team_Neutral();
	void Protector_Destroyed(class AActor* Protector);
	void ExecuteUbergraph_TC_HexZone(int EntryPoint);
	void Flag_Info_Changed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
