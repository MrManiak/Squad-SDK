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

// BlueprintGeneratedClass BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C
// 0x000F (FullSize[0x02C8] - InheritedSize[0x02B9])
class ABP_MapMarker_Command_Request_C : public ABP_MapMarker_CommandMaster_C
{
public:
	unsigned char                                      UnknownData_U51J[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapMarker_Command_Request.BP_MapMarker_Command_Request_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Owner_Accept_Deny(bool Accepted);
	void ExecuteUbergraph_BP_MapMarker_Command_Request(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
