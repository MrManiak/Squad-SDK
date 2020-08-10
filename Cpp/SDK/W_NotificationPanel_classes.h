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

// WidgetBlueprintGeneratedClass W_NotificationPanel.W_NotificationPanel_C
// 0x007C (FullSize[0x025C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_039C - 0x0000 // Minimum to subtract -> (0050)
class UW_NotificationPanel_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_039C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_039C, class UVerticalBox*,                                                   VerticalBox_2);                                            // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_039C, TArray<struct FS_MainNotification>,                                    Pending_Main_Notifications);                               // 0x0240(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0070 PADDING_039C, class UW_MainNotification_C*,                                          Current_Notification);                                     // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_039C, float,                                                                 Main_Notification_Duration);                               // 0x0258(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NotificationPanel.W_NotificationPanel_C");
		return ptr;
	}


	void Draw_Notification(const struct FText& Text, ESQNotificationTypes Type, class UTexture2D* Custom_Icon);
	void New_Notification(const struct FText& Message, ESQNotificationTypes Type, class UTexture2D* Custom_Icon);
	void Construct();
	void Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType);
	void Draw_Main_Notification();
	void Draw_Next_Notification();
	void ExecuteUbergraph_W_NotificationPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
