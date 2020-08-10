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

// WidgetBlueprintGeneratedClass W_CommandRequestList.W_CommandRequestList_C
// 0x0060 (FullSize[0x02A8] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_0311 - 0x0000 // Minimum to subtract -> (0000)
class UW_CommandRequestList_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0311, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0311, class UVerticalBox*,                                                   ActionList);                                               // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0311, class UMainMenu_Button_C*,                                             Button_Accept);                                            // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0311, class UMainMenu_Button_C*,                                             Button_Deny);                                              // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0311, class UWidgetSwitcher*,                                                MainSwitch);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0311, class ABP_MapMarker_Command_Request_C*,                                Command_Map_Marker);                                       // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0311, class ASQPlayerController*,                                            My_PC);                                                    // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0311, class USQMapWidgetMapMarkerSelectable*,                                Current_Marker);                                           // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0311, class ASQPlayerState*,                                                 Current_Commander);                                        // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0311, struct FVector,                                                        Command_Zero_Location);                                    // 0x0290(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0311, class UClass*,                                                         Command_Category);                                         // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandRequestList.W_CommandRequestList_C");
		return ptr;
	}


	void Init_Action_List();
	void Remove_Other_Request_Lists();
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Construct();
	void Remove_list();
	void Control_Widget_Created(class UW_Command_ActionControl_C* Widget);
	void Placement_Complete();
	void ExecuteUbergraph_W_CommandRequestList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
