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

// BlueprintGeneratedClass TC_HexGraph.TC_HexGraph_C
// 0x0110 (FullSize[0x0358] - InheritedSize[0x0248])
class ATC_HexGraph_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTCScalableBleedComponent_C*                 TCScalableBleedComponent;                                  // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               NoCollisionDebugExtent;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         HexBillboard;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                            Spline;                                                    // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Hex_Extent;                                                // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TGVW[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATC_HexZone_C*>                       TC_Zones;                                                  // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      Hex_Max_Distance_From_Spline;                              // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Hex_XY_Scale;                                              // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Start_Spline_Ownership;                                    // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              End_Spline_Ownership;                                      // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Test_Setup_Once;                                           // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Use_Hex_Control___as_Win_Condition;                        // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O9I7[0x2];                                     // 0x02AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Hex_Control___Target_to_Win;                               // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Test_Constant;                                             // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FYVY[0x3];                                     // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Hex_Z_Scale;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Flip_Teams;                                                // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NXP0[0x3];                                     // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Width_Spacer;                                              // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height_Spacer;                                             // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hex_Widths;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hex_Lengths;                                               // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          Hex_Transform_Array;                                       // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Start_Random_Anchor_Distance;                              // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              End_Random_Anchor_Distance;                                // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATC_HexZone_C*>                       Team_1_Anchors;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ATC_HexZone_C*>                       Team_2_Anchors;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ATC_HexZone_C*                               Team_1_Anchor;                                             // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATC_HexZone_C*                               Team_2_Anchor;                                             // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATC_HexZone_C*>                       Current_Hexes_in_Round;                                    // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int>                                        Team_Hex_Ownership;                                        // 0x0328(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                Target_Zones_To_Capture;                                   // 0x0338(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4VMK[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Hex_Class;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_Capture_Duration;                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Nearby_Hexes_Required_To_Cap;                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Uncapped_Required_Players;                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capped_Required_Players;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
