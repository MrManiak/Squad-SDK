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

// WidgetBlueprintGeneratedClass SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C
// 0x0023 (FullSize[0x0263] - InheritedSize[0x0240])
class USQNetInfoWidgetSlot_C : public USQAnnouncementNotifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image;                                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USQRichTextBlock*                            SQRichTextBlock_48;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleText;                                                 // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               AwaitingResponse;                                          // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RequestPending;                                            // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DownloadSucceeded;                                         // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SQNetInfoWidgetSlot.SQNetInfoWidgetSlot_C");
		return ptr;
	}



	void GetHeaderURL(struct FText* HeaderURL);
	struct FText GetBodyText();
	struct FText GetTitleText();
	void OnFail_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture);
	void OnSuccess_9D89973243B31B6470A48FB1F15C4057(class UTexture2DDynamic* Texture);
	void EventHeaderChanged();
	void OnInitialized();
	void ExecuteUbergraph_SQNetInfoWidgetSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
