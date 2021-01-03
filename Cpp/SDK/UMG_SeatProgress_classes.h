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

// WidgetBlueprintGeneratedClass UMG_SeatProgress.UMG_SeatProgress_C
// 0x0068 (FullSize[0x02D0] - InheritedSize[0x0268])
class UUMG_SeatProgress_C : public USQSeatProgressWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_Main;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_VehicleAmmoExtended_C*                  UMG_VehicleAmmoExtended;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESlateVisibility                                   Desired_Visibility;                                        // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V2PI[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseRadialMenu_C*                           Vehicle_Radial;                                            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         My_PC;                                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateFTextTimerHandle;                                    // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URadialCenterVehicle_C*                      RadialCenterVehicle;                                       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValidRadialModelEnteringDuration;                          // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HP2X[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ShowedSeatProgress;                                        // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ClosedSeatProgress;                                        // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeatProgress.UMG_SeatProgress_C");
		return ptr;
	}



	void Close_Radial_Menu();
	void Update_Visibility(bool Force, ESlateVisibility Selection);
	void Create_Radial(bool* Success);
	void Construct();
	void BPOnTimerStarted();
	void BPOnTimerCanceled();
	void CloseProgressWidget();
	void BPOnShowVehicleInventory();
	void BPOnTimerReached();
	void BPOnTimerProgress(float RemainingPct);
	void BPOnTimerPaused();
	void BPOnTimerResumed();
	void ExecuteUbergraph_UMG_SeatProgress(int EntryPoint);
	void ClosedSeatProgress__DelegateSignature();
	void ShowedSeatProgress__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
