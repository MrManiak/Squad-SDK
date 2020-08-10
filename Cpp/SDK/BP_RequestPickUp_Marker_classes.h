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

// BlueprintGeneratedClass BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
// LastOffsetWithSize(0x02A0)
#define PADDING_0060 - 0x0000 // Minimum to subtract -> (0000)
class ABP_RequestPickUp_Marker_C : public ABP_SpottedMapMarker_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0060, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RequestPickUp_Marker.BP_RequestPickUp_Marker_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RequestPickUp_Marker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
