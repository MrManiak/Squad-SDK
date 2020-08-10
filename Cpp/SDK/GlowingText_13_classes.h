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

// WidgetBlueprintGeneratedClass GlowingText_13.GlowingText_12_C
// 0x008A (FullSize[0x026A] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0381 - 0x0000 // Minimum to subtract -> (0050)
class UGlowingText_12_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0381, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0381, class UTextBlock*,                                                     CenterTextBlock);                                          // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0381, class UOverlay*,                                                       Glow);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0381, class UOverlay*,                                                       TextOverlay);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0381, struct FText,                                                          ButtonText);                                               // 0x0250(0x0018)  (Edit, BlueprintVisible)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0381, bool,                                                                  bShowShadow);                                              // 0x0268(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0089 PADDING_0381, bool,                                                                  bAutoInit);                                                // 0x0269(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlowingText_13.GlowingText_12_C");
		return ptr;
	}


	void SetText(const struct FText& Text);
	void Update();
	void Init(const struct FText& Text, bool bShowShadow);
	void SetGlowing(bool bGlowing);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GlowingText_13(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
