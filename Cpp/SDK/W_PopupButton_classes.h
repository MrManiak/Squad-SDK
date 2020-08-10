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

// WidgetBlueprintGeneratedClass W_PopupButton.W_PopupButton_C
// 0x009C (FullSize[0x027C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04D7 - 0x0000 // Minimum to subtract -> (0050)
class UW_PopupButton_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04D7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04D7, class UMainMenu_Button_C*,                                             MainMenu_Button_Development);                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04D7, struct FText,                                                          PopupButtonText);                                          // 0x0240(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04D7, struct FScriptMulticastDelegate,                                       Clicked);                                                  // 0x0258(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04D7, struct FLinearColor,                                                   Custom_Color);                                             // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04D7, int,                                                                   ID);                                                       // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PopupButton.W_PopupButton_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_W_PopupButton(int EntryPoint);
	void Clicked__DelegateSignature(int ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
