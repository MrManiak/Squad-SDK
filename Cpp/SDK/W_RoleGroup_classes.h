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

// WidgetBlueprintGeneratedClass W_RoleGroup.W_RoleGroup_C
// 0x00E0 (FullSize[0x02C0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0369 - 0x0000 // Minimum to subtract -> (0050)
class UW_RoleGroup_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0369, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0369, class UImage*,                                                         Image_1);                                                  // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0369, class UImage*,                                                         Image_2);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0369, class UImage*,                                                         Image_3);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0369, class UVerticalBox*,                                                   RoleBox);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0369, class UTextBlock*,                                                     TBGroupName);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0369, ESQRoleTypeEnum,                                                       Role_Type);                                                // 0x0260(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0369, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0369, class ASQPlayerController*,                                            My_PC);                                                    // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0369, class ASQTeamState*,                                                   My_TS);                                                    // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0369, struct FText,                                                          Group_Name);                                               // 0x0280(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0369, bool,                                                                  Has_Roles);                                                // 0x0298(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0369, TArray<class UW_RoleItem_C*>,                                          Group_Role_Widgets);                                       // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0369, class UW_RoleList_C*,                                                  Role_List_Parent);                                         // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0369, class UClass*,                                                         Role_Item_Widget_Class);                                   // 0x02B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleGroup.W_RoleGroup_C");
		return ptr;
	}


	void Get_Role_Panel(class UPanelWidget** RoleBox);
	void Populate_List();
	void Get_Role_in_List_(class USQRoleSettings* Target, bool* Exists_);
	void PreConstruct(bool IsDesignTime);
	void Init_Group_Roles(class ASQPlayerController* My_PC, class ASQPlayerState* My_PS, class ASQTeamState* My_TS, class UW_RoleList_C* Role_List);
	void ExecuteUbergraph_W_RoleGroup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
