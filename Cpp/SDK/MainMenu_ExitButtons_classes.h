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

// WidgetBlueprintGeneratedClass MainMenu_ExitButtons.MainMenu_ExitButtons_C
// 0x0088 (FullSize[0x0268] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_027F - 0x0000 // Minimum to subtract -> (0050)
class UMainMenu_ExitButtons_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_027F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_027F, class UMainMenu_Button_C*,                                             ButtonEXIT);                                               // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_027F, class UBorder*,                                                        HoverCheckArea);                                           // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_027F, class UImage*,                                                         Line);                                                     // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_027F, class UMainMenu_Button_C*,                                             MainMenu_Button_Development);                              // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_027F, bool,                                                                  was_hovered);                                              // 0x0258(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0080 PADDING_027F, class UMainMenuScreen_C*,                                              REF_MainMenu);                                             // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu_ExitButtons.MainMenu_ExitButtons_C");
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_MainMenu_ExitButtons(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
