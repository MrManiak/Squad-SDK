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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C
// 0x0070 (FullSize[0x02D8] - InheritedSize[0x0268])
// LastOffsetWithSize(0x0261)
#define PADDING_02D8 - 0x0000 // Minimum to subtract -> (0007)
class UBP_MarkerWidget_Vehicle_C : public USQMapVehicleIconWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_02D8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0268(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_02D8, class UCanvasPanel*,                                                   Canvas_SquadNum);                                          // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_02D8, class UBorder*,                                                        SquadID_Circle);                                           // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_02D8, class UTextBlock*,                                                     SquadID_Text);                                             // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_02D8, class UImage*,                                                         Vehicle_Image);                                            // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_02D8, class UImage*,                                                         ViewCone);                                                 // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0037 PADDING_02D8, class UOverlay*,                                                       WidgetOverlay);                                            // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003F PADDING_02D8, struct FScriptMulticastDelegate,                                       CloseTooltip);                                             // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x004F PADDING_02D8, class UTexture2D*,                                                     VehicleImage);                                             // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0057 PADDING_02D8, float,                                                                 StateUpdateTime);                                          // 0x02B8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005B PADDING_02D8, struct FLinearColor,                                                   SelfColor);                                                // 0x02BC(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006F PADDING_02D8, class ASQPlayerController*,                                            Owning_PC);                                                // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_Vehicle.BP_MarkerWidget_Vehicle_C");
		return ptr;
	}


	void Get_1st_Occupant_Info(bool* Success, bool* Leader, bool* Same_Squad, struct FText* ID);
	void UpdateSquadInfo();
	void Get_Claimed_By(bool* Is_Claimed, int* Claim_ID);
	void GetLocalSeat(class USQVehicleSeatComponent** Seat);
	void IsLocalInDriverSeat(bool* Driver);
	void UpdateAngles();
	void IsInVehicle(bool* InVehicle);
	void UpdateVehicleConeVisbility();
	void IsVehicleEmpty(bool* Empty);
	void GetVehicle(class ASQVehicle** Vehicle);
	void IsSameSquad(bool* SquadVehicle);
	void IsSameTeam(bool* SameTeam);
	void IsNeutralTeam(bool* IsNeutralTeam);
	void GetVehicleIcon(class UTexture** NewParam);
	void UpdateVehicleBrush();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateStateEvent();
	void UpdateVisibilityEvent();
	void ExecuteUbergraph_BP_MarkerWidget_Vehicle(int EntryPoint);
	void CloseTooltip__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
