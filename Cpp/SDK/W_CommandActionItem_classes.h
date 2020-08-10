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

// WidgetBlueprintGeneratedClass W_CommandActionItem.W_CommandActionItem_C
// 0x015A (FullSize[0x033A] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0345 - 0x0000 // Minimum to subtract -> (0050)
class UW_CommandActionItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0345, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0345, class UBorder*,                                                        Border);                                                   // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0345, class UButton*,                                                        Button_Main);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0345, class UImage*,                                                         Icon);                                                     // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0345, class UTextBlock*,                                                     Name);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0345, class UTextBlock*,                                                     TB_State);                                                 // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0345, class UTextBlock*,                                                     TB_Time);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0345, class UImage*,                                                         Timer);                                                    // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0345, class UClass*,                                                         SQCommand_Data);                                           // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0345, class UMaterialInstanceDynamic*,                                       MI_Timer);                                                 // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0345, struct FLinearColor,                                                   Current_State_Color);                                      // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0345, struct FLinearColor,                                                   Active_Color);                                             // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0345, struct FLinearColor,                                                   Cooldown_Color);                                           // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0345, struct FLinearColor,                                                   Enroute_Color);                                            // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0345, struct FLinearColor,                                                   Ready_Color);                                              // 0x02C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0345, int,                                                                   Interval_Index);                                           // 0x02D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_0345, float,                                                                 Time_Remaining);                                           // 0x02D4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0345, class ASQPlayerController*,                                            My_PC);                                                    // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0345, bool,                                                                  Can_Execute_Command);                                      // 0x02E0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0101 PADDING_0345, bool,                                                                  Use_Pre_Placement);                                        // 0x02E1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0345, struct FString,                                                        Description);                                              // 0x02E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0345, bool,                                                                  Force_Allowed);                                            // 0x02F8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x011C PADDING_0345, struct FVector,                                                        Zero_Based_World_Location);                                // 0x02FC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0345, class UW_CommandPrePlacement_C*,                                       Pre_Placement_Widget);                                     // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0345, struct FScriptMulticastDelegate,                                       Clicked);                                                  // 0x0310(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0140 PADDING_0345, class UBP_CommanderActionCondition_C*,                                 Command_Condition);                                        // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0148 PADDING_0345, struct FScriptMulticastDelegate,                                       Created_Control_Widget);                                   // 0x0328(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0158 PADDING_0345, bool,                                                                  Category_Enabled);                                         // 0x0338(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0159 PADDING_0345, bool,                                                                  Button_Cooldown);                                          // 0x0339(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandActionItem.W_CommandActionItem_C");
		return ptr;
	}


	void Remove_Other_Pending_Actions();
	void Get_Pre_Placement_Widget(class UW_CommandPrePlacement_C** Widget);
	void Auto_Spawn_Action();
	void Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local);
	class UWidget* Get_Tooltip_Widget();
	void Get_Category_Cooldown(bool* Locked, float* Remaining);
	void Get_State(ESQCommandOptionState* State, float* State_Time, float* State_Percent, bool* Locked, float* Category_Time, float* Category_Percent);
	void Update_Color(bool Faded);
	void Update_State();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Event_Control_Widget(class UW_Command_ActionControl_C* Widget);
	void Start_Button_Cooldown();
	void Fail_Message();
	void ExecuteUbergraph_W_CommandActionItem(int EntryPoint);
	void Created_Control_Widget__DelegateSignature(class UW_Command_ActionControl_C* Widget);
	void Clicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
