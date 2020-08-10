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

// WidgetBlueprintGeneratedClass W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C
// 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_00B2 - 0x0000 // Minimum to subtract -> (0000)
class UW_Tooltip_CaptureZone_C : public USQToolTipBaseWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00B2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00B2, class UWidgetAnimation*,                                               OpenAnim);                                                 // 0x0248(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00B2, class UImage*,                                                         BackgroundImage);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00B2, class UTextBlock*,                                                     CapturePointText);                                         // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00B2, struct FText,                                                          Zone_Name);                                                // 0x0260(0x0018)  (Edit, BlueprintVisible, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tooltip_CaptureZone.W_Tooltip_CaptureZone_C");
		return ptr;
	}


	void Update_Zone_Tooltip_Text();
	void Construct();
	void ExecuteUbergraph_W_Tooltip_CaptureZone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
