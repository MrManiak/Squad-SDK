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

// WidgetBlueprintGeneratedClass W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_02BF - 0x0000 // Minimum to subtract -> (0000)
class UW_CommandRequestSLConfirm_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02BF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02BF, class UBorder*,                                                        Border_Timer);                                             // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02BF, class UMainMenu_Button_C*,                                             Button_Accept);                                            // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02BF, class UMainMenu_Button_C*,                                             Button_Deny);                                              // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02BF, class UWidgetSwitcher*,                                                MainSwitch);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02BF, class UTextBlock*,                                                     TB_Timer);                                                 // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02BF, bool,                                                                  Available);                                                // 0x0278(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02BF, class ASQPlayerController*,                                            My_PC);                                                    // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02BF, class USQMapWidgetMapMarkerSelectable*,                                Map_Marker_Widget);                                        // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02BF, class ABP_MapMarker_CommandMaster_C*,                                  SL_Command_Request_Marker);                                // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C");
		return ptr;
	}


	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_CommandRequestSLConfirm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
