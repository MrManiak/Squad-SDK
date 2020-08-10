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

// WidgetBlueprintGeneratedClass ServerListItem.ServerListItem_C
// 0x01D1 (FullSize[0x0569] - InheritedSize[0x0398])
// LastOffsetWithSize(0x0398)
#define PADDING_04A2 - 0x0000 // Minimum to subtract -> (0000)
class UServerListItem_C : public USQServerListItemWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04A2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0398(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04A2, class UBorder*,                                                        Border_1012);                                              // 0x03A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04A2, class UButton*,                                                        Button_Fave);                                              // 0x03A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04A2, class UImage*,                                                         Favourite);                                                // 0x03B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04A2, class UImage*,                                                         ImageHealth);                                              // 0x03B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04A2, class UImage*,                                                         Locked);                                                   // 0x03C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04A2, class UImage*,                                                         ModIcon);                                                  // 0x03C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04A2, class UTextBlock*,                                                     TB_Friends);                                               // 0x03D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04A2, class UTextBlock*,                                                     TB_GameModeName);                                          // 0x03D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04A2, class UTextBlock*,                                                     TB_MapName);                                               // 0x03E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04A2, class UTextBlock*,                                                     TB_Ping);                                                  // 0x03E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04A2, class UTextBlock*,                                                     TB_Players);                                               // 0x03F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04A2, class UTextBlock*,                                                     TB_ServerName);                                            // 0x03F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04A2, class UImage*,                                                         VAC);                                                      // 0x0400(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04A2, class UServerBrowserWindow_C*,                                         BrowserWindow);                                            // 0x0408(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04A2, class UTexture2D*,                                                     PasswordedImage);                                          // 0x0410(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04A2, class UTexture2D*,                                                     UnpasswordedImage);                                        // 0x0418(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04A2, struct FScriptMulticastDelegate,                                       RequestJoin);                                              // 0x0420(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04A2, class UTexture2D*,                                                     VacOn);                                                    // 0x0430(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04A2, class UTexture2D*,                                                     VACOff);                                                   // 0x0438(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_04A2, class UTexture2D*,                                                     FavoritesOn);                                              // 0x0440(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_04A2, class UTexture2D*,                                                     FavoritesOff);                                             // 0x0448(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_04A2, struct FLinearColor,                                                   SelectedColor);                                            // 0x0450(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_04A2, struct FLinearColor,                                                   UnselectedColor);                                          // 0x0460(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_04A2, struct FLinearColor,                                                   HoveredColor);                                             // 0x0470(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_04A2, bool,                                                                  Licensed_);                                                // 0x0480(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x00EC PADDING_04A2, struct FLinearColor,                                                   JoiningColor);                                             // 0x0484(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_04A2, struct FString,                                                        Marquee_String);                                           // 0x0498(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_04A2, class UFriendsBrowserWindow_C*,                                        Friend_List);                                              // 0x04A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_04A2, struct FBlueprintSessionResult,                                        In_Session);                                               // 0x04B0(0x00B8)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x01D0 PADDING_04A2, bool,                                                                  Enabled);                                                  // 0x0568(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerListItem.ServerListItem_C");
		return ptr;
	}


	void Toggle_Favourite();
	struct FLinearColor GetFavouriteColor();
	class UWidget* TooltipFavourite();
	class UWidget* TooltipVAC();
	class UWidget* TooltipLocked();
	class UWidget* TooltipModIcon();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FLinearColor Get_Modded_Icon_Color();
	bool Is_Modded();
	void Is_Whitelisted(bool* Is_Whitelisted);
	void Set_Friend_Count();
	class UWidget* Get_ImageHealth_ToolTipWidget_1();
	void IsJoinServer(bool* selected);
	void Get_Queue_Object(bool* In_Queue);
	void UpdatePlayerCounts();
	void IsSelected(bool* selected);
	struct FLinearColor Get_Main_Color();
	void Init();
	void ClientJoinAccepted();
	void Construct();
	void Marquee();
	void Finished_Refresh_Event_1();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Start_Marquee();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ServerListItem(int EntryPoint);
	void RequestJoin__DelegateSignature(class UServerListItem_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
