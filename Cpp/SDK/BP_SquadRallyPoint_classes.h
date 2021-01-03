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

// BlueprintGeneratedClass BP_SquadRallyPoint.BP_SquadRallyPoint_C
// 0x0058 (FullSize[0x0480] - InheritedSize[0x0428])
class ABP_SquadRallyPoint_C : public ASQSquadRallyPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               InteractBox;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Rally_Static_Sound;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSQUsableData                               Data;                                                      // 0x0440(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SquadRallyPoint.BP_SquadRallyPoint_C");
		return ptr;
	}



	bool BindEventToAmmoUpdated(const struct FScriptDelegate& Delegate);
	bool CanRearmPawn(class APawn* Rearmer);
	bool CanRearmWeapon(class ASQEquipableItem* Weapon);
	bool ConsumeAmmo(float AmmoRequired);
	float GetAmmo();
	struct FString GetRearmNoAmmoString();
	struct FString GetRearmSuccessString();
	ESQRearmType GetRearmType();
	bool UnbindEventToAmmoUpdated(const struct FScriptDelegate& Delegate);
	bool ShouldDisplayPrompt(class AController* User);
	int GetInterfaceTeam();
	struct FSQUsableData GetUsableData();
	void Player_Left_Radius(class APlayerController* Player);
	void BPStopUsed(class AController* User);
	void ServerOnUsed(class AController* User);
	void ServerStopUsed(class AController* User);
	void BPDisplayPrompt(class AController* User);
	void BPHidePrompt();
	void BPOnUsed(class AController* User);
	void Pickup_Item(class APlayerController* Player);
	void ServerPickupRallyPoint(class APlayerController* Player);
	void Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup);
	void ExecuteUbergraph_BP_SquadRallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
