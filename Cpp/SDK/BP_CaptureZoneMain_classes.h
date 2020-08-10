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

// BlueprintGeneratedClass BP_CaptureZoneMain.BP_CaptureZoneMain_C
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_02F3 - 0x0000 // Minimum to subtract -> (0010)
class ABP_CaptureZoneMain_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_02F3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02F3, class USphereComponent*,                                               Sphere);                                                   // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02F3, class USQCaptureZoneResourceComponent*,                                SQCaptureZoneResource);                                    // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02F3, class USQCaptureZoneComponent*,                                        SQCaptureZone);                                            // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02F3, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaptureZoneMain.BP_CaptureZoneMain_C");
		return ptr;
	}


	int GetTeamId();
	void OnTeamChange(int PreviousTeam);
	void ExecuteUbergraph_BP_CaptureZoneMain(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
