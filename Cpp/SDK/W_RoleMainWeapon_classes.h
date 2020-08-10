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

// WidgetBlueprintGeneratedClass W_RoleMainWeapon.W_RoleMainWeapon_C
// 0x00B1 (FullSize[0x0291] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0143 - 0x0000 // Minimum to subtract -> (0050)
class UW_RoleMainWeapon_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0143, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0143, class UButton*,                                                        Button_Main);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0143, class UImage*,                                                         Image_MainWeapon);                                         // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0143, class UTextBlock*,                                                     Name_Primary);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0143, class UTextBlock*,                                                     TB_Amount_Primary);                                        // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0143, class USQRoleSettings*,                                                Role);                                                     // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0143, struct FScriptMulticastDelegate,                                       SubRole_Pressed);                                          // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0143, struct FScriptMulticastDelegate,                                       SubRole_Hovered);                                          // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0143, class ASQTeamState*,                                                   My_TS);                                                    // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0143, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0143, bool,                                                                  Locked);                                                   // 0x0290(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleMainWeapon.W_RoleMainWeapon_C");
		return ptr;
	}


	void Find_Name_of_Weapon_from_Image(class UObject* In_Texture, struct FText* Name, struct FSQInventoryData* Inventory);
	void Update_Selected();
	void Get_Item_Info(const struct FSQInventoryData& SQInventoryData, int* Item_Count);
	void Construct();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Refresh();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_RoleMainWeapon(int EntryPoint);
	void SubRole_Hovered__DelegateSignature(class USQRoleSettings* Role);
	void SubRole_Pressed__DelegateSignature(class USQRoleSettings* Role);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
