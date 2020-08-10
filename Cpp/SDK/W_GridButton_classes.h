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

// WidgetBlueprintGeneratedClass W_GridButton.W_GridButton_C
// 0x00F8 (FullSize[0x02D8] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CB7 - 0x0000 // Minimum to subtract -> (0050)
class UW_GridButton_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CB7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CB7, class UButton*,                                                        Button_Main);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CB7, class UImage*,                                                         Icon);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CB7, class UWidgetSwitcher*,                                                Switch_IconText);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CB7, class UTextBlock*,                                                     TB_ID);                                                    // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CB7, TEnumAsByte<E_HeaderDirection>,                                        Parent_Draw_Direction);                                    // 0x0258(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0079 PADDING_0CB7, TEnumAsByte<E_HeaderDirection>,                                        Build_Direction);                                          // 0x0259(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CB7, class UTexture2D*,                                                     Button_Icon);                                              // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CB7, struct FLinearColor,                                                   Icon_Color);                                               // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CB7, class UW_GridHeader_C*,                                                Header_Parent);                                            // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CB7, bool,                                                                  Parent_Button);                                            // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_0CB7, bool,                                                                  Actions_Visible);                                          // 0x0281(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CB7, class UClass*,                                                         Default_Map_Marker);                                       // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CB7, class UClass*,                                                         Action_List_Class);                                        // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0CB7, struct FText,                                                          Tooltip);                                                  // 0x0298(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0CB7, TArray<class UClass*>,                                                 Action_List);                                              // 0x02B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0CB7, class UW_Grid_ActionList_C*,                                           REF_Action_List);                                          // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0CB7, int,                                                                   Fireteam_ID);                                              // 0x02C8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0CB7, int,                                                                   Squad_ID);                                                 // 0x02CC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0CB7, class USQMapMarkerDataAsset*,                                          MapMarkerData);                                            // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridButton.W_GridButton_C");
		return ptr;
	}


	void Get_Text(struct FText* Text);
	void Get_Squad_ID(int* ID);
	void Get_Color(struct FLinearColor* Icon_Color);
	void Draw_List();
	void Get_Fireteam_ID(int* ID);
	class UWidget* Get_Button_Main_ToolTipWidget_1();
	void Close_Actions();
	void Show_Actions();
	void Update_Appearance();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Grid_Button_Pressed();
	void ExecuteUbergraph_W_GridButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
