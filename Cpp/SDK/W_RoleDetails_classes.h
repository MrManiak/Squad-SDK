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

// WidgetBlueprintGeneratedClass W_RoleDetails.W_RoleDetails_C
// 0x0130 (FullSize[0x0370] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_0CB4 - 0x0000 // Minimum to subtract -> (0000)
class UW_RoleDetails_C : public USQToolTipBaseWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CB4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CB4, class UImage*,                                                         Bar);                                                      // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CB4, class UBorder*,                                                        Border_Details);                                           // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CB4, class UBorder*,                                                        Border_Info);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0CB4, class UBorder*,                                                        BorderPreviewMessage);                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0CB4, class UButton*,                                                        Button_MainWeapon);                                        // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0CB4, class UButton*,                                                        Button_Secondary);                                         // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0CB4, class UButton*,                                                        Button_Special);                                           // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0CB4, class UImage*,                                                         Image_8);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0CB4, class UImage*,                                                         Image_MainWeapon);                                         // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CB4, class UImage*,                                                         Image_Secondary);                                          // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CB4, class UImage*,                                                         Image_Special);                                            // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CB4, class UTextBlock*,                                                     Name_Description);                                         // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CB4, class UTextBlock*,                                                     Name_Primary);                                             // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CB4, class UTextBlock*,                                                     TB_Amount_Primary);                                        // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CB4, class UTextBlock*,                                                     TB_Amount_Secondary);                                      // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CB4, class UTextBlock*,                                                     TB_Amount_Special);                                        // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CB4, class UTextBlock*,                                                     TB_Preview);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CB4, class UTextBlock*,                                                     TextBlock_Description);                                    // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CB4, class UVerticalBox*,                                                   V_SubRoles);                                               // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CB4, class UVerticalBox*,                                                   VerticalBox_Backpack);                                     // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CB4, class ASQEquipableItem*,                                               Primary);                                                  // 0x02E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CB4, class ASQEquipableItem*,                                               Secondary);                                                // 0x02F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0CB4, class ASQEquipableItem*,                                               Special);                                                  // 0x02F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0CB4, struct FSQInventoryData,                                               Primary_Data);                                             // 0x0300(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0CB4, struct FSQInventoryData,                                               Secondary_Data);                                           // 0x0318(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0CB4, struct FSQInventoryData,                                               Special_Data);                                             // 0x0330(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0CB4, bool,                                                                  SubRoles_Open);                                            // 0x0348(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0CB4, class UW_RoleSelect_C*,                                                Role_Select);                                              // 0x0350(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0CB4, class ASQPlayerController*,                                            My_PC);                                                    // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0CB4, bool,                                                                  Has_Sub_Roles);                                            // 0x0360(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0CB4, class USQRoleSettings*,                                                Latest_Role);                                              // 0x0368(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleDetails.W_RoleDetails_C");
		return ptr;
	}


	void Init_Main_Weapon_Button();
	void Set_Preview_Message();
	void Get_Item_Info(const struct FSQInventoryData& Primary_Data, int* Item_Count);
	void Clear_All();
	void Refresh_Main_Icons();
	void Refresh_Description(class ASQEquipableItem* Target);
	void Update_Details(class USQRoleSettings* RoleReference);
	void BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Sub_Role_Selected(class USQRoleSettings* RoleReference);
	void Sub_Role_Hovered(class USQRoleSettings* RoleReference);
	void Construct();
	void Refresh();
	void ExecuteUbergraph_W_RoleDetails(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
