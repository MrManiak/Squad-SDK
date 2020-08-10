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

// WidgetBlueprintGeneratedClass ModItem.ModItem_C
// 0x0180 (FullSize[0x0360] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0355 - 0x0000 // Minimum to subtract -> (0050)
class UModItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0355, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0355, class UWidgetAnimation*,                                               BounceAnim);                                               // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0355, class UButton*,                                                        Button_Mod);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0355, class UMainMenu_Button_C*,                                             ButtonLINK);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0355, class UCircularThrobber*,                                              CircularThrobber_1);                                       // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0355, class UImage*,                                                         Image_1);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0355, class UBorder*,                                                        InfoBG);                                                   // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0355, class UImage*,                                                         Star1);                                                    // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0355, class UImage*,                                                         Star2);                                                    // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0355, class UImage*,                                                         Star3);                                                    // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0355, class UImage*,                                                         Star4);                                                    // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0355, class UImage*,                                                         Star5);                                                    // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0355, class UTextBlock*,                                                     TB_ModName);                                               // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0355, class UWidgetSwitcher*,                                                WidgetSwitcher_1);                                         // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0355, struct FModdingRuntimeModInfoDetails,                                  ModInfo);                                                  // 0x02A0(0x00A0)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0160 PADDING_0355, float,                                                                 Rate);                                                     // 0x0340(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0168 PADDING_0355, struct FScriptMulticastDelegate,                                       Mod_Selected);                                             // 0x0348(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0178 PADDING_0355, class UTexture2DDynamic*,                                              Texture);                                                  // 0x0358(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ModItem.ModItem_C");
		return ptr;
	}


	void Refresh_Mod();
	void OnFail_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture);
	void OnSuccess_8A86417A45928AEC81E697912B573E34(class UTexture2DDynamic* Texture);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonLINK_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ModItem(int EntryPoint);
	void Mod_Selected__DelegateSignature(const struct FModdingRuntimeModInfoDetails& ModInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
