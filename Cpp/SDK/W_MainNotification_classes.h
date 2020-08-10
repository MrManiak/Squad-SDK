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

// WidgetBlueprintGeneratedClass W_MainNotification.W_MainNotification_C
// 0x00B0 (FullSize[0x0290] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_022D - 0x0000 // Minimum to subtract -> (0050)
class UW_MainNotification_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_022D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_022D, class UWidgetAnimation*,                                               Out);                                                      // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_022D, class UWidgetAnimation*,                                               In);                                                       // 0x0240(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_022D, class UTextBlock*,                                                     TB_Notification);                                          // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_022D, struct FText,                                                          Message);                                                  // 0x0250(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0088 PADDING_022D, float,                                                                 Duration);                                                 // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_022D, struct FLinearColor,                                                   Text_Color);                                               // 0x026C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_022D, struct FScriptMulticastDelegate,                                       Removed);                                                  // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MainNotification.W_MainNotification_C");
		return ptr;
	}


	void Construct();
	void Remove();
	void ExecuteUbergraph_W_MainNotification(int EntryPoint);
	void Removed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
