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

// BlueprintGeneratedClass BP_Squad.BP_Squad_C
// 0x0028 (FullSize[0x06D8] - InheritedSize[0x06B0])
// LastOffsetWithSize(0x06B0)
#define PADDING_0007 - 0x0000 // Minimum to subtract -> (0020)
class ABP_Squad_C : public ASQSquad
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_0007, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x06D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Squad.BP_Squad_C");
		return ptr;
	}


	void On_Leave_Event(class ASQSquad* Squad, class AController* Joining_State);
	void Become_SL_Notification(class ASQSquad* State);
	void Parting_Notification(class ASQSquad* Squad, class AController* Leaving_State);
	void Fireteam_Notification(class ASQSquad* Squad, int FT);
	void Destroy_Fireteam_Markers(int ID);
	void Destroy_All_Markers();
	void ReceiveDestroyed();
	void OnFireteamDisbanded_Event_1(class ASQSquad* Squad, int FireTeamId);
	void ReceiveBeginPlay();
	void OnFireteamUpdated_Event_1(class ASQSquad* Squad, int FireTeamId);
	void OnPlayerPartSquad_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player);
	void OnPlayerJoinSquad_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player);
	void OnPlayerBecomeSquadLeader_Event_1(class ASQSquad* Squad, class ASQPlayerController* Player);
	void ExecuteUbergraph_BP_Squad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
