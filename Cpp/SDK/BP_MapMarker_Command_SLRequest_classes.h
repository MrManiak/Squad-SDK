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

// BlueprintGeneratedClass BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C
// 0x000F (FullSize[0x02C8] - InheritedSize[0x02B9])
// LastOffsetWithSize(0x02B9)
#define PADDING_0285 - 0x0000 // Minimum to subtract -> (0007)
class ABP_MapMarker_Command_SLRequest_C : public ABP_MapMarker_CommandMaster_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0285, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02C0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapMarker_Command_SLRequest.BP_MapMarker_Command_SLRequest_C");
		return ptr;
	}


	void SetSquad(int Squad);
	void ReceiveBeginPlay();
	void Owner_SL_Notify();
	void ExecuteUbergraph_BP_MapMarker_Command_SLRequest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
