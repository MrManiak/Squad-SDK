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

// WidgetBlueprintGeneratedClass BP_ServerPassword.BP_ServerPassword_C
// 0x0168 (FullSize[0x0348] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_00B3 - 0x0000 // Minimum to subtract -> (0050)
class UBP_ServerPassword_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_00B3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00B3, class UMainMenu_Button_C*,                                             AcceptButton);                                             // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00B3, class UMainMenu_Button_C*,                                             DenyButton);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00B3, class UEditableText*,                                                  EditableText_1);                                           // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_00B3, class UImage*,                                                         Line);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_00B3, class UImage*,                                                         TopLine);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_00B3, struct FBlueprintSessionResult,                                        Session);                                                  // 0x0260(0x00B8)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0138 PADDING_00B3, struct FScriptMulticastDelegate,                                       Password_Entered);                                         // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0148 PADDING_00B3, struct FString,                                                        ServerURL);                                                // 0x0328(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0158 PADDING_00B3, struct FScriptMulticastDelegate,                                       Password_Cancelled);                                       // 0x0338(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ServerPassword.BP_ServerPassword_C");
		return ptr;
	}


	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void ExecuteUbergraph_BP_ServerPassword(int EntryPoint);
	void Password_Cancelled__DelegateSignature();
	void Password_Entered__DelegateSignature(const struct FString& Password, class UBP_ServerPassword_C* Sender);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
