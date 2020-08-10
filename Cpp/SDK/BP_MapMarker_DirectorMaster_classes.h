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

// BlueprintGeneratedClass BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C
// 0x000C (FullSize[0x02AC] - InheritedSize[0x02A0])
// LastOffsetWithSize(0x02A0)
#define PADDING_0CA1 - 0x0000 // Minimum to subtract -> (0000)
class ABP_MapMarker_DirectorMaster_C : public ABP_GenericMapMarker_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CA1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CA1, float,                                                                 distance);                                                 // 0x02A8(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapMarker_DirectorMaster.BP_MapMarker_DirectorMaster_C");
		return ptr;
	}


	void Bind_To_Destroy(class AActor* Bind_To);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapMarker_DirectorMaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
