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

// WidgetBlueprintGeneratedClass UMG_AmmoBagCounter.UMG_AmmoBagCounter_C
// 0x0088 (FullSize[0x0268] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0007 - 0x0000 // Minimum to subtract -> (0050)
class UUMG_AmmoBagCounter_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0007, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0007, class UWidgetAnimation*,                                               Fade);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0007, class UOverlay*,                                                       H_Parent);                                                 // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0007, class UImage*,                                                         Image_1);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0007, class UTextBlock*,                                                     TB_AmmoAmount);                                            // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0007, class ASQDeployableAmmoBag*,                                           ammobag);                                                  // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0007, class UBaseRadialMenu_C*,                                              BaseRadialMenu);                                           // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AmmoBagCounter.UMG_AmmoBagCounter_C");
		return ptr;
	}


	void Hide_Widget();
	void ShowAmmoBag(class ASQDeployableAmmoBag* ammobag);
	void HideAmmoBag();
	void UpdateAmmoBag(class ASQDeployableAmmoBag* ammobag);
	void BindToRadialMenu(class UBaseRadialMenu_C* BaseRadial);
	void ExecuteUbergraph_UMG_AmmoBagCounter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
