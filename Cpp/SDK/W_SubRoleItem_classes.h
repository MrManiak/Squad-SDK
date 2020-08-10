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

// WidgetBlueprintGeneratedClass W_SubRoleItem.W_SubRoleItem_C
// 0x0110 (FullSize[0x02F0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03B1 - 0x0000 // Minimum to subtract -> (0050)
class UW_SubRoleItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03B1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03B1, class UWidgetAnimation*,                                               Open);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03B1, class UBorder*,                                                        Border_Main);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03B1, class UButton*,                                                        Button_Role);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03B1, class UImage*,                                                         Image_MainWeapon);                                         // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03B1, class UTextBlock*,                                                     Name_Primary);                                             // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03B1, class UImage*,                                                         SelectedLine);                                             // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03B1, class UTextBlock*,                                                     TB_Amount_Primary);                                        // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03B1, class USQRoleSettings*,                                                RoleReferenceItem);                                        // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03B1, TArray<class USQRoleSettings*>,                                        Sub_Roles_Items);                                          // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03B1, class ASQPlayerController*,                                            My_PC);                                                    // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03B1, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03B1, class ASQTeamState*,                                                   My_TS);                                                    // 0x0298(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03B1, bool,                                                                  Locked);                                                   // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C1 PADDING_03B1, bool,                                                                  selected);                                                 // 0x02A1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_03B1, struct FTimerHandle,                                                   Refresh_Timer);                                            // 0x02A8(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03B1, struct FText,                                                          Availability);                                             // 0x02B0(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_03B1, TEnumAsByte<E_RoleAvailability>,                                       Squad_Locked);                                             // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03B1, struct FScriptMulticastDelegate,                                       Role_Selected);                                            // 0x02D0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0100 PADDING_03B1, struct FScriptMulticastDelegate,                                       Role_Hovered);                                             // 0x02E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SubRoleItem.W_SubRoleItem_C");
		return ptr;
	}


	void Get_Item_Info(const struct FSQInventoryData& SQInventoryData, int* Item_Count);
	void Get_Weapon_Name(struct FText* Name, struct FSQInventoryData* Inventory);
	void Get_Is_Selected(bool* selected);
	void Get_Is_Locked(bool* Locked);
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
	void ExecuteUbergraph_W_SubRoleItem(int EntryPoint);
	void Role_Hovered__DelegateSignature(class USQRoleSettings* Role, bool Hovered);
	void Role_Selected__DelegateSignature(class USQRoleSettings* Role);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
