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

// BlueprintGeneratedClass BP_MapMarker_CommandMaster.BP_MapMarker_CommandMaster_C
// 0x0019 (FullSize[0x02B9] - InheritedSize[0x02A0])
// LastOffsetWithSize(0x02A0)
#define PADDING_0007 - 0x0000 // Minimum to subtract -> (0000)
class ABP_MapMarker_CommandMaster_C : public ABP_GenericMapMarker_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0007, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0007, float,                                                                 distance);                                                 // 0x02A8(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0007, class UClass*,                                                         Action);                                                   // 0x02B0(0x0008)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0007, bool,                                                                  Request);                                                  // 0x02B8(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapMarker_CommandMaster.BP_MapMarker_CommandMaster_C");
		return ptr;
	}


	void Bind_To_Destroy(class AActor* Bind_To);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_MapMarker_CommandMaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
