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

// WidgetBlueprintGeneratedClass W_SlideComponent.W_SlideComponent_C
// 0x00EA (FullSize[0x02CA] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0298 - 0x0000 // Minimum to subtract -> (0050)
class UW_SlideComponent_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0298, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0298, class UBorder*,                                                        Border_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0298, class UBackgroundBlur*,                                                ContentBG);                                                // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0298, class UImage*,                                                         Icon);                                                     // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0298, class UButton*,                                                        SlideButton);                                              // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0298, class UTextBlock*,                                                     TB_Name);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0298, class ABP_PlayerController_C*,                                         PC);                                                       // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0298, class UClass*,                                                         Widget_Class);                                             // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0298, bool,                                                                  Open);                                                     // 0x0270(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0298, class UUserWidget*,                                                    Child_Widget);                                             // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0298, class UTexture2D*,                                                     Thumbnail);                                                // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0298, bool,                                                                  RotateThumbnail);                                          // 0x0288(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0298, struct FScriptMulticastDelegate,                                       Slide_Opened);                                             // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0298, struct FScriptMulticastDelegate,                                       Slide_Closed);                                             // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0298, struct FText,                                                          Name);                                                     // 0x02B0(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0298, TEnumAsByte<EVerticalAlignment>,                                       Button_Alignment);                                         // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E9 PADDING_0298, bool,                                                                  Start_Open);                                               // 0x02C9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SlideComponent.W_SlideComponent_C");
		return ptr;
	}


	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlideButton_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature();
	void Toggle();
	void ExecuteUbergraph_W_SlideComponent(int EntryPoint);
	void Slide_Closed__DelegateSignature();
	void Slide_Opened__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
