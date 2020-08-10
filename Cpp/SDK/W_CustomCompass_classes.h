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

// WidgetBlueprintGeneratedClass W_CustomCompass.W_CustomCompass_C
// 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
// LastOffsetWithSize(0x02E8)
#define PADDING_0237 - 0x0000 // Minimum to subtract -> (0000)
class UW_CustomCompass_C : public USQCompassMK2
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0237, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0237, class UImage*,                                                         BPCompass_IMG);                                            // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0237, class UImage*,                                                         BPLeftArrow);                                              // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0237, class UCanvasPanel*,                                                   BPMain_P);                                                 // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0237, class UImage*,                                                         BPRightArrow);                                             // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0237, class UImage*,                                                         Image_1);                                                  // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0237, class UTextBlock*,                                                     TB_CompassBearing);                                        // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CustomCompass.W_CustomCompass_C");
		return ptr;
	}


	void Construct();
	void BPInit();
	void ExecuteUbergraph_W_CustomCompass(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
