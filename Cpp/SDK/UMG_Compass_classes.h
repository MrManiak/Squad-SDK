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

// WidgetBlueprintGeneratedClass UMG_Compass.UMG_Compass_C
// 0x0048 (FullSize[0x0330] - InheritedSize[0x02E8])
// LastOffsetWithSize(0x02E8)
#define PADDING_01C2 - 0x0000 // Minimum to subtract -> (0000)
class UUMG_Compass_C : public USQCompassMK2
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01C2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02E8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01C2, class UImage*,                                                         BPCompass_IMG);                                            // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01C2, class UTextBlock*,                                                     BPCompassBearingText);                                     // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_01C2, class UImage*,                                                         BPLeftArrow);                                              // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_01C2, class UCanvasPanel*,                                                   BPMain_P);                                                 // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_01C2, class UImage*,                                                         BPRightArrow);                                             // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_01C2, struct FScriptMulticastDelegate,                                       CheckVisibilityStatus_1);                                  // 0x0318(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0040 PADDING_01C2, class ASQPlayerController*,                                            My_PC);                                                    // 0x0328(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Compass.UMG_Compass_C");
		return ptr;
	}


	void Construct();
	void BPInit();
	void Set_Compass_Visibility();
	void ExecuteUbergraph_UMG_Compass(int EntryPoint);
	void CheckVisibilityStatus_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
