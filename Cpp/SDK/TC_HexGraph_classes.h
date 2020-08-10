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

// BlueprintGeneratedClass TC_HexGraph.TC_HexGraph_C
// 0x0120 (FullSize[0x0358] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0419 - 0x0000 // Minimum to subtract -> (0010)
class ATC_HexGraph_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0419, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0419, class UTCScalableBleedComponent_C*,                                    TCScalableBleedComponent);                                 // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0419, class UBoxComponent*,                                                  NoCollisionDebugExtent);                                   // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0419, class UBillboardComponent*,                                            HexBillboard);                                             // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0419, class USplineComponent*,                                               Spline);                                                   // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0419, struct FVector,                                                        Hex_Extent);                                               // 0x0270(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0419, TArray<class ATC_HexZone_C*>,                                          TC_Zones);                                                 // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0419, TArray<float>,                                                         Hex_Max_Distance_From_Spline);                             // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0419, float,                                                                 Hex_XY_Scale);                                             // 0x02A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_0419, float,                                                                 Start_Spline_Ownership);                                   // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0419, float,                                                                 End_Spline_Ownership);                                     // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0419, bool,                                                                  Test_Setup_Once);                                          // 0x02AC(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0075 PADDING_0419, bool,                                                                  Use_Hex_Control___as_Win_Condition);                       // 0x02AD(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0419, float,                                                                 Hex_Control___Target_to_Win);                              // 0x02B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_0419, bool,                                                                  Test_Constant);                                            // 0x02B4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0419, float,                                                                 Hex_Z_Scale);                                              // 0x02B8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0419, bool,                                                                  Flip_Teams);                                               // 0x02BC(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0419, float,                                                                 Width_Spacer);                                             // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_0419, float,                                                                 Height_Spacer);                                            // 0x02C4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0419, int,                                                                   Hex_Widths);                                               // 0x02C8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0419, int,                                                                   Hex_Lengths);                                              // 0x02CC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0419, TArray<struct FTransform>,                                             Hex_Transform_Array);                                      // 0x02D0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0419, float,                                                                 Start_Random_Anchor_Distance);                             // 0x02E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0419, float,                                                                 End_Random_Anchor_Distance);                               // 0x02E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0419, TArray<class ATC_HexZone_C*>,                                          Team_1_Anchors);                                           // 0x02E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0419, TArray<class ATC_HexZone_C*>,                                          Team_2_Anchors);                                           // 0x02F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0419, class ATC_HexZone_C*,                                                  Team_1_Anchor);                                            // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0419, class ATC_HexZone_C*,                                                  Team_2_Anchor);                                            // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0419, TArray<class ATC_HexZone_C*>,                                          Current_Hexes_in_Round);                                   // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0419, TArray<int>,                                                           Team_Hex_Ownership);                                       // 0x0328(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0419, int,                                                                   Target_Zones_To_Capture);                                  // 0x0338(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0419, class UClass*,                                                         Hex_Class);                                                // 0x0340(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0419, float,                                                                 Default_Capture_Duration);                                 // 0x0348(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0419, int,                                                                   Nearby_Hexes_Required_To_Cap);                             // 0x034C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0419, int,                                                                   Uncapped_Required_Players);                                // 0x0350(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_0419, int,                                                                   Capped_Required_Players);                                  // 0x0354(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TC_HexGraph.TC_HexGraph_C");
		return ptr;
	}


	void Get_Valid_Anchor_Hexes(TArray<class ATC_HexZone_C*>* Out_Team_1_Hexes, TArray<class ATC_HexZone_C*>* Out_Team_2_Hexes);
	void Get_Neighbour_Chain(TArray<class ATC_HexZone_C*>* Chain, int Team, class ATC_HexZone_C* Zone, TArray<class ATC_HexZone_C*>* Out_Chain);
	void Update_Anchor_Flags();
	void Check_Win_Condition();
	void Construct_Hex_Data(TArray<class ATC_HexZone_C*>* In_Zones);
	void Refresh_Zones();
	void Init_Start_Zones();
	void Get_Start_Zones(class ATC_HexZone_C** Start_Team_1, class ATC_HexZone_C** Start_Team_2);
	void Get_Team_Zone_Capture(int Team, int* Num_Zones_Owned, float* Percentage_Owned);
	void Clamp_Ownership();
	void Init_Play_Hex_Data();
	void Destroy_Hex_Zones();
	void Create_Hex_Zones();
	void Can_Spawn_Hex(const struct FVector& WorldLocation, bool* Can_Spawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void State_Changed(class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	void Cache_Team_Hex_Ownership();
	void ExecuteUbergraph_TC_HexGraph(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
