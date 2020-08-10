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

// BlueprintGeneratedClass BP_VehicleBayConsole.BP_VehicleBayConsole_C
// 0x0090 (FullSize[0x02C8] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_02DC - 0x0000 // Minimum to subtract -> (0010)
class ABP_VehicleBayConsole_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_02DC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02DC, class UStaticMeshComponent*,                                           StaticMesh);                                               // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02DC, class UBoxComponent*,                                                  InteractBox);                                              // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02DC, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02DC, struct FSQUsableData,                                                  Usable_Data);                                              // 0x0268(0x0040)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02DC, int,                                                                   Team);                                                     // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02DC, class ABP_VehicleBay_C*,                                               Vehicle_Bay);                                              // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02DC, bool,                                                                  Squad_Leader_Only);                                        // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0088 PADDING_02DC, class UClass*,                                                         Radial);                                                   // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleBayConsole.BP_VehicleBayConsole_C");
		return ptr;
	}


	bool ShouldDisplayPrompt(class AController* User);
	int GetInterfaceTeam();
	struct FSQUsableData GetUsableData();
	void ServerOnUsed(class AController* User);
	void ServerStopUsed(class AController* User);
	void BPDisplayPrompt(class AController* User);
	void BPHidePrompt();
	void BPOnUsed(class AController* User);
	void BPStopUsed(class AController* User);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VehicleBayConsole(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
