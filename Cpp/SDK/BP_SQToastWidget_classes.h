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

// WidgetBlueprintGeneratedClass BP_SQToastWidget.BP_SQToastWidget_C
// 0x002C (FullSize[0x0288] - InheritedSize[0x025C])
// LastOffsetWithSize(0x025C)
#define PADDING_004A - 0x0000 // Minimum to subtract -> (0004)
class UBP_SQToastWidget_C : public USQToastWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_004A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0260(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_004A, class UWidgetAnimation*,                                               Close_Anim);                                               // 0x0268(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_004A, class UWidgetAnimation*,                                               Open_Anim);                                                // 0x0270(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_004A, class UImage*,                                                         Image_1);                                                  // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_004A, class UTextBlock*,                                                     ToastTextWidget);                                          // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SQToastWidget.BP_SQToastWidget_C");
		return ptr;
	}


	void Construct();
	void ToastTextUpdated_Event(const struct FText& ToastText);
	void ExecuteUbergraph_BP_SQToastWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
