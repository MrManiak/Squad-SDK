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

// WidgetBlueprintGeneratedClass W_VehicleSeatList.W_VehicleSeatList_C
// 0x009C (FullSize[0x027C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04E3 - 0x0000 // Minimum to subtract -> (0050)
class UW_VehicleSeatList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04E3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04E3, class UWidgetAnimation*,                                               Fade);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04E3, class UGridPanel*,                                                     GridPanel_1);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04E3, class ASQPlayerController*,                                            My_PC);                                                    // 0x0248(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04E3, class ASQVehicle*,                                                     REF_Vehicle);                                              // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04E3, TArray<class UW_VehicleSeatInfo_C*>,                                   Seat_List_Info_Widgets);                                   // 0x0258(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04E3, float,                                                                 Last_Seat_Time);                                           // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04E3, struct FTimerHandle,                                                   Collapse_Timer);                                           // 0x0270(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04E3, float,                                                                 Show_Duration);                                            // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VehicleSeatList.W_VehicleSeatList_C");
		return ptr;
	}


	void Update_Seats();
	void Update_List();
	void Construct();
	void Refresh_Vehicle();
	void Play_Fade(TEnumAsByte<EUMGSequencePlayMode> PlayMode);
	void Collapse();
	void ExecuteUbergraph_W_VehicleSeatList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
