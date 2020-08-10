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

// WidgetBlueprintGeneratedClass IconRadialGotoEntry.IconRadialGotoEntry_C
// 0x0034 (FullSize[0x0440] - InheritedSize[0x040C])
// LastOffsetWithSize(0x040C)
#define PADDING_0CB0 - 0x0000 // Minimum to subtract -> (0004)
class UIconRadialGotoEntry_C : public USQRadialIconButton
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0CB0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0410(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_0CB0, class UImage*,                                                         BPElementImage);                                           // 0x0418(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0CB0, class UImage*,                                                         BPIconImage);                                              // 0x0420(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_0CB0, class UImage*,                                                         BPOuterRimImage);                                          // 0x0428(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0CB0, class UTexture2D*,                                                     BPIconImageTexture);                                       // 0x0430(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_0CB0, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0438(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconRadialGotoEntry.IconRadialGotoEntry_C");
		return ptr;
	}


	void BPInit();
	void UpdateActiveState();
	void OnHoverBegin();
	void ExecuteUbergraph_IconRadialGotoEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
