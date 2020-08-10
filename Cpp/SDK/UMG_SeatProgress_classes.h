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

// WidgetBlueprintGeneratedClass UMG_SeatProgress.UMG_SeatProgress_C
// 0x004B (FullSize[0x02AC] - InheritedSize[0x0261])
// LastOffsetWithSize(0x0261)
#define PADDING_0CD2 - 0x0000 // Minimum to subtract -> (0007)
class UUMG_SeatProgress_C : public USQSeatProgressWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0CD2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0268(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_0CD2, class UCanvasPanel*,                                                   CanvasPanel_Main);                                         // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0CD2, class UUMG_VehicleAmmo_C*,                                             UMG_VehicleCargoSmall);                                    // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_0CD2, ESlateVisibility,                                                      Desired_Visibility);                                       // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_0CD2, class UBaseRadialMenu_C*,                                              Vehicle_Radial);                                           // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_0CD2, class ASQPlayerController*,                                            My_PC);                                                    // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0CD2, struct FTimerHandle,                                                   UpdateFTextTimerHandle);                                   // 0x0298(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003F PADDING_0CD2, class URadialCenterVehicle_C*,                                         RadialCenterVehicle);                                      // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0047 PADDING_0CD2, float,                                                                 ValidRadialModelEnteringDuration);                         // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
