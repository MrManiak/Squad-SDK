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

// WidgetBlueprintGeneratedClass W_RoleQuickItem.W_RoleQuickItem_C
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
// LastOffsetWithSize(0x0328)
#define PADDING_0411 - 0x0000 // Minimum to subtract -> (0000)
class UW_RoleQuickItem_C : public UW_RoleItem_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0411, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0328(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0411, class UBorder*,                                                        Border_Main_Quick);                                        // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0411, class UButton*,                                                        Button_Role_Quick);                                        // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0411, class UImage*,                                                         IconRole_Quick);                                           // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0411, TArray<class UW_RoleMainWeapon_C*>,                                    Sub_Roles_1);                                              // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0411, class UW_SubRoleOptions_C*,                                            Sub_Options_1);                                            // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0411, struct FText,                                                          Availability_1);                                           // 0x0360(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleQuickItem.W_RoleQuickItem_C");
		return ptr;
	}


	struct FLinearColor Get_State_Color();
	class UWidget* Get_Button_Role_ToolTipWidget_1();
	void Refresh_Quick_Visuals();
	void BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_Role_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void Refresh_Visuals();
	void ExecuteUbergraph_W_RoleQuickItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
