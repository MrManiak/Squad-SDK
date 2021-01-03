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

// BlueprintGeneratedClass BP_HighlightsSubsystem.BP_HighlightsSubsystem_C
// 0x0128 (FullSize[0x0168] - InheritedSize[0x0040])
class UBP_HighlightsSubsystem_C : public USQBaseGameSubsystem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               HighlightsInitialized;                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G4BP[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGfeSDKHighlightOpenGroupParams             HighlightOpenGroupParams;                                  // 0x0050(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGfeSDKHighlightSummaryParams               HighlightsSummaryParams;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGfeSDKHighlightConfigParams                HighlightsConfigParams;                                    // 0x00C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ActiveGroupId;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DestroyHighlights;                                         // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GGPG[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHighlightEventStruct                       VehicleDestroyedEventParams;                               // 0x00E8(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FHighlightEventStruct                       PlayerKilledEventParams;                                   // 0x0110(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FHighlightEventStruct                       IED_DetonatedEventParams;                                  // 0x0138(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EGfeSDKHighlightSignificance                       EventSignificance;                                         // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGfeSDKHighlightType                               HighlightType;                                             // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3B5L[0x2];                                     // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfHighlights;                                        // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HighlightsSubsystem.BP_HighlightsSubsystem_C");
		return ptr;
	}



	void ExplosiveDetonated(class ASQPlayerController* Instigator, bool* RecordEvent);
	void CloseHighlightsGroup();
	void OpenHighlightsGroup(int GroupId);
	void PlayerKilled(class ASQPlayerController* Killer, class ASQPlayerController* KilledPlayer, bool* RecordEvent);
	void GetPlayerWeapon(class ASQPlayerController* PlayerController, class ASQEquipableItem** Weapon);
	void VehicleDestroyed(class ASQPlayerController* Killer, class ASQVehicle* Vehicle, bool* RecordEvent);
	void Initialize();
	void OnFailure_C7489B0A418819FCB36C9DBCE5F2CBCE(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_C7489B0A418819FCB36C9DBCE5F2CBCE(EGfeSDKReturnCode GfeSdkReturnCode, const struct FGfeSDKCreateResponse& GfeSdkProperties);
	void OnFailure_F1AC158747E026E10731C8849D2B3257(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_F1AC158747E026E10731C8849D2B3257(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_A84C3C164836D3ACA87616BAE86BEF45(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_A84C3C164836D3ACA87616BAE86BEF45(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_73D8E28E4AC20756426FB7891826A0B9(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_73D8E28E4AC20756426FB7891826A0B9(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_64FDD2BF42329C6C29C09BA4C9DE3535(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_64FDD2BF42329C6C29C09BA4C9DE3535(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_3596E8AA4CA50D765158CAAA52397BFF(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_3596E8AA4CA50D765158CAAA52397BFF(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_67D0029B488CA8168AA634809699BEA3(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_67D0029B488CA8168AA634809699BEA3(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_B0B6A34F4ABC7594EC1560897BB6E69E(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_B0B6A34F4ABC7594EC1560897BB6E69E(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_84C233334450389DA1183DB4D24E94F1(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_84C233334450389DA1183DB4D24E94F1(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_3752EC094E2D2F5B596322B1AF0BBE42(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_3752EC094E2D2F5B596322B1AF0BBE42(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_093B37B54B9F772075A0F8B78CFE6B8A(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_093B37B54B9F772075A0F8B78CFE6B8A(EGfeSDKReturnCode GfeSdkReturnCode);
	void InitializeSubsystem(class USQGameInstance* SquadGameInstance);
	void TickSubsystem(float DeltaTime);
	void OnGameEnded_Event(class ASQPlayerController* SQPlayerController);
	void OnGameStarted(class ASQPlayerController* SQPlayerController);
	void OnPlayerDetonateExplosive(class ASQPlayerController* Instigator);
	void OnEnteredMainMenu(class ASQPlayerController* SQPlayerController);
	void OnPlayerDestroyedVehicle(class ASQPlayerController* Killer, class ASQVehicle* Vehicle);
	void OnPlayerWounded(class ASQPlayerController* Killer, class ASQPlayerController* KilledPlayer);
	void ExecuteUbergraph_BP_HighlightsSubsystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
