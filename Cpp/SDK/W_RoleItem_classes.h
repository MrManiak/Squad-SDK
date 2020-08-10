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

// WidgetBlueprintGeneratedClass W_RoleItem.W_RoleItem_C
// 0x0148 (FullSize[0x0328] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04E5 - 0x0000 // Minimum to subtract -> (0050)
class UW_RoleItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04E5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04E5, class UWidgetAnimation*,                                               Open);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04E5, class UBorder*,                                                        Border_Main);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04E5, class UButton*,                                                        Button_Role);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04E5, class UImage*,                                                         IconRole);                                                 // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04E5, class UImage*,                                                         inf);                                                      // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04E5, class UImage*,                                                         lock);                                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04E5, class UImage*,                                                         SelectedLine);                                             // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04E5, class UTextBlock*,                                                     TBAvailable);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04E5, class UTextBlock*,                                                     TBName);                                                   // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04E5, class UWidgetSwitcher*,                                                WidgetSwitcher_Squad);                                     // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_04E5, class USQRoleSettings*,                                                RoleReferenceItem);                                        // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_04E5, TArray<class USQRoleSettings*>,                                        Sub_Role_Settings);                                        // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_04E5, class ASQPlayerController*,                                            My_PC);                                                    // 0x02A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_04E5, class ASQPlayerState*,                                                 My_PS);                                                    // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_04E5, class ASQTeamState*,                                                   My_TS);                                                    // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_04E5, bool,                                                                  Locked);                                                   // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D9 PADDING_04E5, bool,                                                                  selected);                                                 // 0x02B9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_04E5, struct FTimerHandle,                                                   Refresh_Timer);                                            // 0x02C0(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_04E5, struct FText,                                                          Availability);                                             // 0x02C8(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0100 PADDING_04E5, TEnumAsByte<E_RoleAvailability>,                                       Locked_State);                                             // 0x02E0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_04E5, struct FScriptMulticastDelegate,                                       Role_Selected);                                            // 0x02E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0118 PADDING_04E5, struct FScriptMulticastDelegate,                                       Role_Hovered);                                             // 0x02F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0128 PADDING_04E5, TArray<class UW_SubRoleItem_C*>,                                       Sub_Role_Items);                                           // 0x0308(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0138 PADDING_04E5, class UW_SubRoleOptions_C*,                                            Sub_Options);                                              // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_04E5, class UClass*,                                                         Sub_Role_Item_Class);                                      // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleItem.W_RoleItem_C");
		return ptr;
	}


	void Get_Availability(int* Current, int* Max);
	void Get_Is_Selected(bool* selected);
	void Get_Is_Locked(bool* Locked);
	void Open_Sub_Roles_or_Select_Role();
	void Init_Sub_Roles();
	struct FLinearColor Get_State_Color();
	void Set_Refresh_Timer_Active(bool Active);
	void Get_Player_State_and_PC();
	void Refresh_Data();
	void Refresh_Visuals();
	void BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Select_Role();
	void SubRole_Selected(class USQRoleSettings* Role);
	void ExecuteUbergraph_W_RoleItem(int EntryPoint);
	void Role_Hovered__DelegateSignature(class USQRoleSettings* Role, bool Hovered);
	void Role_Selected__DelegateSignature(class USQRoleSettings* Role);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
