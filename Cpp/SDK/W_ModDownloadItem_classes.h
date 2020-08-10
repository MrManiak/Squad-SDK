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

// WidgetBlueprintGeneratedClass W_ModDownloadItem.W_ModDownloadItem_C
// 0x011C (FullSize[0x02FC] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0341 - 0x0000 // Minimum to subtract -> (0050)
class UW_ModDownloadItem_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0341, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0341, class UWidgetAnimation*,                                               BounceAnim);                                               // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0341, class UButton*,                                                        Button_Mod);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0341, class UCircularThrobber*,                                              CircularThrobber_1);                                       // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0341, class UProgressBar*,                                                   DownloadProgressBar);                                      // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0341, class UImage*,                                                         Image_1);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0341, class UImage*,                                                         ModIcon);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0341, class UBorder*,                                                        Prog_BG);                                                  // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0341, class UTextBlock*,                                                     TB_DownloadState);                                         // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0341, class UTextBlock*,                                                     TB_ModName);                                               // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0341, class UWidgetSwitcher*,                                                WidgetSwitcher_1);                                         // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0341, struct FSQModInfo,                                                     ModInfo);                                                  // 0x0288(0x0050)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0341, class USQServerListItemWidget*,                                        Server_Item);                                              // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0341, class UTexture2DDynamic*,                                              Texture);                                                  // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0341, bool,                                                                  NewVar_1);                                                 // 0x02E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0341, class UW_ModDownloadWindow_C*,                                         ModDownloadWindow);                                        // 0x02F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0341, int,                                                                   Mod_Download_Index);                                       // 0x02F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModDownloadItem.W_ModDownloadItem_C");
		return ptr;
	}


	void Update_Download_Status();
	struct FLinearColor Get_ModIcon_ColorAndOpacity_1();
	void Refresh_Mod();
	void OnFail_9FEB735B449DA3B1D8BC1A99168DFA92(class UTexture2DDynamic* Texture);
	void OnSuccess_9FEB735B449DA3B1D8BC1A99168DFA92(class UTexture2DDynamic* Texture);
	void Construct();
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_226_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_236_OnButtonHoverEvent__DelegateSignature();
	void Wait_for_Mod_Loading();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_Mod_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_ModDownloadItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
