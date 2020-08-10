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

// WidgetBlueprintGeneratedClass LevelSelector.LevelSelector_C
// 0x0110 (FullSize[0x02F0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04EA - 0x0000 // Minimum to subtract -> (0050)
class ULevelSelector_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04EA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04EA, class UWidgetAnimation*,                                               BounceAnim);                                               // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04EA, class UButton*,                                                        Button_Main);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04EA, class UMainMenu_Button_C*,                                             ButtonLINK);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04EA, class UImage*,                                                         Image_Main);                                               // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04EA, class UBorder*,                                                        InfoBG);                                                   // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04EA, class UTextBlock*,                                                     TB_Mode);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04EA, class UTextBlock*,                                                     TB_ModName);                                               // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04EA, struct FScriptMulticastDelegate,                                       Level_Selected);                                           // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04EA, struct FText,                                                          GOTO_Text);                                                // 0x0280(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_04EA, struct FText,                                                          Level_Text);                                               // 0x0298(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_04EA, struct FText,                                                          Mode_Text);                                                // 0x02B0(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_04EA, struct FString,                                                        Level_Name);                                               // 0x02C8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_04EA, struct FString,                                                        Level_Mode);                                               // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_04EA, class UTexture2D*,                                                     Level_Texture);                                            // 0x02E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelSelector.LevelSelector_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_LevelSelector(int EntryPoint);
	void Level_Selected__DelegateSignature(const struct FString& LevelName, const struct FString& Mode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
