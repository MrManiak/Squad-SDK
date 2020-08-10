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

// WidgetBlueprintGeneratedClass FriendListItem.FriendListItem_C
// 0x01B8 (FullSize[0x0398] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0243 - 0x0000 // Minimum to subtract -> (0050)
class UFriendListItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0243, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0243, class UButton*,                                                        Button_Main);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0243, class UMainMenu_Button_C*,                                             ButtonJoin);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0243, class UTextBlock*,                                                     TB_Name);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0243, class UTextBlock*,                                                     TB_Session);                                               // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0243, class UTextBlock*,                                                     TB_Status);                                                // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0243, struct FScriptMulticastDelegate,                                       RequestJoin);                                              // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0243, struct FString,                                                        Marquee_String);                                           // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0243, struct FSQBlueprintFriend,                                             Friend_Struct);                                            // 0x0280(0x0060)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0243, struct FBlueprintSessionResult,                                        Friends_Session);                                          // 0x02E0(0x00B8)  (Edit, BlueprintVisible, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendListItem.FriendListItem_C");
		return ptr;
	}


	void Init_Data();
	void Construct();
	void Marquee();
	void BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Set_Session(const struct FBlueprintSessionResult& Friends_Session);
	void Clear_Session();
	void ExecuteUbergraph_FriendListItem(int EntryPoint);
	void RequestJoin__DelegateSignature(const struct FBlueprintSessionResult& Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
