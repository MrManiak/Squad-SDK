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

// BlueprintGeneratedClass BP_WaypointMapMarker.BP_WaypointMapMarker_C
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
// LastOffsetWithSize(0x02A0)
#define PADDING_04AC - 0x0000 // Minimum to subtract -> (0000)
class ABP_WaypointMapMarker_C : public ABP_GenericMapMarker_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04AC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaypointMapMarker.BP_WaypointMapMarker_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WaypointMapMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
