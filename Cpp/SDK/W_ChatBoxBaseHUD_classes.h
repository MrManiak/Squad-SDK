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

// WidgetBlueprintGeneratedClass W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C
// 0x0088 (FullSize[0x0268] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0142 - 0x0000 // Minimum to subtract -> (0050)
class UW_ChatBoxBaseHUD_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0142, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0142, class UWidgetAnimation*,                                               Fade);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0142, class UBorder*,                                                        Border_MainChat);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0142, class UVerticalBox*,                                                   MessageList);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0142, class UScrollBox*,                                                     ScrollBox_1);                                              // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0142, TEnumAsByte<EChatChannels>,                                            Current_Channel);                                          // 0x0258(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0079 PADDING_0142, bool,                                                                  Auto_Scroll);                                              // 0x0259(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x007A PADDING_0142, bool,                                                                  Is_Onscreen_Chat);                                         // 0x025A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x007B PADDING_0142, bool,                                                                  Fading);                                                   // 0x025B(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0142, struct FTimerHandle,                                                   Close_Chat_Timer);                                         // 0x0260(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ChatBoxBaseHUD.W_ChatBoxBaseHUD_C");
		return ptr;
	}


	void Update_Save_Visibility();
	void Construct();
	void Add_New_Chat(const struct FString& PlayerName, const struct FString& Message, ESQChat Channel, const struct FLinearColor& Color, ESQNotificationTypes NotificationType);
	void Close_Chat();
	void Open_Chat();
	void ExecuteUbergraph_W_ChatBoxBaseHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
