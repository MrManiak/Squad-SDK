#pragma once

// Name: S, Version: b


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

// WidgetBlueprintGeneratedClass TravelQueueWidgetSmall.TravelQueueWidgetSmall_C
// 0x0218 (FullSize[0x0448] - InheritedSize[0x0230])
class UTravelQueueWidgetSmall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OpenClose;                                                 // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TB_Position;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Open;                                                      // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X0PG[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Secs_to_Join;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenuScreen_C*                           REF_Menu;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                     Queued_Session;                                            // 0x0258(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Can_Toggle_Open;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IFJE[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Marquee_String;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               was_hovered;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KLX8[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Count_down_handle;                                         // 0x0330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Position;                                                  // 0x0338(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Status;                                                    // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Queue_Details;                                             // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ASQJoinBeaconClient*                         Current_Queue;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQGameInstance*                             Game_Instance;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                     Pending_Server;                                            // 0x0390(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TravelQueueWidgetSmall.TravelQueueWidgetSmall_C");
		return ptr;
	}



	ESlateVisibility Bind_Visibility_via_bToggle();
	struct FText Bind_Text_Detailed_Queue_2();
	struct FText Bind_Text_Detailed_Queue_1();
	struct FText Bind_Text_Countdown();
	struct FText Bind_Text_Position();
	void Get_Queue(class ASQJoinBeaconClient** JoinQueueClient);
	void Marquee();
	void Construct();
	void Check_Queue();
	void ExecuteUbergraph_TravelQueueWidgetSmall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
